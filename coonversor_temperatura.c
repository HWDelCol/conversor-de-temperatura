#include <stdio.h>

int main() {
    float temperatura, fahrenheit, celsius;
    int opcao;

    printf("Selecione uma opcao:\n");
    printf("1 - Converter Celsius para Fahrenheit.\n");
    printf("2 - Converter Fahrenheit para Celsius.\n");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        printf("Digite a temperatura em Celsius: ");
        scanf("%f", &temperatura);

        fahrenheit = (temperatura * 1.8) + 32;

        printf("%.2f graus Celsius equivalem a %2f graus Fahrenheit.", temperatura, fahrenheit);
        break;
    case 2:
        printf("Digite a temperatura em Fahrenheit: ");
        scanf("%f", &temperatura);

        celsius = (temperatura - 32) / 1.8;

        printf("%.2f graus Fahrenheit equivalem a %.2f graus Celsius.", temperatura, celsius);
        break;
    default:
        printf("opcao invalida");
        return 1;
    }
    return 0;
}