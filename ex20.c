#include <stdio.h>
int main() {
    float A, B, C;

    printf("Digite o valor do lado A: ");
    scanf("%f", &A);
    printf("Digite o valor do lado B: ");
    scanf("%f", &B);
    printf("Digite o valor do lado C: ");
    scanf("%f", &C);

    if (A < B + C && B < A + C && C < A + B) {
        if (A == B && B == C) {
            printf("O triângulo é equilátero.\n");
        } else if (A == B || A == C || B == C) {
            printf("O triângulo é isósceles.\n");
        } else {
            printf("O triângulo é escaleno.\n");
        }
    } else {
        printf("Os valores fornecidos não formam um triângulo.\n");
    }

    return 0;
}