#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

int main()
{

    Pilha minhaPilha;
    int elemento;
    int opcao;


    do{


        menu(&opcao);

        switch(opcao){

        case 1:
            minhaPilha = inicPilha();
            break;

        case 2:
            printf("Digite elemeto: ");
            scanf("%i", &elemento);
            push(minhaPilha, elemento);

            printf("Tamanho: %i ", minhaPilha->topo);
            break;

        case 3:
            printf("Elemento: %i\n", pop(minhaPilha));
            break;

        case 4:
            printf("Elemento do topo: %i\n", infoPilha(minhaPilha));

            break;

        case 5:

            if(vaziaPilha(minhaPilha) == 1){
                printf("Pilha esta vazia");
            }else{
                printf("A pilha contem elementos");
            }

            break;

        case 6:

            destruirPilha(minhaPilha);
            break;
        }



    }while(opcao != 0);



    return 0;
}
