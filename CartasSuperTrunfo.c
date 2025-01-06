#include <stdio.h>
int main() {

char cod_cidade [4], cidade [20]; // Código da cidade e nome da cidade.
int populacao, pontos_tur; //População total e quantidade de pontos turísticos.
float area, PIB; // Área em km² e PIB (Em letras maiúsculas).

printf("Insira o codigo da cidade:");
scanf("%s", cod_cidade);
printf("Digite o nome da cidade:");
scanf(" %s", cidade);
printf("Digite a quantidade populacional da cidade:");
scanf("%d", &populacao);
printf("Digite a quantidade de pontos turisticos da cidade:");
scanf("%d", &pontos_tur);
printf("Digite a area total em quilometros quadrados:");
scanf("%f", &area);
printf("Digite o PIB:");
scanf("%f", &PIB);

printf("\nOs dados informados da cidade %s sao:\n", cod_cidade);
printf("Cidade: %s.\n", cidade);
printf("Populacao: %d.\nPontos turisticos: %d\n", populacao, pontos_tur);
printf("Area total: %.3f.\nPIB: %.3f.", area, PIB);

return 0;
}
