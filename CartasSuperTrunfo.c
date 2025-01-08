#include <stdio.h>
int main() {

char cod_carta [4], estado [20], cidade [20]; // Código da carta, nome do estado e nome da cidade.
int populacao, pontos_tur; //População total e quantidade de pontos turísticos.
float area, PIB; // Área em km² e PIB (Em letras maiúsculas).
float densidade_pop, PIB_percapita; //Densidade populacional e PIB per capita.

printf("Insira o código da carta:");
scanf(" %s", cod_carta);
printf("Digite o nome do estado:");
scanf(" %s", estado);
printf("Digite o nome da cidade:");
scanf(" %s", cidade);
printf("Digite a quantidade de pontos turisticos da cidade:");
scanf("%d", &pontos_tur);
printf("Digite a quantidade populacional da cidade:");
scanf("%d", &populacao);
printf("Digite a área total em km²:");
scanf("%f", &area);
printf("Digite o PIB:");
scanf("%f", &PIB);

densidade_pop = populacao/area;
PIB_percapita = PIB/populacao;

printf("\nOs dados informados da carta %s sao:\n", cod_carta);
printf("Estado: %s\n", estado);
printf("Cidade: %s\n", cidade);
printf("Pontos turísticos: %d\n", pontos_tur);
printf("População: %d\n", populacao);
printf("Área total: %.3f km²\n", area);
printf("Densidade populacional: %.1f habitantes por km²\n", densidade_pop);
printf("PIB: R$ %.2f\n", PIB);
printf("PIB per capita: R$ %.3f\n", PIB_percapita);

return 0;
}
