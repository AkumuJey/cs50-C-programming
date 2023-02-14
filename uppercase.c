#include <stdio.h>
#include <string.h>
#include <ctype.h>


// First option
int main (void) {
    char name [100];
    printf("Enter something: ");
    scanf("%s", &name);
    for (int i = 0, n = strlen(name); i < n; i++)
    {
        if (name[i] >= 'a' && name[i] <= 'z') {
            printf("%c", name[i] -32);
        }
        else {
            printf("%c", name[i]);
        }
    }
    printf("\n");
}


// // Alternative approach

int main (void) {
    char name [100];
    printf("Enter something: ");
    scanf("%s", &name);
    for (int i = 0, n = strlen(name); i < n; i++)
    {
        if (islower(name[i]) != 0) {
            printf("%c", name[i] -32);
        }
        else {
            printf("%c", name[i]);
        }
    }
    printf("\n");
    return 0;
} 

// Greater improvement
int main (void) {
    char name [100];
    printf("Enter something: ");
    scanf("%s", &name);
    for (int i = 0, n = strlen(name); i < n; i++)
    {
        if (islower(name[i]) != 0) {
            printf("%c",toupper( name[i]));
        }
        else {
            printf("%c", name[i]);
        }
    }
    printf("\n");
    return 0;
} 
// No more reinvention of the wheel
int main (void) {
    char name [100];
    printf("Enter something: ");
    scanf("%s", &name);
    for (int i = 0, n = strlen(name); i < n; i++)
    {
            printf("%c",toupper( name[i]));        
    }
    printf("\n");
    return 0;
} 

