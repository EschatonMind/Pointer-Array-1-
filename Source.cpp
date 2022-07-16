#include <iostream>
using namespace std;
int main() {

	string Names[] = { "Yek", "Do", "Se" };
	string* PNames = Names;
	int Size = sizeof(Names) / sizeof(string);
	int LastElem = Size - 1;
	cout << Size << endl;
	for (int i = 0; i < Size; i++) {
		cout << " | " << PNames[i] << " | " << flush;
	}
	cout << endl;
	//-------------------------------------------------
	for (int i = 0; i < Size; i++, PNames++) {
		cout << " | " << *PNames << " | " << flush;
	}
	cout << endl;
	//-------------------------------------------------
	string* PFirst = &Names[0];
	string* PLast = &Names[LastElem];
	do {
		cout << " | " << *PFirst << " | " << flush;
		if (*PFirst == *PLast) {
				cout << endl << *PLast << endl;
				break;
		}
		PFirst++;

	} while (true);
	
	return 0;
}