#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

double calculate(double a, double b, char operation) {
	double ans = 0;
	
	switch (operation) {
		case '+':
			ans = a + b;
			printf("> %.2lf\n", ans);
			break;
		case '-':
			ans = a - b;
            printf("> %.2lf\n", ans);
			break;
		case '*':
			ans = a * b;
			printf("> %.2lf\n", ans);
            break;
		case '/':
			if (b == 0){
				printf("> error cannot divide by zero\n");
			}
			else {
				ans = a / b;
				printf("> %.2lf\n", ans);
			}
			break;
		default:
			printf("> incorrect operation\n");
	}
	return ans;
}
	
int main()
{
    printf("Enter calculations in the form a ? b to get your result,\ninput \"off\" to turn the calculator off.\n");
    printf("Enter \"ans\" to get previous answer\n");
    
    char input[10] = "";
    char plca[10] = "";
    char plcb[10] = "";
    double a, b, ans = 0;
    char operation;
    
    while (strcmp(input,"off") != 0) {
        fgets(input, sizeof(input), stdin);
        
        if (strcmp(input, "off") == 0) {
            break;
        }
                
        if (sscanf(input,"%s %c %s", plca, &operation, plcb ) != 3) {
            continue;
        }
               
        if (strcmp(plca, "ans") == 0) {
            a = ans;
        }
        else {
            a = atof(plca);
        }
        
        if (strcmp(plcb, "ans") == 0) {
            b = ans;
        }
        else {
            b = atof(plcb);
        }
        
        
        ans = calculate(a, b, operation);
	}
    return 0;
}

