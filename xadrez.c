#include <stdio.h>


const int MOV_BISPO = 5;   
const int MOV_TORRE = 5;   
const int MOV_RAINHA = 8;  

int main() {
    int i;

    printf("=== Movimentação do Bispo ===\n");
    for (i = 1; i <= MOV_BISPO; i++) {
        printf("Cima\n");
        printf("Direita\n");
    }
    printf("\n");

    printf("=== Movimentação da Torre ===\n");
    i = 1;
    while (i <= MOV_TORRE) {
        printf("Direita\n");
        i++;
    }
    printf("\n");

    printf("=== Movimentação da Rainha ===\n");
    i = 1;
    do {
        printf("Esquerda\n");
        i++;
    } while (i <= MOV_RAINHA);

    printf("\n=== Fim da execução ===\n");
    return 0;
}

