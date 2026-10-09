#pragma once

#include "common/fwd.h"
#include "core/fwd.h"

#include <cstdint>

namespace nocturne::core {

class CGame {
public:
    CGame();

    void saveClockTime();
    void updateDT();
    void displayMessage(char *message, float duration);
    void setFudgeTarget(common::CVector3f *fudge_target, float fudge_step);
    int runGameSession();
    void restoreDefaultControls();
    void resetKeyState();
    void resetInputAndCenterCursor();
    void beginFadeIn();
    void beginFadeOut();
    std::uint32_t fadeIn();
    void resetWeaponSwitchTimers();
    void resetInventoryDisplayTimer();
    void setStatusDisplay(char *name, float value, float duration);
    void loadGame(char *save_filename, int load_mode);
    void showChapterSelect(int select_mode);
    void displayBitmap(char *filename, int width, int height);
    void slamDT(float delta_time);
    void displayActStats();
    void finishAct();
    void rollCredits();
};

} // namespace nocturne::core
