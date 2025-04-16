#include <stdio.h>

int main() {
    //Criando um vetor.
    char colunas[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    
    //Criando central 10x10 para representar o tabuleiro.
    int tabuleiro[10][10];

    //Inicializando tabuleiro (fundo = 0)
    for (int i = 0; i < 10 ; i++) {
        for (int j = 0; j < 10; j++){
            tabuleiro[i][j] = 0; 
        
        }
    }
    
    //Posiçao dos navios.(tabuleiro)
    //Horizontal linha 2, coluna 4
    int linha_horizontal = 2;
    int coluna_horizontal = 4;

    //Vertical linha 5, coluna 7
    int linha_vertical = 5;
    int coluna_vertical = 7;
    
    //Posição do navio horizontal
    for (int i = 0; i < 3; i++)
    {
        tabuleiro[linha_horizontal][coluna_horizontal + i] = 3
    }

    //Posição
    
      
return 0;
}
