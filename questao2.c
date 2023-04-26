#include <stdio.h>

int main() {
    int num, a = 0, b = 1, c, flag = 0;

    printf("Digite um número: ");
    scanf("%d", &num);

    if (num == 0 || num == 1) {
        printf("O número %d pertence à sequência de Fibonacci.\n", num);
    } else {
        while (b <= num) {
            c = a + b;
            a = b;
            b = c;
            if (b == num) {
                printf("O número %d pertence à sequência de Fibonacci.\n", num);
                flag = 1;
                break;
            }
        }
        if (flag == 0) {
            printf("O número %d não pertence à sequência de Fibonacci.\n", num);
        }
    }

    return 0;
}
