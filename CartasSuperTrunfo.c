#include <stdio.h>

int main() {
    char estado1[20];
    char codigoCarta[8];
    char nomeCidade[30];
    int populacao;
    float area_km;
    float pib;
    int PontosTuristicos;

    printf("CARTA SUPER TRUNFO 01 \n");

    printf("Nome do seu estado:\n");
    scanf("%s", estado1);

    printf("Código da sua carta:\n");
    scanf("%s", codigoCarta);

    printf("Nome da cidade:\n");
    scanf("%s", nomeCidade);

    printf("População:\n");
    scanf("%d", &populacao);

    printf("Área em Km²:\n");
    scanf("%f", &area_km);

    printf("PIB da cidade:\n");
    scanf("%f", &pib);

    printf("Quantidade de pontos turísticos:\n");
    scanf("%d", &PontosTuristicos);
    printf("\n");
    
    printf(" (INFORMAÇÕES DA CARTA SUPER TRUNFO 01) \n");
    printf(" Nome do estado: %s \n", estado1);
    printf(" Codigo da carta %s \n", codigoCarta);
    printf(" Nome da cidade: %s \n", nomeCidade);
    printf(" População: %d \n", populacao);
    printf(" Área: %f \n", &area_km);
    printf(" Pib (Produto interno Bruto): %f \n", pib);
    printf(" Quantidades de pontos turisticos: %d \n", PontosTuristicos);
    printf("\n");

    printf("CARTA SUPER TRUNFO 02 \n");

    printf("Nome do seu estado:\n");
    scanf("%s", estado1);

    printf("Código da sua carta:\n");
    scanf("%s", codigoCarta);

    printf("Nome da cidade:\n");
    scanf("%s", nomeCidade);

    printf("População:\n");
    scanf("%d", &populacao);

    printf("Área em Km²:\n");
    scanf("%f", &area_km);

    printf("PIB da cidade:\n");
    scanf("%f", &pib);

    printf("Quantidade de pontos turísticos:\n");
    scanf("%d", &PontosTuristicos);
    printf("\n");

    printf(" (INFORMAÇÕES DA CARTA SUPER TRUNFO 02) \n");
    printf(" Nome do estado: %s \n", estado1);
    printf(" Codigo da carta: %s \n", codigoCarta);
    printf(" Nome da cidade: %s \n", nomeCidade);
    printf(" População: %d \n", populacao);
    printf(" Área: %f \n", area_km);
    printf(" Pib (Produto interno Bruto): %f \n", pib);
    printf(" Quantidades de pontos turisticos: %d \n", PontosTuristicos);


 

    return 0;
}
