#include <stdio.h>
#include <stdbool.h>
 bool IsPremier(int n)
{
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0 && i != n)
            return false;
    }
    return true;
}
int main()
{
 IsPremier();
    return 0;
}