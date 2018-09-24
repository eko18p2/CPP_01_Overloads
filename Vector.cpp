#include "Vector.h"
#include <iostream>



void Vector::show()
{
	std::cout << "Vector( " << x << ", " << y << ", " << z << " )" << std::endl;
}

Vector::Vector()
{
}

Vector::Vector(double x, double y, double z):x(x),y(y),z(z)
{}

Vector::Vector(const Vector & right)
{
	x = right.x;
	y = right.y;
	z = right.z;
}

Vector::Vector(Vector && right)
{
	x = std::move(right.x);
	y = std::move(right.y);
	z = std::move(right.z);
}

double Vector::getX()
{
	return x;
}

double Vector::getY()
{
	return y;
}

double Vector::getZ()
{
	return z;
}

void Vector::setX(double x)
{
	this->x = x;
}

void Vector::setY(double y)
{
	this->y = y;
}

void Vector::setZ(double z)
{
	this->z = z;
}

Vector Vector::operator+(const Vector & right) const
{
	return Vector(this->x+right.x, this->y + right.y, this->z + right.z);
}

Vector Vector::operator-(const Vector & right) const
{
	return Vector(this->x - right.x, this->y - right.y, this->z - right.z);
}

double Vector::operator*(const Vector & right) const
{
	return sqrt(pow(this->x-right.x,2)+ pow(this->y - right.y, 2) + pow(this->z - right.z, 2));
}

Vector& Vector::operator++()
{
	this->x++;
	this->y++;
	this->z++;
	return *this;
}

Vector Vector::operator++(int)
{
	Vector res = *this;
	this->x++;
	this->y++;
	this->z++;
	return res;
}

double Vector::operator+() const
{
	return sqrt(pow(x,2)+ pow(y, 2) + pow(z, 2) );
}

Vector & Vector::operator=(const Vector & right)
{
	x = right.x;
	y = right.y;
	z = right.z;
	return *this;
}

Vector & Vector::operator=(Vector && right)
{
	x = std::move(right.x);
	y = std::move(right.y);
	z = std::move(right.z);
	return *this;
}

bool Vector::operator==(const Vector & right) const
{
	return x == right.x && y == right.y && z == right.z;
}

bool Vector::operator!=(const Vector & right) const
{
	return !(right==*this);
}

Vector::operator double() const
{
	return +*this;
}




Vector::~Vector()
{}
