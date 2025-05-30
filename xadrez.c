#include <stdio.h>

int main() {
    // Número de casas para cada peça
    const int casasTorre = 5;
    const int casasBispo = 5;
    const int casasRainha = 8;

    int i; // Variável de controle genérica

    // ----------------------
    // Movimento da TORRE (for)
    // ----------------------
    // A Torre se move cinco casas para a direita
    printf("Movimento da Torre:\n");
    for (i = 0; i < casasTorre; i++) {
        printf("Direita\n");
    }

    printf("\n");

    // ----------------------
    // Movimento do BISPO (while)
    // ----------------------
    // O Bispo se move cinco casas na diagonal para cima e à direita
    printf("Movimento do Bispo:\n");
    i = 0;
    while (i < casasBispo) {
        printf("Cima, Direita\n");
        i++;
    }

    printf("\n");

    // ----------------------
    // Movimento da RAINHA (do-while)
    // ----------------------
    // A Rainha se move oito casas para a esquerda
    printf("Movimento da Rainha:\n");
    i = 0;
    do {
        printf("Esquerda\n");
        i++;
    } while (i < casasRainha);

    return 0;
}
