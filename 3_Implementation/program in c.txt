#include <stdio.h>
int main(){
    char op;
    int n1, n2, result;
    printf("Enter an Operator (+, -, *, /,%): ");
    scanf("%c", &op);
    printf("Enter two operands: \n");
    scanf("%d %d", &n1, &n2);
    
    switch(op){
        case '+':
            result = n1 + n2;
            break;
        case '-':
            result = n1 - n2;
            break;
        case '*':
            result = n1 * n2;
            break;
        case '/':
            result = n1 / n2;
            break;
        case '%':
            result = n1 % n2;
            break;
        default: 
            printf("/n Ooops! You have entered invalid operator.");
    }
    printf("The Result is = %d", result);
    return 0;
}
