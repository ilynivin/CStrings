#include <stdio.h>

int main(){
    char greetings[] = "volvo";
    greetings[0] = 'm';
    printf("%s", greetings);
    return 0 ;
}