#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;
string food[5];
class boar {
public:
  string name;
  int health;
  int favFood;

  boar() {
    cout << "new Boar is born!\n";
    name = "Boar";
    health = 10;
    favFood = rand() % 5;
  }

  boar(string givenName, int givenHealth) {
    cout << "A new boar is born ";
    name = givenName;
    health = givenHealth;
    favFood = rand() % 5;
    status();
    favSnack();
  }
  void status() { cout << "its give name is " << name << " and its health is " << health << "\n"; }
  void favSnack() {
    cout << name << "'s favorite food is " << food[favFood] << ".\n";
  }
};
boar boars[10];

// I wanted to Create Start next day and make the player feed the correct food
// to correct Boar couldnt figure out how 
// string input;
//   void startNextDay() {
//     cout << "another Day starts and the Boars must be feed. \n";
//     cin >> input;
//     if(cin != favFood)
//     for (int i = 0; i < 10; i++) {
//       boars[i].health -= 1;
//       if (boars[i].health <= 0) {
//         cout << boars[i].name << ".\n";
//       }
//     }
//   }

int main() {
  srand(time(0));
  food[0] = "BlueBerries";
  food[1] = "RaspBerries";
  food[2] = "Carrots";
  food[3] = "Corn";
  food[4] = "Golden Carrots";

  string boarNames[7] = {"Penny", "Sheldon",  "Howard", "Lenard",
                         "Raji",  "Bernadet", "Amy"};

  for (int i = 0; i < 10; i++) {
    boars[i] = boar(boarNames[rand() % 6], rand() % 11 + 5);
  }
  
}