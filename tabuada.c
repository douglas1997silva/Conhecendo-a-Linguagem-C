#include <stdio.h>
 
 #include <stdlib.h>
 int main (){
  int a = 10;
  for (int  i = 1; i <= a; i++){
    int c = i * 3 ;
   
    printf("%d\n", c );
  }
  
   


 }

 

int mai() {
  int numero;
  printf("Qual tabuada você quer?");
  scanf("%d", &numero);

  for(int i = 0; i <= 10; i++) {
    int multiplicacao = numero * i;
    printf("%d x %d = %d\n", numero, i, multiplicacao);
  }
}