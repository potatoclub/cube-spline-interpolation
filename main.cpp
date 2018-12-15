#include "stdafx.h"
#include <iostream>
#include "cubicspline.h"


int main()
{
	float x1, x2, y1, y2, m1, m2, x;

	std::cout << "x1: ";
	std::cin >> x1;
	std::cout << "y1: ";
	std::cin >> y1;
	std::cout << "x2: ";
	std::cin >> x2;
	std::cout << "y2: ";
	std::cin >> y2;
	std::cout << "m1: ";
	std::cin >> m1;
	std::cout << "m2: ";
	std::cin >> m2;
	
	for (float x = 0.0f; x <= 1.05f; x += 0.1f)
		std::cout << CubicSpline::Cubic(x, x1, y1, x2, y2, m1, m2) << "\n";

    return 0;
}

