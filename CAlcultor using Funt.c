#include<stdio.h>
float add(int n1, int n2)
{
	float result;
	result=n1+n2;
	return result;
}
float sub(int n1, int n2)
{
	float result;
	result=n1-n2;
	return result;
}
float mult(int n1, int n2)
{
	float result;
	result=n1*n2;
	return result;
}
float div(int n1,int n2)
{
	float result;
	result=n1/n2;
	return result;
}
int main()
{
int val1,val2;
float add_result,sub_result,mult_result,div_result;
printf("Enter The Value");
scanf("%d%d",&val1,&val2);
add_result=add(val1,val2);
sub_result=sub(val1,val2);
mult_result=mult(val1,val2);
div_result=div(val1,val2);
printf("Add Value  : %.2f\n\n",add_result);
printf("substerct Value  : %.2f\n\n",sub_result);
printf("AMultiplication Value  : %.2f\n\n",mult_result);
printf("Division Value  : %.2f\n\n",div_result);
}
