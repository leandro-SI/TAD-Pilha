#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

Pilha inicPilha(void){

    Pilha p = (Pilha) malloc(sizeof(Tpilha));

    p->topo = 0;

    return p;
}

void menu(int *p){

    printf("[1] - Iniciar Pilha\n");
    printf("[2] - Adicionar elemento na pilha\n");
    printf("[3] - Retornar elemento do topo e remove\n");
    printf("[4] - Retornar elemento do topo\n");
    printf("[5] - Pilha cheia ou vazia\n");
    printf("[6] - Destruir Pilha\n");
    printf("[0] - Sair\n");
    printf("OPCAO: ");
    scanf("%i", p);
}

void push(Pilha p, TipoP elem){



    if(p->topo == MAX - 1){
        printf("Pilha esta Cheia");
    }else{
        if(p->topo >= 0){
            p->info[p->topo] = elem;
            p->topo++;

        }else{
            printf("Pilha nao foi iniciada");
        }
    }
}

TipoP pop(Pilha p){

    int num;

    num = p->info[p->topo-1];
    p->topo--;
    return num;

}

TipoP infoPilha(Pilha p){

    return p->info[p->topo-1];
}

int vaziaPilha(Pilha p){

    if(p->topo == 0){
        return 1;
    }else{
        return 0;
    }
}

void destruirPilha(Pilha p){

    free(p);


}

