#include "tipos.h"

void push(TPilha *p)
{
	TElemento *novo;
	novo = (TElemento*) malloc(sizeof(TElemento));
	printf("\n Informe valor: ");
	scanf("%d", &novo->valor);
	novo->proximo = NULL;
	
	if (p->topo == NULL)
	{
		p->topo = novo;
	}
	else
	{
		novo->proximo = p->topo;
		p->topo = novo;
	}
}
