// This allows us to access the file classes
#include <fstream>
#include <iostream>
// Main start function here

using namespace std;

int main()
{

	//Create an object from a class
	//Create a file object from the 
	//file stream class
	ofstream myFile;
	//We must open the fule and
	//give it a file name, but the mode 
	//parameters are optional
	cout << "About to create or open file superFile.txt" << endl;
	//Let's take a pause
	system("pause");
	myFile.open("superFile.txt", ios::out | ios::app);
	//Actually write text to the file here!
	cout << "About to write on file superFile.txt" << endl;
	//Let's take a pause
	system("pause");
	myFile << "Line one for fun.\n";
	myFile << "Second in line!" << endl;
	cout << "About to close file superFile.txt" << endl;
	//Let's take a pause
	system("pause");
	// Important!!! Close the file here!
	myFile.close();
	cout << "About to exit program! Goodbye!" << endl;
	//Let's take a pause
	system("pause");
	//Exit main function 
	return 0;
}


/*Notes
Always close the file after using it

*/
