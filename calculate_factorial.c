#include<stdio.h>  // Include the standard input/output library

int main()
{
    int no = 5;       // This variable store user intput
    int fact_no = 1;  // This variable store the factorial result

    // Loop from 1 to 'no' to calculate the factorial
    for(int i = 1; i <= no; i++)
    {
        fact_no *= i; // Multiply 'fact_no' by 'i' in each iteration
    }

    printf("%d", fact_no);

    return 0;
}
