#include <stdio.h>
#include <string.h>

int main (void) {
    char name [100];
    printf("Enter something: ");
    scanf("%s", &name);
    int length = strlen(name);
    printf("%i\n",length);
}