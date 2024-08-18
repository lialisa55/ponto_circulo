#include <stdio.h>
#include <stdlib.h>
#include "ponto.h"
#include "circulo.h"

int main(void){

    PONTO *a;
    float ponto_x, ponto_y;
    scanf("%f\n%f\n", &ponto_x, &ponto_y);
    a = ponto_criar(ponto_x, ponto_y);

    CIRCULO *b;
    PONTO *centro;
    float ponto_a, ponto_b;
    float raio;
    scanf("%f\n%f\n%f\n", &ponto_a, &ponto_b, &raio);

    centro = ponto_criar(ponto_a, ponto_b);
    b = circulo_criar(centro, raio);

    printf("Ponto: (%.1f, %.1f)\n", a->x, a->y);
    printf("Circulo: Centro(%.1f, %.1f), Raio = %.1f", b->p->x, b->p->y, raio);

    ponto_apagar(&a);
    ponto_apagar(&centro);
    circulo_apagar(&b);

    return 0;
}