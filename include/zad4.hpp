#include "zad1.hpp"

#include <exception>
#include <iostream>
#include <vector>

// tutaj funkcja jedzOstatnieWarzywa
void jedzOstatnieWarzywa(const std::vector<Warzywo>& vec, unsigned n, std::ostream& cout)
{
    if (n >= vec.size())
        throw std::logic_error "N wieksze niz wektor!";
    else
    {
        int x = vec.size() - n - 1;

        for (int i = vec.size() - 2; i >= x; i--)
        {
            vec[i].opis(cout);
        }
    }
}
