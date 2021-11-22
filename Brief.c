#include <stdlib.h>
#include <stdio.h>

void menu();
char introduire_compte();

int main()
{
    int choix;

    menu();

    printf("Entrer Votre Choix : ");
    scanf("%d",&choix);

    switch (choix)
    {
        
    case 1 : 
        {
            printf("\n===============================================\n");
            printf("=====    INTRODUIRE UN COMPTE BANCAIRE    =====\n");
            printf("===============================================\n");
            introduire_compte();
            break; 
        }
    
    case 2 : 
        {
            break; 
        }
    
    case 3 : 
        {
            break; 
        }

    case 4 : 
        {
            break; 
        }

    case 5 : 
        {
            break; 
        }

    case 6 : 
        {
            break; 
        }
        
    default:
        {
            break;
        }
    }

    return 0;
}

void menu()
{
    printf("\n===============================================\n");
    printf("======    LE MENU PRINCIPAL PERMET DE    ======\n");
    printf("===============================================\n");
    printf("== 1: INTRODUIRE UN COMPTE BANCAIRE          ==\n");
    printf("== 2: INTRODUIRE PLUSIEURS COMPTES BANCAIRES ==\n");
    printf("== 3: OPERATIONS                             ==\n");
    printf("== 4: AFFICHAGE                              ==\n");
    printf("== 5: FIDELISATION                           ==\n");
    printf("== 5: QUITTER L APPLICATION                  ==\n");
    printf("===============================================\n\n");
}

char introduire_compte()
{
    char CIN[20] , Nom[50] , Prenom[50] , Montant[50];

    printf("\nEntrer Votre CIN : ");
    scanf("%s",&CIN);

    printf("\nEntrer Votre Nom : ");
    scanf("%s",&Nom);

    printf("\nEntrer Votre Prenom : ");
    scanf("%s",&Prenom);

    printf("\nEntrer Votre Montant : ");
    scanf("%s",&Montant);
}