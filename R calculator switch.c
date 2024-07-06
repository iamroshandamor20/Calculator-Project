#include<stdio.h>
int main()
{
	printf("******MENU******");
	printf("\nClick  1  for Adition");
	printf("\nClick  2  for Substraction");
	printf("\nClick  3  for Product");
	printf("\nClick  4  for Division");
	printf("\nClick  5  for Exit");
	
	char op;
	float num1,num2,result;
	  printf("Enter [number 1] [+ - * /] [number 2]\n");

    
    scanf("%f %c %f", &num1, &op, &num2);
	
	 switch(op)
    {
        case '+': 
            result = num1 + num2;
            break;

        case '-': 
            result = num1 - num2;
            break;

        case '*': 
            result = num1 * num2;
            break;

        case '/': 
            result = num1 / num2;
            break;    

        default: 
            printf("wrong operator");
	
	return 0;
	}
	
}
