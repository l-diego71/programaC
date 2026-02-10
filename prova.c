#include <stdio.h>

int main(){
    // Carta 1:
    char estado1 = 'C';    // Inicial do Estado
    char codigo1 [4] = "C03"; // Codigo junt + o nulo
    char cidade1[] = "Fortaleza"; // "[]"  Para permitir mais letras
    int populacao1 = 2578483;
    float area1 = 313856;
    float PIB1 = 83000000000;
    int pontoturistico1 = 55;

    // Carta 2:
    char estado2 = 'B';   // Inicial do Estado
    char codigo2 [4] = "B02"; // Codigo junt + o nulo
    char cidade2[] = "Salvador"; // "[]"  Para permitir mais letras
    int populacao2 = 2417678;
    float area2 = 695120;
    float PIB2 = 7610000000;
    int pontoturistico2 = 60;

    // Frases que vão aparecer na tela do usuário para respota :


    printf(" -- Carta 01 --\n");

    printf("Digite os dados da primeira carta  abaixo ~~ \n");
    printf("Estado A-H: \n");
    scanf(" %c", &estado1);

    printf("Codigo da carta (ex: a01): \n");
    scanf("%s", codigo1);

    printf("Nome da cidade: ");
    scanf("%s", cidade1);

    printf("Populacao: ");
    scanf("%d", &populacao1);

    printf("Area Territorial: ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &PIB1);

    printf("Ponto Turisticos: ");
    scanf("%d", &pontoturistico1);

    // ¨¨ Espaço para a carta 02 ¨¨

    printf(" -- Carta 02 --\n");

    printf("Digite os dados da segunda carta abaixo ~~ \n");
    printf("Estado A-H: ");
    scanf(" %c", &estado2);

    printf("Codigo da carta (ex: a01): \n");
    scanf("%s", codigo2);

    printf("Nome da cidade: ");
    scanf("%s", cidade2);

    printf("Populacao: ");
    scanf("%d", &populacao2);

    printf("Area Territorial: ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &PIB2);

    printf("Ponto Turisticos: ");
    scanf("%d", &pontoturistico2);

    // Resultado Final ~~~~
    printf("---------------------- ");  //
    printf("Resultado demonstrativo"); // Essa parte é pra dar espaço aos números para não ficar muito bagunçado !
    printf(" Carta 1 ---------------------- \n");  // 

    // *Cor Laranja é o que vai aparecer na tela, e o em azul é a respota final do cmd

    printf("Estado: %c\nCodigo: %s\n", estado1, codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f Bilhões de reais\n", PIB1);
    printf("Ponto turistico: %d\n", pontoturistico1);

    printf("---------------------- ");  //
    printf("Resultado demonstrativo"); // Essa parte é pra dar espaço aos números para não ficar muito bagunçado !
    printf(" Carta 2 ----------------------\n");  // 
    
    printf("Estado: %c\nCodigo: %s\n", estado2, codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB:  %.2f Bilhões de reais\n", PIB2);
    printf("Ponto turistico: %d\n", pontoturistico2);

    return 0;

}