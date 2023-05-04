#include <cstdlib>
#include <ctime>
#include <iostream>
#include <string>
using namespace std;
int health = 50;
int totalTreasure = 0;
int rollDie(int sides = 6, int min = 1) {
  int roll = rand() % sides + min;
  return roll;
}
int attack(int sides = 6, int min = 1) {
  int attack = rand() % sides + min;
  return attack;
}
int block(int sides = 6, int min = 1) {
  int block = rand() % sides + min;
  return block;
}

bool askYN(string question = "Keep playing?") {
  while (true) {
    cout << question << " (y/n)\n";
    char input;
    cin >> input;

    if (input == 'y') {
      return true;
    } else if (input == 'n') {
      return false;
    }
  }
}
void story(string message) { cout << message << "\n"; }

int main() {
  story("You wake up in your cabin ready to take on the day and find new "
        "treasure");
  cout << "you have " << health << "health \n";
  while (true) {
    if (askYN("Are you ready to go hunt treasure\n") == true) {
      cout << "Lets go \n";
      if (attack(30) > block(20)) {
        health -= attack();
        cout << "your health is now " << health << "\n";
      } else {
        cout << "you succsefuly defened the monster attack \n";
      }
      totalTreasure += rollDie(100);
      cout << "You now have " << totalTreasure << " Gold\n";
    } else {
      cout << "You head home with your goddies!\n";
      break;
    }
    if (health <= 0) {
      cout << "You have died on your hunt for treasure\n";
      break;
    }
  }
}