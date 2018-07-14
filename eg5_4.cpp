// eg5_4.cpp : Defines the entry point for the console application.
// 静态数据成员

#include "stdafx.h"
#include<iostream>
using namespace std;

class Point {
private:
	int x, y;
	static int count;
public:
	Point() { x = 0; y = 0; count++; };
	Point(int xx, int yy) { x = xx; y = yy; count++; };
	Point(Point &p) { x = p.x; y = p.y; count++; };
	~Point() { count-- ; };
	//void showCount() { cout << "object count is " << count << endl; };
	static void showCount() { cout << "object count is " << count << endl; };
	int getX() { return x; };
	int getY() { return y; };
};
int Point::count = 0;                //静态数据成员初始化，使用类名限定
int main()
{
	Point a, b(1, 2);
	Point c = b;
	Point::showCount();
    return 0;
}

