#include <stdio.h>
int main( ) 
{
  float a, b, c, D, x1, x2;
  a=1;
  b=-7;
  c=0;
  D=b*b - 4*a*c;
  printf("D=%f\n", D);

  if (D>=0)
{
  x1=(-b+sqrt(D))/2/a;
  x2=(-b-sqrt(D))/2/a;
  printf("Корни уравнения:");
  printf("\nx1=%f", x1);
  printf("\nx2=%f", x2);
}
else
printf("\n Корней нет!!!!");
}