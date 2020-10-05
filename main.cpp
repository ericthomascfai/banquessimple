#include <iostream>

int main() {
/*******************************menu principal**************************/
int choix;
float solde;
float montantd=0; //montant à déposer
float montantr=0; //montant à retirer
menuprincipal:
printf("Menu principal\n");
printf("1-depot\n");
printf("2-retrait\n");
scanf("%d",&choix);
switch(choix)
{
    case 1:

        printf("Quel montant voulez vous déposer?\n");
        scanf("%f",&montantd);
        solde+=montantd;  //on incrémente le solde du montant
        printf("Vous avez déposé %0.2f euros Votre solde est de %0.2f euros\n",montantd,solde);
        goto menuprincipal; //retour au menu principal

    case 2:

        printf("Quel montant voulez vous retirer?\n");
        scanf("%f",&montantr);
        if(montantr>solde) //si le montant est supérieur au solde
        {
            printf("Solde insuffisant\n");
        }
        else
        {
            solde-=montantr; //on décrémente le solde du montant
            printf("vous avez retiré %0.2f Votre solde est %0.2f euros\n",montantr,solde);

        }
        goto menuprincipal; //retour au menu principal

}
    return 0;
}
