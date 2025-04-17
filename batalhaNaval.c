#include <stdio.h>

int main() {
    //Criando um vetor.
    char colunas[10] = {'A',   'B',   'C',   'D',   'E',   'F',   'G',   'H',   'I',   'J'};
    int tabuleiro[10][10];

    //Inicializando tabuleiro (fundo = 0)
    for (int i = 0; i < 10 ; i++) {
        for (int j = 0; j < 10; j++){
            tabuleiro[i][j] = 0; 
        
        }
    }
    
    //Posiçao dos navios.(tabuleiro)
    //Horizontal linha 2, coluna.
    int linha_horizontal = 2;
    int coluna_horizontal = 4;

    //Vertical linha 5, coluna 7.
    int linha_vertical = 5;
    int coluna_vertical = 7;
    
    //Posição dos navios horizontal e vertical.
    for (int i = 0; i < 3; i++)
    {
        tabuleiro[linha_horizontal][coluna_horizontal + i] = 3;
        tabuleiro[linha_vertical + i][coluna_vertical] = 3;
    }

    //impressão do tabuleiro.
    printf("  TABULEIRO DA BATALHA NAVAL\n\n");

    //Imprime as letra da colunas.
    printf("   ");
    for (int i = 0; i < 10; i++)
    {
        printf(" %c", colunas[i]);
    }
    printf("\n");

    //Imprime as linha numeradas (1 a 10).
    for (int i = 0; i < 10; i++)
    {
        printf("%2d ", i + 1);
    
    for (int j = 0; j < 10; j++)
    {
        printf(" %d", tabuleiro[i][j]);
    }
    printf("\n");
    }
    
    
    
      
return 0;
}
