#ifndef MINHA_LIBRY
#define MINHA_LIBRY
#define MAX 100


typedef int TipoP;

typedef struct{

    int topo;
    TipoP info[MAX];

}Tpilha, *Pilha;

void menu();

Pilha inicPilha(void);

void push(Pilha p, TipoP elem);

TipoP pop(Pilha p);

TipoP infoPilha(Pilha p);

int vaziaPilha(Pilha p);

void destruirPilha(Pilha p);

#endif

