#include <iostream>
#include <fstream>
using namespace std;

int main() {
	ifstream fin;

	fin.open("Text.txt");

	if (fin.fail()) {
		cerr << "Failed to Open the File" << endl;
		return 0;
	}

	int x, y;

	for (int i = 0; i < 4; i++) {
		fin >> x >> y;
		cout << "SUM" << i + 1 << ":" << x + y << endl;
	}

	fin.close();
	
	return 0;
}
