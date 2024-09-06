#include <iostream>
#include <string>
using namespace std;

// Base class
class Vehicle {
  public: 
    string brand = "Mercedes";
    void honk() {
      cout << "beep,beep! \n" ;
    }
};

// Derived class
class Car: public Vehicle {
  public: 
    string model = "Benz";
};

int main() {
  Car myCar;
  myCar.honk();
  cout << myCar.brand + " " + myCar.model;
  return 0;
}