#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main() {
	// fstream: Reading and writing 
	fstream myFile;
	// Open the file for reading and Writing
	// ios::out --> open for writing
	// ios::in --> open for reading
	// ios::app --> Append to the end of the file

		// Open File for writing Text data 
	// Open File for Reading Text data from File which is already saved into directory(location) 
	myFile.open("C:\\File\\file1.txt", ios::in);
	// Error handling - always check if the file opened successfully
	if (myFile.is_open()) {
		// variable to store file content
		string line;
		// loop until the end of the file
		while (!myFile.eof()) 
		{
			// store the current line of the file in the "line" variable
			getline(myFile, line);
			cout << line << endl;
		}
		myFile.close();
	}
	else
	{
		cerr << "Failed to open the file." << endl;
	}
	system("pause>0");
}