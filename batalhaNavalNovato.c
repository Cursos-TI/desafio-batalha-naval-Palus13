#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.

    int tabuleiro[10][10] = {0}; // Inicializando o tabuleiro só com água (0)

    // Posicionando navios
    // Navio 1 - Horizontal
    for (int i = 5; i<= 7; i++) {
        tabuleiro [3][i] = 3;
    }
    // Navio 2 - Vertical
    for (int i=3;i<=5;i++) {
        tabuleiro[i][8] = 3;
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
