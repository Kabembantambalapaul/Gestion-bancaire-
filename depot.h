#include <stdio.h>
#include <stdlib.h>
#include "menu.h"

typedef struct {
    char* operator;
    double Montant_fc;
    double Montant_usd;}
Mon_compte;

void structure()
{





    Mon_compte compte_client = {"compte bancaire", 00.00 } ;
    char critere;
    double Montant_depot;
      printf("Bienvenu dans le gestionnaire de  %s.\n \n", compte_client.operator);

    while (1) {

        printf("1. Verifier le montant dans votre compte \n");
        printf("2. Effectuer un depot \n \n");
        printf("Veuillez effectuer un choix sur vos besoins : ");
        scanf(" %c", &critere);

        switch(critere) {
            case '1':
               affiche_Montant(&compte_client);
                break;
            case '2':
                printf("Entrer le numero de compte: \n ");
                scanf(%d)

                printf("Montant a deposer: ");
                scanf("%lf", &Montant_depot);

                Depot_Argent(&compte_client, Montant_depot, 'F');
            case '3':
                printf("Entrer le numero de compte: \n ");
                printf("Montant a deposer: ");
                scanf("%lf", &Montant_depot);
                Depot_Argent(&compte_client, Montant_depot, 'U');

                break;

            default:
               printf("Choix invalide. Veuillez reessayer.\n");
        }
    }
}



void affiche_Montant(Mon_compte* compte) {
    printf("Le montant dans compte vaut %s:\n", compte->operator);
    printf("FC: %.2f\n", compte->Montant_fc);
    printf("USD: %.2f\n", compte->Montant_usd);
}


void Depot_Argent(Mon_compte* compte, double Montant_depot, char devise) {

    if (devise == 'F') {
        compte->Montant_fc += Montant_depot;
    } else if (devise == 'U') {
        compte->Montant_usd += Montant_depot;
    }
 }



