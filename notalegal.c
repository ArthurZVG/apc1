# include <stdio.h>
int main(){
  printf("--------------------------------\n");
  printf("        \x1b[31m NOTA LEGAL\x1b[0m\n");
  printf("--------------------------------\n");
  printf("ITEM        QTD VALOR\n");
  printf(" %-13s %03i %8.2f\n","Banana nanica", 1, 15.00);
  printf(" %-13s %03i %8.2f\n","Maca Fuji", 10, 50.00);
  printf(" %-13s %03i %8.2f\n","Uva globo", 5 , 26.00);
  //printf("Banana nanica  1  15.00\n");
  //printf("Maca fuji      10  50.00\n");
  //printf("Uva globo      5   26.00\n");
  printf("--------------------------------\n");
  printf("\x1b[34mTotal.........: R$ %8.2f\x1b[0\n", 91.00);
}