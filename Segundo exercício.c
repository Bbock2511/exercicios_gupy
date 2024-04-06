#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int number, x = 0, y = 1, fib = 1;

    printf("Digite um número: ");
    scanf("%d", &number);

    if (number == 0 || number == 1) {
        printf("Verdadeiro\n");
    } else {
        while (fib < number) {
            fib = y + x;
            x = y;
            y = fib;
        }
        printf("%s", fib == number ? "Verdadeiro" : "Falso");
    }

    return 0;
}
