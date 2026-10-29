
#include <stdio.h>
#include <math.h>

float calculateDiscriminant(float a, float b, float c);

void calculateRoots(float a, float b, float discriminant,
                    float *r1, float *r2);

int main(void)
{
    float a, b, c;
    float r1, r2;

    printf("Enter value for a: ");
    scanf("%f", &a);

    printf("Enter value for b: ");
    scanf("%f", &b);

    printf("Enter value for c: ");
    scanf("%f", &c);

    if (a == 0)
    {
        printf("Error: a cannot be zero.\n");
        return 1;
    }

    float discriminant = calculateDiscriminant(a, b, c);

    if (discriminant < 0)
    {
        printf("There are no real roots.\n");
    }
    else
    {
        calculateRoots(a, b, discriminant, &r1, &r2);

        printf("The roots are %.2f and %.2f\n", r1, r2);
    }

    return 0;
}

// Calculate the discriminant
float calculateDiscriminant(float a, float b, float c)
{
    return (b * b) - (4.0 * a * c);
}

// Calculate r1 and r2
// r1 and r2 are ROOTS
void calculateRoots(float a, float b, float discriminant,
                    float *r1, float *r2)
{
    *r1 = (-b + sqrt(discriminant)) / (2.0 * a);
    *r2 = (-b - sqrt(discriminant)) / (2.0 * a);
}
