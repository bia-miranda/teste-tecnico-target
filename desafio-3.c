#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
  int dia;
  double faturamento;
} Faturamento;

#define maximo_dias 31

int main() {

  Faturamento s[maximo_dias] = {
      {1, 22174.1664},  {2, 24537.6698},  {3, 26139.6134},  {4, 0.0},
      {5, 0.0},         {6, 26742.6612},  {7, 0.0},         {8, 42889.2258},
      {9, 46251.174},   {10, 11191.4722}, {11, 0.0},        {12, 0.0},
      {13, 3847.4823},  {14, 373.7838},   {15, 2659.7563},  {16, 48924.2448},
      {17, 18419.2614}, {18, 0.0},        {19, 0.0},        {20, 35240.1826},
      {21, 43829.1667}, {22, 18235.6852}, {23, 4355.0662},  {24, 13327.1025},
      {25, 0.0},        {26, 0.0},        {27, 25681.8318}, {28, 1718.1221},
      {29, 13220.495},  {30, 8414.61}};

  double menor = __DBL_MAX__;
  double maior = -__DBL_MAX__;
  double soma = 0.0;
  int sValidos = 0;
  int sAcimaMe = 0;

  // Calcula o menor, maior valor e a soma dos faturamentos
  for (int i = 0; i < maximo_dias; i++) {
    if (s[i].faturamento > 0) { // Ignora os dias sem faturamento
      if (s[i].faturamento < menor) {
        menor = s[i].faturamento;
      }
      if (s[i].faturamento > maior) {
        maior = s[i].faturamento;
      }
      soma += s[i].faturamento;
      sValidos++;
    }
  }

  // Calcula a média
  double me = soma / sValidos;

  // Conta os diass com faturamento acima da média
  for (int i = 0; i < maximo_dias; i++) {
    if (s[i].faturamento > me) {
      sAcimaMe++;
    }
  }

  // Exibe os resultados
  printf("Menor valor de faturamento: %.2f\n", menor);
  printf("Maior valor de faturamento: %.2f\n", maior);
  printf("Número de dias com faturamento acima da média: %d\n", sAcimaMe);

  return 0;
}
