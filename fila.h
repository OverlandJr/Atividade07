#ifndef FILA_H
#define FILA_H


// define o tamanho, o índice da frente da fila, o índice do final da fila (tras) e a quantidade de elementos na fila.
typedef struct {
    double *itens;
    int tamanho;
    int frente;
    int tras;
    int quantidade;
} Fila;


// Declara funções relacionadas à fila, incluindo a criação da fila, enfileirar, desenfileirar, verificar o tamanho, verificar se está vazia e destruir a fila.
Fila *criarFila(int tamanho);
void enfileirar(Fila *fila, double valor);
double desenfileirar(Fila *fila);
int tamanhoFila(Fila *fila);
int estaVaziaFila(Fila *fila);
void destruirFila(Fila *fila);

#endif
