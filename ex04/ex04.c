/*Faça um algoritmo que receba o valor de um depósito e o valor da taxa de juros, calcule e mostre o valor do rendimento e o valor total depois do rendimento*/
#include <stdio.h>

int main() {

    float dep, juros, rend, totRend;

    printf("Informe o valor do depósito: ");
    scanf("%f", &dep);

    printf("Informe o valor do juros: ");
    scanf("%f", &juros);

    rend = dep * juros / 100; /* dep x juros para dep * juros / 100 porque a taxa de juros deve ser dividida por 100 para converter em porcentagem */
    totRend = dep + rend;

    printf("O valor atual é de: R$ %.2f\n", totRend);
    printf("O valor de rendimento foi de: R$ %.2f\n", rend);
    
    return 0;
}