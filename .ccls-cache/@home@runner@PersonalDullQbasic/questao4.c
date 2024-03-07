#include <stdio.h>

int main() {
  float preco_inicial = 100.0f;

  const float IMCS = 0.17f;
  const float CONFINS = 0.076f;
  const float PIS_PASEP = 0.0165f;

  float preco_final = (1 + IMCS + CONFINS + PIS_PASEP) * preco_inicial;

  printf("Preco inicial = %f\n", preco_inicial);
  printf("Preco final = %f\n", preco_final);

    return 0;
}

