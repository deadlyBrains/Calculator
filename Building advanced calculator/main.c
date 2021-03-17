#include <stdio.h>
#include <stdlib.h>

int main(){

    double num1;
    double num2;
    char op;

    printf("This a calculator that can carry out all the basic mathematical operations, i.e., addition, subtraction, multiplication and division.\n");
    printf("Enter a number: ");
    scanf("%lf", &num1);
    printf("Enter operator: ");
    scanf(" %c", &op);
    printf("Enter second number: ");
    scanf("%lf", &num2);

    if(op == '+'){
        printf("%f", num1 + num2);
    }
    else if(op == '-') {
        printf("%f", num1 - num2);
    }
    else if(op == '*') {
        printf("%f", num1 * num2);
    }
    else if(op == '/') {
        printf("%f", num1/num2);
    }
    else{
        printf("An invalid operator was entered into the calculator.");
    }

    return 0;
}
