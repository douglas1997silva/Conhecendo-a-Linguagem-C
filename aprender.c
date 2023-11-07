
// gcc no terminal eo nome do programa gcc aprender.c -o programa.out porem precisa estar na pasta
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// diretiva CONSTANTE
// #define TENTATIVAS 4

int main()
{
   printf("**************************************\n");
   printf("**ola mundo***\n");
   printf("**************************************\n");

   //gerar numeros aleatorita
   int segundo = time(0);
   srand(segundo);
   int numerogrande= rand();
   
   int numerosecreto = numerogrande %100;
   // printf("o numero secreto e %d voçe entendeu\n", numerosecreto );

   // chute
   int chute;
   int tentativas = 1;
   int ganhou = 0;
   double pontos = 1000;
    
   int acertou = 0 ;
   int nivel ; 
   printf("Qual e seu nivel de dificuldade\n");
   printf("(1)Facil , (2) Medio e (3)Dificil\n\n");
   printf("Escolha: ");
   scanf("%d", &nivel);

   //switch(nivel){
     // case: 1 
     break;
     // numerostentativas = 20;
     // case : 2 
      //numerostentativas = 15 ;
     // default: 
      //numerostentativas = 8 ;
  // }

   int numerostentativas;
   if(nivel == 1){
      numerostentativas = 20;
   } else if (nivel == 2 ){
      numerostentativas = 15; 

   }else{
      numerostentativas = 8;
   }
   // aitimeticas

   // operaçoes com casas decimais
   // double api = 1.5 /2.5 ;

   // loop for
   // for(int i = 1 ; i <= ; i++)

   // while nao tem como parar
  for(int i = 1; i <= numerostentativas; i++)
   {
      printf("tentativa %d \n ", tentativas);
      printf("Qual e seu chute\n");
      // ler do teclado
      scanf("%d", &chute);
      printf("seu chute foi %d\n", chute);

      if (chute < 0)
      {
         printf("Vocẽ nao pode chutar numero negtivos");
         // i--;
         // ele volta a execução do for do inicio
         continue;
      }

      // if
      int acertou = (chute == numerosecreto);

      int maior = chute > numerosecreto;

      if (acertou)
      {
         /* code */
         //printf("Parabens voçẽ acertou\n");

         // for para de executar
         break;
      }
      // se o if for verdadeiro ele nao executa o codigo abaixo
      else if (maior)
      {
         printf("Seu chute foi maior que o numero secreto\n");
      }
      else
      {
         printf("Seu Chute foi menor que seu numero secreto\n");
         tentativas++;
         double pontosperdidos = abs(chute - numerosecreto) / 2.0;
         
         pontos = pontos - pontosperdidos;
      }
      
   }
   printf("FIM DE JOGO!!\n");
   if(acertou){
      printf("voçe ganhou!\n");
       printf("Voce tentou %d tentativas antes de acertar\n", tentativas);
   printf("Total de pontos %.1f\n", pontos);
   } else{
      printf("voce errou !tente novamente.\n");
   }
   
  
}
// variaveis
// int
// double
// long
// short
// flot
