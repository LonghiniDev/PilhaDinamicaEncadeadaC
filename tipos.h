#ifndef _tipos_
#define _tipos_

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

typedef struct tipoElemento
{
	int valor;
	struct tipoElemento *proximo;
}TElemento;

typedef struct tipoPilha
{
	TElemento *topo;
}TPilha;

void inicializar(TPilha *p);
void push(TPilha *p);
void pop(TPilha *p);
void apresentarPilha(TPilha *p);

#endif

