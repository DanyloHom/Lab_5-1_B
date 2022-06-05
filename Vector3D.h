#pragma once
#include <string>
#include <sstream>
using namespace std;

class Vector3D
{
private:
	int x;
	int y;
	int z;
public:
	Vector3D();
	Vector3D(int x, int y, int z);
	Vector3D(const Vector3D& v);

	int getX()const { return x; }
	int getY()const { return y; }
	int getZ()const { return z; }
	void setX(int value);
	void setY(int value);
	void setZ(int value);


	Vector3D ScalMultiplay(int value);
	double Len();

	friend bool Compare(Vector3D l, Vector3D r);
	friend bool Less(Vector3D l, Vector3D r);
	friend bool Greate(Vector3D l, Vector3D r);
	friend bool Equal(Vector3D l, Vector3D r);
	friend bool NLess(Vector3D l, Vector3D r);
	friend bool NGreate(Vector3D l, Vector3D r);
	friend bool NEqual(Vector3D l, Vector3D r);

	Vector3D& operator = (const Vector3D& r);
	operator string() const;
	friend ostream& operator <<(ostream&, const Vector3D& v);
	friend istream& operator >>(istream&, Vector3D& v);

	Vector3D& operator ++();
	Vector3D& operator --();
	Vector3D operator ++(int);
	Vector3D operator --(int);
};
