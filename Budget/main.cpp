/*******************************************************************************
*  Budget wise
*  Author: Leonardo Santos
*  Version 1.0
*  Updated: 10/27/2019
*
*  Budget wise will calculate any monthly income with taxes based in Utah/Idaho
*  After a set of questions, a monthly budget will be displayed.
******************************************************************************/

#include <iostream>
#include <string>
#include <vector>


void menuDisplay(int choice) {

	do {
		std::cout << "BUDGET WISE\n";
		std::cout << "Budget solution by Leo Santos\n" << std::endl;
		std::cout << "Choose what kind of budget you want to work on:\n" << std::endl;
		std::cout << "  Monthly press - 1\n";
		std::cout << "  Yearly  press - 2\n";
		std::cout << "  Quit    press - 0\n";
	} while (choice != 0);


}

int main()
{
	int choice = -1;


	menuDisplay(choice);



	int ind;
	std::cin >> ind;
	return 0;

}