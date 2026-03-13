#include <stdio.h>

int main()
{
    int in;
    scanf("%d", &in);
    int is=1;
    if(in==1){
        is=0;
        goto k;
            }
    for(int i=2; i<=in/2; i++){
        if(in%i==0)
        {
            is = 0;
            break;
        }
    }
    k:
    if(is==1)
    printf("true");
    else
    printf("false");
    return 0;
}

