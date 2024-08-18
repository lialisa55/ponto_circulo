#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include "ponto.h"

PONTO *ponto_criar(float x, float y){
    PONTO *p = (PONTO*) malloc(sizeof(PONTO));
    if (p !=  NULL){
        p->x = x;
        p->y = y;
    }

    return p;
}

void ponto_apagar(PONTO **p) {
    if (p != NULL && *p != NULL) {
        free(*p);
        *p = NULL;
    }
}

bool ponto_set (PONTO *p, float x, float y){
    if (p !=  NULL){
        p->x = x;
        p->y = y;
	return true;
    }
    else{
	    return  false;
    }
}

float ponto_get_x(PONTO *p) {
    if (p == NULL) {
        return 0.0f;
    }
    return p->x;
}

float ponto_get_y(PONTO *p) {
    if (p == NULL) {
        return 0.0f;
    }
    return p->y;
}

void ponto_print (PONTO *p){
    if (p != NULL){
        printf("%f %f\n", p->x, p->y);
    }
}
