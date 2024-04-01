#include <stdio.h>

int main() {
    int i=2, j;
    printf("Enter a number");
    scanf("%d",&j);
    while (i<j){
        if (j%i==0){
            printf("your number is not prime");
            break;
        }
        i++;
    }
    if(j==i) {
        printf("Your number is prime");
    }
    return 0;
}
