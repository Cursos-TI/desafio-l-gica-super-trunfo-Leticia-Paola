#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
// Repositório de dados para primeira carta:
char estado1; //A
char codigo1[8];  //A01
char cidade1[20]; //FORTALEZA
unsigned long int populacao1; //2500000
float area1; //350KM²
float pib1; //75000000000
int pontosTuristicos1; //15(SUPOSIÇAO)
double densidadePopulacional1;
double PIBperCapita1;
float superPoder1;
// Recebimento, pelo usuário, de dados da primeira carta:
printf("Vamos criar a primeira carta do nosso Super Trunfo!\n");
printf("Uma letra de A a H que represente o estado:\n", estado1);
scanf("%c", &estado1);
printf("Digite a letra do estado seguida de um número de 01 a 04 (ex: A01, B03): \n", codigo1);
scanf("%s", &codigo1);
printf("Digite o nome da cidade referente ao estado escolhido: \n", cidade1);
scanf("%s", &cidade1);
printf("Digite a quantidade populacional dessa cidade: \n", populacao1);
scanf("%lu", &populacao1);
printf("Digite a área em Km² da cidade escolhida: \n", area1);
scanf("%f", &area1);
printf("Digite o PIB: \n", pib1);
scanf("%f", &pib1);
printf("Digite a quantidade de pontos turísticos da cidade escolhida: \n", pontosTuristicos1);
scanf("%d", &pontosTuristicos1);

//Calculos de densidade populacional e PIB per capita (carta 01)
densidadePopulacional1 = (double) populacao1 / area1;PIBperCapita1 = (double) pib1 / populacao1;

//adição de super poder da primeira carta.
superPoder1 = (populacao1 + area1 + pib1 + pontosTuristicos1 + PIBperCapita1) - densidadePopulacional1;

// Repositório de dados para segunda carta:
char estado2; //B
char codigo2[8]; //B02
char cidade2[20]; //TERESINA
unsigned long int populacao2; //900000
float area2; //1400KM²
float pib2; //23000000000
int pontosTuristicos2; //20(SUPOSIÇÃO)
float densidadePopulacional2;
float PIBperCapita2;
float superPoder2; //somando todos os atributos numéricos.

// Recebimento, pelo usuário, de dados da primeira carta:
printf("Vamos criar a segunda carta!\nDigite uma letra de A a H que represente o estado:\n", estado2);
scanf(" %c", &estado2);
printf("Digite a letra do estado seguida de um número de 01 a 04 (ex: A01, B03): \n", codigo2);
scanf("%s", &codigo2);
printf("Digite o nome da cidade referente ao estado escolhido: \n", cidade2);
scanf("%s", &cidade2);
printf("Digite a quantidade populacional dessa cidade: \n", populacao2);
scanf("%lu", &populacao2);
printf("Digite a área em Km² da cidade escolhida: \n", area2);
scanf("%f", &area2);
printf("Digite o PIB: \n", pib2);
scanf("%f", &pib2);
printf("Digite a quantidade de pontos turísticos da cidade escolhida: \n", pontosTuristicos2);
scanf("%d", &pontosTuristicos2);
//Calculos de densidade populacional e PIB per capita (carta 01)
densidadePopulacional2 = (float) populacao2 / area2;
PIBperCapita2 = (float) pib2 / populacao2;
//adição de super poder da segunda carta.
superPoder2 = (populacao2 + area2 + pib2 + pontosTuristicos2 + PIBperCapita2) - densidadePopulacional2;

// Amostra de primeira carta no terminal:
printf("O estado: %c\n", estado1);
printf("Codigo da Carta: %s\n", codigo1);
printf("Nome da Cidade: %s\n", cidade1);
printf("População: %d habitantes\n", populacao1);
printf("Área (Km²): %.2f\n", area1);
printf("PIB: %.2f\n", pib1);
printf("Pontos Turísticos: %d\n", pontosTuristicos1);
printf("Densidade populacional: %.2f hab/km²\n", densidadePopulacional1);
printf("PIB per capita:%.2f reais\n", PIBperCapita1);
//adição do item "super poder"
printf("Super poder: %.2f\n\n", superPoder1);

// Amostra de segunda carta no terminal:
printf("O estado: %c\n", estado2);
printf("Codigo da Carta: %s\n", codigo2);
printf("Nome da Cidade: %s\n", cidade2);
printf("População: %lu habitantes\n", populacao2);
printf("Área (Km²): %.2f\n", area2);
printf("PIB: %.2f\n", pib2);
printf("Pontos Turísticos: %d\n", pontosTuristicos2);
printf("Densidade populacional: %.2f hab/km²\n", densidadePopulacional2);
printf("PIB per capita:%.2f reais\n", PIBperCapita2);
//Adição do item "super poder"
printf("Super poder: %.2f\n\n", superPoder2);

//Menu para comparação das cartas:
int escolhaJogadorCidade, escolhaJogadorAtributo;
int escolhaComputadorCidade, escolhaComputadorAtributo;

printf("\n###Escolha uma carta:###\n");
printf("1. Carta 01 - %s\n", cidade1);
printf("2. Carta 02 - %s\n", cidade2);
printf("Digite sua escolha: \n");
scanf("%d", &escolhaJogadorCidade);
escolhaComputadorCidade != escolhaJogadorCidade;
printf("\n###Escolha um atributo desta carta:###\n");
printf("1. População \n");
printf("2. Área\n");
printf("3. PIB\n");
printf("4. Número de pontos turísticos\n");
printf("5. Densidade populacional\n");
printf("6. PIB per capita\n");
printf("7. Super poder\n");
printf("Digite sua escolha: \n");
scanf("%d", &escolhaJogadorAtributo);
escolhaJogadorAtributo == escolhaComputadorAtributo;

