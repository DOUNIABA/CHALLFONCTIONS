#include<stdio.h>
  
int Somme(int a,int b){
int somme;
   
   printf("Entrez deux nombres \n");
   scanf("%d %d", &a, &b);
   
   somme = a + b;
   
   printf("La somme des deux nombres est = %d\n", somme);
}
int main()
{
 int Somme(); 
   return 0;
}