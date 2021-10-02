


#include<stdio.h>

int find_lcm(int, int);  

int main()
{   int a=12, b=30, lcm;
    lcm = find_lcm(a,b);
    printf("Input first number: %d\n",a);
    printf("Input second number: %d\n",b);
    printf("LCM of %d and %d is= %d", a, b, lcm);
    return 0;
}

int find_lcm(int a, int b)
{
    static int temp = 1;    
    if(temp%a == 0 && temp%b == 0)
    {
        return temp;
    }
    else
    {
        temp++;
        find_lcm(a,b);
        return temp;
    }
}
