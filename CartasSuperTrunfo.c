#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
    
    int População1, Número_de_Pontos_Turísticos1; //Numero inteiro
    int População2, Número_de_Pontos_Turísticos2; //Separando em carta 1 e 2
    float Área1, PIB1, Área2, PIB2; //ponto flutuante no formato padrão
    char Estado1, Estado2; //apenas uma letra
    char Código1[10], Código2[10]; //conjunto de caracteres 
    char Nome_da_Cidade1[15], Nome_da_Cidade2[15]; //conjunto de caracteres 

    //informações da carta 1 
    
    printf ("Estado: ");
    scanf (" %c", &Estado1);
    
    printf ("Código: ");
    scanf ("%s", Código1);

    printf ("Nome da Cidade: ");
    scanf ("%s", Nome_da_Cidade1);

    printf ("População: ");
    scanf ("%d", &População1);

    printf ("Área: ");
    scanf ("%f", &Área1);

    printf ("PIB: ");
    scanf ("%f", &PIB1);

    printf ("Número de Pontos Turísticos: ");
    scanf ("%d", &Número_de_Pontos_Turísticos1);
  
    //carta 2

    printf ("\nEstado: ");
    scanf (" %c", &Estado2);
    
    printf ("Código: ");
    scanf ("%s", Código2);

    printf ("Nome da Cidade: ");
    scanf ("%s", Nome_da_Cidade2);

    printf ("População: ");
    scanf ("%d", &População2);

    printf ("Área: ");
    scanf ("%f", &Área2);

    printf ("PIB: ");
    scanf ("%f", &PIB2);

    printf ("Número de Pontos Turísticos: ");
    scanf ("%d", &Número_de_Pontos_Turísticos2);

    //exibindo resutado das duas cartas abaixo

    printf ("\nCarta 1: \n");
    printf ("Estado: %c \n", Estado1);
    printf ("Código: %s \n", Código1);
    printf ("Nome da Cidade: %s\n", Nome_da_Cidade1);
    printf ("População: %d \n", População1);
    printf ("Área: %.2f km² \n", Área1);
    printf ("PIB: %.2f bilhões de reais\n", PIB1);
    printf ("Número de Pontos Turísticos: %d\n", Número_de_Pontos_Turísticos1);
    
    //info carta 2

    printf ("\nCarta 2: \n");
    printf ("Estado: %c \n", Estado2);
    printf ("Código: %s \n", Código2);
    printf ("Nome da Cidade: %s \n", Nome_da_Cidade2);
    printf ("População: %d \n", População2);
    printf ("Área: %.2f km² \n", Área2);
    printf ("PIB: %.2f bilhões de reais\n", PIB2);
    printf ("Número de Pontos Turísticos: %d\n", Número_de_Pontos_Turísticos2);
    
    return 0;
    
}    
