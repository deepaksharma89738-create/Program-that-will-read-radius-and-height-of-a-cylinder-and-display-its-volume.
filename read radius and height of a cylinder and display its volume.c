/*Program that will read radius and height of a cylinder and display its volume*/
#include<stdio.h>
int main()
{
    float r, h, volume;
    printf("Enter radius and height of cylinder: ");
    scanf("%f%f", &r, &h);
    volume = 3.14 * r * r * h;
    printf("Volume of cylinder = %.2f", volume);
    return 0;
}