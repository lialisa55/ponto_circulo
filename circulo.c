#include <stdlib.h>
#include <stdbool.h>
#include "circulo.h"
#include "ponto.h"

CIRCULO *circulo_criar (PONTO *p, float raio){
    CIRCULO *c = (CIRCULO*) malloc(sizeof(CIRCULO));
    if (c != NULL){
        c->p = p;
        c->raio = raio;
    }
    return c;
}

bool circulo_set_ponto (CIRCULO *c, PONTO *p){
    if (c != NULL){
        c->p = p;
        return true;
    }
    else {
        return false;
    }
}

bool circulo_set_raio (CIRCULO *c, float raio){
    if (c != NULL){
        c->raio = raio;
        return true;
    }
    else {
        return false;
    }
}

PONTO *circulo_get_ponto (CIRCULO *c){
    if (c == NULL) {
        return NULL;
    }
    return c->p;
}

float circulo_get_raio (CIRCULO *c){
    if (c == NULL) {
        return 1.0f;
    }
    return c->raio;
}

void circulo_apagar (CIRCULO **circulo){
    if (circulo != NULL && *circulo != NULL) {
        free(*circulo);
        *circulo = NULL;
    }
}