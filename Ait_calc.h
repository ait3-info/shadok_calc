/*----------------------------------------------------------------------------------------------------------------------*/
/*=====================================================| procedure |=====================================================*/
/*----------------------------------------------------------------------------------------------------------------------*/

//Difinition==========
void Difinition(void){
printf("   ******************************\n   *                            *\n   *   | Ait Ahmed Abdenour |   *\n   *   |     Groupe: 05     |   *\n");
printf("   *   | Univ: Moulay Tahar |   *\n   *                            *\n   ******************************\n\n");
}
//====================

//Choix|CALCULATRICE|============
void Choix_1(void){
printf("   *********************|# CALCULATRICE #|*********************\n");
printf("   * 1): ------------> BaseDix >>> BaseSadok <--------------- *\n   * 2): ------------> BaseSadok >>> BaseDix <--------------- *\n   * 3): ------------> Exit Le Programme     <--------------- *\n");
printf("   ************************************************************\n>>> Choisir: ");
}
//===============================
//Choix|OPERATION|===============
void Choix_2(void){
printf("   *******************|# OPERATIONS #|*******************\n");
printf("   * 1): -------------|> Somme      <|----------------- *\n   * 2): -------------|> Difference <|----------------- *\n   * 3): -------------|> Produit    <|----------------- *\n   * 4): -------------|> Quotient   <|----------------- *\n   * 5): -------------|> Modulo     <|----------------- *\n   * 6): -------------|> Conversion <|----------------- *\n   * 7): -------------|> Exit       <|----------------- *\n");
printf("   ******************************************************\n>>> Choisir: ");
}
//====================

//Entrer Demande======
void Entr_dmn(int m){
if(m==1){printf("    # Entrer Deux nombres (Base 10):\n");}
else{printf("    # Entrer Deux nombres (Base Shadok):\n");}
}
//====================
//Entrer Incorrect====
void Entr_inco(void){
printf("   *************************************\n   *   SVP! Entrer un nombre Correct   *\n   *************************************\n>>> Entrez a nouveau: ");
}
//====================

//merci msg===========
void mrc_msg(void){
printf("\n ******************************\n *  L'opiration est terminer  *\n *           Merci!           *\n ******************************\n");
}
//====================
//Contunue & Exit=====
void continue_exit(void){
printf("\n ****************************\n * 1) continue              *\n * 2) Exit a |OPERATION|    *\n * 3) Exit a |CALCULATRICE| *\n ****************************\n>>> Choisir: ");
}
//====================
//signe===============
void signe(int n){
    if(n==1){printf(" Add ");}else if(n==2){printf(" Sou ");}else if(n==3){printf(" Mul ");}else if(n==4){printf(" Div ");}else{printf(" Mod ");}
}
//====================
/*-----------------------------------------------------------------------------------------------------------------------*/
/*=====================================================| function |=====================================================*/
/*-----------------------------------------------------------------------------------------------------------------------*/

/*===========OPERATION===========*/
//Addition===========
int Add(int n1,int n2){
return n1+n2;
}
//====================
//Subtraction=========
int Sou(int n1,int n2){
return n1-n2;
}
//====================
//Multiplication======
double Mul(double n1,double n2){
return n1*n2;
}
//====================
//Division======
double Div(double n1,double n2){
    if(n2==0){printf("La Division par 0 impossible.\n");}
    else{return n1/n2;}
}
//====================
//Modulo======
int Mod(int n1,int n2){
    int res;
    if(n2==0){printf("La Division par 0 impossible.\n");}
    else{res=n1%n2;}
    return res;
}
//====================
/*===============================*/

/*Converter(B10>B4>BS)===========*/
int Shadok(int n){
int i=0,j=0;
int T[500];
//B10>B4==============
if(n<0){n=n*(-1);}
do{
T[i]=n%4;
n=n/4;
i++;
j++;
}while(n!=0);
//B4>BS===============
for(i=j-1;i>=0;i--){if(T[i]==0){printf("GA");}else if(T[i]==1){printf("BU");}else if(T[i]==2){printf("ZO");}else{printf("MUE");}}
return T[i];
}
/*===============================*/

/*Converter(BS>B4>B10)===========*/
char Base10(char T[200]){
int T2[200];
int i=0,j=0;
int power=1,res=0;
//minuscule>majuscule=
for (i=0;T[i]!='\0';i++){
    if(T[i] >= 'a' && T[i] <= 'z'){T[i] = T[i] -32;}
}
//BS>B4===============
for(i=0;i<=strlen(T);i++){
    if(T[i] == 'G' && T[i+1] == 'A'){T2[j]=0;j++;}
    if(T[i] == 'B' && T[i+1] == 'U'){T2[j]=1;j++;}
    if(T[i] == 'Z' && T[i+1] == 'O'){T2[j]=2;j++;}
    if(T[i] == 'M' && T[i+1] == 'E'){T2[j]=3;j++;}
    if(j == 0 && T[i]=='\0'){printf("veuillez entrer un nombre shadok !!!\n");T[i]='\0';}
}
//B4>B10==============
if(j != 0){
for(j=j-1;j>=0;j--){
    res+=T2[j]*power;
    power=power*4;
}}
return res;
}
/*===============================*/
