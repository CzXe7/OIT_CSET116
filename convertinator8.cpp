/*
Assignemt 8: Convertinator 4000(alpha)
Chris Martin

:;:;:;:;:;PSEUDOCODE:;:;:;:;:;

Repeat this until the user enters E(or e)
Display "Convertinator 4000 (beta)"
Display "Menu: "
Display "A: Convert degrees Fahrenheit to degrees Celsius"
Display "B: Convert degrees Celsius to degrees Fahrenheit"
Display "C: Convert feet to meters"
Display "D: Convert meters to feet"
Display "E: Exit"
Display "Please enter letter above for the conversion you wish to perform: "

Read option
If the user entered an 'A' or 'a'

Display "Fahrenheit degrees? "
Read degreesF
degreesC = (degreesF - 32) × 5 / 9

Display "Result: " degreesF " degrees F = " degreesC " degrees C"
If the user entered an 'B' or 'b'

Display "Celsius degrees? "
Read degreesC
degreesF = 9⁄5 degreesC + 32

Display "Result: " degreesC  " degrees C = "  degreesF "  degrees F"
If the user entered an 'C' or 'c'

Display "Feet? "
Read feet

Display "Inches? "
Read inches
meters = 25.4((feet * 12) + inches) / 1000

Display "Result: " meters " meters"
If the user entered a 'D' or 'd'

Display "Meters "
Read meters
inches = meters * 1000 / 25.4
feet = inches / 12 rounding down
inches = inches modulus 12

Display "Result: " feet " feet" inches " inches "
If the user entered an 'E' or 'e'

Display "Exiting..."

Return 0

Otherwise:
Display "Invalid option - only A-E are allowed"
Return 1

* Display all decimal values to 3 places to the right of the decimal point
*/


#include <iostream>
#include <cmath>
#include <iomanip>

using std::cout;
using std::cin;
using std::endl;
using std::floor;


char menu_choice;

float number;
float degreesC;
float degreesF;
float feet;
double meters;
float inches;
//float floor(inches);





int main()
{
	cout << "Convertinator 4000 (Beta_1.0.1_2)" << endl;

	do
	{
		cout	<< "Menu: " << '\n'
				<< "A : Convert degrees Fahrenheit to degrees Celsius" << '\n'
				<< "B : Convert degrees Celsius to degrees Fahrenheit" << '\n'
				<< "C : Convert feet to meters" << '\n'
				<< "D : Convert meters to feet" << '\n'
				<< "E : Exit" << '\n'
				<< "Please enter letter above for the conversion you wish to perform: " << endl;
		cin >> menu_choice;

		switch (menu_choice)
		{
		case 'A':
			cout << "Enter Degrees Farenheit";
			cin >> degreesF;
			degreesC = (degreesF - 32) * 5 / 9;
			cout << "Result: " << degreesF << "degress F = " << degreesC << "degrees C" << endl;
			break;
		case 'B':
			cout << "Enter Degress Celsius";
			cin >> degreesC;
			degreesF = 9 / ((5 * degreesC) + 32);
			cout << "Result: " << degreesC << "degress C = " << degreesF << "degrees F" << endl;
			break;
		
		case 'C':
			cout << "Enter Feet";
			cin >> feet;
			cout << "Enter Inches";
			cin >> inches;
			feet = floor(inches / 12);
			meters = 25.4 * ((feet * 12) + inches) / 1000;
			cout << "Result: " << meters << "Meters " << endl;
			break;

		case 'D':
			cout << "Enter Meters";
			cin >> meters;
			inches = meters * 1000 / 25.4;
			feet = floor(inches / 12);
			inches = 12 * ((int) inches % 12);
			cout << "Result: " << feet << "Feet " << inches << "inches" << endl;
			break;

		case 'E':
			cout << "Exiting..." << endl;
			return 0;
			break;
		default:
			cout << "Invalid option  -  only A - E are allowed" << endl;
			return 1;
		}

	} while (menu_choice != 'int');

}
