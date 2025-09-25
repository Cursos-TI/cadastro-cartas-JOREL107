#include <stdio.h>

int main()
{

    char Estado1;
    char Código1[20];
    char Nome_da_cidade1[20];
    int população1;
    float Área1;
    float PIB1;
    int Numero_de_pontos_Turísticos1;

    char Estado2;
    char Código2[20];
    char Nome_da_cidade2[20];
    int população2;
    float Área2;
    float PIB2;
    int Numero_de_pontos_Turísticos2;

    printf("Super Trunfo Países\n");                                             // Título do programa//
    printf("Dados Para a Carta 1:\n");
    printf("Digite o Estado");
    printf("  (Escolha uma letra entre A e H)\n");
    scanf(" %c", &Estado1);                                                      // atribui uma letra para o estado da carta 1
    printf("Digite o código da Cidade");
    printf("  (O código anterior mais um número de dois digitos EX:A01, A02)\n");
    scanf(" %s", &Código1);                                                       // atribui uma letra e um numero para o estado selecionado
    printf("Digite o nome da cidade  (sem espaços)\n");
    scanf("%s", &Nome_da_cidade1);                                               // Vincula o nome da cidade à carta 1
    printf("Digite a área em Km²\n");
    scanf("%f", &Área1);                                                         // Vincula o tamanho da área à carta 1
    printf("Digite o tamanho da população:\n");
    scanf("%d", &população1);                                                    // vincula a população à carta 1
    printf("Digite o PIB da Cidade    (Em milhões de reais)\n");
    scanf("%f", &PIB1);                                                          // Vincula o valor do PIB à carta 1
    printf("Digite o número de pontos turísticos\n");
    scanf("%d", &Numero_de_pontos_Turísticos1);                                  // vincula o numero de pontos turísticos à carta 1

    printf("Dados Para a Carta 2:\n");                                           // informação adicional para facilitar o entendimento//
    printf("Digite o Estado");
    printf("  (Escolha uma letra entre A e H)\n");
    scanf(" %c", &Estado2);                                                      // atribui uma letra para o estado da carta 2
    printf("Digite o código da Cidade");
    printf("  (O código anterior mais um número de dois digitos EX:A01, A02)\n");
    scanf(" %s", &Código2);                                                       // atribui uma letra e um numero para o estado selecionado
    printf("Digite o nome da cidade  (sem espaços)\n");
    scanf(" %s", &Nome_da_cidade2);                                               // Vincula o nome da cidade à carta 2
    printf("Digite a área em Km²\n");
    scanf("%f", &Área2);                                                         // Vincula o tamanho da área à carta 2
    printf("Digite o tamanho da população:\n");
    scanf("%d", &população2);                                                    // vincula a população à carta 2
    printf("Digite o PIB da Cidade    (Em milhões de reais)\n");
    scanf("%f", &PIB2);                                                          // Vincula o valor do PIB à carta 2
    printf("Digite o número de pontos turísticos\n");
    scanf("%d", &Numero_de_pontos_Turísticos2);                                  // vincula o numero de pontos turísticos à carta 2

    printf("\n");
    printf("\n");
    printf("Carta 1:\n");
    printf("Estado: %c\n", Estado1);                                            // resposta textual referente aos dados adicionados para a carta 1 e 2
    printf("Código: %s\n", Código1);
    printf("Nome da Cidade: %s\n", Nome_da_cidade1);
    printf("População: Cerca de %d de Habitantes\n", população1);
    printf("Área: %.2f Km²\n", Área1);
    printf("PIB: %.2f Milhões de reais\n", PIB1);
    printf("Numero de pontos turísticos: %d\n", Numero_de_pontos_Turísticos1);
    printf("\n");
    printf("Carta 2:\n");
    printf("Estado: %c\n", Estado2);
    printf("Código: %s\n", Código2);
    printf("Nome da Cidade: %s\n", Nome_da_cidade2);
    printf("População: Cerca de %d de Habitantes\n", população2);
    printf("Área: %.2f Km²\n", Área2);
    printf("PIB: %.2f Milhões de reais\n", PIB2);
    printf("Numero de pontos turísticos: %d\n", Numero_de_pontos_Turísticos2);
}