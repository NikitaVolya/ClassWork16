#pragma once

#include <iostream>
#include <string>

using namespace std;

class Pet
{
protected:
	string name;
	float weight;

public:
	Pet(const string& pName, float pWeight) : name(pName) { setWeignt(pWeight); };

	virtual string getKind() const { return "void"; }
	string getName() const { return name; }
	float getWeight() const { return weight; }

	virtual void sound() const { cout << "*void*" << endl; }

	void setName(const string& value) { name = value; }
	void setWeignt(float value) { if (value > 0) weight = value; else throw invalid_argument("invalid value"); }
};

class Dog : public Pet
{
public:
	Dog(const string& pName) : Pet(pName, 30) {};
	Dog(const string& pName, float weight) : Pet(pName, weight) {};

	string getKind() const { return "Dog"; }
	void sound() const { cout << "Bark" << endl; }
};

class Cat : public Pet
{
public:
	Cat(const string& pName) : Pet(pName, 4) {};
	Cat(const string& pName, float weight) : Pet(pName, weight) {};

	string getKind() const { return "Cat"; }
	void sound() const { cout << "Mau" << endl; }
};

class Parrot : public Pet
{
public:
	Parrot(const string& pName) : Pet(pName, 2.25f) {};
	Parrot(const string& pName, float weight) : Pet(pName, weight) {};

	string getKind() const { return "Parrot"; }
	void sound() const { cout << "Kghr" << endl; }
};