#include <stdio.h>

int radius, area;

int main(){
    printf("Enter Radius (i.e 10): ");
    scanf("%d", &radius);
    area = 3.14159 * radius * radius;
    printf("\n\nArea= %d", area);
    return 0;
}

// Output:
// Enter Radius (i.e 10): 10
//
// Area= 314
//
// The program calculates the area of a circle given the radius. The area is calculated using the formula: area = πr^2. The program prompts the user to enter the radius, reads the input, calculates the area, and prints the result. The value of π is approximated as 3.14159. The program then returns 0 to indicate successful execution