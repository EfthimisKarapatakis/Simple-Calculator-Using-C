#include <stdio.h>
#include <stdlib.h>

int number1, number2, result;
char operator1;

int main() {
    printf("This is a calculator!\n");
    printf("You can +, -, *, \\ two numbers (exe: 2+2)\n");

    printf("Write: ");
    scanf("%i %c %i", &number1, &operator1, &number2);

    // With if/ else operators:
    /*if (operator1 == '+') {
        result = number1 + number2;
    } else if (operator1 == '-') {
        result = number1 - number2;
    } else if (operator1 == '*') {
        result = number1 * number2;
    } else if (operator1 == '/') {
        result = number1 / number2;
    }
    */

    // With switch operator:
    switch(operator1){
        case '+':
            result = number1 + number2;
            break;
        case '-':
            result = number1 - number2;
            break;~
        case '*':
            result = number1 * number2;
            break;
        case '/':
            result = number1 / number2;
            break;
    }

    printf("Results: %i %c %i = %d",number1, operator1, number2, result);

    return 0;
}
