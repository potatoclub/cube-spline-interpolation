#include <iostream>


template<typename T>
T CubicSpline(double f, T x1, T y1, T m1, T x2, T y2, T m2) {
    
    m1 /= (x2 - x1);
    m2 /= (x2 - x1);
    T v = (y2 - y1) / (x2 - x1);
    T a = m1 + m2 - 2.0f * v;
    T b = v - a - m1;
    return a * f * f * f + b * f * f + m1 * f + y1;
    
}






int main()
{
    double x1, x2, y1, y2, m1, m2; 
    
    std::cin >> x1;
    std::cin >> y1;
    std::cin >> x2;
    std::cin >> y2;
    std::cin >> m1;
    std::cin >> m2;
    
    
    for (double f = 0.0; f <= 1.0; f += 0.1)
        std::cout << f << " " << x1 + f * (x2 - x1) << " " << 
            CubicSpline(f, x1, y1, m1, x2, y2, m2) << "\n";
    
    return 0;
}
