
#include <iostream>
#include <string>
#include "main.h"

#include "Triangle/Triangle.h"
#include "Triangle/RTriangle.h"
#include "Triangle/EQtriangle.h"
#include "Triangle/IStriangle.h"

#include "Quadrilateral/Parallelogram.h"
#include "Quadrilateral/Quadrilateral.h"
#include "Quadrilateral/Rectangle.h"
#include "Quadrilateral/Rhomb.h"
#include "Quadrilateral/Square.h"


void print_info(Shape* shape)
{
	shape->get_name();
	shape->get_sides();
	shape->get_angle();
}


Triangle triangle(10, 20, 30, 50, 60, 70);
RTriagnle Rtriangle(10, 20, 30, 50, 60);
IStriangle Istriangle(10, 20, 50, 60);
EQtriangle Eqtriangle(30);

Quadrilateral quadrilateral(10, 20, 30, 40, 50, 60, 70, 80);
Parallelogram parallelogram(20, 30, 30, 40);
Rectangle rectangle(10, 20);
Rhomb rhomb(30, 30, 40);
Square square(20);

int main()
{
	print_info(&triangle);
	std::cout << "\n";

	print_info(&Rtriangle);
	std::cout << "\n";

	print_info(&Istriangle);
	std::cout << "\n";

	print_info(&Eqtriangle);
	std::cout << "\n";

	print_info(&quadrilateral);
	std::cout << "\n";

	print_info(&parallelogram);
	std::cout << "\n";

	print_info(&rectangle);
	std::cout << "\n";

	print_info(&rhomb);
	std::cout << "\n";

	print_info(&square);
	std::cout << "\n";

	return 0;
}