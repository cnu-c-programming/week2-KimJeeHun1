#include <stdio.h>

int main()
{
    int in;
    scanf("%d", &in);
    boolean is=true;
    for(int i=2; i<=in/2; i++){
        if(in%i==0)
        {
            is = false;
            break;
        }
    }
    printf("%d",is);
    return 0;
}

