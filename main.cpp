
#include <iostream>
#include <string>

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
    Human testHuman("Human name", 20);
    BasketballPlayer testPlayer("Basketball Player", 10, 20.5f, 50);

    Human* testHumanRef = &testHuman;
    Human* testBasketballPlayer = &testPlayer;

    testHumanRef->display();
    testBasketballPlayer->display();

	return 0;
}