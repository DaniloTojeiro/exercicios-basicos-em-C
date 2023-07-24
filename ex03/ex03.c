/*Faça um algoritmo que receba o salário de um funcionário e o percentual de aumento e calcule e mostre o valor do aumento e o novo salário*/
#include <stdio.h>

int main() {
    
    float salario, percentual, aumento, novoSalario;

    printf("Digite o valor do salário do funcionário: ");
    scanf("%f", &salario);

    printf("Digite o percentual de aumento: ");
    scanf("%f", &percentual);

    aumento = salario * percentual / 100; 
    novoSalario = salario + aumento;

    printf("O valor do aumento é de: R$ %.2f\n", aumento);
    printf("O valor do novo salário é de: R$ %.2f\n", novoSalario);

    return 0;
}