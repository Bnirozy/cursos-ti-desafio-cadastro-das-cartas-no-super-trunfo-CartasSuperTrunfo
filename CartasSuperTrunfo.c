#include <stdio.h>

int main(){

    char Estado[20], estado[20];
    char Codigo[20], codigo[20];
    char Cidade[20], cidade[20];
    int Populacao, populacao;
    int Npt, npt;
    float Area, area;
    float Pib, pib;

    printf("1° carta\n");

    printf("digite o Nome do Estado: ");
    scanf("%s", Estado);

    printf("Digite o Código da Carta: ");
    scanf("%s", Codigo);

    printf("Digite o nome da Cidade: ");
    scanf("%s", Cidade);

    printf("digite o Numero Total de Habitantes da Cidade: ");
    scanf("%d", &Populacao);

    printf("digite o Número de Pontos Turisticos: ");
    scanf("%d", &Npt);

    printf("digite o tamanho da Área: ");
    scanf("%f", &Area);

    printf("digite o PIB da Cidade: ");
    scanf("%f", &Pib);

    printf("2° carta\n");

    printf("digite o Nome do Estado: ");
    scanf("%s", estado);

    printf("Digite o Código da Carta: ");
    scanf("%s", codigo);

    printf("Digite o nome da Cidade: ");
    scanf("%s", cidade);

    printf("digite o Numero Total de Habitantes da Cidade: ");
    scanf("%d", &populacao);

    printf("digite o Número de Pontos Turisticos: ");
    scanf("%d", &npt);

    printf("digite o tamanho da Área: ");
    scanf("%f", &area);

    printf("digite o PIB da Cidade: ");
    scanf("%f", &pib);

    printf("\n1° carta\n\n");
    printf("Estado: %s\n", Estado);
    printf("Código: %s\n", Codigo);
    printf("Nome da Cidade: %s\n", Cidade);
    printf("População: %d\n", Populacao);
    printf("Área: %f\n", Area);
    printf("PIB: %f\n", Pib);
    printf("Número de Pontos Turisticos: %d\n\n", Npt);

    printf("2° carta\n\n");
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %f\n", area);
    printf("PIB: %f\n", pib);
    printf("Número de Pontos Turisticos: %d\n", npt);
}