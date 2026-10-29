#include <stdio.h>
#include <math.h>


#define PI 3.14


float calarea(float a);
float calcircu(float b);

int main(void)
{
    
    float r; 
    float area;
    float circumference;
    
   
    printf("Enter the radius: ");
    scanf("%f", &r);
    
    area = calarea(r);
    circumference = calcircu(r);
    
    printf("Area = %f\n", area);
    printf("Circumference = %f\n", circumference);
    
    return 0;
}

float calarea(float a)
{
    return PI * a * a;
}


float calcircu(float b)
{
    return 2.0 * PI * b;
}

