#include <stdio.h>

 main() {
    int a, b, c;

    printf("Digite três valores:\n");
    scanf("%d %d %d", &a, &b, &c);

    // Ordenando os valores usando uma abordagem simples de troca
    if (a < b) {
        int temp = a;
        a = b;
        b = temp;
    }
    if (a < c) {
        int temp = a;
        a = c;
        c = temp;
    }
    if (b < c) {
        int temp = b;
        b = c;
        c = temp;
    }

    printf("Valores em ordem descendente: %d %d %d\n", a, b, c);

}
