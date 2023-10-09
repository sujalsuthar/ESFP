#include <stdio.h>

int main()
{
    float hardness, carbon_content, tensile_strength;

    printf("Enter hardness: ");
    scanf("%f", &hardness);
    printf("Enter carbon content: ");
    scanf("%f", &carbon_content);
    printf("Enter tensile strength: ");
    scanf("%f", &tensile_strength);

    int grade = 5;

    if (hardness > 50 && carbon_content < 0.7 && tensile_strength > 5600)
    {
        grade = 10;
    }
    else if (hardness > 50 && carbon_content < 0.7) 
    {
        grade = 9;
    }
    else if (carbon_content < 0.7 && tensile_strength > 5600) 
    {
        grade = 8;
    }
    else if (hardness > 50 && tensile_strength > 5600) 
    {
        grade = 7;
    }
    else if (hardness > 50 || carbon_content < 0.7 || tensile_strength > 5600) 
    {
        grade = 6;
    }

    printf("Grade: %d\n", grade);

    return 0;
}
