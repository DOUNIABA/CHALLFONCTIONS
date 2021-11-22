
#include<stdio.h>
  
void Echange (float NUM1, float NUM2){
  float n;
 printf("Entrez une valeur pour NUM1 et NUM2 : ");
   scanf("%f %f", &NUM1 , &NUM2);
    n=NUM1;
    NUM1=NUM2;
    NUM2=n;

printf("Les valeurs apres echange sont : NUM1=%f et NUM2=%f", NUM1, NUM2);
}

int main()
   {
      
      Echange();
     
   }