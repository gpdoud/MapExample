
#include <iostream>
#include <string>
#include <map>

using namespace std;

class customer {
public:
    int id = 0;
    string name = "";
    customer(int, string) {
        this->id = id;
        this->name = name;
    }
    customer() {}
};

int main() {
    map<int, customer> customers;
    customer dsi(1, "DSI");
    customer amaz(2, "Amazon");
    customer bbuy(3, "BestBuy");

    customers[dsi.id] = dsi;
    customers[amaz.id] = amaz;
    customers[bbuy.id] = bbuy;

    for(auto idx = 1; idx <= 3; idx++) {
        auto cust = customers[idx];
        cout << cust.id << " | " << cust.name << endl;
    }
}
