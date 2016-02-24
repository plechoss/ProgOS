#include <stdio.h>
int main(void) {
  double x ; /* déclaration */
  printf("Entrez un réel : "); /* demande à l'utilisateur d'entrer un réel */
  scanf("%lf", &x); /* enregistre la réponse dans x */
  if(x>=-1 && x<1){
    printf("x appartient a I\n");
  }
  else printf("x n'appartient pas a I\n");
}
