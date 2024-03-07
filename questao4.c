#include <stdio.h>

int main() {
  float preco_inicial = 100.0f;

  const float IMCS = 0.17f;
  const float CONFINS = 0.076f;
  const float PIS_PASEP = 0.0165f;


  float valor_imcs = preco_inicial * IMCS;
  float valor_confins = preco_inicial * CONFINS;
  float valor_pis_pasep = preco_inicial * PIS_PASEP;
  float preco_final = (1 + IMCS + CONFINS + PIS_PASEP) * preco_inicial;
  

  printf("Preco inicial = %f\n", preco_inicial);
  printf("Valor do imposto de ICMS = %f\n", valor_imcs);
  printf("Valor do imposto de CONFINS = %f\n", valor_confins);
  printf( "Valor do imposto de PIS/PASEP = %f\n", valor_pis_pasep);
  printf("Preco final = %f\n", preco_final);
    return 0;
}

