#include <stdio.h>

void torre(int t){
    if (t < 5){
        printf("Direita\n");

        torre(t + 1);
    }
}

void bispo(int b){
    if(b < 5){
        printf("cima, direita\n");

        bispo(b + 1);
    }
}

void rainha(int r){
    if(r < 8){
        printf("esquerda\n");

        rainha( r + 1);
    }
}

int main(){
    
int movimentoTorre = 0;
    torre(movimentoTorre);

int movimentoBispo = 0;
    bispo(movimentoBispo);

int movimentoRainha = 0;
    rainha(movimentoRainha);


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
