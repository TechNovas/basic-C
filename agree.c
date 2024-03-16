#include <stdio.h>

int main(){
    char c; // 1 byte (-127-+127)
    printf("Do you agree? ");
    scanf(" %c", &c);

    if (c == 124 || c == 92)
    {
        printf("Agreed.\n");
    }
    else if(c == 110 || c == 78)
    {
    } else {
        printf("Not agreed.\n");
        printf("%d\n", c);
    }

    return 0;
}