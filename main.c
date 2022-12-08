#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h> 


int main()
{
    printf(" MARKET CALCULATOR \n");

    float num1, num2, answer;
    char op;

    printf(" Enter your calculation: ");
    scanf("%f %c %f", &num1, &op, &num2);

    switch (op)
    {
    case '+':
        answer = num1 + num2;
        printf("%f", answer);
        break;

    case '*':
        answer = num1 * num2;
        printf("%f", answer);
        break;
    
    case '-':
        answer = num1 - num2;
        printf("%f", answer);
        break;

    case '/':
        answer = num1 / num2;
        printf("%f", answer);
        break;

    case '^':
        answer = pow(num1,num2); 
        printf("%f", answer);
        break;

    default:
        printf("invalid operator \n");
        break;
    }


    return 0;
}


