#include <stdio.h>

int main(){
    //Declara todas as variaveis para melhor compreensão do código.
    int torre = 1, bispo = 1, cavalo = 1, rainha, i;
    
    //Do-while que move a Torre 5 vezes para a direita.
    do {
        printf("\nTorre: Direita (%i)", torre);
        torre++;
    } while (torre <= 5);

    printf("\n");

    //While que move o Bispo 5 vezes na diagonal.
    while (bispo <= 5){
        printf("\nBispo:Cima, Direita (%i)", bispo);
        bispo++;
    }

    printf("\n");

    //For que move a rainha 8 vezez para baixo.
    for (rainha = 1; rainha <= 8; rainha++){
        printf("\nRainha: Esquerda (%i)", rainha);
    }

    printf("\n");

    //Loop aninhado, while que move o Cavalo duas vezes pra baixo e após o while o for move uma vez pra esquerda.
    for(i = 1; i <= 2; i++)
        while(cavalo <= 2){
            printf("\nCavalo: Baixo (%i)", cavalo);
            cavalo++;
        }
        printf("\nCavalo: Esquerda (%i)", cavalo);

    return 0;
}