#include <stdio.h>
int main() {
  const char[] s = "Hello";
  printf("%d\n", s);
  int a = 3 / 0;
  printf("%d\n", a);
  return s;
}
