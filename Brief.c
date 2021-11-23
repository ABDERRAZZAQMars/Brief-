#include <stdio.h>
#include <stdio.h>

void menu();
void introduire_compte();

struct compte co;

int main()
{
    int choix;
    char on[1];

    do
    {
        system("CLS");
        menu();

        do
        {
            printf("Entrer Votre Choix : ");
            scanf("%d",&choix);

            switch (choix)
            {
                case 1 :
                {
                    system("CLS");
                    printf("\n===============================================\n");
                    printf("=====    INTRODUIRE UN COMPTE BANCAIRE    =====\n");
                    printf("===============================================\n");
                    introduire_compte();
                    break;
                }

                case 2 :
                {
                    system("CLS");
                    break;
                }

                case 3 :
                {
                    system("CLS");
                    break;
                }

                case 4 :
                {
                    system("CLS");
                    break;
                }

                case 5 :
                {
                    system("CLS");
                    break;
                }

                case 6 :
                {
                    system("CLS");
                    break;
                }
                
                default:
                {
                    system("CLS");
                    menu();
                    printf("SVP Entrer Votre Choix ( 1 , 2 , 3 , 4 , 5 , 6)\n");
                    break;
                }
            }//fin switch
        } while (choix<1 || choix>6);
        
        printf("\n===============================================\n");
        printf("======   VOULEZ-VOUS CONTINUER : O/N ?   ======\n");
        printf("===============================================\n");
        scanf("%s",&on);

    
    } while (on=='o' || on=='o');
    

    system("PAUSE");
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

struct compte
{
    char CIN[50] , Nom[50] , Prenom[50] ;
    float Montant;
}co;

void introduire_compte()
{
    printf("\nEntrer Votre CIN : ");
    scanf("%s",co.CIN);

    printf("\nEntrer Votre Nom : ");
    scanf("%s",co.Nom);

    printf("\nEntrer Votre Prenom : ");
    scanf("%s",co.Prenom);

    printf("\nEntrer Votre Montant : ");
    scanf("%f",&co.Montant);
}

