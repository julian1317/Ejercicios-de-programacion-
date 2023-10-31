#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    int t;
    cin >> t; // Número de casos de prueba

    while (t--) {
        int n;
        cin >> n; // Número de estudiantes

        vector<int> p(n);
        for (int i = 0; i < n; i++) {
            cin >> p[i]; // Silla inicial del estudiante i
        }

        int moves = 0;
        for (int i = 0; i < n; i++) {
            if (p[i] == i + 1) {
               
                moves++;
            }
        }
        int roundedMoves = round(static_cast<double>(moves) / 2);

        cout << roundedMoves << endl;
    }

    return 0;
}