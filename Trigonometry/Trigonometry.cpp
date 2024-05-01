#include <iostream>
using namespace std;
#define pi 3.14159

struct Triangle
{
	double side_a;
	double side_b;
	double side_c;

	double angle_A;
	double angle_B;
	double angle_C;
};

// 1. The lecture mentioned that one radian is approximately 57 degrees. What is it to at least three decimal places?

// 57.296


// 2. A typical field of view used in 3D games is sixty degrees. What is this in radians?

// divide by 180 and multiply by pi. Radians = (60/180)*pi = 1.047


// 3. Write a pair of functions that will:

//Convert from degrees to radians
//Convert from radians to degrees.

double ft_DegreesToRadians(double degrees)
{
	return degrees * pi / 180;
}

double ft_RadiansToDegrees(double radians)
{
	return (radians * 180) / pi;
}

// NOTE Ctrl + K + C to comment. 
// ---- Ctrl + K + U to uncomment

//int main()
//{
//	float i = 57.296f;
//
//	cout << "i is: " << i << endl << endl;
//
//	i = ft_DegreesToRadians(i);
//
//	cout << "i converted to degrees is: " << i << endl << endl;
//
//	i = ft_RadiansToDegrees(i);
//
//	cout << "i converted back to radians is: " << i << endl;
//
//}

// 4. It is thought that the ancient Egyptians marked out the right angles around their buildings by employing a loop of rope with 12 knots spaced
//out equally along its length. They would wrap the rope around three stakes in the ground to form a triangle, placing each stake at the exact
//location of a knot in the rope. By adjusting the stakes so that each stake is exactly at the position of a knot and the rope is kept taut, they
//could get the stakes to form an exact right-angle with each other.
//Explain how they did this.
//Hint 1: Use Pythagoras’s Theorem, which states that, for a right-triangle, the square of the length of the hypotenuse will equal the sum of the
//squares of the other two sides, i.e.
//c^2 = a^2 + b^2

//One side would have three spaces between the knots, the other would have four. 3^2 + 4^2 = 25. hypotenuse = √25 which is 5 spaces between knots
//on the hypotenuse.


// 5. Again consider the three stakes laid out by the Egyptians to form a right-angled triangle. Given that one of the angles is a right angle, what
//are the other two angles?

// approximately 37 and 53

// 6. 
// 21

// 7.
// 61


//8. 

//Takes the values of three sides of a triangle, and returns the angle opposite 'c'
double ft_LawOfCosinesAngle(double a, double b, double c)
{
	double angle = acos((a * a + b * b - c * c) / (2 * a * b));
	angle = ft_RadiansToDegrees(angle);

	return angle;
}

//Finds all angles of a Triangle Struct, assuming sides are provided
void ft_FindAllAngles(Triangle& t)
{
	t.angle_A = ft_LawOfCosinesAngle(t.side_b, t.side_c, t.side_a);
	t.angle_B = ft_LawOfCosinesAngle(t.side_a, t.side_c, t.side_b);
	t.angle_C = ft_LawOfCosinesAngle(t.side_a, t.side_b, t.side_c);
}

int main()
{


	Triangle t;

	t.side_a = 8;
	t.side_b = 6;
	t.side_c = 7;

	ft_FindAllAngles(t);

	cout << "Angle A = " << t.angle_A << endl;
	cout << "Angle B = " << t.angle_B << endl;
	cout << "Angle C = " << t.angle_C << endl;


}

