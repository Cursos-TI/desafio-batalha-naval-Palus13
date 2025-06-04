#include <stdio.h>
#define linha 10
#define coluna 10

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    int tabuleiro[linha][coluna] = {0}; // Inicializando o tabuleiro só com água (0)

    // Posicionando navios
    // Navio 1 - Horizontal
    for (int i = 0; i<= 2; i++) {
        tabuleiro [3][i+7] = 3;
    }
    // Navio 2 - Vertical
    for (int i=0;i<=2;i++) {
        tabuleiro[i+5][8] = 3;
    }
    // Navio 3 - Diagonal 1
    for (int i = 0; i<=2; i++){
        tabuleiro[i+2][i+4] = 3;
    }
    // Navio 4 - Diagonal 2
    for (int i = 0; i<=2; i++) {
        tabuleiro[i+6][4-i] = 3;
    }
    char letra = 'A';
    
    // Preenchendo áreas afetadas por habilidades especiais
    // Matriz para habilidade em cone
    int matrizCone [3][5] = {
        {0, 0, 1, 0, 0},
        {0, 1, 1, 1, 0},
        {1, 1, 1, 1, 1}
    };

    // Matriz para habilidade em octaedro
    int matrizOctaedro [3][5] = {
        {0, 0, 1, 0, 0},
        {0, 1, 1, 1, 0},
        {0, 0, 1, 0, 0}
    };

    // Matriz para habilidade em cruz
    int matrizCruz [3][5] = {
        {0, 0, 1, 0, 0},
        {1, 1, 1, 1, 1},
        {0, 0, 1, 0, 0}
    };

    // Preenchendo o tabuleiro com as áreas afetadas por cone
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            if (matrizCone[i][j] == 1) {
                tabuleiro[i][j + 5] = 1; // Ajustando a posição para o tabuleiro
            }
        }
    }

    // Preenchendo o tabuleiro com as áreas afetadas por octaedro
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            if (matrizOctaedro[i][j] == 1) {
                tabuleiro[i][j] = 1; // Ajustando a posição para o tabuleiro
            }
        }
    }

    // Preenchendo o tabuleiro com as áreas afetadas por cruz
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            if (matrizCruz[i][j] == 1) {
                tabuleiro[i + 4][j] = 1; // Ajustando a posição para o tabuleiro
            }
        }
    }   

    // Exibindo o tabuleiro com os navios posicionados e com áreas afetadas
    printf("TABULEIRO DE BATALHA NAVAL\n");
    printf("  0  1  2  3  4  5  6  7  8  9\n");
    for (int i= 0; i<=9;i++) {
        printf ("%c ",letra + i);
        for (int j=0; j<=9;j++) {
            printf("%d ", tabuleiro[i][j]);
            printf(" ");
        }
        printf("\n");
    }
    
    return 0;
}
