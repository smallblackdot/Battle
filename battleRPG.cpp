#include <iostream>
#include <string>
#include <random>
using namespace std;

int main() {
    random_device rd;
    bool playGame = true;

    while (playGame == true)
    {
        int playerChoice;
        int enemyChoice = rd() % 3;

        cout << endl << "Attack Options:" << endl;
        cout << "1. Sword Smash attack" << endl;
        cout << "2. Fireball" << endl;
        cout << "3. Sneaky Dagger" << endl;
        cout << "4. END GAME (WARNING, DON'T CHOOSE THIS  OPTION!!!)" << endl;
        cout << "Enter your selection: ";
        cin >> playerChoice;

        switch (playerChoice)
        {
        case 1:
            cout << endl << "You swing away with your sword, damage enemy!" << endl;
            break;
        case 2:
            cout << endl << "You shoot blazing fire out of your hands, hits and burns enemy!" << endl;
            break;
        case 3:
            cout << endl << "You poke at the enemy with your dagger!" << endl;
            break;
        case 4:
            cout << endl << "You accept your fate of losing and end the game, goodbye!" << endl;
            playGame = false;
            break;
        default:
            cout << endl << "You trip over your own feet and skip your turn!" << endl;
        }
        if (playGame == false)
        {
            break;
        }

        switch (enemyChoice)
        {
        case 0:
            cout << endl << "Your enemy runs at you with his sword, you get smashed!" << endl;
            break;
        case 1:
            cout << endl << "Your enemy shoots fireballs at you, it's pretty hot, right?" << endl;
            break;
        case 2:
            cout << endl << "Your enemy disappears, only to reappear next to you with a dagger!" << endl;
        }
    }
}
