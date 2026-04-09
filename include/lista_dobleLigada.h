#ifndef __LISTA_LIGADA_H__
#define __LISTA_LIGADA_H__

#include "nodo.h"

typedef struct DLista DLista;

struct Dlista{
    Nodo *head;
    Nodo *tail;
};

DLista* lista_crear();
bool Dlista_es_vacia(DLista*l);
bool Dlista_insertar_vacia(DLista *l, void *info, size_t size);
bool Dlista_insertar_inicio(DLista *l, void *info, size_t size);
bool Dlista_insertar_fin(DLista *l, void *info, size_t size);
bool Dlista_insertar_x_pos(DLista *l, void *info, size_t size);
int Dlista_num_nodos(DLista*l);

#endif