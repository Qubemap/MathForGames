#include <iostream>
#include <cmath>
using namespace std;

//float ft_BasicQuadratic(float x)
//{
//    float result = x * x + 2 * x - 7;
//    return result;
//}

struct Qvars
{
	float a;
	float b;
	float c;
	float x1;
	float x2;
	float discriminant;
	float realPart;
	float imaginaryPart;
};

int main()
{
	struct Qvars q1;

	cout << "Enter coefficients a, b and c: ";
	cin >> q1.a >> q1.b >> q1.c;
	q1.discriminant = q1.b * q1.b - 4 * q1.a * q1.c;

	if (q1.discriminant > 0)
	{
		q1.x1 = (-q1.b + sqrt(q1.discriminant)) / (2 * q1.a);
		q1.x2 = (-q1.b - sqrt(q1.discriminant)) / (2 * q1.a);
		cout << "Roots are real and different." << endl;
		cout << "x1 = " << q1.x1 << endl;
		cout << "x2 = " << q1.x2 << endl;
	}
	else if (q1.discriminant == 0)
	{
		cout << "Roots are real and same." << endl;
		q1.x1 = -q1.b / (2 * q1.a);
		cout << "x1 = x2 =" << q1.x1 << endl;
	}
	else
	{
		cout << "Polynomial has no roots" << endl;
	}

	return 0;
}
