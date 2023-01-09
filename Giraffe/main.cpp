#include <iostream>
using namespace std;

class Chef{
public:
    void makeChicken(){
        cout << "The chef makes yummy chicken\n";
    }
     void makeSalad(){
        cout << "The chef makes salad\n";
    }
     void makeSpecialDish(){
        cout << "The chef makes bbq ribs\n";
    }
};

class italianChef : public Chef{
    public:
    void makePasta(){
        cout << "The chef makes pasta\n";
    }
    void makeSpecialDish(){
        cout << "The chef makes chicken parm\n";
    }
};

int main()
{
    Chef chef;
    chef.makeSpecialDish();

    italianChef italianchef;
    italianchef.makeSpecialDish();

    return 0;
}
