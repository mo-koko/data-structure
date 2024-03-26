#include <stdio.h>

int Fibonacci(int n)
{
    if (n <= 0)
        return 0;
    else if (n ==1)
        return 1;
    return Fibonacci(n-1) + Fibonacci (n-2);
}
int main()
{
    int n, i;
    printf("몇 번째까지 피보나치 수열을 구할까요? : ");
    scanf("%d", &n);

    for(i = 1; i < n+1; i++)
    {
        printf("%d번째 수 ", i);
        printf("%d\n", Fibonacci(i));
    }
    return 0;
}
