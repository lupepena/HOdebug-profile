#include <stdio.h>
/*segmention fault: cuando intentas acceder a un lugar de memoria que no está permitido, por ejemplo pued eprovocar que dos variables se pisan*/
int add_array(int *a, int *b, int n){
  int sum = 0;
  int i = 0;
  for (i = 0; i < n; i++) {
    sum += abs(a[i]);
    sum += abs(b[i]);
  };
  return sum;
}

int main(int argc, char **argv) {
  int *a, *b;
  int n = 3;
  int i, sum;
  a = malloc(sizeof(int) * n); /*aca les asigno un tamaño a a y b para que no se pisen, es el error que corregí*/
  b = malloc(sizeof(int) * n);
  for (i = 0; i < n; i++) {
    a[i] = i;
    b[i] = i;
  }
  sum = add_array(a, b, 3);
  printf("The addition is %d\n", sum);
  return 0;
}
