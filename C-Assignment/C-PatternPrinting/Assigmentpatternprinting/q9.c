#include <stdio.h>

int main()
{
    int n=64;
    for(int i=65;i<=69;i++){
        for(int j=65;j<=i;j++){
            printf("%d",j);
        }
        printf("\n");
    }

    return 0;
}