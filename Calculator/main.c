#include <stdio.h>

int main() {

    char op;
    double first, second;

    printf("Enter an operator: +, -, *, /:  \n");
    scanf("%c", &op);
    printf("Enter two operands: \n");
    scanf("%lf %lf", &first, &second);

    switch(op) {
        case '+':
            printf("%.1lf + %.1lf = %.1lf", first, second, first + second);
            break;
        case '-':
            printf("%.1lf - %.1lf = %.1lf", first, second, first - second);
            break;
        case '*':
            printf("%.1lf * %.1lf = %.1lf", first, second, first * second);
            break;
        case '/':
            if(second != 0)
                printf("%.1lf / %.1lf = %.1lf", first, second, first / second);
            else
                printf("Error! Division by zero.\n");
            break;
        default:
            printf("Error! Operator is not correct.");
    }

    return 0;
}
