// yun-suan-fu-chongzai.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;
class CFeet
{
private:
	int feet;
	int inch;
public:
	void setvalue(int fe, int in);
	void display();
	CFeet add(CFeet & oc1);
	CFeet operator + (CFeet & oc1);
};
void CFeet::setvalue(int fe, int in) {
	feet = fe + in / 12;//当英寸大于12的时候,赋给英尺.1英尺=12英寸
	inch = in % 12;
}
void CFeet::display() {
	cout << feet << "英尺" << inch << "英寸" << endl;
}
CFeet CFeet::add(CFeet & oc1) {
	CFeet temp;
	temp.setvalue(feet + oc1.feet, inch + oc1.inch);
	return temp;
}//两个英尺英寸相加的时候.
CFeet CFeet::operator + (CFeet & oc1) {
	CFeet temp;
	temp.setvalue(feet + oc1.feet, inch + oc1.inch);
	return temp;
}//两个英尺英寸相加的时候.

int main()
{
	CFeet A, B, C;
	A.setvalue(10, 11);
	B.setvalue(6, 9);
	C = A + B;
	C.display();
	return 0;
}