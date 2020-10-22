#include <iostream>

using namespace std;

const double modifier = 1.609344;

int main() {
    cout << "k = ";
    unsigned long long k;
    cin >> k;
    cout << "мили\tкм" << endl;
    double m = 0;
    unsigned long long mi = 1, km = 1;
    cout.precision(5); // надо ли?
    while(m < k) {
        double _km = mi * modifier;
        double _mi = km / modifier;
        if(_km < km) {
            m = _km;
            cout << mi << "\t" << _km << endl;
            mi++;
        } else {
            m = km;
            cout << _mi << "\t" << km << endl;
            km++;
        }
    }
}