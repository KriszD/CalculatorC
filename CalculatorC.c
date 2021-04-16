#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#define PI 3.14
int main(void)
{
    //This variable is used for the menu
    int menu;
    //This initializes the variables used for the code
    float value, value2;
    int operation;

    //This initializes the variables used for case 8 (the area)
    float length, width, height, base, radius, area;
    int shape_area;

    //This initializes the variables used for case 15 and 16 (midpoint and slope)
    float x1, x2, y1, y2;

    //Provides information to the user, including what the code is, and the latest patch.
    printf("Calculator in C, made by Krisztian Drimba.\n");
        printf("Patch 1.3.7: NEW CALCULATIONS AVAILABLE! OPTIONS 15 AND 16 ARE BUGGED THEY DO NOT WORK!\n");

    int count = 1; //Loops the code
    while (count >= 1)
    {
    printf("\n--MENU--\n\n 1. Calculator\n 2. Information\n 3. Quit\n");
        scanf("%d", &menu);
        switch(menu){
      case 1:
           //Provides the operations available to the user
    printf("\nPlease input which operation you would like to use:\n\n");
        printf("\nMathematical Operations: \n 1 = Addition\n 2 = Subtraction\n 3 = Division\n 4 = Multiplication\n 5 = Square root\n 6 = Power\n");
            printf("\nGeometrical Operations:\n 7 = Hypotenuse Calculator\n 8 = Area's of shapes\n 15 = Midpoint\n 16 = Slope\n");
                printf("\nMeasurement Operation:\n 9 = centimeter to inches\n 10 = inches to centimeter\n 11 = fahrenheit to celsius\n 12 = celsius to fahrenheit\n 13   = kilograms to pounds\n 14 = pounds to kilograms\n ");
    printf("\nYour choice is: ");
        scanf("%d", &operation);
            goto operation; //This goto is used to send the code to the operation switch case
      case 2: //INFO
            printf(" \n This is a calculator made by Krisztian Drimba in C.  I coded this in my spare time and at school,\n Very soon it will be able to calculate many many things,\n Including mathematical formulas, all the way to geometrical equations.\n As I make this I hope anyone who uses it enjoys it. :')'\n ");
                break;
      case 3: //QUIT
            return 0;
                break;
      default: //DEFAULT
            printf("That was not an option!\n");
                break;

            operation:
        //This switch case is used to take the users choice and to use whats in that case in order to do the calculation they would like
        switch(operation){
      case 1: //ADDITION
            printf("Please input a number:\n");
                scanf("%f", &value);
            printf("Please input the 2nd number:\n");
                scanf("%f", &value2);
            printf("%.1f + %.1f = %.1f\n", value, value2, value+value2);
                break;
      case 2: //SUBTRACTION
            printf("Please input a number:\n");
                scanf("%f", &value);
            printf("Please input the 2nd number:\n");
                scanf("%f", &value2);
            printf("%.1f - %.1f = %.1f\n", value, value2, value-value2);
                break;
      case 3: //DIVISION
            printf("Please input a number:\n");
                scanf("%f", &value);
            printf("Please input the 2nd number:\n");
                scanf("%f", &value2);
            printf("%.1f / %.1f = %.1f\n", value, value2, value/value2);
                break;
      case 4: //MULTIPLICATION
            printf("Please input a number:\n");
                scanf("%f", &value);
            printf("Please input the 2nd number:\n");
                scanf("%f", &value2);
            printf("%.1f * %.1f = %.1f\n", value, value2, value*value2);
                break;
      case 5: //SQUARE ROOT
            printf("Please input a number:\n");
                scanf("%f", &value);
            printf("The square root of %.1f is %.1f\n", value, sqrt(value));
                break;
      case 6: //POWER
            printf("Please input a number:\n");
                scanf("%f", &value);
            printf("Please input the 2nd number:\n");
                scanf("%f", &value2);
            printf("%.1f^%.1f = %.1f\n", value, value2, pow(value,value2));
                break;
      case 7: //PYTHAGOREAN TRIPLE CALCULATOR
            printf("Please input a number:\n");
                scanf("%f", &value);
            printf("Please input the 2nd number:\n");
                scanf("%f", &value2);
            printf("%.1f^2 + %.1f^2 = %.1f\n", value, value2, pow(value, 2) + pow(value2, 2));
                break;
      case 8: //AREA OF SHAPES
            printf("\nPlease input which shape's area you would like to find:\n"); // This block of code displays the options for the areas and then takes the users input
                printf("\n 1 = Square\n 2 = Rectangle\n 3 = Triangle\n 4 = Circle\n");
                    scanf("%d", &shape_area);

        // This switch case inside the switch case allows the user to input another choice to determine which shape it wants to find the area of
        switch(shape_area){
      case 1: //AREA OF SQUARE
            printf("Please input one side length of the square:\n");
                scanf("%f", &length);
                    printf("%.1f is the area of the square\n", area = pow(length, 2)); // The length of one side of a square squared is the area of the square
                break;
      case 2: //AREA OF RECTANGLE
            printf("Please input the width and length of the rectangle seperated by one space:\n");
                scanf("%f %f", &width, &length);
                    printf("%.1f is the area of the rectangle\n", area = length*width); // Length * width is the calculation of the area of a rectangle
                break;
      case 3: //AREA OF TRIANGLE
            printf("Please input the base and height of the triangle seperated by a space:\n");
                scanf("%f %f", &base, &height);
                    printf("%.1f is the area of the triangle\n",  area = (base*height)/2); // Base * height / 2 is the calculation of the area of a triangle
                break;
      case 4: //AREA OF CIRCLE
           printf("Please input the radius of the circle:\n");
                scanf("%f", &radius);
                    printf("%.1f is the area of the circle\n", area = PI*pow(radius, 2)); // pir^2 pi*(radius*radius)
                break;
      default: // DEFAULT
            printf("Error, this was not an option."); //If a case chosen is not one of the cases for the area of a shape it displays this error
                break;
}
                break;

      //Here is where the switch case continues from the area switch case
      case 9: //CM TO IN
            printf("Please input a number :\n");
                scanf("%f", &value);
            printf("%.1f centimeters is %.1f inches\n", value, value/2.54); // / 2.54 is the calculation of centimeters to inches
            printf("%.1f inches is %.1f feet and %.1f yards\n", value/2.54, (value/2.54)/12, ((value/2.54)/12)/3); // This displays the inches in feet and yards (12 inches = 1 foot) (3 feet = 1 yard)
                break;
      case 10: //IN TO CM
            printf("Please input a number :\n");
                scanf("%f", &value);
            printf("%.1f inches is %.1f centimeters\n", value, value*2.54); // * 2.54 is the calculation of inches to centimeters
                break;
      case 11: //F TO C
            printf("Input a temperature in degrees fahrenheit:\n");
                scanf("%f", &value);
            printf("\n%.1f degrees fahrenheit is %.1f degrees celsius\n", value, (value - 32) * 5/9); // Fahrenheit to celsius is the degrees fahrenheit - 32 * 5/9
                break;
      case 12: // C TO F
            printf("Input a temperature in degrees celsius:\n");
                scanf("%f", &value);
            printf("\n%.1f degrees celsius is %.1f degrees fahrenheit\n", value, (value * 9/5) + 32); // Celsius to fahrenheit is the degrees celsius * 9/5 + 32
                break;
      case 13: //KG TO LBS
            printf("Please input a number:\n");
                scanf("%f", &value);
            printf("%.1f kilograms is %.1f pounds\n", value, value * 2.205); // * 2.2o5 is the calculation of kgs to pounds
                break;
      case 14: //LBS TO KG
            printf("Please input a number:\n");
                scanf("%f", &value);
            printf("%.1f pounds is %.1f kilograms\n", value, value / 2.205); // / 2.205 is the calculation of pounds to kgs
                break;
      case 15: //MIDPOINT
            printf("Please input the two x values seperated by a space:\n");
                scanf("%.1f %.1f", &x1, &x2);
            printf("Please input the two y values seperated by a space:\n");
                scanf("%.1f %.1f", &y1, &y2);
            printf("The midpoint of (%.1f + %.1f) /2 + (%.1f + %.1f) /2 = (%.1f,%.1f)\n", x1, x2, y1, y2, (x1+x2)/2, (y1+y2)/2);
                break;

      default: //DEFAULT
            printf("Error, this was not an option."); // If they choose something that is not an option is displays an error
                break;
            }

        }
    }
            count++;
}
