#include <stdio.h>

int main()
{
  int v[99];
  for (int i = 0; i < 99; ++i) v[i] = 98 - i;
  for (int i = 0; i < 99; ++i) v[i] = v[v[i]];

  for (int i = 0; i < 99; ++i) printf("A posição %i: %i\n", i, v[i]);
}
