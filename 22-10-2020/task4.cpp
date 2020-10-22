#include <iostream>

using namespace std;

int main() {
    unsigned long long k, r;
    double p;
    cout << "k, p, r = ";
    cin >> k >> p >> r;
    unsigned long long loan = k, savings = 0, year = 1;
    bool trend = true;
    while(savings < loan && trend) {
        year++;
        long long previousDelta = loan - savings;
        // Уходит ли выручка на оплату долга?
        loan += loan * (p / 100);
        savings += r;
        long long newDelta = loan - savings;
        if(newDelta > previousDelta && year != 2) {
            trend = false;
        }
    }
    if(!trend) {
        cout << "Нельзя" << endl;
    } else {
        cout << year << endl;
    }
}