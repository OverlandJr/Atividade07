#ifndef PILHA_H
#define PILHA_H

// defini o tamanho, o topo da pilha (índice do elemento no topo).

typedef struct {
    double *itens;
    int tamanho;
    int topo;
} Pilha;


// declara as funções incluindo a criação da pilha, empilhar, desempilhar, verificar o tamanho, verificar se está vazia e destruir a pilha.

Pilha *criarPilha(int tamanho);
void empilhar(Pilha *pilha, double valor);
double desempilhar(Pilha *pilha);
int tamanhoPilha(Pilha *pilha);
int estaVaziaPilha(Pilha *pilha);
void destruirPilha(Pilha *pilha);

#endif 
