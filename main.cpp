//
// Micah Stewart & Tom Metzger
// Scalable Font Project
//

#include <iostream>

#include "fonts.h"

using namespace std;

int main() {
	int statik = 5;
	Fonts font;
	while (statik == 5) {
		font.askForVariables();
		font.printCharacters();
	}

	return 0;
}
