// ConsoleApplication2.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include "pch.h"
#include <iostream>
#include <memory>

using namespace std;

class Person
{
private:
	string name_;
	int age_;
public:
	Person(const string& name, int age);
	~Person()
	{
		cout << "소멸자가 호출되었습니다." << endl;
	}
	void ShowPersonInfo();
};

int main(void)
{
	return 0;
}

Person::Person(const string& name, int age)
{
	name_ = name;
	age_ = age;
	cout << "생성자가 호출되었습니다. " << endl;
}

void Person::ShowPersonInfo()
{
	cout << name_ << "의 나이는 " << age_ << "살 입니다." << endl;
}
