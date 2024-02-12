/*calculation of volume and surface area of a cylinder
surface area and volume displayed on one console
Mon, Feb 12 '24*/
#include <stdio.h>

#define PI 3.14159265359

int main()
{
    double radius, height, volume, surface_area;

    printf("Enter the radius of the cylinder: ");
    scanf("%lf", &radius);

    printf("Enter the height of the cylinder: ");
    scanf("%lf", &height);

    // calculating the volume of a cylinder
    volume = PI * radius * radius * height;

    // calculating surface area of a cylinder
    surface_area = 2 * PI * radius * radius + 2 * PI * radius * height;

    //display of volume of cylinder
    printf("Volume of the cylinder: %.2lf\n", volume);

    //display of surface area of cylinder
    printf("Surface area of the cylinder: %.2lf\n", surface_area);

    return 0;
}
