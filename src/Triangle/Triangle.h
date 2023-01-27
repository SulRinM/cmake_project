#pragma once 
#include "../main.h"

// ������� ����� ������������
class Triangle : public Shape
{
public:
	Triangle(int a, int b, int c, int A, int B, int C);
	Triangle();
	void get_name() override;
	void get_sides() override;
	void get_angle() override;
protected:
	int a;
	int b;
	int c;
	int A;
	int B;
	int C;
	std::string name;
};