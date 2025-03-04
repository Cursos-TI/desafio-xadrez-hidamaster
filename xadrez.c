#include <stdio.h>

int main() {
    // Definição do número de casas para cada peça
    const int casas_torre = 5;
    const int casas_bispo = 5;
    const int casas_rainha = 8;

    // Movimento da Torre: 5 casas para a direita (usando for)
    printf("Movimento da Torre:\n");
    for (int i = 1; i <= casas_torre; i++) {
        printf("Casa %d: Direita\n", i);
    }

    // Movimento do Bispo: 5 casas na diagonal para cima e à direita (usando while)
    printf("\nMovimento do Bispo:\n");
    int j = 1;
    while (j <= casas_bispo) {
        printf("Casa %d: Cima Direita\n", j);
        j++;
    }

    // Movimento da Rainha: 8 casas para a esquerda (usando do-while)
    printf("\nMovimento da Rainha:\n");
    int k = 1;
    do {
        printf("Casa %d: Esquerda\n", k);
        k++;
    } while (k <= casas_rainha);

    return 0;
}