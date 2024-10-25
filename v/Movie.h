#pragma once
class Movie
{
	char* name;
	double time;
	int year;
	char* nameOfReshis;
	char* zhanr;
	double data;
public:
	Movie();
	Movie(const char* _name, double _time, int _year, double _data, const char* _nameOfReshis, const char* zhanr);
	Movie(const Movie& obj);
	~Movie();
	void GetNameMovie();
	void GetNameOfReshisor();
	void GetZhanr();
	double GetTime();
	int GetYear();
	int GetData();
	void SetNameMovie();
	void SetNameOfReshisor();
	void SetZhanr();
	void SetTime(double _time);
	void SetYear(int _year);
	void SetData(int _data);
	void Print();
	void Input();
};

