#include "tipos.h"

void pop(TPilha *p)
{
	TElemento *aux;
	aux = p->topo;
	p->topo = p->topo->proximo;
	free(aux);
}
