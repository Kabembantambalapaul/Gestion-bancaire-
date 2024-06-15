#include <stdio.h>
#include <stdlib.h>


void menu() {
    char nom[10];
    char postnom[10];
    char prenom[11];
    char dateNaissance[11];
    char lieuNaissance[10];
    char pays[10];
    char transaction;
    long numeroCompte;




    printf(" ===========================   CREATION D'UN COMPTE BANCAIRE   =============================\n");

    printf("entrez votre nom :");
    scanf("%s",nom);

    printf("entrez votre postnom :");
    scanf("%s",postnom);

    printf("entrez votre prenom :");
    scanf("%s",prenom);

    printf("entrez votre date de naissance :");
    scanf("%s",dateNaissance);

    printf("entrez votre lieu de naissance :");
    scanf("%s",lieuNaissance);

    printf("entrez votre pays :");
    scanf("%s",pays);


    srand(time(0));
    numeroCompte = rand() % 10000000000;

    FILE *fichier = fopen("comptes.txt", "a");
    if (fichier == NULL) {
        printf("Erreur lors de l’ouverture du fichier.\n");

    time_t t = time(NULL);
    struct tm tm = *localtime(&t);
    sprintf(transaction, "%02d-%02d-%d", tm.tm_year + 1900, tm.tm_mon + 1, tm.tm_mday);
        return 1;
    }

    fprintf(fichier, " %s %s %s %s %s %d\n", nom, postnom, prenom, dateNaissance, lieuNaissance, pays, numeroCompte, transaction);

    fclose(fichier);

    printf("Votre compte a ete cree avec succes. Votre numero de compte est : %ld\n", numeroCompte);

    return 0;
}

