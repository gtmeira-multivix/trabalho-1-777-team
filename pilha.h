#ifndef _PILHA_H
#define _PILHA_H

#include "tokenizacao.h"

typedef struct pilha Pilha
{
	double *dados;
	int tamanho;
	int topo;
}  pilha Pilha;

/*
 * Cria uma nova pilha vazia.
 */
 
Pilha* pilha_criar(int tamanho)
{
	Pilha *p = (Pilha*) malloc(sizeof(Pilha));
	p->topo = 0;
	p->dados = (double*) malloc(tamanho*sizeof(double));
	p->tamanho = tamanho;
	return p;
}	

/*
 * Adiciona elemento no topo da pilha.
 */
 
void pilha_push(Pilha *p, Token t)
{
	if(p->topo >= p->tamanho) 
	{
		printf("Pilha cheia!\n");
		return;
	}
	p->dados[p->topo] = t;
	p->topo++;
}

/*
 * Retira elemento do início da pilha.
 */
 
Token pilha_pop(Pilha *p)
{
	if(p->topo == 0)
	{
		printf("Pilha vazia!\n");
		return 0;
	}
	p->topo--;
	return p->dados[p->topo];
}

/*
 * Retorna o primeiro elemento da pilha, sem retirá-lo.
 */
 
Token pilha_primeiro(Pilha *p)
{
 return p -> pilha -> Token;
}

/*
 * Retorna 1 se a pilha estiver vazia ou 0 caso contrário.
 */
int pilha_vazia(Pilha *p);
{
	if(p->topo == NULL)
	{
		return 0;
	}
	else 
	{
		return 1;
	}
/*
 * Destrói a pilha e seus elementos.
 */

void pilha_destruir(Pilha *p) 
{
	free(p->dados);
	free(p);
}

/*
 * Imprime todos os elementos na pilha atualmente.
 */
 
void pilha_imprimir(Pilha *p);
{	
	int count;
	
 	if(vazia(p))
 	{
  		printf("PILHA vazia!\n\n");
  		return ;
 	}

 	node *tmp;
 	tmp = p->prox;
 	printf("PILHA:");
 	while( tmp != NULL)
 	
	{
 		printf("%5d", tmp->num);
  		tmp = tmp->prox;
 	}
 
 	printf("\n        ");
 	for(count=0 ; count < tam ; count++)
  	printf("  ^  ");
 	printf("\nOrdem:");
 	for(count=0 ; count < tam ; count++)
  	printf("%5d", count+1);


 	printf("\n\n");
}

#endif
