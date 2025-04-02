#include <stdio.h>

int main() {
    int escolha;
    float num1, num2, resultado; 

    printf("Escolha uma operação matemática:\n");
    printf("1 - Soma, 2 - Subtração, 3 - Multiplicação, 4 - Divisão\n");
    printf("Digite sua opção (1-4): ");
    scanf("%d", &escolha);

    printf("Digite o primeiro número: ");
    scanf("%f", &num1);
    printf("Digite o segundo número: ");
    scanf("%f", &num2);

    if (escolha == 1) {
        resultado = num1 + num2;
        printf("Resultado da soma: %.2f\n", resultado);
    } else if (escolha == 2) {
        resultado = num1 - num2;
        printf("Resultado da subtração: %.2f\n", resultado);
    } else if (escolha == 3) {
        resultado = num1 * num2;
        printf("Resultado da multiplicação: %.2f\n", resultado);
    } else if (escolha == 4) {
        if (num2 == 0) {
            printf("Erro! Não é possível dividir por zero.\n");
        } else {
            resultado = num1 / num2;
            printf("Resultado da divisão: %f", resultado);
        }
    } else {
        printf("Opção inválida!\n");
    }

    return 0;
}
