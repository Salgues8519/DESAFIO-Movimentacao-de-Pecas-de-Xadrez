#include <stdio.h>

int main(){
    
    //Torre, cinco casas a direita
    for (int t = 0; t < 5; t++){

        printf("direita\n"); //imprime a direção
    }

    int b = 0;


    //Bispo, cinco casas na diagonal cima, direita
    while (b < 5)
    {
        printf("cima, direita\n"); //imprime a direção
        b++;
    }
    

    //Rainha, oito casas para esquerda
    int r = 0;
    
    do
    {
        printf("esquerda\n"); //imprime a direção
        r++;
    } while (r < 8);

    //Cavalo, Movimentação em L (cima, cima, direita)

    for (int i = 0; i < 1; i++) {
        int j = 0;
        while (j < 2) {
            printf("cima\n");
            j++;
        }
        printf("direita\n");
    }


    
    
    return 0;
}
