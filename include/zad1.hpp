#pragma once

#include "catch.hpp"

#include <ostream>
#include <sstream>
#include <string>

// tutaj klasa Warzywo
class Warzywo
{
    std::string            nazwa;
    double                 cena;
    int                    kolor;
    inline static unsigned liczba = 0;

public:
    Warzywo(const std::string& n, double c, int k) : nazwa(n), cena(c), kolor(k) { liczba++; }
    ~Warzywo() { liczba--; }
    static unsigned getVeg() { return liczba; }
    void            opis(std::ostream& cout) const
    {
        cout << "[" << nazwa << "]:[" << cena << "], "
             << "[" << kolor << "]" << std::endl;
    }
};

// inline unsigned Warzywo::liczba = 0;
