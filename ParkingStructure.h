/*
 * ParkingStructure.h
 *
 *      Author: sanjana_mac
 */
//Sanjana Sivakumar CS2336.001
//The purpose of this class is to park vehicles, remove vehicles, and print the ParkingStructure object

#ifndef PARKINGSTRUCTURE_H_
#define PARKINGSTRUCTURE_H_
#include "ParkingSpot.h"
//#include "ParkingSpot.cpp"
#include "Vehicle.h"
#include "Car.h"
#include "Motorcycle.h"
#include "Bus.h"
#include <iostream>

using namespace std;

class ParkingStructure {
private:
	int levels;
	int slots;
	int large;
	int car;
	int motorcycle;
	ParkingSpot **spots;
public:
	ParkingStructure();
	ParkingStructure(int level, int slot);
	virtual ~ParkingStructure();
	string toString();
	void park(Vehicle *v, int level, int spot);
	void remove(int level, int spot);
	int getLarge();
	int getCar();
	int getMotorcycle();
};

#endif /* PARKINGSTRUCTURE_H_ */
