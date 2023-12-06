#include<iostream>
#include<iomanip>
using namespace std;
float car_hour[3];
float charges[3];
float total_charges = 0;
float total_hours = 0;
void input()
{
	for (int e = 0; e < 3; e++)
	{
		cout << "Enter the hour of car " << e + 1 << endl;
		cin >> car_hour[e];
	}
	cout << "Car " << "\tHours" << "\tCharges" << endl;
}void calculate()
{

	for (int e = 0; e < 3; e++)
	{
		if (car_hour[e] <= 3)
		{
			charges[e] = 2;
			cout << e + 1 << "\t" << car_hour[e] << "\t" << charges[e] << endl;
		}
		else if (car_hour[e] > 3 && car_hour[e] < 24)
		{
			charges[e] = 2 + ((car_hour[e] - 3) * (0.5));
			cout << e + 1 << "\t" << car_hour[e] << "\t" << charges[e] << endl;
		}
		else if (car_hour[e] == 24)
		{
			charges[e] = 10;
			cout << e + 1 << "\t" << car_hour[e] << "\t" << charges[e] << endl;
		}
	}
}
void total()
{

	total_hours = car_hour[0] + car_hour[1] + car_hour[2];
	total_charges = charges[0] + charges[1] + charges[2];
	cout << "Total \t" << total_hours << "\t" << total_charges << endl;
}
int main()
{
	input();
	calculate();
	total();

	return 0;

}