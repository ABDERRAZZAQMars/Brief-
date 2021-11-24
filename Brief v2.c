#include <stdio.h>
#include <stdio.h>
#include <string.h>

void menu();
void introduire_un_compte();
void introduire_plusieurs_compte();
void affichage();
void recherche();

struct compte
{
    char CIN[20] , Nom[20] , Prenom[20] ;
    float Montant;
};

struct compte co[100];
int index = 0 , nb , etat=0;

int main()
{
    int choix ;
    char on;

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
                    introduire_un_compte();
                    break;
                }

                case 2 :
                {
                    system("CLS");
                    printf("\n===============================================\n");
                    printf("===  INTRODUIRE PLUSIEURS COMPTES BANCAIRE  ===\n");
                    printf("===============================================\n");
                    introduire_plusieurs_compte();
                    break;
                }

                case 3 :
                {
                    system("CLS");
                    recherche();
                    break;
                }

                case 4 :
                {
                    system("CLS");
                    printf("\n===============================================\n");
                    printf("===         AFFICHAGE DES COMPTES           ===\n");
                    printf("===============================================\n");
                    affichage();
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
                    printf("\n===============================================\n");
                    printf("== VOULEZ VOUS QUITTER LAPPLICATION : O/N ?  ==\n");
                    printf("===============================================\n");
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
        scanf("%S",&on);

    } while (on=='o' || on=='O');
    system("CLS");
    printf("\n===============================================\n");
    printf("======     APPLICATION EST FERMER    ======\n");
    printf("===============================================\n");

    //system("PAUSE");
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
    printf("== 6: QUITTER L APPLICATION                  ==\n");
    printf("===============================================\n\n");
}//fin fonctions

void introduire_un_compte()
{
    struct compte c;

    printf("\nEntrer Votre CIN : ");
    scanf("%s",c.CIN);

    printf("\nEntrer Votre Nom : ");
    scanf("%s",c.Nom);

    printf("\nEntrer Votre Prenom : ");
    scanf("%s",c.Prenom);

    printf("\nEntrer Votre Montant : ");
    scanf("%f",&c.Montant);

    printf("\nCOMPTE DE Mr %s %s EST CREER\n",c.Nom , c.Prenom);

    co[index++]=c;

}//fin fonctions

void introduire_plusieurs_compte()
{
    printf("\nCOMBIEN DE COMPTES VOULEZ-VOUS CREER ?\t");
    scanf("%d",&nb);

    for (int j=1 ; j<=nb ; j++)
    {
        struct compte c;

        printf("\n===============================================\n");
        printf("======      CREATION DE COMPTE N %d      ======\n",j);
        printf("===============================================\n");

        printf("\nEntrer Votre CIN : ");
        scanf("%s",c.CIN);

        printf("\nEntrer Votre Nom : ");
        scanf("%s",c.Nom);

        printf("\nEntrer Votre Prenom : ");
        scanf("%s",c.Prenom);

        printf("\nEntrer Votre Montant : ");
        scanf("%f",&c.Montant);

        printf("\nCOMPTE N%d DE Mr %s %s EST CREER\n",j,c.Nom , c.Prenom);

        co[index++]=c;

    }//fin condition for
    
}//fin fonctions 

void affichage()
{
    for (int i=0; i < index ; i++)
    {
        printf("%s | %s | %s | %.2f Dh\n",co[i].CIN , co[i].Nom , co[i].Prenom , co[i].Montant);
    }//fin condition for

}//fin fonctions 

void Operations()
{

} 

void recherche()
{
    char cin[20];

    printf("\nDonner CIN : \t");
    scanf("%s",&cin);

    for (int k=0 ; k<index ; k++)
    {
        if (strcmp(co[k].CIN,cin)==0)
        {
            printf("%s | %s | %s | %.2f Dh\n",co[k].CIN , co[k].Nom , co[k].Prenom , co[k].Montant);
            etat=1;
            break;
        }

        else
        {
            printf("COMPTE INTROUVABLE \n");
        }
    } 
}//fin fonction

