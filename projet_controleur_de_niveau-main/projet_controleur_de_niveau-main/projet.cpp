#define BLYNK_TEMPLATE_ID "TMPL5PiIPfLqV"
#define BLYNK_TEMPLATE_NAME "controleur"
#define BLYNK_AUTH_TOKEN "5JrnZ9C7-xkFnVUEUSoUTX5GpKZdclC-"

#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
#include <Wire.h>
#include <LiquidCrystal_I2C.h>

char ssid[] = "Redmi 9";
char pass[] = "br78dov42003";

#define TRIG D5
#define ECHO D6

#define LED_VERTE D7
#define LED_JAUNE D8
#define LED_ROUGE D4

#define BUZZER D3

LiquidCrystal_I2C lcd(0x27,16,2);

float distance_vide = 18.0;

// fonction pour stabiliser la mesure
float mesurerDistance()
{
long duration;
float distance;
float somme = 0;

for(int i=0;i<5;i++)
{

digitalWrite(TRIG, LOW);
delayMicroseconds(2);

digitalWrite(TRIG, HIGH);
delayMicroseconds(10);

digitalWrite(TRIG, LOW);

duration = pulseIn(ECHO, HIGH);

distance = duration * 0.034 / 2;

somme = somme + distance;

delay(50);
}

return somme / 5;
}

void setup()
{

Serial.begin(9600);

Wire.begin(D2,D1);

lcd.begin(16,2);
lcd.backlight();

pinMode(TRIG, OUTPUT);
pinMode(ECHO, INPUT);

pinMode(LED_VERTE, OUTPUT);
pinMode(LED_JAUNE, OUTPUT);
pinMode(LED_ROUGE, OUTPUT);

pinMode(BUZZER, OUTPUT);

Blynk.begin(BLYNK_AUTH_TOKEN, ssid, pass);

lcd.setCursor(0,0);
lcd.print("Controle Eau");

lcd.setCursor(0,1);
lcd.print("Initialisation");

delay(2000);

lcd.clear();
}

void loop()
{

Blynk.run();

float distance = mesurerDistance();

float niveau = distance_vide - distance;

if(niveau < 0)
niveau = 0;

float litres = niveau / distance_vide;

// affichage moniteur serie

Serial.print("Distance: ");
Serial.print(distance);
Serial.print(" cm | Eau: ");
Serial.print(litres);
Serial.println(" L");

// affichage LCD

lcd.clear();

lcd.setCursor(0,0);
lcd.print("Eau:");
lcd.setCursor(5,0);
lcd.print(litres);
lcd.print("L");

lcd.setCursor(0,1);
lcd.print("Dist:");
lcd.setCursor(6,1);
lcd.print(distance);
lcd.print("cm");

// reset LEDs

digitalWrite(LED_VERTE, LOW);
digitalWrite(LED_JAUNE, LOW);
digitalWrite(LED_ROUGE, LOW);

// logique LEDs progressive

if(litres <= 0.3)
{
digitalWrite(LED_ROUGE, HIGH);
}

else if(litres <= 0.6)
{
digitalWrite(LED_ROUGE, HIGH);
digitalWrite(LED_JAUNE, HIGH);
}

else
{
digitalWrite(LED_ROUGE, HIGH);
digitalWrite(LED_JAUNE, HIGH);
digitalWrite(LED_VERTE, HIGH);
}

// buzzer niveau tres bas

if(litres < 0.2)
{
tone(BUZZER,1000);
delay(500);
noTone(BUZZER);
}

// envoi vers Blynk

Blynk.virtualWrite(V1, litres);

delay(1000);
}