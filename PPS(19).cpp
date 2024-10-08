#include <iostream>

#include <cmath>

using namespace std;
int main() {
double angle = 45.0; // Angle in degrees
double radian = angle * M_PI / 180.0; // Convert to radians
cout << "Sine of 45 degrees: " << sin(radian) << endl;
cout << "Cosine of 45 degrees: " << cos(radian) << endl;
cout << "Tangent of 45 degrees: " << tan(radian) << endl;
return 0;
}