// operatorplus.cpp : �������̨Ӧ�ó������ڵ㡣
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
	CFeet minus(CFeet & objf);
	CFeet operator -(CFeet &objf);
};
void CFeet::setvalue(int ft, int in)
{
	feet = ft + in / 12;
	inches = in % 12;
	inches = 12 * ft + in;
	feet = ft+ in / 12;
	inches = in % 12;
}
void CFeet::display()
{
	cout << inches << "Ӣ��" << endl;
	cout << feet << "Ӣ��" << inches << "Ӣ��" << endl;
}
CFeet CFeet::minus(CFeet & objf)
{
	CFeet temp;
	temp.setvalue(feet - objf.feet,inches - objf.inches);
	temp.display();
	return temp;
}
CFeet CFeet::operator -(CFeet &objf)
{
	CFeet temp;
	temp.setvalue(feet - objf.feet, inches - objf.inches);
	temp.display();
	return temp;
}

int main()
{
	CFeet A,B,C;
	A.setvalue(1,2);
	B.setvalue(2,2);
	C = A - B;
	C.display();
     return 0;
}  

