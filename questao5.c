#include <stdio.h>
#include <string.h>

int main() {
    char str[1000], temp;
    int i, j;

    printf("Digite uma string: ");
    fgets(str, 1000, stdin);

    j = strlen(str) - 1;

    for (i = 0; i < j; i++, j--) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }

    printf("String invertida: %s", str);

    return 0;
}
