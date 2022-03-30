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

	cout << "\nNow enter the number of movies seen by each student." << endl;
	//input for amount of movies seen by each student.
	for (int i = 0; i < studentsSurveyed; i++) {
		cout << "Movies seen by student " << i << ": ";
		cin >> moviesSeen;

		//input validation.
		while (moviesSeen < 0) {
			cout << "Invalid input. Try again: ";
			cin >> moviesSeen;
		}
		*(studentsArray + i) = moviesSeen;
	}

}