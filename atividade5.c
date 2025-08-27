#include <stdio.h>
#include <string.h>

#define MAX_EXPRESSIONS 10000
#define MAX_LENGTH 1001 


int is_parentheses_correct(const char *expression) {
    int balance = 0;

    for (int i = 0; expression[i] != '\0'; i++) {
        if (expression[i] == '(') {
            balance++;
        } else if (expression[i] == ')') {
            balance--;
            if (balance < 0) {
              
                return 0;
            }
        }
    }

   
    return balance == 0;
}

int main() {
    char line[MAX_LENGTH];

   
    while (fgets(line, sizeof(line), stdin)) {
        
        line[strcspn(line, "\n")] = '\0';

        if (is_parentheses_correct(line)) {
            printf("correct\n");
        } else {
            printf("incorrect\n");
        }
    }

    return 0;
}