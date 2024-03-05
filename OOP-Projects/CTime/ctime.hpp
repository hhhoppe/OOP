#pragma once

class CTime {
	int hours, minutes, seconds;
public:
	CTime();
	CTime(int hours, int minutes, int seconds);
	CTime(const CTime& time);
};