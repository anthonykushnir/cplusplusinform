#include <iostream>
#include <fstream>
using namespace std;
int main() {
	ifstream inputFile("input.txt");
	ofstream outputFile("output.txt");
	if (!inputFile.is_open() || !outputFile.is_open()) {
		cout << "Failed to open files!" << endl;
		return 1;
	}
	int v, t;
	if (inputFile >> v >> t) {
		int s = (v * t);
		int x = (s % 109 + 109) % 109;
		outputFile << x << endl;
	}
	inputFile.close();
	outputFile.close();
	return 0;
}