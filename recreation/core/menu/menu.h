#pragma once

#include "engine/fwd.h"
#include "support/fwd.h"

namespace nocturne::core {

// What the menu screens draw with and read keys from.
struct SMenuOwners {
    const engine::CDosIo &dosio;
    engine::IScreenDevice &screen;
    engine::CSpecial &special;
    engine::C2d &two_d;
    engine::IRawInput &raw_input;
    engine::CBitFont &small_editor_font;
    const support::CNewMsg &messages;
};

void staticInit();
int calibrateGamepad();
// Four steps for setting the monitor up over art/brightness, then a last screen, each shown
// until a key is typed.
void showCalibrationTest(const SMenuOwners &owners);
void showOptionsScreen(int initialize_systems);
int showMainGameMenu();
char *getKeyDisplayName(engine::EInputCodeType key_code);

} // namespace nocturne::core
