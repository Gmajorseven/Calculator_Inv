#include <iostream>
using namespace std;

int cal(float lossCap, float gabPrice, float price);

int main(void) {
        float lossCap, gabPrice, price, stopLoss;
        cout << "Enter your acept loss: ";
        cin >> lossCap;
        cout << "Current price: ";
        cin >> price;
        cout << "Stoploss: ";
        cin >> stopLoss;
        gabPrice = price - stopLoss;

        float invCap = cal(lossCap, gabPrice, price);

        cout << "You should invest: " << invCap << endl;
}

int cal(float lossCap, float gabPrice, float price) {
        float result = lossCap / (gabPrice / price);
        return result;
}
