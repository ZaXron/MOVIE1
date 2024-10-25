#include "Movie.h"
#include <iostream>
using namespace std;
Movie::Movie()
{
	name = nullptr;
	time = 0;
	data = 0;
	nameOfReshis = nullptr;
	zhanr = nullptr;
	year = 0;
}

Movie::Movie(const char* _name, double _time, int _year, double _data, const char* _nameOfReshis, const char* _zhanr)
{
	name = new char[strlen(_name) + 1];
	strcpy_s(name, strlen(_name) + 1, _name);
	nameOfReshis = new char[strlen(_nameOfReshis) + 1];
	strcpy_s(nameOfReshis, strlen(_nameOfReshis) + 1, _nameOfReshis);
	zhanr = new char[strlen(_zhanr) + 1];
	strcpy_s(zhanr, strlen(_zhanr) + 1, _zhanr);
	time = _time;
	data = _data;
	year = _year;
}

Movie::Movie(const Movie& obj)
{
	name = new char[strlen(obj.name) + 1];
	strcpy_s(name, strlen(obj.name) + 1, obj.name);
	nameOfReshis = new char[strlen(obj.nameOfReshis) + 1];
	strcpy_s(nameOfReshis, strlen(obj.nameOfReshis) + 1, obj.nameOfReshis);
	zhanr = new char[strlen(obj.zhanr) + 1];
	strcpy_s(zhanr, strlen(obj.zhanr) + 1, obj.zhanr);
	time = obj.time;
	data = obj.data;
	year = obj.year;
}

Movie::~Movie()
{
	delete[]name;
	delete[]nameOfReshis;
	delete[]zhanr;
}

void Movie::GetNameFilm()
{
	cout << "Name: " << name;
}

void Movie::GetNameOfReshisor()
{
	cout << "Name OF Reshisor: " << nameOfReshis;
}

void Movie::GetZhanr()
{
	cout << "Zhanr: " << zhanr;
}

double Movie::GetTime()
{
	return time;
}

int Movie::GetYear()
{
	return year;
}

int Movie::GetData()
{
	return data;
}

void Movie::SetNameMovie()
{
	char buff[100]{};
	cout << "Enter name of Movie: ";
	cin.getline(buff, 100);
	if (name != nullptr) {
		delete[]name;
	}
	name = new char[strlen(buff) + 1];
	strcpy_s(name, strlen(buff) + 1, buff);
}

void Movie::SetNameOfReshisor()
{
	char buff[100]{};
	cout << "Enter name of Reshisor: ";
	cin.getline(buff, 100);
	if (nameOfReshis != nullptr) {
		delete[]nameOfReshis;
	}
	nameOfReshis = new char[strlen(buff) + 1];
	strcpy_s(nameOfReshis, strlen(buff) + 1, buff);
}

void Movie::SetZhanr()
{
	char buff[100]{};
	cout << "Enter Zhanr of Movie: ";
	cin.getline(buff, 100);
	if (zhanr != nullptr) {
		delete[]zhanr;
	}
	zhanr = new char[strlen(buff) + 1];
	strcpy_s(zhanr, strlen(buff) + 1, buff);
}

void Movie::SetTime(double _time)
{
	time = _time;
}

void Movie::SetYear(int _year)
{
	year = _year;
}

void Movie::SetData(int _data)
{
	data = _data;
}

void Movie::Print()
{
	cout << "Name Of Movie: " << name
		<< endl << "Year: " << year
		<< endl << "Time (in minutes): " << time
		<< endl << "Zhanr: " << zhanr << endl
		<< "Name OF Reshisor: " << nameOfReshis << endl;
}

void Movie::Input()
{
	char buff[100]{};
	cout << "Enter name of Movie: ";
	cin.getline(buff, 100);
	if (name != nullptr) {
		delete[]name;
	}
	name = new char[strlen(buff) + 1];
	strcpy_s(name, strlen(buff) + 1, buff);
	cout << "Enter zhanr of Movie: ";
	cin.getline(buff, 100);
	if (zhanr != nullptr) {
		delete[]zhanr;
	}
	zhanr = new char[strlen(buff) + 1];
	strcpy_s(zhanr, strlen(buff) + 1, buff);
	cout << "Enter name of reshisor: ";
	cin.getline(buff, 100);
	if (nameOfReshis != nullptr) {
		delete[]nameOfReshis;
	}
	nameOfReshis = new char[strlen(buff) + 1];
	strcpy_s(nameOfReshis, strlen(buff) + 1, buff);
	cout << "Enter Year: ";
	cin >> year;
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	cout << "Enter Time(in minutes): ";
	cin >> time;
	cout << endl;
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
}
