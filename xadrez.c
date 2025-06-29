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

    // movimentação do cavalo

    printf("\nmov cavalo\n");
    int numeroCavaloBaixo = 2;
    int numeroCavaloEsquerda = 1;
    int i, j = 0;

   for(i = 0; i < numeroCavaloEsquerda; i++) {
    int j = 0;
    while(j < numeroCavaloBaixo) {
        printf("Baixo\n");
        j++;
    }
    printf("Esquerda\n");
}


    return 0;
}