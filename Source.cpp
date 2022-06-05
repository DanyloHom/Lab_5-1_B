#include <iostream>
#include "Vector3D.h"
#include "Error.h"
using namespace std;

int main()
{
	Vector3D b(1, 1, 1);
	Vector3D a;
	cout << "first vector = " << endl << b;

	cout << "second vector = " << endl;
	try {
		Vector3D aA;
		cin >> aA;
		a = aA;
	}
	catch (Error e)
	{
		cout << e.what() << endl;
	}
	catch (bad_exception e)
	{
		cout << e.what() << endl;
	}
	catch (exception e)
	{
		cout << e.what() << endl;
	}


	
	int aa, bb;

	cout << "enter figure to multiply by first vector" << endl;
	cin >> aa;
	cout << "enter figure to multiply by second vector" << endl;
	cin >> bb;

	a = a.ScalMultiplay(aa);
	b = b.ScalMultiplay(bb);

	cout << endl;
	cout << "result of multiplication by first" << endl;
	cout << a;
	cout << endl;
	cout << "result of multiplication by second" << endl;
	cout << b;

	cout << "length of first vector = " << a.Len() << endl;
	cout << "length of second vector = " << b.Len() << endl;
	cout << endl;

	if (Compare(a, b))
		cout << "vectors are the same " << endl;
	if (!Compare(a, b))
		cout << "vectors aren`t the same " << endl;
	if (Greate(a, b))
		cout << "first vector is larger than second" << endl;
	if (NGreate(a, b))
		cout << "first vector isn`t larger than second" << endl;
	if (Less(a, b))
		cout << "first vector is less than second" << endl;
	if (NLess(a, b))
		cout << "first vector isn`t less than second" << endl;
	if (Equal(a, b))
		cout << "vectors are equal" << endl;
	if (NEqual(a, b))
		cout << "vectors aren`t equal" << endl;



	cout << endl;
	cout << "string operator test" << endl << "first vector info : " << string(a) << endl << "second vector info : " << string(b) << endl;

	a = b;
	cout << "= operator test(first = second) : " << endl << a;

	cout << "a++" << endl << a++;
	cout << "a--" << endl << a--;
	cout << "++b" << endl << ++b;
	cout << "--b" << endl << --b;
}