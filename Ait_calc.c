/*========================================================
  * Algorithmic & structure.
  * My projects of C language ().
  * MiniProjet Calculatrice Scadoc
  * Math informatics saida university (DR. Moulay Tahar).

>>> All rights reserved © 2019-2020 Ait Ahmed Abdenour.
========================================================*/
#include "Ait_calc.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main(){
//Variable==========
char T1[500],T2[500];
int n1,n2,res;
int m,n,t;//m:choix(1) | n:choix(2)
//====================
//Difinition==========
Difinition();//Author
//====================
do{
//Choix|CALCULATRICE|===
Choix_1();//Choices "C"
//======================
scanf("%d",&m);//Choix|CALCULATRICE|
        if(m==3){printf(">>> Exit le programme.\n");}
        else if(m!=2 && m!=1){do{Entr_inco();scanf("%d",&m);}while(m!=2 && m!=1);}
        if (m==2 || m==1){
do{
//Choix|OPERATION|======
Choix_2();//Choices "O"
//======================
scanf("%d",&n);//Choix|OPERATION|
        if(n==7){printf("7>> Exit.\n");}else{
        if(n>7 || n<1){do{Entr_inco();scanf("%d",&n);}while(n>7 || n<1);}
        if (n<7 || n>1){
                        do{
                        res=0;
                        if(n!=6){
                        if(m==1){printf("\n>>> BaseDix >>> BaseSadok:\n");Entr_dmn(m);printf("N1>>> ");scanf("%d",&n1);signe(n);printf("\nN2>>> ");scanf("%d",&n2);}
                        else if(n!=6){printf("\n>>> BaseSadok >>> BaseDix:\n");Entr_dmn(m);printf("N1>>> ");scanf("%s",&T1);signe(n);printf("\nN2>>> ");scanf("%s",&T2);n1=Base10(T1);n2=Base10(T2);}}
                        switch(n)
                        {
                        case 1 :
                            printf("------------\n1>> La Some: \n------------\n");
                            res=Add(n1,n2);
                            break;
                        case 2 :
                            printf("--------------\n2>> Subtraction: \n--------------\n");
                            res=Sou(n1,n2);
                            break;
                        case 3 :
                            printf("---------------\n3>> multiplication: \n---------------\n");
                            res=Mul(n1,n2);
                            break;
                        case 4 :
                            printf("--------------\n4>> Devision: \n--------------\n");
                            res=Div(n1,n2);
                            break;
                        case 5 :
                            printf("------------\n5>> Modulo: \n------------\n");
                            res=Mod(n1,n2);
                            break;
                        case 6 :
                            if(m==1){printf("6>> Conversion: \n    # Entrer un nombre (Base 10): ");scanf("%d",&res);}
                            else{printf("6>> Conversion: \n    # Entrer un nombre en Base Shadok: ");scanf("%s",&T1);}
                            break;
                    }
		    //Programme Begin
       switch(m)
                {//Switch begin
//B10->BS=============
case 1 : //BaseDix
printf("\n=========| Solution |=========\n");
if(n!=6){
if (n==4 && res<0){}else{
   printf(">>> BaseDix:    > ");printf("%d",n1);signe(n);printf("%d = %d",n2,res);
   printf("\n>>> BaseShadok: > ");Shadok(n1);signe(n);Shadok(n2);printf(" = ");Shadok(res);//Converter(B10>B4>BS)
}}
else{printf("    # BaseShadok: ");Shadok(res);}
printf("\n==============================");
mrc_msg();
break;
//====================
//BS->B10=============
case 2 : //BaseSadok
printf("\n=========| Solution |=========\n");
if(n!=6){
if (n==4 && res<0){}else{
   printf(">>> BaseSadok: > ");printf("%s",T1);signe(n);printf("%s = ",T2);Shadok(res);
   printf("\n>>> Base 10:   > ");printf("%d",n1);signe(n);printf("%d = %d",n2,res);
}}
else{printf("   # Base 10: %d",Base10(T1));}
printf("\n==============================");
mrc_msg();
break;
//====================
                }//end Switch
//Contunue & Exit=====
continue_exit();
scanf("%d",&t);}while(t==1);}}if(t==3){n=7;}
}while(n!=7);}
//====================

}while(m!=3);
//Programme End
return 0;
}
/*--------------------------------------------------------------------------------------------*/
/*===========================| Explication  de procedures utilisé |===========================*/
/*--------------------------------------------------------------------------------------------*/
// Difinition();    > Pour afficher la Difinition contient des information du Programmeure.
// Choix_1();       > Pour afficher les choix de calculatrices disponible sur le Programme.
// Choix_2();       > Pour afficher les choix d'Operations disponible  sur la calculatrice.
// Entr_dmn(m);     > Pour demande de saisie des valeurs soit en  (Base10) OU (BaseShadok).
// Entr_inco();     > Pour afficher que l'entrer incorrect Si l'utilisateur saisie incorct.
// mrc_msg();       > Remerciez la personne davoir utilisé le programe + processus terminé.
// continue_exit(); > Demande à l'utilisateur souhaite continuer  ou  quitter le processus.
//  signe(n);       > Pour afficher l'indication de lopération que l'utilisateur a choisie.
/*--------------------------------------------------------------------------------------------*/
/*============================================================================================*/
/*--------------------------------------------------------------------------------------------*/

/*--------------------------------------------------------------------*/
/*================| Explication de function utilisé |================*/
/*--------------------------------------------------------------------*/
//Add(a,b);     > Cette fonction Trouve la Somme entre deux entier .
//Sou(a,b);     > Cette fonction Trouve la Somme entre deux entier .
//Mul(a,b);     > Cette fonction Trouve la Somme entre deux entier .
//Div(a,b);     > Cette fonction Trouve la Somme entre deux entier .
//Mod(a,b);     > Cette fonction Trouve la Somme entre deux entier .
//Shadok(int);  > Pour Convert un nombre (int) Base10 A BaseShadok .
//Base10(char); > Pour Convert un nombre (char) BaseShadok A Base10.
/*--------------------------------------------------------------------*/
/*====================================================================*/
/*--------------------------------------------------------------------*/
