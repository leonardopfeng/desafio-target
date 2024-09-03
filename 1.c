#include <stdio.h>

int isInFibonacci(int num) {
    int a = 0, b = 1, next;

    if (num == 0 || num == 1) {
        return 1;
    }

    while (b < num) {
        next = a + b;
        a = b;
        b = next;
    }

    return (b == num);
}

int main() {
    int num;

    scanf("%d", &num);

    if (isInFibonacci(num)) {
        printf("O número %d pertence à sequência de Fibonacci.\n", num);
    } else {
        printf("O número %d não pertence à sequência de Fibonacci.\n", num);
    }

    return 0;
}
