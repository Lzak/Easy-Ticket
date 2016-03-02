#include <cstdlib>
#include <string>
#include <cstring>
#include <iostream>
#include "Interpreter.h"
using namespace std;

/* I'm being such a n00b
void menu(int section) {
	switch (section) {
		case 0:
			cout << "(1) - Create Ticket\n"
				 << "(2) - Show/Edit Tickets\n"
				 << "(3) - Settings\n"
				 << "(4) - Logout\n"
				 << "\n>> "; 
			break;
		case 1:
			cout << "(1) - Create from preset\n"
				<< "(2) - New\n"
				<< "(b) - Back\n"
				<< "\n>> ";
			break;
		default:
			cout << "wtf did you do.\n";
			break;
	}
}
*/
int main() {
	char buffer[126];
	bool exit = false;
	Interpreter engine();


	while(exit == false) {
		cout << ">> ";
		getline(&buffer, 126);
		
	}
	return 0;
}

