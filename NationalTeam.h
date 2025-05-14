#include "iostream"
#include "Player.h"
#include "algorithm"

using namespace std;


class NationalTeam {
    string countryName;
    Player player;
    int n;
    int heights = 0;

//isDone
    void updateActiveArray() {
        for (int i = 0; i < 18; i++) {
            status[i] = true;


        }

    }

//isDone
    bool isThereAPlayer() {
        for (int i = 0; i < 18; ++i) {
            if (player_arr[i]->name != " ") {
                return true;
            } else
                return false;
        }

    }

//isDone
    bool addPlayer(const Player &newPlayer) {
        if (isThereAPlayer()) {
            for (int i = 0; i < 18; i++) {
                player_arr[i]->name = newPlayer.name;
                player_arr[i]->nationality = newPlayer.nationality;
                player_arr[i]->yearOfBirth = newPlayer.yearOfBirth;
                player_arr[i]->height = newPlayer.height;
                player_arr[i]->internationalGoals = newPlayer.internationalGoals;

            }
            updateActiveArray();
            return true;


        }


    }

//isDone
    string trim(string input) {
        string demo;
        for (char c: input) {
            if (c == ' ') {
                c++;
            } else {
                demo += c;
            }

        }
        return demo;
    }

//isDone
    bool removePlayer(string playerName) {
        trim(playerName);
        for (int i = 0; i < 18; ++i) {
            trim(player_arr[i]->name);
            if (player_arr[i]->name == playerName) {
                status[i] = false;
                return true;

            }
        }
    }


    //isDone
    int AvgHeight() {
        for (int i = 0; i < n; ++i) {
            heights += player_arr[i]->height;

        }
        return heights / n;

    }


// isDone
    int getNumOfPlayers() {
        int playersCount = 0;
        for (int i = 0; i < 18; ++i) {
            if (status[i] != false) {
                playersCount++;
            }
        }
        return playersCount;

    }


    //isDone
    Player oldestPlayer(const Player &players) {
        for (int i = 0; i < 18; ++i) {
            if (status[i] == true) {
                return players;
            }
            break;
        }
    }

    //isDone
    Player youngestPlayer(const Player &players) {
        for (int i = 17; i > 0; --i) {
            if (status[i] == true) {
                return players;
            }
            break;
        }
    }

//notDone
    Player highestIntGoals(const Player &players) {
        // to return the player with the highest number of international goals
        int heighstGoalsNum = 0;
        for (int i = 0; i < 18; ++i) {
            internationalGoal[i] += player_arr[i]->internationalGoals;
        }
        auto maxGoalindex = max_element(internationalGoal, internationalGoal + 18) - internationalGoal;
        return *player_arr[maxGoalindex];
    }


    //notDone
    int internationalGoals() {
        // to return the average number of international goals per player in the team
    }

    //notDone
    ofstream &operator<<(ofstream &); // to output a team’s country and its players info.

private:
    Player *player_arr[18] = {};
    bool status[18] = {false};
    int internationalGoal[18] = {0};




    /*writeStatistics(oftream&)
// writes team statistics to a file including:
    o Team Country
            o Number of players
            o Average height of players
    o Name and age of oldest player
    o Name and age of youngest player
    o Average number of international goals of players
    o Name of the player with the highest international goals and the number
    of goals scored by this player.*/


};

