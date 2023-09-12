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

	int N, K;
	if (inputFile >> N >> K) {
		int x = K % N;
		outputFile << x << endl;
	}
	inputFile.close();
	outputFile.close();
	return 0;
}
