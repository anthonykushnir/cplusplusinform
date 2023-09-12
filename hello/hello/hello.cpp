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
    

    int x, y;
    if (inputFile >> x >> y) {
        if (0 < x <= 1000 && 0 < y <= 1000 ){
            double z = sqrt(x * x + y * y);
            outputFile << z << endl;
        }
        else
            cout << "Error reading file." << endl;
            return 1;
    }
    else {
        cout << "Error reading file." << endl;
    }

    inputFile.close();
    outputFile.close(); 

    return 0;
}