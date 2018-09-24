#pragma once
class Vector
{
	double x;
	double y;
	double z;
public:
	void show();
	Vector();
	Vector(double x, double y, double z);
	Vector(const Vector& right);
	Vector(Vector&& right);
	double getX();
	double getY();
	double getZ();
	void setX(double x);
	void setY(double y);
	void setZ(double z);
	Vector operator+(const Vector& right) const;
	Vector operator-(const Vector& right) const;
	double operator*(const Vector& right) const;

	Vector& operator++();
	Vector operator++(int);

	double operator+() const;
	Vector& operator=(const Vector& right);
	Vector& operator=(Vector&& right);

	bool operator==(const Vector& right) const;
	bool operator!=(const Vector& right) const;

	operator double() const;

	~Vector();
};


