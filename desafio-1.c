#include <stdio.h>

int main(void) {
  int INDICE = 13, SOMA = 0, K = 0;

  while (K < INDICE) {
    K++;
    SOMA = SOMA + K;
  }

  printf("O valor total da soma é: %d", SOMA);
}
