#include <stdio.h>
#include <string.h>

int main() {
    char str[1000], temp;
    int i, j;

    printf("Digite uma string: ");
    fgets(str, 1000, stdin);  // lê a string do teclado

    j = strlen(str) - 1;  // índice do último caractere

    for (i = 0; i < j; i++, j--) {  // percorre a string até a metade
        temp = str[i];  // guarda o caractere atual
        str[i] = str[j];  // substitui o caractere atual pelo correspondente no final
        str[j] = temp;  // substitui o caractere final pelo correspondente no início
    }

    printf("String invertida: %s", str);  // imprime a string invertida

    return 0;
}
