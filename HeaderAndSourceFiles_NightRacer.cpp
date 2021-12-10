/*
Author: Max Edward
Email : maxedwar@uat.edu
Assignment Name : Header and Source File Conversion - Night Racer
*/

// Night Racer
// A personalized racing game

// Include libraries & header files
#include <iostream>
#include <string>
#include "functions.h"

// Namespace Block
using namespace std;

// Variable Block

// Variables for user input
string start = "";
string restart = "";
string trashCan = "";
string crowdStreet = "";
string bridgeCollapse = "";

// Variables for player setup
string racer = "";
string rival = "";

// Variable for "speed up" section
string speedUp = "";
string currSpeedUp = speedUp;

// Variables for endings
string winChoice = "";
string lostChoice = "";

// Program Start

int main() {
    while (winChoice != "quit" || winChoice != "restart" || lostChoice != "quit" || lostChoice != "restart") {
        playGame();
        if (lostChoice == "quit" || winChoice == "quit") {
            return 0;
        }
    }
    // Needed return 0; at the end of all non-void functions as it was throwing a warning about control reaches the end of a non-void function. Does not impact gameplay.
    return 0;
}
