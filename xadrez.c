#include <stdio.h>

/*
  Programa: Movimentando as Peças do Xadrez - Nível Mestre
  Autor: Gabriel de Oliveira Cesário

  Objetivos:
  - Substituir loops simples por funções recursivas (Torre, Bispo, Rainha)
  - Bispo usando recursividade + loops aninhados (vertical + horizontal)
  - Cavalo com loops aninhados e uso de continue/break
*/

// Movimento da Torre - Move 5 Casas para Direita

  void MoverTorre ( int CasaAtual, int limite) {
    if (CasaAtual > limite) return; //Caso Base: parar a recursão

      printf ("Casa %d: Direita \n", CasaAtual);
      MoverTorre ( CasaAtual + 1, limite); //Chamada Recursiva

}

// Movimento da Rainha - MOver 8 Casas para Esquerda

  void MoverRainha (int CasaAtual, int limite) {
    if (CasaAtual > limite) return; //Caso Base: Parar a Recursão

      printf ("Casa %d: Esquerda \n", CasaAtual);
      MoverRainha ( CasaAtual + 1, limite); //Chamada Recursiva

}

// MOvimento do Bispo - Mover 5 casa na diagonal Cima-Direita - neste caso usando usando recursividade e loops aninhados

  void MoverBispo (int passo, int limite) {
    if (passo > limite) return; //Canso Baw: Parar recursão

      printf("Passo %d: Cima +", passo);

    for (int i = 1; i <= passo; i++) {
      if(i == passo) {

      printf (" Direita\n");
      }   

    }
      MoverBispo (passo + 1, limite); // chamada recursiva
}

// Movimento do Cavalo - movimento em L, 2 andadas pra cima e 1 pra direita, com loops +. continue/break

  void MoverCavalo(){

    printf("\n*** Movimento Cavalo (loops aninhados + continue e break) ***\n");

    int MoverCima = 2;
    int MoverDireita = 1;

    for (int i = 1; i <= MoverCima; i++) {
      printf("Passo %d: Cima \n", i);

      for (int j = 1; j <= MoverDireita; j++) {
        
        if (i < MoverCima) {
          continue; // Só faz a movimentação pra direita ao final dos 2 passos
        }
          printf ("Passo %d: Direita \n", j);
          
          if (j == 1) break;
      }
    }
  }

  int main(){

    int CasasTorre = 5;
    int CasasRainha = 8;
    int CasasBispo = 5;

    printf ("\n*** Movimentando as Peças do Xadrez - Nível Mestre *** \n");

// Torre - Recursiva

    printf("\n--- Torre (Recursiva) ---\n");
    MoverTorre(1, CasasTorre);

// Rainha - Recursiva

    printf("\n--- Rainha (Recursiva) ---\n");
    MoverRainha(1, CasasRainha);

// Bispo - Recursivo com loop interno
    printf("\n--- Bispo (Recursivo + Loop Aninhado) ---\n");
    MoverBispo(1, CasasBispo);

// Cavalo - Loops avançados
    MoverCavalo();

    printf("\n*** Movimentos Finalizados com Sucesso! ***\n");


    return 0;
  }


    
