/* 
7.Faça um programa em C que leia o valor da horade trabalho e o total de horas trabalhadas no mês e calcule o salário bruto, o salário liquido, e os impostos descontados. Considere IR igual a 25% e INSS igual a 11%.
  */

#include <stdio.h>

int main() {
  float valor_hora_trabalho = 150.00;
  float total_horas_trabalhadas = 100.00;
  const float IR = 0.25 ; 
  const float INSS = 0.11; 
  float salario_bruto = valor_hora_trabalho * total_horas_trabalhadas;
  float imposto_renda = salario_bruto * IR;
  float imposto_previ = salario_bruto * INSS;
  float salario_liquido = salario_bruto - imposto_renda - imposto_previ;

  printf("-------------------------------\n");
  printf("        CONTRACHEQUE       \n");
  printf("-------------------------------\n");
  printf("salario Bruto....: R$ %8.2f\n", salario_bruto);
  printf("imposto Renda....: R$ %8.2f\n", imposto_renda);
  printf("imposto previ....: R$ %8.2f\n",imposto_previ);
  printf("salario liquido..: R$ %8.2f\n", salario_liquido);
  
  
  
  
  
  
  return 0;
}