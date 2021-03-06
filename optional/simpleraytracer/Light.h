#ifndef LIGHT_H
#define LIGHT_H

#include "Point.h"
#include "Color.h"

class Light
{
public:
	Light(); // creates a light at the origin
	Light(const Point& rLightPoint);
	~Light();

	const Point& LightPoint() const;
	void LightPoint(const Point& rLightPoint);

	double Intensity() const;
	void Intensity(double vIntensity);

	const Color& LightColor() const;
	void LightColor(const Color& rLightColor);

private:
	Point mLightPoint;
	double mIntensity; // 0 to 1
	Color mLightColor;
};

#include <list>
using namespace std;
typedef list<Light*> LightList;
typedef list<Light*>::iterator LightListIterator;

#endif
