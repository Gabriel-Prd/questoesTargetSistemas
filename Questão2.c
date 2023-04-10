#include <stdio.h>

int main() {
    int num, fib1 = 0, fib2 = 1, prox_fib = 1, pertence = 0;
    // pede o número ao usuário
    printf("Digite um número: ");
    scanf("%d", &num);
    
    // calcula a sequência de Fibonacci até o próximo valor ser maior que o número informado
    while (prox_fib <= num) {
        if (num == prox_fib) {
            pertence = 1;
            break;
        }
        prox_fib = fib1 + fib2;
        fib1 = fib2;
        fib2 = prox_fib;
    }
    
    // exibe a mensagem se o número pertence ou não à sequência
    if (pertence) {
        printf("%d pertence à sequência de Fibonacci.\n", num);
    } else {
        printf("%d não pertence à sequência de Fibonacci.\n", num);
    }
    
    return 0;
}