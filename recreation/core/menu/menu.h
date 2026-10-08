#pragma once

#include "engine/fwd.h"

namespace nocturne::core {

void staticInit();
int calibrateGamepad();
void showCalibrationTest();
void showOptionsScreen(int initialize_systems);
int showMainGameMenu();
char *getKeyDisplayName(engine::EInputCodeType key_code);

} // namespace nocturne::core
