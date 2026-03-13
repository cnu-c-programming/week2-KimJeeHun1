#include <stdio.h>
int main()
{
    printf("% 10s % 10s %10s\n","name", "id", "value");
    printf("% 10s %010d % 10.2f\n", "kim", 12, 4.120000);
    printf("% 10s %010d % 10.2f\n", "lee", 1922, 3.210000);
    printf("% 10s %010d % 10.2f\n", "park", 432, 1.000000);
    return 0;
}
