#include <stdio.h>

int main (){
    printf("Desafio Super Trunfo\n");
    
    char estado1[50];   //variaveis da primeira carta
    char codigodacarta1[50];
    char nomedacidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosturisticos1;

    char estado2[50];   //variaveis da segunda carta 
    char codigodacarta2[50];
    char nomedacidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosturisticos2;

    printf("Digite o estado: \n");   //pedido de informações a serem inseridas no terminal sobre a primeira carta
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
    
    printf(" Estado: %s\n Código: %s\n Cidade: %s\n População: %d\n Área: %.2fkm²\n PIB: %.2f bilhões de reais\n Pontos Turísticos: %d\n" , estado1, codigodacarta1, nomedacidade1, populacao1, area1, pib1, pontosturisticos1);   //impressão no terminal das informações inseridas sobre a primeira carta

    printf("Digite o estado: \n");   //pedido de informações a serem inseridas no terminal sobre a segunda carta
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
    
    printf(" Estado: %s\n Código: %s\n Cidade: %s\n População: %d\n Área: %.2fkm²\n PIB: %.2f bilhões de reais\n Pontos Turísticos: %d\n" , estado2, codigodacarta2, nomedacidade2, populacao2, area2, pib2, pontosturisticos2);   //impressão no terminal das informações inseridas sobre a segunda carta
    
    return 0;
}