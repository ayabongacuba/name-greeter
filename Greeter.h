#pragma once
#include <string>

class Greeter {
    private:

    std::string name;

    public:

    Greeter();
    void getName();
    void greetName() const;

};