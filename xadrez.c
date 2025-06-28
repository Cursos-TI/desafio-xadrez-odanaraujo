#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {

    int numeroTorre;
    int indexTorre = 0;

    printf("Informe quantas casas sua torre vai andar\n");
    scanf("%d", &numeroTorre);
    
    // Move da torre para a direita
    do {

        printf("Direita \n");
        indexTorre++;

    } while(indexTorre < numeroTorre);

    
    int numeroBispo;
    int indexBispo = 0;
    
    printf("Informe quantas casas seu bispo vai andar\n");
    scanf("%d", &numeroBispo);

    // Move bisto na diagonal
    for (indexBispo = 0; indexBispo < numeroBispo; indexBispo++) {
        printf("Cima, Direita \n");
    }


    int numeroRainha;
    int indexRainha = 0;
    printf("Informe quantas casas sua rainha vai andar\n");
    scanf("%d", &numeroRainha);

    while(indexRainha < numeroRainha) {
        printf("Esquerda\n");
        indexRainha++;
    }

    return 0;
}