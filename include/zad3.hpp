#pragma once

#include "zad1.hpp"

#include <functional>

// tutaj szablon gotujZupe
template<typename T>
unsigned gotujZupe(const Warzywo& warz, const T& t)
{
    return (t.gotuj(warz) * t.gotuj(warz));
}
