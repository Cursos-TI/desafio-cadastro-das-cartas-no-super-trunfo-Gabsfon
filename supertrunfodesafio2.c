#include <stdio.h>

int main (){
    // Declaração de variáveis para a primeira cidade
    char estado1[50];               // Nome do estado
    char codigodacarta1[50];        // Código da carta
    char nomedacidade1[50];         // Nome da cidade
    int populacao1;                 // População da cidade
    float area1;                    // Área da cidade
    float pib1;                     // Produto Interno Bruto da cidade
    int pontosturisticos1;          // Número de pontos turísticos
    float densidadepopulacional1;   // Densidade populacional (habitantes por km²)
    float pibpercapita1;            // PIB per capita (PIB dividido pela população)

    // Entrada de dados da primeira cidade
    printf("Digite o estado: \n");
    scanf("%s", estado1);

    printf("Digite o código da carta: \n");
    scanf("%s", codigodacarta1);

    printf("Digite o nome da cidade: \n");
    scanf("%s", nomedacidade1);

    printf("Digite a população: \n");
    scanf("%d", &populacao1);

    printf("Digite a área: \n");
    scanf("%f", &area1);

    printf("Digite o PIB: \n");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontosturisticos1);
    
    // Cálculo da densidade populacional e PIB per capita da primeira cidade
    densidadepopulacional1 = populacao1 / area1;
    pibpercapita1 = pib1 / populacao1;

    // Impressão dos dados da primeira cidade
    printf(" Estado: %s\n Código: %s\n Cidade: %s\n População: %d\n Área: %.2fkm²\n PIB: %.2f bilhões de reais\n Pontos Turísticos: %d\n Densidade Populacional: %.2f\n PIB per capita: %.2f\n", 
        estado1, codigodacarta1, nomedacidade1, populacao1, area1, pib1, pontosturisticos1, densidadepopulacional1, pibpercapita1);

    // Declaração de variáveis para a segunda cidade
    char estado2[50];
    char codigodacarta2[50];
    char nomedacidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosturisticos2;
    float densidadepopulacional2;
    float pibpercapita2;

    // Entrada de dados da segunda cidade
    printf("Digite o estado: \n");
    scanf("%s", estado2);

    printf("Digite o código da carta: \n");
    scanf("%s", codigodacarta2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", nomedacidade2);

    printf("Digite a população: \n");
    scanf("%d", &populacao2);

    printf("Digite a área: \n");
    scanf("%f", &area2);

    printf("Digite o PIB: \n");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontosturisticos2);
    
    // Cálculo da densidade populacional e PIB per capita da segunda cidade
    densidadepopulacional2 = populacao2 / area2;
    pibpercapita2 = pib2 / populacao2;

    // Impressão dos dados da segunda cidade
    printf(" Estado: %s\n Código: %s\n Cidade: %s\n População: %d\n Área: %.2fkm²\n PIB: %.2f bilhões de reais\n Pontos Turísticos: %d\n Densidade Populacional: %.2f\n PIB per capita: %.2f\n", 
        estado2, codigodacarta2, nomedacidade2, populacao2, area2, pib2, pontosturisticos2, densidadepopulacional2, pibpercapita2);

    // Comparação entre as duas cartas com base na população
    printf("Comparação de cartas (Atributo: População): \n Carta 1 : %s : %d\n Carta 2 : %s : %d\n", 
        nomedacidade1, populacao1, nomedacidade2, populacao2);

    // Verifica qual cidade tem maior população e declara a vencedora
    if (populacao1 > populacao2){
        printf("A carta 1 venceu!");
    } else {
        printf("A carta 2 venceu!");
    }

    return 0; // Final do programa
}