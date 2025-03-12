#include <stdio.h>

int main(){
    //Informações carta 1
    char Estado1[2];
    char Codigo1[4];
    char Cidade1[20];
    int Populacao1;
    float Area1;
    float PIB1;
    int PontosTuristicos1;

    //Informações carta 2
    char Estado2[2];
    char Codigo2[4];
    char Cidade2[20];
    int Populacao2;
    float Area2;
    float PIB2;
    int PontosTuristicos2;


    //Perguntas da Carta 1---------------------------------------------------------------------

    //Estado
    printf("Primeira Carta:\n\nPor favor, insira uma letra para o seu Estado: \n");
    scanf("%s", &Estado1); 

    //Codigo
    printf("Agora insira um codigo para a carta: \n");
    scanf("%s", &Codigo1);

    //Cidade
    printf("Insira o nome da cidade: \n");
    scanf("%s", &Cidade1);

    //População
    printf("Insira a quantidade populacional: \n");
    scanf("%d", &Populacao1);

    //Area(Territorio)
    printf("Insira o tamanho do territorio: \n");
    scanf("%f", &Area1);

    //PIB
    printf("Insira o PIB: \n");
    scanf("%f", &PIB1);

    //Pontos Turisticos
    printf("Insira a quantidade de Pontos Turisticos: \n");
    scanf("%d", &PontosTuristicos1);

    //Imprimir as informações coletadas:
    //Carta 1
    printf("\nCarta 1: \n");
    printf("Estado: %s \n", Estado1);
    printf("Codigo: %s \n", Codigo1);
    printf("Cidade: %s \n", Cidade1);
    printf("População: %d \n", Populacao1);
    printf("Área: %f km² \n", Area1);
    printf("PIB: %f Bilhiões de reais \n", PIB1);
    printf("Pontos Turisticos: %d \n", PontosTuristicos1);
    printf("\n");

    //Perguntas da Carta 2 --------------------------------------------------------------------

    //Estado
    printf("\nAgora Vamos para a segunda Carta!\n\nPor favor, insira uma letra para o seu Estado: \n");
    scanf("%s", &Estado2);

    //Codigo
    printf("Agora insira um codigo para a carta: \n");
    scanf("%s", &Codigo2);

    //Cidade
    printf("Insira o nome da cidade: \n");
    scanf("%s", &Cidade2);

    //População
    printf("Insira a quantidade populacional: \n");
    scanf("%d", &Populacao2);

    //Area(Territorio)
    printf("Insira o tamanho do territorio: \n");
    scanf("%f", &Area2);

    //PIB
    printf("Insira o PIB: \n");
    scanf("%f", &PIB2);

    //Pontos Turisticos
    printf("Insira a quantidade de Pontos Turisticos: \n");
    scanf("%d", &PontosTuristicos2);

    //Imprimir as informações coletadas:
    //Carta 2
    printf("\nCarta 2: \n");
    printf("Estado: %s \n", Estado2);
    printf("Codigo: %s \n", Codigo2);
    printf("Cidade: %s \n", Cidade2);
    printf("População: %d \n", Populacao2);
    printf("Área: %f km² \n", Area2);
    printf("PIB: %f Bilhiões de reais \n", PIB2);
    printf("Pontos Turisticos: %d \n", PontosTuristicos2);
    printf("\n");


}
