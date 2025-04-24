#include <stdio.h>

// Constantes para definir o número de movimentos
const int MOVIMENTOS_BISPO = 5;
const int MOVIMENTOS_TORRE = 5;
const int MOVIMENTOS_RAINHA = 8;

int main() {
    int i;

    // ====== Movimento do Bispo (diagonal superior direita) ======
    // Usando estrutura FOR
    // Diagonal superior direita: combinação de "Cima" e "Direita"
    printf("Movimento do Bispo:\n");
    for (i = 0; i < MOVIMENTOS_BISPO; i++) {
        printf("Cima\n");
        printf("Direita\n");
    }

    // ====== Movimento da Torre (horizontal para a direita) ======
    // Usando estrutura WHILE
    printf("\nMovimento da Torre:\n");
    i = 0;
    while (i < MOVIMENTOS_TORRE) {
        printf("Direita\n");
        i++;
    }

    // ====== Movimento da Rainha (horizontal para a esquerda) ======
    // Usando estrutura DO-WHILE
    printf("\nMovimento da Rainha:\n");
    i = 0;
    do {
        printf("Esquerda\n");
        i++;
    } while (i < MOVIMENTOS_RAINHA);

    return 0;
}
