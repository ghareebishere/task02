/**
 * C program to enter marks of five subjects and find percentage and grade
 */

#include <stdio.h>

int main()
{
    int phy, chem, bio, math, comp; 
    float per; 

    /* Input marks of five subjects from user */
    printf("Enter five subjects marks:(physics, chemistry, biology, math, computer) ");
    scanf("%d%d%d%d%d", &phy, &chem, &bio, &math, &comp);


    /* Calculate percentage */
    per = (phy + chem + bio + math + comp) / 50.0;

    printf("Percentage = %.2f\n", per);


    /* Find grade according to the percentage */
    if(per >= 9)
    {
        printf("Grade A");
    }
    else if(per >= 8)
    {
        printf("Grade B");
    }
    else if(per >= 7)
    {
        printf("Grade C");
    }
    else if(per >= 6)
    {
        printf("Grade D");
    }
    else if(per >= 4)
    {
        printf("Grade E");
    }
    else
    {
        printf("Grade F");
    }

    return 0;
}