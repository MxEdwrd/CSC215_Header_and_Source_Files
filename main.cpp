/*
Author: Max Edward
Email : maxedwar@uat.edu
Assignment Name : Interactive Simulation & Functions - Night Racer
*/

// Night Racer
// A personalized racing game

// Include libraries & header files
#include <iostream>
#include <string>
#include "functions"

// Namespace Block
using namespace std;

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