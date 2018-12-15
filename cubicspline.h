#pragma once



namespace CubicSpline {



	template<typename T>
	T Cubic(double f, double x1, T y1, double x2, T y2, T m1, T m2) {
		m1 *= x2 - x1;
		m2 *= x2 - x1;
		T v = y2 - y1;
		T a = m1 + m2 - 2.0f * v;
		T b = v - a - m1;
		std::cout << a << " " << b << " " << m1 << "\n";
		return a * f * f * f + b * f * f + m1 * f + y1;

	}

}
