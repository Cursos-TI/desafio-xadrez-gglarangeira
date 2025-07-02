#include <stdio.h>

void moverTorre(int casas){
    if (casas > 0) {
        printf("\nTorre: Direita");
        moverTorre(casas - 1);
    }
}

void moverBispo(int casas){
    if (casas > 0){
        printf("\nBispo: Cima, Direita");
        moverBispo(casas - 1);
    }
}

void moverRainha(int casas){
    if (casas > 0){
        printf("\nRainha: Esquerda");
        moverRainha(casas - 1);
    }
}

void moverCavalo(){
    int cavalo = 1, i;
    //Loop aninhado, while que move o Cavalo duas vezes pra baixo e após o while o for move uma vez pra esquerda.
    for (i = 1; i <= 2; i++)
        while(cavalo <= 2){
            printf("\nCavalo: Cima");
            cavalo++;
        }
        printf("\nCavalo: Direita");
}

void pularLinha(int linhas){
    if (linhas > 0) {
        printf("\n");
        pularLinha(linhas - 1);
    }
}

int main(){
    moverTorre(5);
    pularLinha(1);
    moverBispo(5);
    pularLinha(1);
    moverRainha(8);
    pularLinha(1);
    moverCavalo();

    return 0;
}