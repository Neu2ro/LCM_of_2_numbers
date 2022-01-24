/* C Program to find LCM of two numbers using Recursion */

#include<stdio.h>

int main()
{

    //Declaring variables
    int a, b, lcm;

    //Declaring Function
    int find_lcm(int, int);

    //Asking user to enter two numbers whose LCM he/she needs
    printf("Enter 2 integers to find LCM of:\n");
    scanf("%d%d", &a, &b);

    //Calling the function
    lcm = find_lcm(a,b);

    //Printing the value of LCM
    printf("LCM of %d and %d is: %d", a, b, lcm);
    return 0;

}

//Function to find the LCM
int find_lcm(int a, int b)
{

    //Initializing a static variable
    static int temp = 1;

    //Using if else to calculate the LCM
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
