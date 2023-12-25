#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main()
{
    printf("Enter calculations in the form a ? b to get your result,\ninput \"off\" to turn the calculator off.\n");
    char input[10] = "";
    char plc[10] = "";
    double a, b, ans = 0;
    char operation;
    while (strcmp(input,"off") != 0) {
        
        fgets(input, sizeof(input), stdin);
        
        
        if (strcmp(input, "off") == 0) {
            break;
        }
        
        
        if (sscanf(input,"%s %c %lf", plc, &operation, &b ) != 3) {
            continue;
        }
        
        
        if (strcmp(plc, "ans") == 0) {
            a = ans;
        }
        else {
            a = atof(plc);
        }
        
        
        switch (operation) {
            case '+':
                ans = a + b;
                printf("%.2lf\n", ans);
                break;
            case '-':
                ans = a - b;
                printf("%.2lf\n", ans);
                break;
            case '*':
                ans = a*b;
                printf("%.2lf\n", ans);
                break;
            case '/':
                ans = a / b;
                printf("%.2lf\n", ans);
        }
    }
    return 0;
}
