#include "pch.h"
#include <iostream>
#include <complex>

using namespace std;

int main()
{
	//complex<float> c1(1,1);
	//complex<float> c2(2, 2);

	//cout << ::max(c1, c2) << endl;
	cout << ::max(10, 20) << endl;
	cout << ::max(10.0, 20.0) << endl;
	cout << ::max<double>(10, 20.0) << endl;

	int i = 42;
	int const& ir = i;
	cout << ir << endl;

	//static_assert(sizeof(Packet) == sizeof(char)+sizeof(int),"Padding in Packet");
	//static_assert(sizeof(Packet) == sizeof(char) + sizeof(int), "Padding in Packet");
	void *vp = nullptr;
	foo(vp);
	f_string("Hello World!");
}
