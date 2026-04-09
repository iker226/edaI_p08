#include "lista_dobleLigada.h"

DLista* lista_crear(){
    DLista*l = (DLista*)malloc(sizeof(DLista));
    if(l!=NULL){
        l->head = l->tail = NULL;
    }
    return l;
}

bool Dlista_es_vacia(DLista*l){
    if(l==NULL) return true;
    return (l->head==NULL && l->tail==NULL);
}

bool Dlista_insertar_vacia(DLista *l, void *info, size_t size){
    if(l==NULL) return false;
    Nodo*n=nodo_crear(info, size);
    l->head = l->tail = n;
    return true;
}

bool Dlista_insertar_inicio(DLista *l, void *info, size_t size){
    if(l==NULL){
        return false;
    }else{
        Nodo*n=nodo_crear(info, size);
        n->sig = l->head;
        l->head->ant = n;
        l->head = n;
        return true;
    }
}

bool Dlista_insertar_fin(DLista *l, void *info, size_t size){
    if(!l) return false;
    Nodo*n=nodo_crear(info, size);
    n->ant = l->tail;
    l->tail->sig = n;
    l->tail = n;
    return true;
}

bool Dlista_insertar_x_pos(DLista *l, int pos, void *info, size_t size){
    if(!l) return false;
    if(Dlista_es_vacia(l)) return Dlista_insertar_vacia(l, info, size);
    if(pos==0) return Dlista_insertar_inicio(l, info, size);
    
}

int Dlista_num_nodos(DLista*l){
    int i=0;
    for(Nodo*tmp = l->head; tmp!=NULL; tmp=tmp->sig, i++);
    return i;
}
