#include <stdio.h>

int main() {
    int num = 33;
    if (num % 15 == 0)
      printf ("fizzbuzz \n");
    else if (num % 3 == 0)
      printf ("fizz \n");
    else if (num % 5 == 0)
      printf ("buzz \n");
    else
      printf ("%d \n", num);
return 0; 
}
