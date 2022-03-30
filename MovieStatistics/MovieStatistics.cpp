#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int studentsSurveyed, moviesSeen;
	int* studentsArray = nullptr;

	//input for students surveyed in order to dynamically allocate the amount into an array.
	cout << "Number of students surveyed: ";
	cin >> studentsSurveyed;

	studentsArray = new int[studentsSurveyed];
}