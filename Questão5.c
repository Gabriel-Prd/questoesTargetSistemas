#include <stdio.h>
#include <string.h>

int main() {
    char string[100];
    int i, tamanho;
    printf("Digite uma string: ");
    fgets(string, 100, stdin);
    tamanho = strlen(string) - 1; // desconsidera o caractere de nova linha
    for (i = tamanho - 1; i >= 0; i--) {
        printf("%c", string[i]);
    }
    printf("\n");
    return 0;
}