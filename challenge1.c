#include <stdio.h>

int main()
{
    int sub1,sub2,sub3,sub4,sub5;
    int total;
    float average, percentage;

    printf("Enter marks of 5 subjects: ");
    scanf("%d %d %d %d %d", &sub1, &sub2, &sub3, &sub4, &sub5);

    total = sub1+sub2+sub3+sub4+sub5;
    average = total / 5.0;
    percentage = (total / 500.0) * 100;

    printf("Total = %d\n", total);
    printf("Average = %.2f\n", average);
    printf("Percentage = %.2f%%\n", percentage);

    return 0;
}