#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

#include <stdio.h>

int main() {
    
//=======================definir variaveis=============================

char estado1 = 'c';
char codigo_carta1[3] = "01";
char nome_cidade1[50] = "Rio de Janeiro";
unsigned long int populacao1 = 100000;
float area1 = 365.69;
float pib1 = 141851.015;
int pontos_turisticos1 = 15;
float densidade1 = 1000;
float percapita1 = 1000;

char estado2 = 'c';
char codigo_carta2[3] = "01";
char nome_cidade2[50] = "Rio de Janeiro";
unsigned long int populacao2 = 100000;
float area2 = 365.69;
float pib2 = 141851.015;
int pontos_turisticos2 = 15;
float densidade2 = 1000;
float percapita2 = 1000;

int res_populacao = 1;
int res_area = 1;
int res_pib = 1;
int res_pontos = 1;
int res_densidade = 1;
int res_percapita = 1;

int escolha_menu = 0;



//===================cadastrar a primeira carta======================

    printf("Insira apenas uma letra representando o Estado: \n"); //
    scanf(" %c", &estado1);

    printf("Insira um numero de 01 a 04: \n");
    scanf(" %s", codigo_carta1);

    printf("Insira o nome de uma cidade situada no Estado escolhido: \n");
    scanf(" %s", nome_cidade1);

    printf("Digite o numero de habitantes dessa cidade: \n");
    scanf(" %lu", &populacao1);

    printf("Digite a area dessa cidade em metros quadrados: \n");
    scanf(" %f", &area1);

    printf("Digite o PIB da cidade: \n");
    scanf(" %f", &pib1);

    printf("Digite quantos pontos turisticos a cidade possui: \n");
    scanf(" %d", &pontos_turisticos1);

// Calculo da Densidade populacional da primeira carta

densidade1 = (float)populacao1 / area1;

// Calculo da renda percapita

percapita1 = pib1 / (float)populacao1;

//==================== Vou apresentar a primeira carta =============

    printf("===========CARTA 1=========== \n");

    printf("Estado: %c\n", estado1);

    printf("Codigo: %c%s\n", estado1, codigo_carta1);

    printf("Nome da cidade: %s\n", nome_cidade1);

    printf("Populacao: %lu\n", populacao1);

    printf("Area: %.2f\n", area1);

    printf("PIB: R$ %.2f\n", pib1);

    printf("Pontos turisticos: %d\n", pontos_turisticos1);

    printf("Densidade populacional: %.2f\n", densidade1); // Ajustado para %.2f

    printf("A renda per capita e: %.2f\n", percapita1);    // Ajustado para %.2f

printf("=============================\n");

//===================cadastrar a segunda carta======================

    printf("Insira apenas uma letra representando o Estado: \n"); //
    scanf(" %c", &estado2);

    printf("Insira um numero de 01 a 04: \n");
    scanf(" %s", codigo_carta2);

    printf("Insira o nome de uma cidade situada no Estado escolhido: \n");
    scanf(" %s", nome_cidade2);
    
    printf("Digite o numero de habitantes dessa cidade: \n");
    scanf(" %lu", &populacao2);

    printf("Digite a area dessa cidade em metros quadrados: \n");
    scanf(" %f", &area2);

    printf("Digite o PIB da cidade: \n");
    scanf(" %f", &pib2);

    printf("Digite quantos pontos turisticos a cidade possui: \n");
    scanf(" %d", &pontos_turisticos2);

//===================================================================

// Calculo da Densidade populacional da primeira carta

densidade2 = (float)populacao2 / area2;

// Calculo da renda percapita

percapita2 = pib2 / (float)populacao2;

    printf("===========CARTA 2=========== \n");

    printf("Estado: %c\n", estado2);

    printf("Codigo: %c%s\n", estado2, codigo_carta2);

    printf("Nome da cidade: %s\n", nome_cidade2);

    printf("Populacao: %lu\n", populacao2);

    printf("Area: %.2f\n", area2);

    printf("PIB: R$ %.2f\n", pib2);

    printf("Pontos turisticos: %d\n", pontos_turisticos2);

    printf("Densidade populacional: %.2f\n", densidade2);

    printf("A renda per capita e: %.2f\n", percapita2);

    printf("=============================\n");

// Comparacao das cartas

res_populacao = populacao1 > populacao2;

res_area = area1 > area2;

res_pib = pib1 > pib2;

res_pontos = pontos_turisticos1 > pontos_turisticos2;

res_densidade = densidade1 > densidade2;

res_percapita = percapita1 > percapita2;

// Vou fazer uma comparacao no estilo: A carta 1 e mais forte que a carta 2 em X situacao? 0 ou 1


// Vou apresentar como ira funcionar o resultado da batalha entre as cartas

    printf("Agora o confronto entre as cartas ira ocorrer. Escolha um atributo para comparar: \n"); //Irei usar o printf("...") para exibir qual o numero corresponde a cada atributo (ex: Digite 1 para Populacao.)                                                                                              
    
    printf("1 - População\n");
   
    printf("2 - Area\n");
  
    printf("3 - PIB\n");
    
    printf("4 - Pontos Turisticos\n");
    
    printf("5 - Densidade Populacional\n");
    
    printf("6 - Renda Per Capita\n");
    
    scanf("%d", &escolha_menu);

    if(escolha_menu == 1){
        
        if(populacao1 > populacao2){
            
            printf("A carta 1 venceu\n");
            
            printf("Carta 1: %d - Carta 2: %d\n", pontuacao1, pontuacao2);
            
        }else{
            printf("A carta 2 venceu\n");
            
            
            printf("Carta 1: %d - Carta 2: %d\n", pontuacao1, pontuacao2);
             }
    }
return 0;
}