//Decisão de jogador mostrado em switch:
switch(escolhaJogadorCidade){
case 1:
printf("Você escolheu a carta 01 - %s!\n", cidade1);
break;
case 2:
printf("Você escolheu a carta 02 - %s!\n", cidade2);
break;
}

switch(escolhaJogadorAtributo){
    case 1:
    printf("Você escolheu o atributo População da carta %s!\n");
    break;
    case 2:
    printf("Você escolheu o atributo Área da carta %s!\n");
    break;
    case 3:
    printf("Você escolheu o atributo PIB da carta %s!\n");
    break;
    case 4:
    printf("Você escolheu o atributo Número de Pontos Turísticos da carta %s!\n");
    break;
    case 5:
    printf("Você escolheu o atributo Densidade Populacional da carta %s!\n");
    break;
    case 6:
    printf("Você escolheu o atributo PIB per Capita da carta %s!\n");
    break;
    case 7:
    printf("Você escolheu o atributo Super Poder da carta %s!\n");
    break;
    default:
    printf("Opção inválida.\n");
    break;
}

//Hora das comparações:
if (escolhaJogadorAtributo == 1) { //População.
    printf("\n### Comparando População: ###\n");
    printf("Carta 01 - cidade %s: %lu em População\n", cidade1, populacao1);
    printf("Carta 02 - cidade %s: %lu em População\n", cidade2, populacao2);
    if (populacao1 > populacao2) {
        printf("###Carta 01 cidade %s venceu!###\n\n", cidade1);
    } else if (populacao1 == populacao2){
        printf("###Empate!###\n");
    } else {
        printf("###Carta 02 cidade %s venceu!###\n\n", cidade2);
    }
} else if (escolhaJogadorAtributo == 2) { //Área.
    printf("\n### Comparando Área: ###\n");
    printf("Carta 01 - cidade %s: %.2fkm² de Área\n", cidade1, area1);
    printf("Carta 02 - cidade %s: %.2fkm² de Área\n", cidade2, area2);
 if (area1 > area2) {
        printf("###Carta 01 cidade %s venceu!###\n\n", cidade1);
    } else if (area1 == area2){
        printf("###Empate!###\n");
    } else {
        printf("###Carta 02 cidade %s venceu!###\n\n", cidade2);
    }      
} else if (escolhaJogadorAtributo == 3){//PIB.
    printf("\n### Comparando PIB: ###\n");
    printf("Carta 01 - cidade %s: %.2f em PIB\n", cidade1, pib1);
    printf("Carta 02 - cidade %s: %.2f em PIB\n", cidade2, pib2);
if(pib1 > pib2){
        printf("###Carta 01 cidade %s venceu!###\n\n", cidade1);
    } else if (pib1 == pib2){
        printf("###Empate!###\n");
    } else {
        printf("###Carta 02 cidade %s venceu!###\n\n", cidade2);
    }
} else if (escolhaJogadorAtributo == 4) { //Pontos Turistícos.
    printf("\n### Comparando Pontos Turísticos: ###\n");
    printf("Carta 01 - cidade %s: %d em Pontos Turísticos\n", cidade1, pontosTuristicos1);
    printf("Carta 02 - cidade %s: %d em Pontos Turísticos\n", cidade2, pontosTuristicos2);
    if(pontosTuristicos1 > pontosTuristicos2){
        printf("###Carta 01 cidade %s venceu!###\n\n", cidade1);
    } else if (pontosTuristicos1 == pontosTuristicos2){
        printf("###Empate!###\n");
    } else {
        printf("###Carta 02 cidade %s venceu!###\n\n", cidade2);
    }
} else if (escolhaJogadorAtributo == 5) { //Densidade Populacional.
    printf("\n### Comparando Densidade Populacional: ###\n");
    printf("Carta 01 - cidade %s: %lu em Densidade Populacional\n", cidade1, densidadePopulacional1);
    printf("Carta 02 - cidade %s: %lu em Densidade Populacional\n", cidade2, densidadePopulacional2);
    if(densidadePopulacional1 < densidadePopulacional2){
        printf("###Carta 01 cidade %s venceu!###\n\n", cidade1);
    } else if (densidadePopulacional1 == densidadePopulacional2){
        printf("###Empate!###\n");
    } else {
        printf("###Carta 02 cidade %s venceu!###\n\n", cidade2);
    }
} else if (escolhaJogadorAtributo == 6) { //PIB per capita.
    printf("\n### Comparando PIB per Capita: ###\n");
    printf("Carta 01 - cidade %s: %.2f em PIB per Capita\n", cidade1, PIBperCapita1);
    printf("Carta 02 - cidade %s: %.2f em PIB per Capita\n", cidade2, PIBperCapita2);
    if(PIBperCapita1 > PIBperCapita2){
        printf("###Carta 01 cidade %s venceu!###\n\n", cidade1);
    } else if (PIBperCapita1 == PIBperCapita2){
        printf("###Empate!###\n");
    } else {
        printf("###Carta 02 cidade %s venceu!###\n\n", cidade2);
    }
} else if (escolhaJogadorAtributo == 7) { //Super Poder.
    printf("\n### Comparando Super Poder: ###\n");
    printf("Carta 01 - cidade %s: %.2f em Super Poder\n", cidade1, superPoder1);
    printf("Carta 02 - cidade %s: %.2f em Super Poder\n", cidade2, superPoder2);
    if(superPoder1 > superPoder2){
        printf("###Carta 01 cidade %s venceu!###\n\n", cidade1);
    } else if (superPoder1 == superPoder2){
        printf("###Empate!###\n");
    } else {
        printf("###Carta 02 cidade %s venceu!###\n\n", cidade2);
    }
} else {
 printf("Opção inválida.\n");
}
return 0;
}
