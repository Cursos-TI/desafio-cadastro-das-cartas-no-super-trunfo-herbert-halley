#include <stdio.h>
/*Nivel Basico

Estado (char)
Codigo da Carta (char[])
Nome da Cidade (char[])
Populacao (int)
Area km2 (float)
PIB (float)
Numero de pontos turisticos (int)

1 - Colocar pra uma carta, ler os dados e imprime.
2 - Depois ler uma segunda rodada pra uma segunda carta, imprime
*/

int main ()
{
    char estado[50], codigo[50], cidade[50];
    char estado2[50], codigo2[50], cidade2[50];
    int pontosturisticos,pontosturisticos2;
    unsigned int populacao, populacao2;
    float area, pib;
    float area2, pib2;

    printf("Bem vindo ao Jogo SUPER TRUNFO! Nessa fase Inicial Voce, usuario vai cadastrar 02(Duas) \n"); 
    printf("com os seguintes atributos... \n");
    printf(". \n");
    printf(". \n");
    printf(". \n");

    printf("Digite o Codigo da Carta: \n");
    scanf("%s", &codigo);
    
    printf("Digite um nome de um Estado (Sem ser nome composto): \n");
    scanf("%s", &estado);
    
    printf("Digite o nome da Cidade(Sem ser nome composto): \n");
    scanf("%s", &cidade);
    
    printf("Digite a populacao dessa carta: \n");
    scanf("%d", &populacao);

    printf("Digite quantos pontos turisticos tem essa carta: \n");
    scanf("%d", &pontosturisticos);

    printf("Digite o tamanho em Km2 dessa carta: \n");
    scanf("%f", &area);

    printf("Digite o PIB dessa carta: \n");
    scanf("%f", &pib);

    printf(". \n");
    printf(". \n");
    printf(". \n");
    
    printf("Digite o Codigo da segunda Carta: \n");
    scanf("%s", &codigo2);
    
    printf("Digite o nome de um Estado(Sem ser nome composto): \n");
    scanf("%s", &estado2);
    
    printf("Digite uma Cidade(Sem ser nome composto): \n");
    scanf("%s", &cidade2);

    printf("Digite a populacao dessa carta: \n");
    scanf("%d", &populacao2);

    printf("Digite quantos pontos turisticos tem essa carta: \n");
    scanf("%d", &pontosturisticos2);

    printf("Digite o tamanho em Km2 dessa carta: \n");
    scanf("%f", &area2);

    printf("Digite o PIB dessa carta: \n");
    scanf("%f", &pib2);

    printf(". \n");
    printf(". \n");
    printf(". \n");

    printf("Carta 1: \n");
    printf("Codigo: %s\nEstado: %s\n", codigo, estado);
    printf("Cidade: %s\nPopulacao %d\n", cidade, populacao);
    printf("Pontos Turisticos: %d\nArea: %.2f\nPIB: %.2f\n", pontosturisticos, area, pib);
    printf(". \n");
    printf(". \n");
    printf(". \n");
    printf("Carta 2: \n");
    printf("Codigo: %s\nEstado: %s\n", codigo2, estado2);
    printf("Cidade: %s\nPopulacao %d\n", cidade2, populacao2);
    printf("Pontos Turisticos: %d\nArea: %.2f\nPIB: %.2f\n", pontosturisticos2, area2, pib2);

    printf(". \n");
    printf(". \n");
    printf(". \n");

    printf("CARTAS CADASTRADAS COM SUCESSO!!!");

    printf(". \n");
    printf(". \n");
    printf(". \n");
    
    return 0;
}
