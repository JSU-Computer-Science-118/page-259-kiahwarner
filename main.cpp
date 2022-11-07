// Kiah Warner J00963660 11/7/22

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double a, b, c, d;
    cout << "enter coefficient of ax^2: "; // get coefficient from user
    cin >> a; //got the coefficient
    cout << "enter coefficient of bx: "; // get coefficient from user
    cin >> b;
    cout << "enter coefficient of c: ";
    cin >> c;
    cout << endl;
    d = pow (b,2) - 4 * a * c;
    if (d < 0) {
        cout << "The roots are imaginary"<< endl;        
    }
    else if (d == 0) {
        double root = -b / (2 * a);
        cout << "the roots are real and equal: " << root<<endl;   
    }
    else if(d > 0) {
        double root1 = (-b + sqrt(d) / (2 * a));
        double root2 = (-b - sqrt(d) / (2 * a));
        cout << "the roots are real and unequal : "<< root1 << root2 << endl;
    }
    return 0;
}
