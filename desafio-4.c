#include <stdio.h>

int main() {

  // calores de faturamento por estado
  float sp = 67836.43;
  float rj = 36678.66;
  float mg = 29229.88;
  float es = 27165.48;
  float outros = 19849.53;

  // calculando o faturamento total
  float faturamento_total = sp + rj + mg + es + outros;

  // calculando os percentuais de cada estado
  float perc_sp = (sp / faturamento_total) * 100;
  float perc_rj = (rj / faturamento_total) * 100;
  float perc_mg = (mg / faturamento_total) * 100;
  float perc_es = (es / faturamento_total) * 100;
  float perc_outros = (outros / faturamento_total) * 100;

  // mostrando resultados
  printf("Percentual de representação de cada estado:\n");
  printf("SP: %.2f%%\n", perc_sp);
  printf("RJ: %.2f%%\n", perc_rj);
  printf("MG: %.2f%%\n", perc_mg);
  printf("ES: %.2f%%\n", perc_es);
  printf("Outros: %.2f%%\n", perc_outros);

  return 0;
}
