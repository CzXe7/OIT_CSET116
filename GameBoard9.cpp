//Chris Martin
//Assignment 9: GameBoard
/*
Given a 10 by 10 cell game board with 0, 0 in the lower left and 9, 9 in the upper right

Randomly generate an integer x and y coordinate(using rand function)

Prompt the for an integer xand y coordinate

Symbols on the game board :

If user guess = random coordinate : *

Random coordinate marker : X

User guess marker : 0 (character zero)

Empty spaces within <= 5 of random coordinate : ░(B0 hex)

Empty spaces within > 5 of random coordinate : ▓(B2 hex)



When outputting the game board output an empty line before and after the game board and include row numbers on the left hand side and column numbers along the bottom.

Distance formula :

2d cartesian distance formula

For example if the random coordinate was 5, 6 and the user guessed coordinate was 3, 4 the outputted gameboard you output should look like this :



	9▓░░░░░░░░░
	8▓░░░░░░░░░
	7▓░░░░░░░░░
	6░░░░░X░░░░
	5▓░░░░░░░░░
	4▓░░0░░░░░░
	3▓░░░░░░░░░
	2▓▓░░░░░░░▓
	1▓▓▓▓▓░▓▓▓▓
	0▓▓▓▓▓▓▓▓▓▓
	0123456789


	Please use separate functions for distanceand the character to output at least. */

#include <iostream>
#include <cmath>
#include <iomanip>
#include <ctime>


using std::cout;
using std::cin;
using std::endl;
using std::rand;
using std::pow;


unsigned char CalcOUTGeorge(int usercoord[2], int gamecoord[2], int currentcoord[2]);

//float distance(int XYa[2], int XYb[2]);
//void coordcheck(int x, int y, int userX, int userY, int gameX , int gameY)

int main()
{

	int usercoord[2];
	int gamecoord[2];
	int currentcoord[2];



	srand(time(NULL));
	gamecoord[0] = (rand() % 10) + 1;
	gamecoord[1] = (rand() % 10) + 1;

	
	cout << "Hit the Spot!" <<endl
		<< "Enter your X coordinate guess! ";
	cin >> usercoord[0];

	cout << "Enter your Y coordinate guess! ";
	cin >> usercoord[1];

	for (int y = 0; y < 11; y++) {
		if (y < 10) {
			cout << abs(y - 9);
		}
		else {
			cout << ' ';
		}
		for (int x = 0; x < 10; x++) {
																//coordcheck(x, y, gamecoord[2], usercoord[2]);
		}
		cout << endl;
	}

	
}
unsigned char CalcOUTGeorge(int usercoord[2], int gamecoord[2], int currentcoord[2])
{
	const char closeshade = 0xB0;
	const char farshade = 0xB2;

	unsigned char GG;
	if (usercoord[0] == gamecoord[0] && usercoord[1] == gamecoord[1])
		GG = '*';
	else if (usercoord[0] == gamecoord[0] && usercoord[1] == gamecoord[1])
		GG = 'X';
	else if (usercoord[0] == currentcoord[0] && usercoord[1] == currentcoord[1])
		GG = '0';
	else if (sqrt(pow(usercoord[0] - gamecoord[0], 2) + pow(usercoord[1] - gamecoord[1], 2)) <= 5)
		cout << 0xB0;
	else
		cout << 0xB2;

	return GG;
}
 




/* float distance(int XYa[2], int XYb[2])
{
	return	(sqrt(pow(XYa[0] - XYb[0], 2) + pow(XYa[1] - XYb[1], 2)));
}

(sqrt(pow(x - random[0], 2) + pow(y - random[1], 2)) <= 5)
*/

