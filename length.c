#include <stdio.h>
// learned of already developed libraries and documentations
#include <string.h>
// https://manual.cs50.io/
int string_length(char s[100]);
int main (void) {
    char name [100];
    printf("Enter something: ");
    scanf("%s", &name);
    int length = string_length(name);
    printf("%i\n",length);
}

int string_length(char s[100]) {
    int i = 0;
    while(s[i] != '\0') {
        i++;
    }
    return i;
}
