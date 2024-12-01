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
		myFile.open("C:\\File\\file1.txt", ios::out);
		// Error handling - always check if the file opened successfully
		if (myFile.is_open()) {
			// writing some text data into file
			myFile << "Helle World" << endl;
			myFile << "This is second line" << endl;
			myFile.close();
		}	
		else
		{
			cerr << "Failed to open the file." << endl;
		}	
	system("pause>0");
}