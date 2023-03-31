#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "arraylist.h"

//normal array
typedef struct ArrayList {
    void **data; // es un arreglo de datos data
    int capacity;//capacidad
    int size;//current
} ArrayList;

/* Implemente la función `ArrayList *createList()`. Esta función crea un nuevo dato de tipo ArrayList inicializando sus variables. Considere que la capacidad incial es de 2 casillas para el arreglo.
   > Recuerde reservar memoria para el ArrayList y también para el arreglo dinámico `data`.
*/
ArrayList *createList(void) {
  ArrayList * arreglo = (ArrayList *)malloc(sizeof(ArrayList));
  arreglo->data = (void**)malloc(sizeof(void*));
  arreglo->capacity = 2;
  arreglo->size = 0;
  return arreglo;
}
/*2. Implemente la función `void append(ArrayList * l, void * data)`. Esta función agrega el dato al final de la lista (es decir, en la posición `size`). 

    > Si el arreglo está lleno aumente la capacidad al **doble** usando la función `realloc` así:
    `data = realloc(data, nueva_capacidad)`

    > Recuerde aumentar el valor de la variable `size`.
*/
void append(ArrayList * l, void * data){
  if (l->size == l->capacity){
    l->data = realloc(l->data, (l-> capacity *2));
    l->capacity = (l->capacity * 2);
    }
  l->data[l->size] = data;
  l->size++;
}

void push(ArrayList * l, void * data, int i){

}

void* pop(ArrayList * l, int i){
    return NULL;
}

void* get(ArrayList * l, int i){
    return NULL;
}

int get_size(ArrayList * l){
    return l->size;
}

//remove elements
void clean(ArrayList * l){
    
}
