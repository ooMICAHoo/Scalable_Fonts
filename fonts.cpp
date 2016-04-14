//
// Micah Stewart
// fonts.cpp
//
// Scalabel Fonts project
//

#include <iostream>
#include <iomanip>

#include "fonts.h"

using namespace std;

/**
 * Constructor 
 */
Fonts::Fonts() {
	int fontSize;
	char theChar; 
}

// Asks for all the necessary variables such as fontsize, the character to set, and colors
void Fonts::askForVariables(){
	cout << "What size font? ";
	cin >> fontSize;
	cout << "Choose a character. ";
	cin >> theChar;
}

// Prints out all the characters needed with parameters set 
void Fonts::printCharacters() {
	printA();
/*	printB
	printC
	printD
	printE
	printF
	printG
	printH
	printI
	printJ
	printK
	printL
	printM
	printN
	printO
	printP
	printQ
	printR
	printS
	printT
	printU
	printV
	printW
*/


}

// Prints out A
void Fonts::printA() {
	if (fontSize == 1) {
		cout << theChar << endl;
	} else if (fontSize == 2) {
		cout << theChar << endl;
		for (int i = 0; i < fontSize; i++){
			cout << theChar;
		}
		cout << endl;
	} else if (fontSize == 3) {
		cout << ' ' << theChar << endl;
		cout << theChar << theChar << theChar << endl;
		cout << theChar << ' ' << theChar << endl;
	} else if (fontSize > 3) {
		for (int i = 0; i < fontSize; i++) {
			cout << theChar;
		}
		cout << endl;
		for (int i = 0; i < fontSize - 1; i++){
			if (i != (fontSize/2) -1) {
				cout << theChar << setw(fontSize - 1) << theChar << endl; 
			} else {
				for (int i = 0; i < fontSize; i++) {
					cout << theChar;
				}
				cout << endl;
			}

		}
	}
}

/*
void Fonts::printZ() {
	} else if (fontSize > 3) {
		for (int i = 0; i < fontSize; i++){
			cout << theChar;
		}
		cout << endl;
		for (int i = 0; i < fontSize - 2; i++) {
			cout << setw(fontSize - i - 2) << theChar << endl;
		}
	}

}

*/












