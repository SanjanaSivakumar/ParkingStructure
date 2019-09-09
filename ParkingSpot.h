/*
 * ParkingSpot.h
 *
 *      Author: sanjana_mac
 */
//Sanjana Sivakumar CS2336.001
//The purpose of this class is to set the definition for when a ParkingSpot object will be created.
//The ParkingSpot class is used throughout by the ParkingStructure class, as a ParkingStructure is a
//2D array of ParkingSpots
#ifndef PARKINGSPOT_H_
#define PARKINGSPOT_H_
#include <iostream>
#include "Vehicle.h"
/*#include "Car.h"
#include "Motorcycle.h"
#include "Bus.h"*/

using namespace std;

class ParkingSpot {
	private:
		char size;
		bool isFull;
		int capacity;
		int level;
	public:
		Vehicle *occupy;
		ParkingSpot();
		ParkingSpot(char SpotSize);
		virtual ~ParkingSpot();
		bool full();
		void setFull(bool full);
		char getSize();
		int getCapacity();
		Vehicle* getOccupy();
		void setOccupy(Vehicle &v);
		void setSpotSize(char spotSize);
		string toString();
};

#endif /* PARKINGSPOT_H_ */
