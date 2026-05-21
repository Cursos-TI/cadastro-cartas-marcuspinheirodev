#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
// Área para definição das variáveis para armazenar as propriedades das cidades

  // Entrada de dados da primeira carta
  
    char estado1 = 'c';
    
    char codigo_carta1[3] = "01";
  
    char nome_cidade1[50] = "Rio de Janeiro";
  
    int populacao1 = 100000;
  
    float area1 = 365.69;
  
    float pib1 = 141851.015;
  
    int pontos_turisticos1 = 15;

// Entrada de dados da segunda carta
  
    char estado2 = 'c';
    
    char codigo_carta2[3] = "01";
    
    char nome_cidade2[50] = "Rio de Janeiro";
    
    int populacao2 = 100000;
    
    float area2 = 365.69;
    
    float pib2 = 141851.015;
    
    int pontos_turisticos2 = 15;
  
// Área para entrada de dados

  // Entrada de dados da Primeira carta

    printf("Insira apenas uma letra representando o Estado: \n"); //
    scanf(" %c", &estado1);
    
    printf("Insira um número de 01 a 04: \n");
    scanf(" %s", codigo_carta1);
    
    printf("Insira o nome de uma cidade situada no Estado escolhido: \n");
    scanf(" %s", nome_cidade1);
    
    printf("Digite o número de habitantes dessa cidade: \n");
    scanf(" %d", &populacao1);
    
    printf("Digite a área dessa cidade em metros quadrados: \n");
    scanf(" %f", &area1);
    
    printf("Digite o PIB da cidade: \n");
    scanf(" %f", &pib1);
    
    printf("Digite quantos pontos turísticos a cidade possui: \n");
    scanf(" %d", &pontos_turisticos1);

  // Entrada de dados da segunda carta
    
    printf("Insira apenas uma letra representando o Estado: \n"); //
    scanf(" %c", &estado2);
        
    printf("Insira um número de 01 a 04: \n");
    scanf(" %s", codigo_carta2);
        
    printf("Insira o nome de uma cidade situada no Estado escolhido: \n");
    scanf(" %s", nome_cidade2);
        
    printf("Digite o número de habitantes dessa cidade: \n");
    scanf(" %d", &populacao2);
        
    printf("Digite a área dessa cidade em metros quadrados: \n");
    scanf(" %f", &area2);
        
    printf("Digite o PIB da cidade: \n");
    scanf(" %f", &pib2);
        
    printf("Digite quantos pontos turísticos a cidade possui: \n");
    scanf(" %d", &pontos_turisticos2);
  
// Área para exibição dos dados da cidade

  // Área de exibição da primeira carta

    printf("===========CARTA 1=========== \n");
    
    printf("Estado: %c\n", estado1);
    
    printf("Codigo: %c%s\n", estado1, codigo_carta1);
    
    printf("Nome da cidade: %s\n", nome_cidade1);
    
    printf("Populaçao: %d\n", populacao1);
    
    printf("Area: %.2f\n", area1);
    
    printf("PIB: R$ %.2f\n", pib1);
    
    printf("Pontos turisticos: %d\n", pontos_turisticos1);
    
    printf("=============================\n");
  // Área de exibição da segunda carta

    printf("===========CARTA 2=========== \n");

    printf("Estado: %c\n", estado2);

    printf("Codigo: %c%s\n", estado2, codigo_carta2);

    printf("Nome da cidade: %s\n", nome_cidade2);

    printf("Populaçao: %d\n", populacao2);

    printf("Area: %.2f\n", area2);

    printf("PIB: R$ %.2f\n", pib2);

    printf("Pontos turisticos: %d\n", pontos_turisticos2);

    printf("=============================\n");

  return 0;
} 
