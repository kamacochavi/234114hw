#include <stdio.h>

int main() {
    char cool_letter_input;
    char enter ;
    printf("Please Enter Cool Letter:\n");
    scanf("%c", &cool_letter_input);
    scanf("%c", &enter);
    char capital_cool_input;
    char regular_cool_input;
    char delta = 'a' - 'A' ;
    if(cool_letter_input<'a'){
        capital_cool_input = cool_letter_input;
        regular_cool_input = capital_cool_input + delta;
    }
    else{
        regular_cool_input = cool_letter_input;
        capital_cool_input = cool_letter_input - delta;
    }

    char text_input = '\0';
    printf("Please Enter Text:\n");
    int count = 0;
    int is_valid = 1;
    while (text_input != '\n' ) {
        scanf("%c", &text_input);
        if (text_input <= 'z' && 'a' <= text_input || text_input <= 'Z' && 'A' <= text_input || text_input == ' ') {
            if (text_input == capital_cool_input || text_input == regular_cool_input) {
                count += 1;
            }
        }else{
            if (text_input != '\n'){
                is_valid = 0 ;
            }
        }
    }
    if (!is_valid) {
        count = -1 ;
    }
    printf("The score is: %d", count );

    return 0;
}


