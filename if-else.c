#include <stdio.h>
int main()
{
    int A, B, C;
    scanf("%d%d%d", &A, &B, &C);
    if (A > B)
    {
        if (A > C)
        {
            printf("%d is greater", A);
        }
        else
        {
            printf("%d is greater", C);
        }
    }
    else
    {
        if (B > C)
        {
            printf("%d is greater", B);
        }
        else
        {
            printf("%d is greater", C);
        }
    }
    return 0;
}
