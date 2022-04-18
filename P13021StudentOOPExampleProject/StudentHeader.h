#pragma once
#include "Header.h"

class Student {
private:
	string name;
	int age;
	double mark;

public:
	Student();
	Student(string name, int age, double mark);
	~Student();
	string getName();
	void setName(string name);
	int getAge();
	void setAge(int age);
	double getMark();
	void setMark(double mark);
	string getInfo();
};
