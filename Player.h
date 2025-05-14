
#include "iostream"

using namespace std;

class Player {
private:
    string name, nationality;
    int yearOfBirth, height, internationalGoals;

    string getName(string n) const { n = name; }

    string getNationality(string nation) const { nation = nationality; };

    int getYearOfBirth(int yob) const { yob = yearOfBirth; };

    int getHeight(int h) const { h = height; };

    string getInternationalGoals(int goals) const { goals = internationalGoals; };


    //constructors
public:
    Player(const string &n, const string &nation, int yob, int h, int goals) {
        name = n;
        nationality = nation;
        yearOfBirth = yob;
        height = h;
        internationalGoals = goals;
    }

private:

    friend class NationalTeam;

};
