#include <stdio.h>

int main() {

    // Simulação de Movimentos
    // Torre, Bispo, Rainha e Cavalo

    // TORRE 
    // Move 5 casas para a direita
    int casasTorre = 5;
    printf("Movimento da Torre:\n");
    for (int i = 1; i <= casasTorre; i++) {
        printf("Direita\n");
    }
    printf("\n");

    // BISPO 
    // Move 5 casas na diagonal
    int casasBispo = 5;
    int i = 1;
    printf("Movimento do Bispo:\n");
    while (i <= casasBispo) {
        printf("Cima Direita\n");
        i++;
    }
    printf("\n");

    // RAINHA 
    // Move 8 casas para a esquerda
    int casasRainha = 8;
    int j = 1;
    printf("Movimento da Rainha:\n");
    do {
        printf("Esquerda\n");
        j++;
    } while (j <= casasRainha);
    printf("\n");

    // CAVALO 
    // Movimento em "L":
    int casasBaixo = 2;
    int casasEsquerda = 1;

    printf("Movimento do Cavalo:\n");

    // movimenta para baixo
    for (int x = 1; x <= casasBaixo; x++) {
        printf("Baixo\n");
    }

    // movimenta para a esquerda
    int y = 1;
    while (y <= casasEsquerda) {
        printf("Esquerda\n");
        y++;
    }

    return 0;
}
