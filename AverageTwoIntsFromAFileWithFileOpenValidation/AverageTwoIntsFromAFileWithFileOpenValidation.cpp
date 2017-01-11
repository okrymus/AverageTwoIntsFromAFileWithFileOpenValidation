 // The program asks the user for the name of a file that contains two numbers and prints on the monitor their averge.
// Average two integers from a file with file open validation
// Programmer: Panupong Leenawarat
// Last modified: 11/16/15

#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
using namespace std;

void main()
{
	string nameInput;
	int num1, num2;
	ifstream nameFile;
	
	cout
		<< endl
		<< "\t        This program asks the user for the name of a file that     " << endl
		<< "\t                      contains two numbers,                        " << endl
		<< "\t            and prints on the monitor their averge                 " << endl
		<< "\t                         By Lee. Panupong                          " << endl << endl;

	cout << "What file contains your data? ";
	getline(cin, nameInput);
	// Open the file.
	nameFile.open(nameInput);
	// If the file successfully opened, process it.
	if (nameFile.fail())
	{
		system("COLOR 3F");
		cout << "\tFailed to open file: \"" << nameInput <<  "\" Exiting the program." << endl << endl;
		system("pause");
		exit(0);
		// where is the statement that exits the program
	}
	// else is NOT needed if the program was exited
	nameFile >> num1 >> num2;
	cout << "The average of " << num1 << " and " << num2 << " is: " << ((double)num1 + (double)num2) / 2 << endl << endl;
	
	nameFile.close();
	system("pause");
	return;
}
