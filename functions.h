#pragma once
#include <string>

using namespace std;

// External Variables Defined
extern string start;
extern string restart;
extern string trashCan;
extern string crowdStreet;
extern string bridgeCollapse;
extern string racer;
extern string rival;
extern string speedUp;
extern string currSpeedUp;
extern string winChoice;
extern string lostChoice;

// Function Prototypes Defined
int currSpeed(int x);
string playGame();
void opening();
void raceStart();
void trashCanScene();
void crowdStreetScene();
void brokenBridgeScene();
void ramp();
string endingWin();
string endingLost();