#include <stdio.h>
//大一問
//struct  Vector2
//{
//public:
//	int x;
//	int y;
//};
//
//int main()
//{
//	Vector2 vector2;
//	vector2.x = 5;
//	vector2.y = 5;
//
//	printf("%d,%d\n", vector2.x, vector2.y);
//
//	return 0;
//}
//-------------------------------------------
//struct Vector2
//{
//public:
//	void Setx(int setNum) { x=setNum; }
//	void Sety(int num) { y=num; }
//
//	int Getx() { return x; }
//	int Gety() { return y; }
//
//private:
//	int x, y;
//};
//
//int main()
//{
//	Vector2 vector2;
//
//	vector2.Setx(5);
//	vector2.Sety(4);
//
//	printf("%d,%d",vector2.Getx(),vector2.Gety());
//
//	return 0;
//
//}
struct Vector3
{
public:
	void Setx(int setNum) { x = setNum; }
	void Sety(int num) { y = num; }
	void Setz(int num) { z = num; }

	int Getx() { return x; }
	int Gety() { return y; }
	int Getz() { return z; }

private:
	int x, y,z;
};

int main()
{
	Vector3 vector3;

	vector3.Setx(5);
	vector3.Sety(4);
	vector3.Setz(3);

	printf("%d,%d,%d", vector3.Getx(), vector3.Gety(),vector3.Getz());

	return 0;

}