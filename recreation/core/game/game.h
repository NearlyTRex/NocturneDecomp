#pragma once

#include "common/fwd.h"
#include "core/fwd.h"
#include "core/game/aimmode.h"
#include "core/game/controlbindings.h"
#include "core/game/controlmode.h"
#include "core/game/herotype.h"

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

    // The settings nocturne.ini carries, read by readIniData under the keys their names spell.
    int game_pixx = 640;
    int game_pixy = 480;
    int game_bpp = 32;
    // 16.16 fixed point.
    int gamma = 0x10000;
    EHeroType hero_number = EHeroType::HERO_TYPE_GABRIELLA;
    int halo_mode = 0;
    // Set until startup has shown the first run's calibration.
    int first_time_flag = 0;
    int subtitle_mode = 1;
    int blood_flag = 1;
    int nudity_flag = 1;
    int foul_language_flag = 1;
    int shadow_flag = 1;
    // Turns blood, nudity and foul language off whatever their own flags say.
    int quimby_flag = 0;
    EControlMode game_control = EControlMode::CONTROL_MODE_KEYBOARD;
    CControlBindings controls;
    int invert_mouse_y_axis = 0;
    int always_run = 0;
    // 16.16 fixed point; 1.0 is unscaled.
    int x_mouse_sensitivity = 0x10000;
    int y_mouse_sensitivity = 0x10000;
    // The joystick calibration, in getJoystickState's 0..65535; a zero centre is uncalibrated.
    int x_center = 0;
    int y_center = 0;
    int x_stick_min = 0;
    int x_stick_max = 0;
    int y_stick_min = 0;
    int y_stick_max = 0;
    EAimMode aim_mode = EAimMode::AIM_MODE_AUTO;
    int auto_use_health = 0;
    int head_of_horror_cheat = 0;
    // The automap's zoom, in percent.
    int map_zoom = 320;

private:
    void seedCalibration();
};

} // namespace nocturne::core
