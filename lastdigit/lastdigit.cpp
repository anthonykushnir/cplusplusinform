#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

int main() {
	ifstream inputFile("input.txt");
	ofstream outputFile("output.txt");

	if (!inputFile.is_open() || !outputFile.is_open()) {
		cout << "Error to open files!" << endl;
	}

	inputFile.close();
	outputFile.close();

	return 0;
}
