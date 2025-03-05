#ifndef __NODO_H__
#define __NODO_H__

#include <stdbool.h>

typedef int DATO;

typedef struct _Nodo {
    DATO dato;
    struct _Nodo* sig;
} Nodo;

// Funciones del TAD Nodo
Nodo* crear_nodo();
bool borrar_nodo(Nodo* nodo);
Nodo* asignar_dato(Nodo* nodo, DATO d);
DATO obtener_dato(Nodo* nodo);
Nodo* asignar_referencia(Nodo* nodo, Nodo* ref);
Nodo* obtener_ref(Nodo* nodo);

#endif
