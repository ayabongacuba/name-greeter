#include "Greeter.h"
#include <iostream>

using namespace std;

Greeter::Greeter(){
    name = "";
}

void Greeter::getName(){
    cin >> name;
}

void Greeter::greetName() const{
    cout << "Hello " << name << "!" << endl;
}