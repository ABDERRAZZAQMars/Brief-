#include <stdio.h>
#include <stdio.h>
#include <string.h>

void menu();
void introduire_un_compte();
void introduire_plusieurs_compte();
void affichage();
void recherche();
void Operations();

struct compte
{
    char CIN[20] , Nom[20] , Prenom[20] ;
    float Montant;
};

struct compte co[100];
int index = 0 , nb , etat=0 , k , f;

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
                    printf("\n===============================================\n");
                    printf("===   OPERATION : 1) RETRAIT | 2) DEPOT     ===\n");
                    printf("===============================================\n");
                    Operations();
                    break;
                }

                case 4 :
                {
                    system("CLS");
                    printf("\n===============================================\n");
                    printf("===         AFFICHAGE DES COMPTES           ===\n");
                    printf("===============================================\n");
                    printf("=== 1 : AFFICHAGE DES COMPTES               ===\n");
                    printf("=== 2 : AFFICHAGE PAR RECHERCHE             ===\n");
                    printf("===============================================\n");
                    
                    printf("\nENTRER VOTRE CHOIX :\t");
                    scanf("%d",&f);

                    if (f==1)
                    {
                        affichage();
                        break;
                    }

                    else if (f==2)
                    {
                        recherche();
                        break;
                    }
                    
                }

                case 5 :
                {
                    system("CLS");
                    printf("\n===============================================\n");
                    printf("===             FIDELISATION                ===\n");
                    printf("===============================================\n");
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
    printf("== 6: QUITTER LAPPLICATION                  ==\n");
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
        printf("\n%s | %s | %s | %.2f Dh\n",co[i].CIN , co[i].Nom , co[i].Prenom , co[i].Montant);
    }//fin condition for

}//fin fonctions

void Operations()
{
    int nb;
    float dh;

    printf("\nENTRER VOTRE CHOIX : \t");
    choix:
    scanf("%d",&nb);

    if(nb==1)
    {
        printf("\n===============================================\n");
        printf("===                  RETRAIT                ===\n");
        printf("===============================================\n");

        recherche();

        if (etat==1)
        {
            printf("\nENTRER UN MONTANT DE RETRAIT :\t");
            scanf("%f",&dh);

            if(dh> co[k].Montant)
            {
                printf("TU NE PEUX PAS TRAINER\n");
            }

            else
            {
                co[k].Montant=co[k].Montant-dh;

                printf("\n%.2f Dh\n",co[k].Montant);
            }
        }

        else
        {
            printf("\nVous ne pouvez pas faire cette operation car vous nexistez pas\n");
        }
        

    }

    else if(nb==2)
    {
        printf("\n===============================================\n");
        printf("===                   DEPOT                 ===\n");
        printf("===============================================\n");

        recherche();

        if (etat==1)
        {
            printf("\nENTRER UN MONTANT DE DEPOT :\t");
            scanf("%f",&dh);

            co[k].Montant=co[k].Montant+dh;

            printf("\n%.2f Dh\n",co[k].Montant);
        }

        else
        {
            printf("\nVous ne pouvez pas faire cette operation car vous nexistez pas\n");
        }
        
    }

    else
    {
        printf("\nSVP ENTRER VOTRE CHOIX ( 1 , 2 ): \t");
        goto choix;
    }
}//fin fontction

void recherche()
{
    char cn[20];

    printf("\nDonner CIN POUR RECHERCHER LE COMPTE : \t");
    scanf("%s",&cn);

    for (int k=0 ; k<index ; k++)
    {
        if (strcmp(co[k].CIN,cn)==0)
        {
            etat=1;
            break;
        }  
    }//fin condition

    if (etat==1)
    {
        printf("\n %s | %s | %s | %.2f Dh\n",co[k].CIN , co[k].Nom , co[k].Prenom , co[k].Montant);
    }
    
    else
    {
        printf("\nCOMPTE INTROUVABLE \n");
    }
    

}//fin fonction

