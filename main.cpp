
#include <iostream>
#include <string>

#include "Pet.h"

using namespace std;
class Human {
protected:
    string name;
    int age;
public:
    Human(string n, int a) : name(n), age(a) {}
    virtual void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};
class BasketballPlayer : public Human {
private:
    float gameAverage;
    int points;
public:
    BasketballPlayer(string n, int a, float avg, int pts) : Human(n, a), gameAverage(avg), points(pts) {}
    void display() {
        Human::display();
        cout << "Game Average: " << gameAverage << ", Points: " << points << endl;
    }
};



int main()
{
    Dog a("Frenk");
    Cat b("Murka");
    Parrot c("Dilan");

    std::cout << a.getName() << std::endl << b.getName() << std::endl << c.getName() << "\n------------\n";

    a.sound();
    b.sound();
    c.sound();
 

    std::cout << "\n------------\n" << a.getKind() << std::endl << b.getKind() << std::endl << c.getKind();
    
    return 0;
}