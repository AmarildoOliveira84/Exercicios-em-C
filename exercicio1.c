#include <stdio.h>

struct dados
{
    char nome[100];
    char telefone[20];
    char endereco[300];
} d;

void chamar()
{

    printf("Nome: %s", d.nome);
    printf("Telefone: %s", d.telefone);
    printf("Endereco: %s", d.endereco);
}

void somar(float *n1, float *n2)
{
    float n = *n1 + *n2;
    printf("Resultado da soma: %f\n", n);
}

void subtrair(float *n1, float *n2)
{
    float n = *n1 - *n2;
    printf("Resultado da subtracao: %f\n", n);
}

void dividir(float *n1, float *n2)
{
    float n = *n1 / *n2;
    printf("Resultado da divisao: %f\n", n);
}

void multiplicar(float *n1, float *n2)
{
    float n = *n1 * *n2;
    printf("Resultado da mltuiplicacao: %f\n", n);
}

int main()
{

    float n1, n2;
    int escolha;

    printf("Informe o seu nome: ");
    fgets(d.nome, 100, stdin);

    printf("Informe o seu telefone: ");
    fgets(d.telefone, 20, stdin);

    printf("Informe o seu endereco: ");
    fgets(d.endereco, 300, stdin);

    printf("Informe um numero:\n");
    scanf("%f", &n1);

    printf("Informe um numero:\n");
    scanf("%f", &n2);

    printf("Informe 1 - soma 2 - subtracao 3 - divisao");
    scanf("%d", &escolha);

    switch (escolha)
    {
    case 1:
        chamar();
        somar(&n1, &n2);
        break;

    case 2:
        chamar();
        subtrair(&n1, &n2);
        break;

    case 3:
        chamar();
        dividir(&n1, &n2);
        break;

    case 4:
        chamar();
        multiplicar(&n1, &n2);
        break;

    default:

        printf("Opcao invalida:");
    }
    return 0;
}