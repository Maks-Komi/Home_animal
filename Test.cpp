#include<iostream>
using namespace std;

int** Create2D(int rows, int cols) {
	int** arr = new int* [rows];

	for (int i = 0; i < rows; i++)
		arr[i] = new int[cols];

	return arr;
}

void Clean2D(int** arr, int rows) {
	for (int i = 0; i < rows; i++) {
		delete[]arr[i];
	}

	delete[]arr;
}

int main() {


	const int rows = 3;
	const int cols = 4;

	void** ptr = (void**)Create2D(rows, cols);
	((int**)ptr)[0][0] = 1;
	((int**)ptr)[1][0] = 2;

	int** matr = (int**)ptr;
	cout << ((int**)ptr)[1][0] << " " << matr[1][0];

	Clean2D(matr, rows);
	return 0;
}