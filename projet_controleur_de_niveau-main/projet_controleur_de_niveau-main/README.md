# Système Intelligent de Surveillance de Pompe à Eau (IoT)

#  Description du projet

Dans de nombreuses zones rurales, l’accès à l’eau potable dépend de systèmes de pompage qui peuvent être fragiles et difficiles à maintenir. Un problème fréquent survient lorsque la pompe fonctionne alors que le réservoir est vide.

Cette situation peut provoquer :

* des **pannes mécaniques**
* des **coûts de maintenance élevés**
* une **interruption de l’approvisionnement en eau**

Ce projet propose une **solution basée sur l’Internet des Objets (IoT)** permettant de surveiller le niveau d’eau dans un réservoir et d’empêcher la pompe de fonctionner lorsque celui-ci est vide.

Grâce à l’utilisation d’un **capteur de niveau**, d’un **microcontrôleur ESP8266** et d’un **système de supervision**, le système peut surveiller automatiquement le niveau d’eau et protéger l’équipement contre les pannes.

---

#  Objectifs du projet

Les principaux objectifs du projet sont :

* Surveiller automatiquement le **niveau d’eau dans un réservoir**
* Empêcher le **fonctionnement de la pompe lorsque le réservoir est vide**
* Réduire les **pannes et les coûts de maintenance**
* Améliorer la **fiabilité de l’approvisionnement en eau**
* Illustrer l’utilisation des **technologies IoT**

---

#  Technologies utilisées

##  Matériel

* **ESP8266** (microcontrôleur WiFi)
* **Capteur ultrason HC-SR04**
* **Module relais**
* **Écran LCD**
* **LED d’indication**
* **Pompe à eau**
* **Réservoir simulé**

##  Logiciels

 **Arduino IDE** — programmation du microcontrôleur
 **Blynk** — interface de surveillance
 **Figma** — conception de la maquette de l’application
 **GitHub** — gestion du projet

---

#  Architecture du système

Le système fonctionne selon les étapes suivantes :

1Le **capteur ultrason** mesure le niveau d’eau dans le réservoir.
2 Les données sont envoyées vers le **microcontrôleur ESP8266**.
3 Le microcontrôleur **analyse les données reçues**.
4 Si le niveau d’eau est trop bas :

la **pompe est arrêtée automatiquement**.

5 Les informations peuvent être consultées via **une application de surveillance**.

Ce système permet d’éviter que la pompe fonctionne lorsque le réservoir est vide.

---

#  Démonstration du prototype

Une vidéo de démonstration du prototype est disponible dans ce dépôt :

 **WhatsApp Video 2026-03-06 at 09.52.32.mp4**

Cette vidéo montre :

* le **prototype matériel**
* la **mesure du niveau d’eau**
* le **fonctionnement du système IoT**
* la **réaction du système lorsque le niveau d’eau est faible**

---

#  Structure du projet

```bash
PROJET CONTROLEUR DU NIVEAU/
│
├── Cahier des charges projet nouvelles technologies.pdf
├── Power point.pdf
├── projet.cpp
├── WhatsApp Video 2026-03-06 at 09.52.32.mp4
└── README.md
```

### Description des fichiers

**Cahier des charges projet nouvelles technologies.pdf**
Document décrivant le contexte du projet, la problématique, les objectifs et la solution proposée.

**Power point.pdf**
Présentation utilisée pour expliquer le projet, l’architecture du système et le prototype.

**projet.cpp**
Code source du prototype développé avec Arduino / ESP8266.

**WhatsApp Video 2026-03-06 at 09.52.32.mp4**
Vidéo montrant la démonstration du prototype.

**README.md**
Documentation du projet sur GitHub.

---

#  Équipe du projet

Projet réalisé par :

 **Ayemele Brile Dovain**
 **Adama Lami Aboubakar**
 **Gnadame Palamag**
 **Momar Gueye**

 **Bachelor 1 SIN — EPSI Paris**
 **Année : 2025 – 2026**

---

#  Impact du projet

Ce projet montre comment les technologies **IoT** peuvent améliorer la gestion des systèmes de pompage dans les zones rurales.

Les principaux bénéfices sont :

 réduction des pannes
 surveillance continue du niveau d’eau
 meilleure gestion de l’approvisionnement en eau

---

#  Conclusion

Le **Système Intelligent de Surveillance de Pompe à Eau** est un prototype qui démontre qu’une solution IoT simple peut aider à résoudre un problème réel.
En surveillant le niveau d’eau en temps réel et en contrôlant automatiquement la pompe, il devient possible **d’anticiper les pannes et d’améliorer la fiabilité de l’accès à l’eau**.

---

