#include <stdio.h>

int main()  {
   int k; // declaring an integer
   printf("Enter an integer: "); // printing out a prompt
   scanf("%d", &k); //taking user input
   k = 2*k;
   printf("That integer doubled is: %d\n", k);
   return 0;
   }
