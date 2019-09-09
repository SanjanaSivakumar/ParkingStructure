/*
 * Car.h
 *
 *      Author: sanjana_mac
 */
//Sanjana Sivakumar CS2336.001
//The purpose of this class is to set the definition for when a Bus object will be created.
//This class is set up in such a way that aids in the functionality of the parking structure
//This class is one of the derived classes of the Vehicle class

#ifndef CAR_H_
#define CAR_H_
#include <iostream>
#include "Vehicle.h"

using namespace std;

class Car: public Vehicle {
private:
	int size;
	int position;
public:
	Car();
	virtual ~Car();
	int getSize();
	string toString();
	int getPosition();
	void setPosition(int p);
};


#endif /* CAR_H_ */
