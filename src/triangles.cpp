#include <iostream>
#include <cmath>

#include "include/triangles.hpp"
using namespace std;

Triangle::Triangle() {}

Triangle::Triangle(Point2D t1, Point2D t2, Point2D t3) : _t1(t1), _t2(t2), _t3(t3) {}

void Triangle::SetT1(Point2D t1)
{
    _t1 = t1;
}

void Triangle::SetT2(Point2D t2)
{
    _t2 = t2;
}

void Triangle::SetT3(Point2D t3)
{
    _t3 = t3;
}

std::string Triangle::TriangleType()const
{
    float a = std::sqrt(std::pow(_t2.GetX() - _t1.GetX(), 2) + std::pow(_t2.GetY() - _t1.GetY(), 2) + std::pow(_t2.GetZ() - _t1.GetZ(), 2));
    float b = std::sqrt(std::pow(_t3.GetX() - _t2.GetX(), 2) + std::pow(_t3.GetY() - _t2.GetY(), 2) + std::pow(_t3.GetZ() - _t2.GetZ(), 2));
    float c = std::sqrt(std::pow(_t1.GetX() - _t3.GetX(), 2) + std::pow(_t1.GetY() - _t3.GetY(), 2) + std::pow(_t1.GetZ() - _t3.GetZ(), 2));

    if (a == b && b == c)
    {
       return "SEGITIGA SAMA SISI";
    }
    else if (a == b || b == c || c == a)
    {
        return "SEGITIGA SAMA KAKI";
    }
    else if (a * a + b * b == c * c || b * b + c * c == a * a || c * c + a * a == b * b)
    {
        return "SEGITIGA SIKU-SIKU";
    }
    else
    {
        return "SEGITIGA SEMBARANG";
    }
}

