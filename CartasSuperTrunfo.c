#include <stdio.h>
int main() {

char cod_carta [4], estado [20], cidade [20]; // Código da carta, nome do estado e nome da cidade.
int populacao, pontos_tur; //População total e quantidade de pontos turísticos.
float area, PIB; // Área em km² e PIB (Em letras maiúsculas).

printf("Insira o codigo da carta:");
scanf(" %s", cod_carta);
printf("Digite o nome do estado:");
scanf(" %s", estado);
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

printf("\nOs dados informados da carta %s sao:\n", cod_carta);
printf("Estado: %s\n", estado);
printf("Cidade: %s.\n", cidade);
printf("População: %d.\n", populacao);
printf("Pontos turísticos: %d\n", pontos_tur);
printf("Área total: %.3f.km²\n", area);
printf("PIB: R$ %.2f.", PIB);

return 0;
}
