/*Faça um algoritmo que calcule e mostre a área de um círculo.*/
#include <stdio.h>

int main() {

    const float pi = 3.14;
    int r, a;

    printf("Insira o valor do raio do círculo: ");
    scanf("%d", &r);

    a = pi * pow(r, 2);

    printf("O valor da área do círculo é de: %d\n", a);

    return 0; 
}