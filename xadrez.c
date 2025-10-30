#include <stdio.h>

/*
  Programa: Movimentando as Peças do Xadrez
  Objetivo NIvel NOvato: Simular os movimentos da Torre, Bispo e Rainha usando for, while e do-while
  Obejetivo NIvel Aventureiro simular o movimento do cavalo em L, usando estruturas aninhadas com 2 loops diferente, sendo um deles for e outro while
  NIVEL Aventureiro
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
    
// Nível Aventureiro - Movimentação do Cavalo
// Vamos utilizar loops aninhados para simular a movimentação do Cavalo em L, usando 2 loops diferentes, tendo obrigatoriedade de usar o FOR

   int MovBaixo = 2;
   int MovEsquerda = 1;
   int passo1, passo2;

   printf ("\n*** Movimento Cavalo ***\n"); //Entrada de Movimento Cavalo o Movimento sera em L, onde Vai ser impresso Baixo,Baixo feito por for e Esquerda feito por while, o for é obrigatorio no desafio

   for(passo1 = 1; passo1 <= MovBaixo; passo1++) //1º loop, usei o FOR que era obrigatorio, e como é ensinado na aula, ele geralmente é o mais usado em uma estrutura aninhada
   {
    printf ("Casa %d: Baixo! \n", passo1); //1º impressao de movimento saira Baixo e Baixo

   passo2 = 1; //declaração de valor de variavel

   while(passo2 <= MovEsquerda && passo1 == MovBaixo) /*2º loop, usei o while, eu tive que usar &&, pois quando eu rodava saia como baio, esquerda,baixo esquerda
                                                        ou seja errado, usando esse && anulou esse esquerda a mais no programa
                                                        sinceramente tive que procurar como eu fazia isso rodar de uma forma aninhada corretamente*/
   {
    printf ("Casa %d: Esquerda! \n", passo2); //2º impressao de movimento saira Esquerda
    passo2++;
   }   }

     printf("\n*** Movimento de Xadrez Nivel Aventureiro Concluído com Sucesso! ***\n");



// Nível Mestre - Funções Recursivas e Loops Aninhados
// Sugestão: Substitua as movimentações das peças por funções recursivas.
// Exemplo: Crie uma função recursiva para o movimento do Bispo.

// Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
// Inclua o uso de continue e break dentro dos loops.

    return 0;
}
