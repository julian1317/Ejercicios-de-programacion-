#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

const double gra = 9.80665;
const double PI = 3.14159;

int main() {
    double alt, ang, vel;
    int p1, p2, n;
    
    while (cin >> alt) {
        cin >> p1 >> p2 >> n;
        
        for (int i = 0; i < n; i++) {
            cin >> ang >> vel;
            
            ang = ang * PI / 180.0;  // Convertir grados a radianes
            double t = (vel * sin(ang) + sqrt(pow(vel * sin(ang), 2) + 2 * gra * alt)) / gra;
            double x = vel * cos(ang) * t;
            
            if (x >= p1 && x <= p2) {
                cout << fixed << setprecision(5) << x << " -> DUCK" << endl;
            } else {
                cout << fixed << setprecision(5) << x << " -> NUCK" << endl;
            }
        }
    }
    
    return 0;
}
