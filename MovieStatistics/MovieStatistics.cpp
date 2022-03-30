#include <iostream>
#include <algorithm>
using namespace std;

//function prototypes
double calculateAverage(int*, int);
double findMedian(int*, int);

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

double calculateAverage(int* studentsArray, int size) {
	double sumOfScores = 0, average;
	for (int i = 0; i < size; i++) {
		sumOfScores += *(studentsArray + i);
	}
	return average = sumOfScores / size;
}

double findMedian(int* studentsArray, int size) {
	//If the size of the array is odd, then the median will just be the middle element.
	if (size % 2 != 0) {
		return (double)studentsArray[size / 2];
	}

	//if the size of the array is even, then the median will be the average of the two
	//middle elements.
	return (double)(studentsArray[(size - 1) / 2] + studentsArray[(size / 2)]) / 2.0;
}