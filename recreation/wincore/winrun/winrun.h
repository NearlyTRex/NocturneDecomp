#pragma once

#include "engine/fwd.h"

namespace nocturne::wincore {

void calibrateCPUSpeed();
void endPeriod();
int getTime();
void clearKeypresses();
int getNextKeypress();
int wasKeyPressed();
void enqueueInput(int input_value);
void clearMouseClicks();
void setCursorPosition(int x, int y);
void processWindowMessages();
void displayMessageBoxAndQuit(char *message);
char *getKeyName(engine::EInputCodeType keycode);
void sleep(double seconds);
void setRegistryStringValue(char *key_path, char *value_name, char *value_data);
void initJoystick();
void doNothing2();
void getJoystickState();

} // namespace nocturne::wincore
