// operatorplus.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;
class CFeet
{
private:
	int feet;
	int inches;
public:
	void setvalue(int ft,int in);
	void display();
};
void CFeet::setvalue(int ft, int in)
{
	feet = ft + in / 12;
	inches = in % 12;
}
void CFeet::display()
{
	cout << feet << "英尺" << inches << "英寸" << endl;
}

int main()
{
	CFeet A;
	A.setvalue(10, 18);
	A.display();
    return 0;
}

