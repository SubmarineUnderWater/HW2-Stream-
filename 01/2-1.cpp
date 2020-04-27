#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
	int len;
	
	cout << "Write the Number of Characters:";
	cin >> len;

	char* str = new char[len+1];

	ofstream outFile;

	outFile.open("2-1.txt");

	if (outFile.fail()) {
		cerr << "Failed to Open the File" << endl;
		return 0;
	}
	
	int i;

	for (i = 0; i < len; i++) {
		cin >> *(str + i);
	}

	*(str + i) = NULL;

	outFile.write(str, (len + 1));

	outFile.close();
	
	delete[] str;
	
	ifstream inFile;

	inFile.open("2-1.txt");

	if (inFile.fail()) {
		cerr << "Failed to Open the File" << endl;
		return 0;
	}

	int count = 0;

	inFile.seekg(0, ios::end);

	count = inFile.tellg();

	inFile.seekg(0, ios::beg);

	char* str1 = new char[count];

	inFile.read(str1, count);

	cout << "The sentence written in 2-1.txt file is " << '\"' << str1 << '\"' << endl;
	
	inFile.close();

	delete[] str1;

	return 0;
}