#include <stdio.h>

int main()
{
    int length,breadth;
    printf("Enter length of reactangle");
    scanf("%d", &length);
    printf("Enter breadth of reactangle");
    scanf("%d", &breadth);
    int area = length * breadth;
    int perimeter = 2 * (length+breadth);
    printf("Area of reactangle = %d\n", area);
    printf("Perimeter of reactangle = %d\n", perimeter);
    return 0;
}