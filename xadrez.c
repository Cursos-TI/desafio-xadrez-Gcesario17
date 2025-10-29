#include <stdio.h>

/*
  Programa: Movimentando as Peças do Xadrez
  Objetivo: Simular os movimentos da Torre, Bispo e Rainha usando for, while e do-while
  NIVEL NOVATO
  Autor: Gabriel de Oliveira Cesário
*/

int main() {
    
// Nível Novato - Movimentação das Peças
// Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    int CasasBispo = 5;
    int CasasTorre = 5;
    int CasasRainha = 8;
    int i = 1;
    int j = 1;

// Implementação de Movimentação do Bispo, vamos usar a estrutura de repetição (while)
// Movimento do Bispo sera de 5 casas na diagonal cima e direita
    
    printf("\n*** Movimento Bispo ***\n");

    while(i <= CasasBispo) {
     printf("Casa %d: Cima, Direita! \n", i);


    i++; }

// Implementação de Movimentação da Torre, vamos usar a estrutura de repetição (for)
// Movimento do Torre sera de 5 casas para direita

   printf("\n*** Movimento Torre ***\n");

   for(i = 1; i<= CasasTorre; i++) {
    printf("Casa %d: Direita! \n", i);
   }

// Implementação de Movimentação da Rainha, vamos usar a estrutura de repetição (do-while)
// Movimento do Rainha sera de 8 casas para esquerda

   printf("\n*** Movimento Rainha ***\n");

   do {
    printf("Casa %d: Esquerda! \n", j);
    
    j++;

   } while(j <= CasasRainha);
    
   // Finalização do Programa de Nivel Novato MOvimento de Peças de Xadrez

    printf("\n*** Movimentação concluída com sucesso! ***\n"); 
    
    
    
    
    
// Nível Aventureiro - Movimentação do Cavalo
// Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
// Um loop pode representar a movimentação horizontal e outro vertical.

// Nível Mestre - Funções Recursivas e Loops Aninhados
// Sugestão: Substitua as movimentações das peças por funções recursivas.
// Exemplo: Crie uma função recursiva para o movimento do Bispo.

// Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
// Inclua o uso de continue e break dentro dos loops.

    return 0;
}
