#include <stdio.h>

main() {
    int a, b, c;

    printf("Digite um valor:\n");
    scanf("%d", &a);

    printf("Digite um valor:\n");
    scanf("%d",&b);

    printf("Digite um valor:\n");
    scanf("%d",&c);

    // Ordenando os valores usando uma abordagem simples de troca
    if (a > b) {
        int temp = a;
        a = b;
        b = temp;
    }
    if (a > c) {
        int temp = a;
        a = c;
        c = temp;
    }
    if (b > c) {
        int temp = b;
        b = c;
        c = temp;
    }

    printf("Valores em ordem ascendente: %d %d %d\n", a, b, c);

   
}
