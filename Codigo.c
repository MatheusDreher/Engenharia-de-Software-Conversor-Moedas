#include <stdio.h>

const float taxaDolarEuro = 0.92;
const float taxaEuroReal = 5.36;
const float taxaRealDolar = 0.20;

// Função para realizar a conversão
float converter(float valor, float taxa) {
    return valor * taxa;
}

int main() {
    int escolha;
    float valor;
    int continuar = 1; 

       printf("Bem-vindo ao Conversor de Moedas!\n");

    while (continuar) {
        printf("Selecione a operacao:\n");
        printf("1. Dolar para Euro\n");
        printf("2. Euro para Real\n");
        printf("3. Real para Dolar\n");
        printf("4. Sair\n");
        scanf("%d", &escolha);

  switch (escolha) {
            case 1:
                printf("Digite o valor em Dolares: ");
                scanf("%f", &valor);
                printf("%.2f Dolares equivalem a %.2f Euros.\n", valor, converter(valor, taxaDolarEuro));
                break;
            default:
                printf("Opcao invalida.\n");
                break;
        }
    }

    return 0;
}