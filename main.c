#include <stdio.h>


int main(){
    int num1, num2, sum , product , modulus, difference , quotient;
    printf("Enter the first number:");
    scanf ("%d", &num1);

    printf("Enter the second number:"); 
    scanf ("%d", &num2);
   
    sum = num1 + num2;
    printf("The sum is: %d\n", sum);
   


    product = num1*num2;
    printf("The product is %d\n", product);


    difference =num2-num1 ;
    printf("The difference is %d\n", difference );


    modulus = num2%num1;
    printf("The remainder is %d\n", modulus);

if  (num1 != 0) 
{
    quotient = num2/num1;
printf("The quotient is %d\n", quotient);}
if (num1 = 0)
{
    printf("Cannot divide by 0\n");
    printf("num1 =0");
}

    return 0;

}