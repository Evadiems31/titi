#include<stdio.h>
#include "my function.h"
main(){
    int choix;
    char ch1,ch2,e;

    do{
        printf("---MENU---");
        printf("1.Longeur de la chaine\n");
         printf("2.copie de la chaine\n");
          printf("3.majuscule de la chaine\n");
           printf("4.minuscule de la chaine\n");
            printf("5.recherche d'un caractere de la chaine\n");
             printf("6.recherche d'une sous-chaine de la chaine\n");
              printf("7.comparaison de deux chaine\n");
               printf("8.quitter\n");
               printf("Veuillez faire votre choix");
               scanf("%d",&choix);
               switch(choix){
               case 1:
                printf("donner une chaine");
                scanf("%s",&ch1);
                ch1[mystrlen(ch1)-1]=0;
                printf("la longueur est %s\n",mystrlen(ch1));
                break;

               case 2:
                   printf("donner la cha�ne source : ");
                   scanf("%s",&ch2);
                ch2[myStrlen(ch2)-1] = 0;
                myStrcpy(ch1, ch2);
                printf("Cha�ne copi�e dans ch1 : %s\n", ch1);
                break;
               case 3:
                 printf("donner une cha�ne : ");
                scanf("%s",&ch1);
                ch1[myStrlen(ch1)-1] = 0;
                myStrupr(ch1);
                printf("la chaine en majuscule: %s\n", ch1);
                break;

                case 4:
                 printf("donner une cha�ne : ");
                scanf("%s",&ch1);
                ch1[myStrlen(ch1)-1] = 0;
                myStrlwr(ch1);
                printf("la chaine en miniscule: %s\n", ch1);
                break;

                case 5:
                    printf("donner une cha�ne : ");
                     scanf("%d",&ch1);
                ch1[myStrlen(ch1)-1] = 0;
                printf("donner un caract�re � chercher : ");
                scanf("%c", &e);
                getchar();
                if (myStrchr(ch1, e) == 1){

                    printf("Le caract�re '%c' est pr�sent.\n", e);
                }
                else{

                    printf("Le caract�re '%c' n'est pas pr�sent.\n", e);
                }
                break;

                case 6:
                    printf("donner la cha�ne principale : ");
                      scanf("%s",&ch1);
                ch1[myStrlen(ch1)-1] = 0;
                printf("donner la sous-cha�ne � chercher : ");
                scanf("%s",&ch2);
                ch2[myStrlen(ch2)-1] = 0;
                if (myStrstr(ch1, ch2) == 1)
                    printf("Sous-cha�ne presente \n");
                else
                    printf("Sous-cha�ne absente\n");
                break;

                case 7:
                    printf("donner la premiere cha�ne  : ");
                     scanf("%s",&ch1);
                ch1[myStrlen(ch1)-1] = 0;
                printf("donner la deuxieme cha�ne  : ");
                scanf("%s",&ch2);
                ch2[myStrlen(ch2)-1] = 0;
                if (myStrcmp(ch1, ch2) == 1)
                    printf("Les cha�nes sont les m�mes\n");
                else
                    printf("Les cha�nes sont diff�rentes\n");

                break;
                case 8:
                    printf("arret du programme\n");
                    break;
                default:
                    printf("choix indisponible");


               }




    }while(choix!=0);
    return 0;

}
