#include <stdio.h>

int main(){
    
    int Número_de_Pontos_Turísticos1; //Numero inteiro
    int Número_de_Pontos_Turísticos2; //Separando em carta 1 e 2
    unsigned long int População1, População2;
    float Área1, PIB1, Área2, PIB2; //ponto flutuante no formato padrão
    char Estado1, Estado2; //apenas uma letra
    char Código1[10], Código2[10]; //conjunto de caracteres 
    char Nome_da_Cidade1[15], Nome_da_Cidade2[15]; //conjunto de caracteres 
    float Densidade1, Densidade2;
    float PerCapita1, PerCapita2;
    float SuperPoder1, SuperPoder2;



    //informações da carta 1 
    
    printf ("Estado: ");
    scanf (" %c", &Estado1);
    
    printf ("Código: ");
    scanf ("%s", Código1);

    printf ("Nome da Cidade: ");
    scanf ("%s", Nome_da_Cidade1);

    printf ("População: ");
    scanf ("%u", &População1);

    printf ("Área: ");
    scanf ("%f", &Área1);

    printf ("PIB: ");
    scanf ("%f", &PIB1);

    printf ("Número de Pontos Turísticos: ");
    scanf ("%d", &Número_de_Pontos_Turísticos1);

    Densidade1 = População1 / Área1;
   
    PerCapita1 = PIB1 / População1;

    SuperPoder1 = População1 + Área1 + PIB1 + Número_de_Pontos_Turísticos1 + PerCapita1;
  
    //carta 2

    printf ("\nEstado: ");
    scanf (" %c", &Estado2);
    
    printf ("Código: ");
    scanf ("%s", Código2);

    printf ("Nome da Cidade: ");
    scanf ("%s", Nome_da_Cidade2);

    printf ("População: ");
    scanf ("%u", &População2);

    printf ("Área: ");
    scanf ("%f", &Área2);

    printf ("PIB: ");
    scanf ("%f", &PIB2);

    printf ("Número de Pontos Turísticos: ");
    scanf ("%d", &Número_de_Pontos_Turísticos2);

    Densidade2 = População2 / Área2;
    
    PerCapita2 = PIB2 / População2;

    SuperPoder2 = População2 + Área2 + PIB2 + Número_de_Pontos_Turísticos2 + PerCapita2;
   
    //exibindo resutado das duas cartas abaixo

    printf ("Carta 1: \n");
    printf ("Estado: %c \n", Estado1);
    printf ("Código: %s \n", Código1);
    printf ("Nome da Cidade: %s\n", Nome_da_Cidade1);
    printf ("População: %u \n", População1);
    printf ("Área: %.2f km² \n", Área1);
    printf ("PIB: %.2f bilhões de reais\n", PIB1);
    printf ("Número de Pontos Turísticos: %d\n", Número_de_Pontos_Turísticos1);
    printf ("Densidade Populacional: %f hab/km²\n", Densidade1);
    printf ("PIB per Capita: %f reais\n", PerCapita1);
    printf ("Super Poder: %f\n", SuperPoder1);
    
    //info carta 2

    printf ("\nCarta 2: \n");
    printf ("Estado: %c \n", Estado2);
    printf ("Código: %s \n", Código2);
    printf ("Nome da Cidade: %s \n", Nome_da_Cidade2);
    printf ("População: %u \n", População2);
    printf ("Área: %.2f km² \n", Área2);
    printf ("PIB: %.2f bilhões de reais\n", PIB2);
    printf ("Número de Pontos Turísticos: %d\n", Número_de_Pontos_Turísticos2);
    printf ("Densidade Populacional: %f hab/km²\n", Densidade2);
    printf ("PIB per Capita: %f reais\n", PerCapita2);
    printf ("Super Poder: %f\n", SuperPoder2);
    
    //comparando o nível de poder das cartas 1 e 2

    printf ("\nComparando as cartas:\n");
    printf ("População: Carta 1 venceu (%d)\n", População1 > População2);
    printf ("Área: Carta 1 venceu (%d)\n", Área1 > Área2);
    printf ("PIB: Carta 1 venceu (%d)\n", PIB1 > PIB2);
    printf ("Pontos Turísticos: Carta 1 venceu (%d)\n", Número_de_Pontos_Turísticos1 > Número_de_Pontos_Turísticos2);
    printf ("Densidade Populacional: Carta 2 venceu (%d)\n", Densidade1 < Densidade2);
    printf ("PIB per Capita: Carta 1 venceu (%d)\n", PerCapita1 > PerCapita2);
    printf ("Super Poder: Carta 1 venceu (%d)\n", SuperPoder1 > SuperPoder2);
    
    return 0;
    
}