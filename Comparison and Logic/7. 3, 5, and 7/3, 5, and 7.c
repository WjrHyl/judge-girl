#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
    int n;
    scanf("%d",&n);
    if(n%15==0&&n%7!=0)
    {
    printf("0\n");
    } 
    else
    {
    printf("1\n");
    }
    return 0;
}