#include <stdio.h>

int age;
int annee;

int main(void)
{
  printf("Quel age avez-vous ?"); scanf("%d", &age);

  annee = 2016 - age;

  printf("The year is %d\n", annee);
}
