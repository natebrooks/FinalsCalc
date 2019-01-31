#include <iostream>

using namespace std;

int main()
{
	int qone;
	int qtwo;
	int avg;
	int gradehave;
	int gradewant;
	int unweightedneeded;
	int finalgradeneeded;

	cout << "What was your first quarter grade? \n" << endl;
	cin >> qone;

	cout << "What was your second quarter grade? \n" << endl;
	cin >> qtwo;

	gradehave = qone + qtwo;
	avg = gradehave / 2;


	cout << "Your average grade is " << avg << endl;

	cout << "What do you want in the class? \n" << endl;
	cin >> gradewant;

	unweightedneeded = gradewant - avg;
	finalgradeneeded = unweightedneeded / .1;

	// .1 is the weight of the exam, can change as the weight changes

	cout << "To get an " << gradewant << "% in the class, you need a " << finalgradeneeded << "% on the final exam. \n" << endl;

	return 0;
}