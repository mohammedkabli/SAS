#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{


  char Nom[20] ,Prenom[20] ,Sex[1] ,GSM [20];
  int Age ;
  printf("saisir votre nom\n");
  scanf("%s",&Nom);
  printf("saisir votre prenom\n");
  scanf("%s",&Prenom);
  printf("saisir votre Sex\n");
  scanf("%s",&Sex);
  printf("saisir votre GSM\n");
  scanf("%s",&GSM);
  printf("saisir votre Age\n");
  scanf("%d",&Age);


  printf("bonjour %s %s\n %s\n %s\n %d\n", Nom, Prenom, Sex, GSM, Age);


}



