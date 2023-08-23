/*
* Creator:     Kozlova Elizabeth Paula
*
* Title:	   GPA Calculator
*
* Description:
*		       This is the program to calculate GPA of the semester based on grades entered by the user. Up to 5 courses can be entered
*/

#include <iostream>
using namespace std;

int main()
{
	char codeCharacter, gradeCharacter;
	int codeNumber, courseNumber1, courseNumber, credits, sumCredits = 0;
	double gradeNumber, totalGrade = 0, GPA;

	cout << "Please, enter the number of courses (it cannot be more than 5): ";
	cin >> courseNumber1;

	if (courseNumber1 <= 5)
	{
		courseNumber = 1;
		while (courseNumber <= courseNumber1 && courseNumber > 0)
		{
			cout << "PLease, enter the code character of the course: ";
			cin >> codeCharacter;
			cout << "PLease, enter the 3-digit number of the course: ";
			cin >> codeNumber;
			courseNumber++;
		}

		courseNumber = 1;
		while ((courseNumber <= courseNumber1) && (courseNumber > 0))
		{
			cout << "Please, enter credits for the course: ";
			cin >> credits;

			sumCredits = sumCredits + credits;
			courseNumber++;
		}

		courseNumber = 1;

		while ((courseNumber <= courseNumber1) && (courseNumber > 0))
		{
			cout << "Please, enter the grade for the course: ";
			cin >> gradeCharacter;
			if (gradeCharacter == 'A')
				gradeNumber = 4.0;
			if (gradeCharacter == 'B')
				gradeNumber = 3.0;
			if (gradeCharacter == 'C')
				gradeNumber = 2.0;
			if (gradeCharacter == 'D')
				gradeNumber = 1.0;
			if (gradeCharacter == 'F')
				gradeNumber = 0;

			totalGrade = totalGrade + (gradeNumber * credits);
			courseNumber++;
		}

		GPA = totalGrade / sumCredits;
		cout << "The GPA for this semester is " << GPA;
	}
	else
		cout << "Entered course number is invalid. PLease, restart the program and enter the number of courses, which must be less than or equal to 5.";

	return 0;
}