#include <stdio.h>
int main() { 
	
//DADOS DA PRIMEIRA CARTA:

char carta_1[7] = "Carta 1";
char cod_carta1 [4], estado1 [20], cidade1 [20]; // Código primeira carta, nome do estado e nome da cidade.
int populacao1, pontos_tur1; //População total e quantidade de pontos turísticos.
float area1, PIB1; // Área em km² e PIB (Em letras maiúsculas).
float densidade_pop1, PIB_percapita1; //Densidade populacional e PIB per capita.
long int super_poder1;

printf("\nInsira o código da %s:", carta_1);
scanf(" %s", cod_carta1);
printf("Digite o nome do estado:");
scanf(" %s", estado1);
printf("Digite o nome da cidade:");
scanf(" %s", cidade1);
printf("Digite a quantidade de pontos turisticos da cidade:");
scanf("%d", &pontos_tur1);
printf("Digite a quantidade populacional da cidade:");
scanf("%d", &populacao1);
printf("Digite a área total em km²:");
scanf("%f", &area1);
printf("Digite o PIB:");
scanf("%f", &PIB1);

densidade_pop1 = populacao1/area1;
PIB_percapita1 = PIB1/populacao1;

printf("\nOs dados informados da carta %s são:\n", cod_carta1);
printf("Estado: %s\n", estado1);
printf("Cidade: %s\n", cidade1);
printf("Pontos turísticos: %d\n", pontos_tur1);
printf("População: %d\n", populacao1);
printf("Área total: %.3f km²\n", area1);
printf("Densidade populacional: %.1f habitantes por km²\n", densidade_pop1);
printf("PIB: R$ %.2f\n", PIB1);
printf("PIB per capita: R$ %.3f\n", PIB_percapita1);
super_poder1 = (pontos_tur1+populacao1+area1+PIB1);
printf("\nSuper poder = %ld\n", super_poder1);

// -----------------------------------------------------------------------------------------------------------------------------------
//DADOS DA SEGUNDA CARTA:

char carta_2[7] = "Carta 2";
char cod_carta2 [4], estado2 [20], cidade2 [20]; // Código da segunda carta, nome do estado e nome da cidade.
int populacao2, pontos_tur2; //População total e quantidade de pontos turísticos.
float area2, PIB2; // Área em km² e PIB (Em letras maiúsculas).
float densidade_pop2, PIB_percapita2; //Densidade populacional e PIB per capita.
long int super_poder2;

printf("\nInsira o código da %s:", carta_2);
scanf(" %s", cod_carta2);
printf("Digite o nome do estado:");
scanf(" %s", estado2);
printf("Digite o nome da cidade:");
scanf(" %s", cidade2);
printf("Digite a quantidade de pontos turisticos da cidade:");
scanf(" %d", &pontos_tur2);
printf("Digite a quantidade populacional da cidade:");
scanf("%d", &populacao2);
printf("Digite a área total em km²:");
scanf("%f", &area2);
printf("Digite o PIB:");
scanf("%f", &PIB2);

densidade_pop2 = populacao2/area2;
PIB_percapita2 = PIB2/populacao2;

printf("\nOs dados informados da carta %s são:\n", cod_carta2);
printf("Estado: %s\n", estado2);
printf("Cidade: %s\n", cidade2);
printf("Pontos turísticos: %d\n", pontos_tur2);
printf("População: %d\n", populacao2);
printf("Área total: %.3f km²\n", area2);
printf("Densidade populacional: %.1f habitantes por km²\n", densidade_pop2);
printf("PIB: R$ %.2f\n", PIB2);
printf("PIB per capita: R$ %.3f\n", PIB_percapita2);
super_poder2 = (pontos_tur2+populacao2+area2+PIB2);
printf("\nSuper poder = %ld\n", super_poder2);

//RESULTADO:

if(super_poder1>super_poder2){
	printf("\nA carta vencedora é a %s:\nEstado: %s.\nCidade: %s.\nPontos turísticos: %d.\n", cod_carta1, estado1, cidade1, pontos_tur1);
	printf ("População: %d.\nÁrea total: %.3f.\nDensidade popilacional: %.1f habitantes por km².\nPIB: %.2f. \nPIB per capita: R$ %.3f.", populacao1, area1, densidade_pop1, PIB1, PIB_percapita1);
	}else {printf("\nA carta vencedora é a %s:\nEstado: %s.\nCidade: %s.\nPontos turísticos: %d.\n", cod_carta2, estado2, cidade2, pontos_tur2);
	printf ("População: %d.\nÁrea total: %.3f.\nDensidade popilacional: %.1f habitantes por km².\nPIB: %.2f. \nPIB per capita: R$ %.3f.\n", populacao2, area2, densidade_pop2, PIB2, PIB_percapita2);
}

return 0;
}