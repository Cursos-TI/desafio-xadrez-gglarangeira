#include <stdio.h>

int main(){
    int torre = 1, bispo = 1;
    //fazer com dowhile, for e while
    do {
        printf("\nTorre: Direita (%i)", torre);
        torre++;
    } while (torre <= 5);

    while (bispo <= 5){
        printf("\nBispo:Cima, Direita (%i)", bispo);
        bispo++;
    }

    for (int rainha = 1; rainha <= 8; rainha++){
        printf("\nRainha: Esquerda (%i)", rainha);
    }

    return 0;
}