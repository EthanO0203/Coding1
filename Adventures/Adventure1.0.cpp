#include <ctime>
#include <iostream>
using namespace std;
int main() {
  // welcome the player
  cout << "Welcome To The Game\n";
  // set up the game
  int health = 10;
  int attack;
  int block;
  int turns = 0;

  //     seed the random number generator
  srand(time(0));

  // start the loop
  string input;
  do {
    attack = rand() % 5;
    block = rand() % 5;
    cout << "Push Y to start the turn \n";
    cin >> input;
    cout << "\nThe monster attacks for " << attack;
    cout << "\nYou blocked with " << block;
    if (attack > block) {
      (health -= attack);
    }
    turns += 1;
    cout << "\nyour health is now " << health << ".\n";
  } while (health > 0 && turns < 4);
  if (health > 0) {
    cout << "\nYou have survied the game this time";
  } else {
    cout << "\nyou have Died to the game MWHAHAHAHAH";
  }
}
