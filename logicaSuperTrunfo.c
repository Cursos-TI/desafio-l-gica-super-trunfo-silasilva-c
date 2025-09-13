#include <stdio.h>

int main (){
//Variáveis da carta 1
    char estado;
    char codigo[4];
    char cidade[20];
    int populacao;
    float area;
    float pib;
    int turist;

//Variáveis da carta 2
    char estado2;
    char codigo2[4];
    char cidade2[20];
    int populacao2;
    float area2;
    float pib2;
    int turist2;

//Entrada de dados do usuário - Carta 1
    printf("Insira os dados da carta 1\n");
    printf("Uma letra de 'A' a 'H' (representando um dos oito estados):\n");
    scanf(" %c", &estado);
    printf("A letra do estado seguida de um número de 01 a 04 (ex: A01, B03):\n");
    scanf("%3s", codigo);
    printf("O nome da cidade:\n");
    scanf("%19s", cidade);
    printf("O número de habitantes da cidade:\n");
    scanf("%d", &populacao);
    printf("A área da cidade em km2:\n");
    scanf("%f", &area);
    printf("O Produto Interno Bruto da cidade:\n");
    scanf("%f", &pib);
    printf("O Número de Pontos Turísticos:\n");
    scanf("%d", &turist);

//Saída de dados do usuário - Carta 1
     printf("\nCarta 1 \n");
     printf("Estado: %c\n", estado);
     printf("Código: %s\n", codigo);
     printf("Cidade: %s\n", cidade);
     printf("População: %d\n", populacao);
     printf("Área da cidade (Em km2): %.2f\n", area);
     printf("PIB (Em bilhões de reias): %.2f\n", pib);
     printf("Pontos turísticos: %d\n", turist);

     float densidade = populacao / area;
     printf("Densidade populacional: %.2f\n", densidade);
     float pibcapita = pib / populacao;
     printf("PIB per capita: %.2f\n\n", pibcapita);


//Entrada de dados do usuário - Carta 2
    printf("Insira os dados da carta 2\n");
    printf("Uma letra de 'A' a 'H' (representando um dos oito estados):\n");
    scanf(" %c", &estado2);
    printf("A letra do estado seguida de um número de 01 a 04 (ex: A01, B03):\n");
    scanf("%3s", codigo2);
    printf("O nome da cidade:\n");
    scanf("%19s", cidade2);
    printf("O número de habitantes da cidade:\n");
    scanf("%d", &populacao2);
    printf("A área da cidade em km2:\n");
    scanf("%f", &area2);
    printf("O Produto Interno Bruto da cidade:\n");
    scanf("%f", &pib2);
    printf("O Número de Pontos Turísticos:\n");
    scanf("%d", &turist2);


//Saída de dados do usuário - Carta 2
     printf("\nCarta 2 \n");
     printf("Estado: %c\n", estado2);
     printf("Código: %s\n", codigo2);
     printf("Cidade: %s\n", cidade2);
     printf("População: %d\n", populacao2);
     printf("Área da cidade (Em km2): %.2f\n", area2);
     printf("PIB (Em bilhões de reias): %.2f\n", pib2);
     printf("Pontos turísticos: %d\n", turist2);

     float densidade2 = populacao2 / area2;
     printf("Densidade populacional: %.2f\n", densidade2);
     float pibcapita2 = pib2 / populacao2;
     printf("PIB per capita: %.2f\n\n", pibcapita2);


//Comparação de cartas     
     printf("Comparação de cartas - Densidade populacional\n");
     printf("Carta 1 - Densidade populacional: %.2f\n", densidade);
     printf("Carta 2 - Densidade populacional: %.2f\n", densidade2);
     if (densidade < densidade2){
     printf("A Carta 1 venceu!");
     } else {
     printf("A Carta 2 venceu!");
     }

     return 0;
}
