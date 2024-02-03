#include <stdio.h>
#define DELTA 'a'-'A'

char toUpperCase(char letter){
    if ( letter >= 'a' || letter <= 'z')
    {
        letter = letter - DELTA ; // letter = letter - delta;
    }

    return  letter;
}
char toLowerCase(char letter){
    if ( letter >= 'A' || letter <= 'Z')
    {
        letter = letter + DELTA ;
    }

    return letter;
}



int main() {
    char little_a = 'a';
    printf("%c", toUpperCase(little_a));
    
    char change = toLowerCase(toUpperCase(little_a));
    printf("%c",  change);

    return 0;
}
