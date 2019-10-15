/*
Chris Martin
Assignment 5 Gap setting

PSUEDOCODE//

Input Type		Data		Source
decimal		Angle(degrees)	Keyboard


Output Type		Data		Source
decimal			gap			Screen

* Display decimal values to 5 digits to the right of the decimal point.


Additional information:

Pi = 3.14159265

Pi/180  Degree = radian

|x| = absolute value of x

::CODE::

Display prompt "Please enter the angle of the device in degrees: "

Read angle



gap = 7-5 sin(angle-15º) (4+cos(angle +17º)) / .25(1+tan(angle)) 

Display "Use gap setting: " gap



*/


#include <iostream>
#include <cmath>
#include <conio.h>
#include <iomanip>

using std::cout;
using std::cin;
using std::endl;
using std::right;
using std::left;
using std::setw;
using std::abs;

const float pi = 3.14159265f;
const float radianTOdegree = ( pi / 180 );
float degree;
float radian;
double angle;
double gap;
double a;
double b;
double c;




int main()
{

	cout << "Please enter the angle of the device in degrees: ";
	cin >> angle;

	a = radianTOdegree * (-5 * (sin(angle - 15)));
	b = radianTOdegree * (cos(angle + 17));
	c = radianTOdegree * (.25 * (1 + tan(angle)));

	gap = sqrt(abs((7 + a * b) / c));

	cout << "Use gap setting: " << gap; 


	return 0;
}
