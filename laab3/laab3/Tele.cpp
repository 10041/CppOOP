#include "stdafx.h"
#include <iostream>

#include "Tele.h"

using namespace std;

TeleProgramm::TeleProgramm()
{
	hour = 0;
	cout << "����������� �������������" << endl;
}

TeleProgramm::~TeleProgramm()
{
	cout << "���������� �������������" << endl;
}

void TeleProgramm::setHour(int Hour)
{
	hour = Hour;
}

void TeleProgramm::getHour()
{
	cout << "����� ������: " << hour << "�." << endl;
}

Reg::Reg()
{
	Reg_name = NULL;
	cout << "����������� ���������" << endl;
}

Reg::~Reg()
{
	cout << "���������� ���������" << endl;
}

void Reg::setReg_name(char* Name)
{
	Reg_name = Name;
}

void Reg::getReg_name()
{
	cout << "��� ��������: " << Reg_name << endl;
}

Film::Film()
{
	Film_name = NULL;
	cout << "����������� ������" << endl;
}

Film::~Film()
{
	cout << "���������� ������" << endl;
}

void Film::setFilm_name(char* name)
{
	Film_name = name;
}

void Film::getFilm_name()
{
	cout << "�������� ������: " << Film_name << endl;
}

News::News()
{
	News_name = NULL;
	cout << "����������� ��������" << endl;
}

News::~News()
{
	cout << "���������� �����" << endl;
}

void News::getNews_name()
{
	cout << "�������� ��������: " << News_name << endl;
}

void News::setNews_name(char* name)
{
	News_name = name;
}

HudFilm::HudFilm()
{
	HudFilm_name = NULL;
	cout << "����������� ���. ������" << endl;
}

HudFilm::~HudFilm()
{
	cout << "���������� ���. ������" << endl;
}

void HudFilm::setHudFilm_name(char* name)
{
	HudFilm_name = name;
}

void HudFilm::getHudFilm_name()
{
	cout << "�������� ���. ������: " << HudFilm_name << endl;
}

Mult::Mult()
{
	Mult_name = NULL;
	cout << "����������� ��������" << endl;
}

Mult::~Mult()
{
	cout << "���������� ��������" << endl;
}

void Mult::getMult_name()
{
	cout << "�������� ��������: " << Mult_name << endl;
}

void Mult::setMult_name(char* name)
{
	Mult_name = name;
}

Reclam::Reclam()
{
	prod = 0;
	cout << "����������� �������" << endl;
}

Reclam::~Reclam()
{
	cout << "���������� �������" << endl;
}

void Reclam::setProd(int a)
{
	prod = a;
}

void Reclam::getProd()
{
	cout << "����������������� �������: " << prod << " ���." << endl;
}