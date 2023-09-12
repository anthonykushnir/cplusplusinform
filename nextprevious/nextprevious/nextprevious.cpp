#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;
int main() {
	ifstream inputFile("input.txt");
	ofstream outputFile("output.txt");
	if (!inputFile.is_open() || !outputFile.is_open()) {
		cout << "Failed to open files!" << endl;
		return 1;
	}

	int x;
	if (inputFile >> x) {
		if (abs(x)<= 10000) {
			outputFile << "The next number for the number " << x << " is " << x + 1 << "." << endl <<
				"The previous number for the number " << x << " is " <<  x - 1 << "." << endl;
		}
		
		else {
			cout << "Error reading file!" << endl;
		}
		return 1;
	}
	
	else {
		cout << "Error reading file!" << endl;
	}
	inputFile.close();
	outputFile.close();
	return 0;
	}