//
// Micah Stewart & Tom Metzger
// fonts.cpp
//
// Scalabel Fonts project
//

#include <iostream>
#include <iomanip>
#include <unistd.h>

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
	usleep(100000);
	cout << endl;
//	printB
	printC();
	usleep(100000);
//	printD
	cout << endl;
	printE();
	usleep(100000);
	cout << endl;
	printF();
	usleep(100000);
	cout << endl;
//	printG
	printH();
	usleep(100000);
	cout << endl;
	printI();
	usleep(100000);
	cout << endl;
	printJ();
	usleep(100000);
//	printK
	cout << endl;
	printL();
	usleep(100000);
	cout << endl;
//	printM
//	printN
	printO();
	usleep(100000);
	cout << endl;
	printP();
	usleep(100000);
	cout << endl;
//	printQ
///	printR
	cout << endl;
	printS();
	usleep(100000);
	cout << endl;
	printT();
	usleep(100000);
	cout << endl;
	printU();
	usleep(100000);
	cout << endl;
//	printV
//	printW
//  printX
//  printY
//  printZ

//  print1();
//  print2();
//  print3();
//  print4();
//  print5();
//  print6();
//  print7();
//  print8();
//  print9();
//  print0();
	cout << endl;
	printExc();
	usleep(100000);
	cout << endl;
    printPer();
	usleep(100000);
	cout << endl;

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

// Prints out C
void Fonts::printC() {
	if (fontSize == 1) {
		cout << theChar << endl;
	} else if (fontSize == 2) {
		cout << theChar << endl;
		cout << theChar << theChar << endl;
	} else if (fontSize >= 3) {
		for (int i = 0; i < fontSize; i++) {
			cout << theChar;
		}
		cout << endl;
		for (int i = 0; i < fontSize - 2; i++){
			cout << theChar << endl;
		}
		for (int i = 0; i < fontSize; i++) {
			cout << theChar;
		}
		cout << endl;
				
	}
}

// Prints out E
void Fonts::printE() {
	if (fontSize == 1) {
		cout << theChar << endl;
	} else if (fontSize == 2) {
		cout << theChar << theChar << endl;
		cout << theChar << theChar << endl;
	} else if (fontSize >= 3) {
		for (int i = 0; i < fontSize; i++) {
			cout << theChar;
		}
		cout << endl;
		for (int i = 0; i < fontSize - 2; i++){
			if (i != (fontSize/2) -1) {
				cout << theChar << endl; 
			} else {
				for (int i = 0; i < fontSize - 1; i++) {
					cout << theChar;
				}
				cout << endl;
			}

		}
		for (int i = 0; i < fontSize; i++) {
			cout << theChar;
		}
		cout << endl;
				
	}
}

// Prints out F
void Fonts::printF() {
	if (fontSize == 1) {
		cout << theChar << endl;
	} else if (fontSize == 2) {
		cout << theChar << theChar << endl;
		cout << theChar << endl;
	} else if (fontSize >= 3) {
		for (int i = 0; i < fontSize; i++) {
			cout << theChar;
		}
		cout << endl;
		for (int i = 0; i < fontSize - 1; i++){
			if (i != (fontSize/2) -1) {
				cout << theChar << endl; 
			} else {
				for (int i = 0; i < fontSize - 1; i++) {
					cout << theChar;
				}
				cout << endl;
			}

		}
				
	}
}

