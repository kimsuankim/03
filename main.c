#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
   int num1;
   int num2;
   
   printf("enter a number1 : ");
   scanf("%d", &num1);
   
   printf("enter a number2 : ");
   scanf("%d", &num2);
   
   float i;
   i = (float)num1/num2;
   
   
   printf("result is %f\n ", i);
   
	return 0;
}
