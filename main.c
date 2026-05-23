#include <stdio.h>
int absolute(int x ){
    if(x<0){return -x;}
    else {return x;}}

int add(int a ,int b){
    int result = a+b ;
return result;}

int subtract(int a , int b){
    int result =absolute(a-b);
    return result;}

int multiply(int a, int b){int result = a*b;
    return result;}

float divide (float a  ,float b){ float result = a/b ;
    return result ;}



int main(){
    int num1, num2, sum , product , modulus, difference ;
    float quotient;
    printf("Enter the first number:");
    scanf ("%d", &num1);

    printf("Enter the second number:"); 
    scanf ("%d", &num2);
   
    sum = add(num1 , num2);
    printf("The sum is: %d\n", sum);
   


    product =multiply(num1 , num2);
    printf("The product is %d\n", product);


    difference =subtract(num1 , num2);
    printf("The difference is %d\n", difference );


   if (num2 != 0)
{
    modulus = num1 % num2;
    printf("The remainder is %d\n", modulus);

    quotient = divide(num1, num2);
    printf("The quotient is %3.2f\n", quotient);
}
else
{
    printf("Cannot divide or find remainder when the second number is 0\n");
}
}
