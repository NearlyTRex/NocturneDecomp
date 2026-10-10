#pragma once

#include "engine/fwd.h"

namespace nocturne::wincore {

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

} // namespace nocturne::wincore
