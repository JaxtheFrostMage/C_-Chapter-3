#include <iostream>
#include <string>
using namespace std;

int main()
{
	string color;
	string wordEndingInEst;
	string anAnimal;
	string bodyPartPlural;
	string aNoun;
	string pluralNoun;
	int a;
	int b;
	int c;
	

	cout << "What is your favorite color? " << endl;
	cin >> color; 
	cout << "Name a word that ends with 'est' " << endl;
	cin >> wordEndingInEst;
	cout << "What is your favorite animal? " << endl;
	cin >> anAnimal;
	cout << "Name a body part. " << endl;
	cin >> bodyPartPlural;
	cout << "Name a noun. " << endl;
	cin >> aNoun;
	cout << "Name a plural noun. " << endl;
	cin >> pluralNoun;
	cout << "Give a number. " << endl;
	cin >> a;
	cout << "Give another number. " << endl;
	cin >> b;

	c = a - b;

	cout << "The " << color << " bird is the " << wordEndingInEst << " avian beast in the lands. it has " << c << " " << bodyPartPlural << ", and a oddly shaped " << aNoun << ". its favorite meals include " << anAnimal << " and " << pluralNoun << " , though they still enjoy a good salad." << endl;

	system("pause");
	return 0;
}