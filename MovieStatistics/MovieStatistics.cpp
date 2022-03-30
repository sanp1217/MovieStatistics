#include <iostream>
#include <algorithm>
using namespace std;

//function prototypes
double calculateAverage(int*, int);
double findMedian(int*, int);
int findMode(int*, int);

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

int findMode(int* studentsArray, int size) {
	//mode is the number that shows up most. modeCount is the number of times
	//the mode number shows up.
	int mode = 0, modeCount = 0;

	for (int i = 0; i < size; i++) {
		//The count variable is reset for each loop in the first for loop.
		int count = 0;
		//This second for loop compares one element to every other element in the array
		//and counts the number of time the number shows up.
		for (int j = 0; j < size; j++) {
			if (*(studentsArray + j) == *(studentsArray + i)) {
				count++;
			}
		}
		//If the count of the numeber that just showed up is higher than the count of
		//the mode then the count becomes the new modeCount and the mode is the number that was just looped.
		if (count > modeCount) {
			modeCount = count;
			mode = *(studentsArray + i);
		}
	}
	//If all of the numbers show up the same number of times then there is no mode.
	if (modeCount == 1) {
		mode = -1;
	}

	return mode;
}