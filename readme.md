Calculatrice en C
Présentation
Ce dépôt contient un programme en C qui agit comme une calculatrice en ligne de commande. Les utilisateurs peuvent effectuer des opérations de base (addition, soustraction, multiplication et division) ainsi que des opérations de puissance.

Fonctionnalités
Les opérations de base (+,-,\*,/) sont supportées
Possibilité d'effectuer des opérations de puissance (^)
Gestion des erreurs d'entrée de l'utilisateur
Structure du code organisée et commentée
Comment utiliser
Compilez le programme en utilisant gcc ou votre compilateur C de choix :
bash
Copy code
gcc calculatrice.c -o calculatrice -lm
Le drapeau -lm est nécessaire pour compiler avec la bibliothèque mathématique pour la fonction pow.

Exécutez le programme compilé :
bash
Copy code
./calculatrice
Suivez les invites à l'écran pour effectuer des calculs.
A venir
Ajout de tests unitaires
Support pour la lecture/écriture à partir de fichiers
