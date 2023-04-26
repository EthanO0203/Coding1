#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

// global variables
string accessories[5]; // set up in main

// building a class
//  Keyword "class",then name of class.
class robot {
public: // let everyone same name and cahrge plz.
  string name;
  int charge;
  int favAccessory;

  // creat a constructor
  //  always same name as class, and has no return type
  //  runs  when new robot variable is created
  robot() {
    cout << "Creating new robot!\n";
    name = "Robot";
    charge = 10;
    favAccessory = rand() % 5;
  }

  // an overloaded constructor
  robot(string givenName, int givenCharge) {
    cout << "Creating a robot with specific values... ";
    name = givenName;
    charge = givenCharge;
    favAccessory = rand() % 5;
    status();
  }
  void status() { cout << "[" << name << ":" << charge << "]\n"; }
  void accRec() {
    cout << "I " << name << " The smartest robot recomend "
         << accessories[favAccessory] << ".\n";
  }

  // we discovered in paly testing wanted each robot to have
  // favorite accesory that they would alwasy recommend
  // create a new cariable names 'favAccessory' that is  an integer
  // we will randomize this in the constructor(s) and set.
};

robot robots[10];

void startNextDay() {
  cout << "another hour has elapsed...\n";
  for (int i = 0; i < 10; i++) {
    robots[i].charge -= 1;
    if (robots[i].charge <= 0) {
      cout << robots[i].name << " has run out of energy.\n";
    }
  }
}

int main() {
  srand(time(0));
  std::cout << "No Error\n";

  accessories[0] = "Rubber Duckie";
  accessories[1] = "Bracers of Slarium";
  accessories[2] = "Amulets of The Mad God";
  accessories[3] = "Helmet of The Cosmoms";
  accessories[4] = "Chestplate of Lost Gods";

  robot sheldon;
  sheldon.status();

  sheldon.name = "Sheldon";
  sheldon.charge = 21;

  cout << sheldon.name << ".\n";
  cout << sheldon.name << "'s charge level is " << sheldon.charge << ".\n";

  robot lenord("Lenord", 6);
  lenord.accRec();
  sheldon.accRec();

  // this is the start of a system
  //  lets creat an array of robots
  //  and randomly populate those robots with name and carge.

  string robNames[7] = {"Penny", "Sheldon",  "Howard", "Lenard",
                        "Raji",  "Bernadet", "Amy"};

  for (int i = 0; i < 10; i++) {
    // creat a new robot, assign random name, and random charge
    robots[i] = robot(robNames[rand() % 6], rand() % 11 + 5);
  }
  for (int i = 0; i < 10; i++) {
    robots[i];
  } 
   for (int i = 0; i < 10; i++) {
    startNextDay();
   }
}