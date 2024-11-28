#include <iostream>
#include <cmath>
#include <string>

using namespace std;

// #Course 4 Solution 10 
// Average of 3 Marks.

void ReadMarks(int& Mark1, int& Mark2, int& Mark3)
{
	cout << "Please Enter Mark 1\n";
	cin >> Mark1;

	cout << "Please Enter Mark 2\n";
	cin >> Mark2;

	cout << "Please Enter Mark 3\n";
	cin >> Mark3;
}


int SumOf3Marks(int Mark1, int Mark2, int Mark3)
{
	return Mark1 + Mark2 + Mark3;
}


float AverageOf3Marks(int Mark1, int Mark2, int Mark3)
{
	return (float)SumOf3Marks(Mark1, Mark2, Mark3) / 3;
}

void PrintResults(float Average)
{
	cout << "\n  The Total Average of Marks is " << Average << endl;
}




int main()
{
	int Mark1, Mark2, Mark3;
	ReadMarks(Mark1, Mark2, Mark3);
	PrintResults(AverageOf3Marks(Mark1, Mark2, Mark3));
	return 0;
}

