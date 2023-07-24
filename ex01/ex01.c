/* Faça um algoritmo que receba três notas, calcule e mostre a média aritmética entre elas */
#include <stdio.h>

main()
{
int n1, n2, n3, total;
printf("Insira o primeiro número: ");
scanf("%d", &n1);
printf("Insira o primeiro número: ");
scanf("%d", &n2);
printf("Insira o primeiro número: ");
scanf("%d", &n3);
total=(n1+n2+n3)/2;
printf("A média dos números é: %d", total);
}