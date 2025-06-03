#include <stdio.h>
#define linha 10
#define coluna 10

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

        // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.

    int tabuleiro[linha][coluna] = {0}; // Inicializando o tabuleiro só com água (0)

    // Posicionando navios
    // Navio 1 - Horizontal
    for (int i = 5; i<= 7; i++) {
        tabuleiro [3][i] = 3;
    }
    // Navio 2 - Vertical
    for (int i=3;i<=5;i++) {
        tabuleiro[i][8] = 3;
    }
    // Navio 3 - Diagonal 1
    for (int i = 0; i<=2; i++){
        tabuleiro[i+2][i+4] = 3;
    }
    // Navio 4 - Diagonal 2 - invertida
    for (int i = 0; i<=2; i++) {
        tabuleiro[i+6][4-i] = 3;
    }
    char letra = 'A';

    // Exibindo o tabuleiro com os navios posicionados
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
