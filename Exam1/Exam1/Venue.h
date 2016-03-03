#pragma once
#include <string>
#include "Event.h"

#ifndef _VENUE_H_
#define _VENUE_H_

class Venue {
private:
	Event scheduledEvents[12]; // 12 events scheduled, stored in array
	int numEvents;
	bool validTime; // True/False on the Time availability
public:
	bool GetvalidTime() { return validTime; }
	void SetvalidTime(bool time)
	{
		validTime = time;
		if (bool validTime = false) // If event can't be booked, display message
		{
			cout << "Event could not be added. Overlap Error";
		}
	}
	void addEvent(int time, string name);
	Event findEvent(int time);
	Event findEvent(string name);

};
#endif