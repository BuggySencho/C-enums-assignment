#pragma once
#include <String>
class Car
{
public:
	enum Color {
		RED,
		BLUE,
		BLACK,
		WHITE,
		PURPLE,
		ORANGE
	};

public:
	Car(Color aColor);
	~Car();
	Color GetColor();

private:
	Color color;

};

