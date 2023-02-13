#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n;
    printf("How many numbers do you want to average? ");
    scanf("%d", &n);
    
    int scores[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter the scores: ");
        scanf("%d", &scores[i]);
    }
    
    printf("Average: %f\n", (scores[0] + scores[1]+ scores[2])/3.0);
}