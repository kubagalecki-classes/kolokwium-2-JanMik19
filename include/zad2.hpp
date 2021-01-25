#pragma once

#include "catch.hpp"
#include "chrup.hpp"

// tutaj klasy Ogorek, Zielony i Kiszony
class Ogorek
{
public: 
	virtual std::string chrup() = 0;
};

class Zielony : public Ogorek
{
public:
    std::string chrup() override { return chrupZielony(); }
};

class Kiszony : public Ogorek
{
public:
    std::string chrup() override { return chrupKiszony(); }
};

std::string jedzOgorek(Ogorek* ogorek)
{
    std::string text1 = "Zielony";
    std::string text2 = "Kiszony";
    
    if (ogorek == dynamic_cast<Zielony*>(ogorek))
        return text1 + ogorek->chrup();
    else
        return text2 + ogorek->chrup();
}