// Prints out H
void Fonts::printH() {
	if (fontSize == 1) {
		cout << theChar << endl;
	} else if (fontSize == 2) {
		cout << theChar << theChar << endl;
		cout << theChar << theChar << endl;
	} else if (fontSize >= 3) {
		for (int i = 0; i < fontSize; i++){
			if (i != (fontSize/2) ) {
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

// Prints out I
void Fonts::printI() {
	if (fontSize == 1) {
		cout << theChar << endl;
	} else if (fontSize == 2) {
		cout << theChar << endl;
		cout << theChar << endl;
	} else if (fontSize >= 3) {
		for (int i = 0; i < fontSize; i++) {
			cout << theChar;
		}
		cout << endl;
		for (int i = 0; i < fontSize - 2; i++){
			cout << setw((fontSize/2) + 1) << theChar << endl;
		}
		for (int i = 0; i < fontSize; i++) {
			cout << theChar;
		}
		cout << endl;
				
	}
}

// Prints out J
void Fonts::printJ() {
	if (fontSize == 1) {
		cout << theChar << endl;
	} else if (fontSize == 2) {
		cout << ' ' << theChar << endl;
		cout << theChar << theChar << endl;
	} else if (fontSize >= 3) {
		for (int i = 0; i < fontSize; i++) {
			cout << theChar;
		}
		cout << endl;
		for (int i = 0; i < fontSize - 2; i++){
			cout << setw((fontSize/2) + 1) << theChar << endl;
		}
		for (int i = 0; i < (fontSize/2) + 1; i++) {
			cout << theChar;
		}
		cout << endl;
				
	}
}

// Prints out L
void Fonts::printL() {
	if (fontSize == 1) {
		cout << theChar << endl;
	} else if (fontSize == 2) {
		cout << theChar << endl;
		cout << theChar << theChar << endl;
	} else if (fontSize >= 3) {
		for (int i = 0; i < fontSize - 1; i++){
			cout << theChar << endl;
		}
		for (int i = 0; i < fontSize; i++) {
			cout << theChar;
		}
		cout << endl;
				
	}
}


// Prints out O
void Fonts::printO() {
	if (fontSize == 1) {
		cout << theChar << endl;
	} else if (fontSize == 2) {
		cout << theChar << theChar << endl;
		cout << theChar << theChar << endl;
	} else if (fontSize >= 3) {
		for (int i = 0; i < fontSize; i++) {
			cout << theChar;
		}
		cout << endl;
		for (int i = 0; i < fontSize - 2; i++){
			cout << theChar << setw(fontSize - 1) << theChar << endl; 
		}
		for (int i = 0; i < fontSize; i++) {
			cout << theChar;
		}
		cout << endl;
	}
}


// Prints out P
void Fonts::printP() {
	if (fontSize == 1) {
		cout << theChar << endl;
	} else if (fontSize == 2) {
		cout << theChar << theChar << endl;
		cout << theChar << endl;
	} else if (fontSize >= 3) {
		for (int i = 0; i < fontSize; i++) {
			cout << theChar;
		}
		cout << endl;
		
		for (int i = 0; i < (fontSize/2) - 1; i++) {
			cout << theChar << setw(fontSize - 1) << theChar << endl; 
		}
		for (int i = 0; i < fontSize; i++) {
			cout << theChar;
		}
		cout << endl;
		for (int i = 0; i < (fontSize - 1)/2; i++) {
			cout << theChar << endl;
		}
	}
}


// Prints out S
void Fonts::printS() {
	if (fontSize == 1) {
		cout << theChar << endl;
	} else if (fontSize == 2) {
		cout << ' ' << theChar << endl;
		cout << theChar << endl;
	} else if (fontSize >= 3) {
		for (int i = 0; i < fontSize; i++) {
			cout << theChar;
		}
		cout << endl;
		for (int i = 0; i < (fontSize -2)/2; i++) {
			cout << theChar << endl; 
		}
		for (int i = 0; i < fontSize; i++) {
			cout << theChar;
		}
		cout << endl;
		for (int i = 0; i < (fontSize - 3)/2; i++) {
			cout << setw(fontSize) << theChar << endl;
		}
		for (int i = 0; i < fontSize; i++) {
			cout << theChar;
		}
		cout << endl;

	}
}

// Prints out T
void Fonts::printT() {
	if (fontSize == 1) {
		cout << theChar << endl;
	} else if (fontSize == 2) {
		cout << theChar << theChar << endl;
		cout << ' ' << theChar << endl;
	} else if (fontSize >= 3) {
		for (int i = 0; i < fontSize; i++) {
			cout << theChar;
		}
		cout << endl;
		for (int i = 0; i < fontSize - 1; i++){
			cout << setw((fontSize/2) + 1) << theChar << endl;
		}
				
	}
}

// Prints out U
void Fonts::printU() {
	if (fontSize == 1) {
		cout << theChar << endl;
	} else if (fontSize == 2) {
		cout << endl;
		cout << theChar << theChar << endl;
	} else if (fontSize >= 3) {
		for (int i = 0; i < fontSize - 1; i++){
			cout << theChar << setw(fontSize - 1) << theChar << endl; 
		}
		for (int i = 0; i < fontSize; i++) {
			cout << theChar;
		}
		cout << endl;
	}
}

// Prints a '.'
void Fonts::printPer(){
	if (fontSize == 1) {
		cout << theChar << endl;
	} else if (fontSize > 1) {
		for (int i = 0; i < fontSize - 1; i++){
			cout << endl;
		}
		cout << setw(fontSize) << theChar << endl;
	}
}

// Prints out '!'
void Fonts::printExc() {
	if (fontSize == 1) {
		cout << theChar << endl;
	} else if (fontSize == 2) {
		cout << ' ' << theChar << endl;
		cout << ' ' << theChar << endl;
	} else if (fontSize >= 3) {
		for (int i = 0; i < fontSize - 2; i++){
			cout << setw((fontSize/2) + 1) << theChar << endl;
		}
		cout << endl;
		cout << setw((fontSize/2) + 1) << theChar << endl;
				
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












