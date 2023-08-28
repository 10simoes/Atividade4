#include <stdio.h>

main() {
    int a, b, c, d;

    printf("Digite quatro valores:\n");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    // Encontrando o maior valor
    int maior = a;
    if (b > maior) {
        maior = b;
    }
    if (c > maior) {
        maior = c;
    }
    if (d > maior) {
        maior = d;
    }

    // Encontrando o menor valor
    int menor = a;
    if (b < menor) {
        menor = b;
    }
    if (c < menor) {
        menor = c;
    }
    if (d < menor) {
        menor = d;
    }

    printf("O maior valor é: %d\n", maior);
    printf("O menor valor é: %d\n", menor);

 
}
