#pragma once
#include <iostream>
#include <string>
#include <ctime>
using namespace std;

#ifndef _EVENT_H_
#define _EVENT_H_

class Event {
private:
	int Time; // Time of Event
	string Title; // What type of Event (who is booking event)
public:
	Event() // Default Event that represents Free Time
	{
		int Time(-1);
		string Title("free");
	}
	Event (int time, string name) { } // Call the event using Time and Name

	int getTime( ){ return Time; } // GET functions
	string getTitle() { return Title; }
	
	void setTime(int t) { }
	void setTitle(string name) { }
};
#endif