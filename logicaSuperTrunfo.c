#include <stdio.h>

int main() {

    // Criando as variáveis
    int escolhaAtributo, escolhaAtributo2;
    unsigned long int populacao_1, populacao_2;
    int pontosturisticos_1, pontosturisticos_2;
    float area_1, area_2, pib_1, pib_2;
    char estado_1, estado_2, codcarta_1[5], codcarta_2[5], cidade_1[20], cidade_2[20];

    // Criando as novas variáveis
    float densipopu_1, densipopu_2, pibperca_1, pibperca_2;

    // * Nova propriedade *
    float superPoder1, superPoder2;

    // Variavel para o menu
    int opcao;

    // Variavel para os resultados
    int resultado1, resultado2;

    // Inicializando variáveis para evitar problemas
    populacao_1 = 300;
    populacao_2 = 400;
    pontosturisticos_1 = 4;
    pontosturisticos_2 = 6;
    area_1 = 1521.11;
    area_2 = 100.10;
    pib_1 = 300.50;
    pib_2 = 200.90;
    estado_1 = 'C';
    estado_2 = 'D';
    codcarta_1[5] = "A03";
    codcarta_2[5] = "A02";
    cidade_1[20] = "RiodeJaneiro";
    cidade_2[20] = "SãoPaulo";
    densipopu_1 = 5000.50;
    densipopu_2 = 5200.50;
    pibperca_1 = 50000.27;
    pibperca_2 = 50300.27;
    
    // Mostrando a mensagem "Jogo de Cartas - Super Trunfo" na tela 
    printf("Jogo de Cartas - Super Trunfo\n");

    // Criando o menu interativo com switch 
    printf("Menu Principal\n");
    printf("1. Iniciar Jogo\n");
    printf("2. Ver Regras\n");
    printf("3. Sair do Jogo\n");

    printf("Escolha uma opção: \n");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
    printf("- Carta 1 - \n");
    // Pedindo informações ao usuário, e lendo as informações da carta 1 com printf e scanf
    printf("Digite a letra que representa o estado que está na sua carta: \n");
    scanf(" %c", &estado_1);

    printf("Digite o código da carta: \n");
    scanf("%s", codcarta_1);

    printf("Digite o nome da cidade da carta: \n");
    scanf("%s", cidade_1);

    printf("Digite o número de habitantes da cidade: \n");
    scanf("%lu", &populacao_1);

    printf("Digite a área(km²) da cidade: \n");
    scanf("%f", &area_1); 

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib_1);

    printf("Digite o número de pontos turísticos que há na cidade: \n");
    scanf("%d", &pontosturisticos_1);

    // Calculando a densidade populacional e o PIB per capita da carta 1
    densipopu_1 = (float) populacao_1 / area_1;

    // Convertendo o pib que está em bilhões multiplicando ele por 1x10⁹ (equivalente a 1 bilhão) e depois dividindo pela população
    pibperca_1 = (float) (pib_1 * 1e9) / populacao_1;


    printf("- Carta 2 - \n");
    // Pedindo informações ao usuário, e lendo as informações da carta 2 com printf e scanf
    printf("Digite a letra que representa o estado que está na sua carta: \n");
    scanf(" %c", &estado_2);

    printf("Digite o código da carta: \n");
    scanf("%s", codcarta_2);

    printf("Digite o nome da cidade da carta: \n");
    scanf("%s", cidade_2);

    printf("Digite o número de habitantes da cidade: \n");
    scanf("%lu", &populacao_2);

    printf("Digite a área(km²) da cidade: \n");
    scanf("%f", &area_2); 

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib_2);

    printf("Digite o número de pontos turísticos que há na cidade: \n");
    scanf("%d", &pontosturisticos_2);

    // Calculando a densidade populacional e o PIB per capita da carta 2
    densipopu_2 = (float) populacao_2 / area_2;
    
    pibperca_2 = (float) (pib_2 * 1e9) / populacao_2;

    // Calculando o Super Poder

    superPoder1 = (float) populacao_1 + area_1 + pib_1 + pontosturisticos_1 + pibperca_1 + (1.0f / densipopu_1);

    superPoder2 = (float) populacao_2 + area_2 + pib_2 + pontosturisticos_2 + pibperca_2 + (1.0f / densipopu_2);


    // Apresentando na tela as informações da carta 1
    printf("Carta 1: \n - Estado: %c \n - Código da carta: %s \n - Nome da Cidade: %s \n", estado_1, codcarta_1, cidade_1);   
    printf(" - População: %lu \n", populacao_1);
    printf(" - Área: %.2f km² \n", area_1);
    printf(" - PIB: %.2f bilhões de reais \n", pib_1);
    printf(" - Número de pontos turísticos: %d \n", pontosturisticos_1);
    printf(" - Densidade Populacional: %.2f hab/km² \n", densipopu_1);
    printf(" - PIB per Capita: %.2f reais \n", pibperca_1);
    printf(" - *Super Poder*: %.2f\n", superPoder1);


    // Apresentando na tela as informações da carta 2
    printf("Carta 2: \n - Estado: %c \n - Código da carta: %s \n - Nome da Cidade: %s \n", estado_2, codcarta_2, cidade_2);
    printf(" - População: %lu \n", populacao_2);
    printf(" - Área: %.2f km² \n", area_2);
    printf(" - PIB: %.2f bilhões de reais \n", pib_2);
    printf(" - Número de pontos turísticos: %d \n", pontosturisticos_2);
    printf(" - Densidade Populacional: %.2f hab/km² \n", densipopu_2);
    printf(" - PIB per Capita: %.2f reais \n", pibperca_2);
    printf(" - *Super Poder*: %.2f\n\n", superPoder2);

    // Criando mais um menu interativo com switch
    printf("- Escolha o primeiro atributo da carta a ser comparado -\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Números de Pontos Turísticos\n");
    printf("5. Densidade Demográfica\n");
    scanf("%d", &escolhaAtributo);

    

    switch (escolhaAtributo)
    {
    case 1:

        printf("1º Atributo: População\n");

        if (populacao_1 > populacao_2)
        {
            printf("Carta 1 - %s: %lu\n", cidade_1, populacao_1);
            printf("Carta 2 - %s: %lu\n", cidade_2, populacao_2);
            printf("Vencedor: Carta 1 (%s)\n\n", cidade_1);
        } else if (populacao_1 < populacao_2)
        {
            printf("Carta 1 - %s: %lu\n", cidade_1, populacao_1);
            printf("Carta 2 - %s: %lu\n", cidade_2, populacao_2);
            printf("Vencedor: Carta 2 (%s)\n\n", cidade_2);
        } else
        {
            printf("Carta 1 - %s: %d\n", cidade_1, populacao_1);
            printf("Carta 2 - %s: %d\n", cidade_2, populacao_2);
            printf("Empate!\n\n");
        }

        resultado1 = populacao_1 > populacao_2 ? 1 : 0;

        break;

    case 2:

        printf("1º Atributo: Área\n");

        if (area_1 > area_2)
        {
            printf("Carta 1 - %s: %.2f km²\n", cidade_1, area_1);
            printf("Carta 2 - %s: %.2f km²\n", cidade_2, area_2);
            printf("Vencedor: Carta 1 (%s)\n\n", cidade_1);
        } else if (area_1 < area_2)
        {
            printf("Carta 1 - %s: %.2f km²\n", cidade_1, area_1);
            printf("Carta 2 - %s: %.2f km²\n", cidade_2, area_2);
            printf("Vencedor: Carta 2 (%s)\n\n", cidade_2);
        } else
        {
            printf("Carta 1 - %s: %.2f km²\n", cidade_1, area_1);
            printf("Carta 2 - %s: %.2f km²\n", cidade_2, area_2);
            printf("Empate!\n\n");
        }

        resultado1 = area_1 > area_2 ? 1 : 0;

        break;

    case 3:

        printf("1º Atributo: PIB\n");    

        if (pib_1 > pib_2)
        {
            printf("Carta 1 - %s: %.2f bilhões de reais\n", cidade_1, pib_1);
            printf("Carta 2 - %s: %.2f bilhões de reais\n", cidade_2, pib_2);
            printf("Vencedor: Carta 1 (%s)\n\n", cidade_1);
        } else if (pib_1 < pib_2)
        {
            printf("Carta 1 - %s: %.2f bilhões de reais\n", cidade_1, pib_1);
            printf("Carta 2 - %s: %.2f bilhões de reais\n", cidade_2, pib_2);
            printf("Vencedor: Carta 2 (%s)\n\n", cidade_2);
        } else
        {
            printf("Carta 1 - %s: %.2f bilhões de reais\n", cidade_1, pib_1);
            printf("Carta 2 - %s: %.2f bilhões de reais\n", cidade_2, pib_2);
            printf("Empate!\n\n");
        }

        resultado1 = pib_1 > pib_2 ? 1 : 0;

        break;

    case 4:

        printf("1º Atributo: Números de Pontos Turísticos\n");

        if (pontosturisticos_1 > pontosturisticos_2)
        {
            printf("Carta 1 - %s: %d\n", cidade_1, pontosturisticos_1);
            printf("Carta 2 - %s: %d\n", cidade_2, pontosturisticos_2);
            printf("Vencedor: Carta 1 (%s)\n\n", cidade_1);
        } else if (pontosturisticos_1 < pontosturisticos_2)
        {
            printf("Carta 1 - %s: %d\n", cidade_1, pontosturisticos_1);
            printf("Carta 2 - %s: %d\n", cidade_2, pontosturisticos_2);
            printf("Vencedor: Carta 2 (%s)\n\n", cidade_2);
        } else
        {
            printf("Carta 1 - %s: %d\n", cidade_1, pontosturisticos_1);
            printf("Carta 2 - %s: %d\n", cidade_2, pontosturisticos_2);
            printf("Empate!\n\n");
        }

        resultado1 = pontosturisticos_1 > pontosturisticos_2 ? 1 : 0;

        break;

    case 5:

        printf("1º Atributo: Densidade Demográfica\n"); 

        if (densipopu_1 < densipopu_2)
        {
            printf("Carta 1 - %s: %.2f hab/km²\n", cidade_1, densipopu_1);
            printf("Carta 2 - %s: %.2f hab/km²\n", cidade_2, densipopu_2);
            printf("Vencedor: Carta 1 (%s)\n\n", cidade_1);
        } else if (densipopu_1 > densipopu_2)
        {
            printf("Carta 1 - %s: %.2f hab/km²\n", cidade_1, densipopu_1);
            printf("Carta 2 - %s: %.2f hab/km²\n", cidade_2, densipopu_2);
            printf("Vencedor: Carta 2 (%s)\n\n", cidade_2);
        } else
        {
            printf("Carta 1 - %s: %.2f hab/km²\n", cidade_1, densipopu_1);
            printf("Carta 2 - %s: %.2f hab/km²\n", cidade_2, densipopu_2);
            printf("Empate!\n\n");
        }

        resultado1 = densipopu_1 < densipopu_2 ? 1 : 0;

        break;
    
    default:
        printf("Opção inválida\n");
        break;
    }

    printf("- Escolha o segundo atributo da carta a ser comparado -\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Números de Pontos Turísticos\n");
    printf("5. Densidade Demográfica\n");
    scanf("%d", &escolhaAtributo2);

    if (escolhaAtributo == escolhaAtributo2)
    {
        printf("Você escolheu o mesmo atributo!");
    } else
    {
        switch (escolhaAtributo2)
    {
    case 1:

        printf("2º Atributo: População\n");

        if (populacao_1 > populacao_2)
        {
            printf("Carta 1 - %s: %lu\n", cidade_1, populacao_1);
            printf("Carta 2 - %s: %lu\n", cidade_2, populacao_2);
            printf("Vencedor: Carta 1 (%s)\n\n", cidade_1);
        } else if (populacao_1 < populacao_2)
        {
            printf("Carta 1 - %s: %lu\n", cidade_1, populacao_1);
            printf("Carta 2 - %s: %lu\n", cidade_2, populacao_2);
            printf("Vencedor: Carta 2 (%s)\n\n", cidade_2);
        } else
        {
            printf("Carta 1 - %s: %d\n", cidade_1, populacao_1);
            printf("Carta 2 - %s: %d\n", cidade_2, populacao_2);
            printf("Empate!\n\n");
        }

        resultado2 = populacao_1 > populacao_2 ? 1 : 0;

        break;

    case 2:

        printf("2º Atributo: Área\n");

        if (area_1 > area_2)
        {
            printf("Carta 1 - %s: %.2f km²\n", cidade_1, area_1);
            printf("Carta 2 - %s: %.2f km²\n", cidade_2, area_2);
            printf("Vencedor: Carta 1 (%s)\n\n", cidade_1);
        } else if (area_1 < area_2)
        {
            printf("Carta 1 - %s: %.2f km²\n", cidade_1, area_1);
            printf("Carta 2 - %s: %.2f km²\n", cidade_2, area_2);
            printf("Vencedor: Carta 2 (%s)\n\n", cidade_2);
        } else
        {
            printf("Carta 1 - %s: %.2f km²\n", cidade_1, area_1);
            printf("Carta 2 - %s: %.2f km²\n", cidade_2, area_2);
            printf("Empate!\n\n");
        }

        resultado2= area_1 > area_2 ? 1 : 0;

        break;

    case 3:

        printf("2º Atributo: PIB\n");    

        if (pib_1 > pib_2)
        {
            printf("Carta 1 - %s: %.2f bilhões de reais\n", cidade_1, pib_1);
            printf("Carta 2 - %s: %.2f bilhões de reais\n", cidade_2, pib_2);
            printf("Vencedor: Carta 1 (%s)\n\n", cidade_1);
        } else if (pib_1 < pib_2)
        {
            printf("Carta 1 - %s: %.2f bilhões de reais\n", cidade_1, pib_1);
            printf("Carta 2 - %s: %.2f bilhões de reais\n", cidade_2, pib_2);
            printf("Vencedor: Carta 2 (%s)\n\n", cidade_2);
        } else
        {
            printf("Carta 1 - %s: %.2f bilhões de reais\n", cidade_1, pib_1);
            printf("Carta 2 - %s: %.2f bilhões de reais\n", cidade_2, pib_2);
            printf("Empate!\n\n");
        }

        resultado2 = pib_1 > pib_2 ? 1 : 0;

        break;

    case 4:

        printf("2º Atributo: Números de Pontos Turísticos\n");

        if (pontosturisticos_1 > pontosturisticos_2)
        {
            printf("Carta 1 - %s: %d\n", cidade_1, pontosturisticos_1);
            printf("Carta 2 - %s: %d\n", cidade_2, pontosturisticos_2);
            printf("Vencedor: Carta 1 (%s)\n\n", cidade_1);
        } else if (pontosturisticos_1 < pontosturisticos_2)
        {
            printf("Carta 1 - %s: %d\n", cidade_1, pontosturisticos_1);
            printf("Carta 2 - %s: %d\n", cidade_2, pontosturisticos_2);
            printf("Vencedor: Carta 2 (%s)\n\n", cidade_2);
        } else
        {
            printf("Carta 1 - %s: %d\n", cidade_1, pontosturisticos_1);
            printf("Carta 2 - %s: %d\n", cidade_2, pontosturisticos_2);
            printf("Empate!\n\n");
        }

        resultado2 = pontosturisticos_1 > pontosturisticos_2 ? 1 : 0;

        break;

    case 5:

        printf("2º Atributo: Densidade Demográfica\n"); 

        if (densipopu_1 < densipopu_2)
        {
            printf("Carta 1 - %s: %.2f hab/km²\n", cidade_1, densipopu_1);
            printf("Carta 2 - %s: %.2f hab/km²\n", cidade_2, densipopu_2);
            printf("Vencedor: Carta 1 (%s)\n\n", cidade_1);
        } else if (densipopu_1 > densipopu_2)
        {
            printf("Carta 1 - %s: %.2f hab/km²\n", cidade_1, densipopu_1);
            printf("Carta 2 - %s: %.2f hab/km²\n", cidade_2, densipopu_2);
            printf("Vencedor: Carta 2 (%s)\n\n", cidade_2);
        } else
        {
            printf("Carta 1 - %s: %.2f hab/km²\n", cidade_1, densipopu_1);
            printf("Carta 2 - %s: %.2f hab/km²\n", cidade_2, densipopu_2);
            printf("Empate!\n\n");
        }

        resultado2 = densipopu_1 < densipopu_2 ? 1 : 0;

        break;
    
    default:
        printf("Opção inválida\n");
        break;
    }
    }
    
    printf("-- RESULTADO FINAL --\n");
    printf("Carta 1 x Carta 2\n");
    printf("%s x %s\n", cidade_1, cidade_2);

    if (resultado1 && resultado2)
    {
        printf("*Vencedor*: Carta 1 (%s)\n", cidade_1);
    } else if (resultado1 != resultado2)
    {
        printf("Empate!");
    } else
    {
        printf("*Vencedor*: Carta 2 (%s)\n\n", cidade_2);
    }

        break;

    case 2:
        printf("Regras do Super Trunfo...\n");
        break;

    case 3:
        printf("Saindo do jogo...\n");
        break;
    
    default:
        printf("Opção inválida!\n");
        break;
    }



    return 0;
}