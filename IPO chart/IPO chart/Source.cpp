#include <iostream>
#include <string>
using namespace std;

int main()
{
	double dollars;
	double pounds;
	double pesos;
	double yen;

	cout << "How many american dollars do you have? ";
	cin >> dollars;
	pounds = dollars * 0.6318;
	pesos = dollars * 12.8863;
	yen = dollars * 82.34;
	cout << dollars << " american dollars covnerts to " << pounds << " pounds" << endl;
	cout << dollars << " american dollars covnerts to " << pesos << " pesos" << endl;
	cout << dollars << " american dollars covnerts to " << yen << " yen" << endl;

	system("pause");
	return 0;
}