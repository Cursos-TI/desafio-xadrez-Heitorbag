#include <stdio.h>

// Funções Recursivas para Torre, Bispo e Rainha

// Torre: movimento recursivo para a direita
void moverTorre(int casas) {
    if (casas <= 0) return;
    printf("Direita\n");
    moverTorre(casas - 1);
}

// Bispo: movimento recursivo (Cima Direita)
void moverBispo(int vertical, int horizontal) {
    if (vertical <= 0 || horizontal <= 0) return;

    // controla o movimento vertical
    for (int i = 0; i < vertical; i++) {
        // controla o movimento horizontal
        for (int j = 0; j < horizontal; j++) {
            printf("Cima Direita\n");
        }
    }
    moverBispo(vertical - 1, horizontal - 1);
}

// Rainha: movimento recursivo para a esquerda
void moverRainha(int casas) {
    if (casas <= 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}


// Movimento do Cavalo com loops complexos
void moverCavalo() {
    int movimentosCima = 2;
    int movimentosDireita = 1;

    printf("Movimento do Cavalo:\n");

    // controle do movimento vertical
    for (int i = 1; i <= movimentosCima; i++) {
        if (i == 2) {
            continue; 
        }
        printf("Cima\n");
    }

    // controle do movimento horizontal
    for (int j = 1; j <= movimentosDireita; j++) {
        if (j > movimentosDireita) {
            break;
        }
        printf("Direita\n");
    }
}

// Programa Principal
int main() {
    // TORRE - recursividade
    int casasTorre = 5;
    printf("Movimento da Torre:\n");
    moverTorre(casasTorre);
    printf("\n");

    // BISPO - recursividade + loops aninhados
    int casasBispo = 3; // número inicial de casas (vertical e horizontal)
    printf("Movimento do Bispo:\n");
    moverBispo(casasBispo, casasBispo);
    printf("\n");

    // RAINHA - recursividade
    int casasRainha = 8;
    printf("Movimento da Rainha:\n");
    moverRainha(casasRainha);
    printf("\n");

    // CAVALO - loops complexos
    moverCavalo();

    return 0;
}
