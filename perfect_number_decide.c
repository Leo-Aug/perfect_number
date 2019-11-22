#include <stdio.h>

int perfect_number_decide(int input)                /*判断一个数是否为完数*/
{
    int i;
    int sum = 0;
    for(i = 1;i < input;i++)                        /*从1递增到所判断的数*/
    {
        if(input % i == 0)
        {
            sum += i;
        }
    }
    return !(input - sum);                          /*若sum==input，返回1；否则返回0*/
}