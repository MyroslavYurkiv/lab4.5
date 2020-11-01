#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
int main()
{
	double x{}, y{}, R;
	srand((unsigned)time(NULL));

	// спосіб №1

	for (double i = 0; i < 10; i++)
	{
		cout << "R = "; cin >> R;
		cout << "x = "; cin >> x;
		cout << "y = "; cin >> y;
		if (((x + y) >= R && x <= 0 && y <= 0) ||
			(((pow(x, 2) + pow(y, 2)) <= pow(R, 2))))
			cout << "yes" << endl;
		else
			cout << "no" << endl;
	}
	cout << endl << fixed;

	//спосіб №2

	for (double i = 0; i < 10; i++)
	{
		double x = -R + rand() / RAND_MAX * (R - -R);
		double y = -R + rand() / RAND_MAX * (R - -R);
			if ((((x + y) >= R) && (x <= 0) && (y <= 0)) ||
				(((pow(x, 2) + pow(y, 2)) <= pow(R, 2))))
				cout << setw(8) << setprecision(4) << x << " "
				<< setw(8) << setprecision(4) << y << " " << "yes" << endl;
			else
				cout << setw(8) << setprecision(4) << x << " "
				<< setw(8) << setprecision(4) << y << " " << "no" << endl;
	}
	return 0;
}