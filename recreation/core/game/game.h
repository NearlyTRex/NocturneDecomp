#pragma once

#include "common/fwd.h"
#include "core/fwd.h"
#include "core/game/aimmode.h"
#include "core/game/controlbindings.h"
#include "core/game/controlmode.h"
#include "core/game/herotype.h"
#include "engine/fwd.h"
#include "shape/fwd.h"
#include "sound/fwd.h"
#include "support/fwd.h"

#include <cstdint>
#include <string>

namespace nocturne::core {

// What the game times its frames by, and draws and plays its own screens with.
struct SGameOwners {
    engine::IGameClock &clock;
    const engine::CDosIo &dosio;
    engine::IScreenDevice &screen;
    engine::CSpecial &special;
    engine::C2d &two_d;
    engine::C3d &three_d;
    engine::CMenuInput &menu_input;
    const CDFont &fonts;
    sound::CSndMain &sound_main;
};

// What chapter select reads the stories' unlock codes from, offers its lists with, and loads the
// chosen mission with.
struct SChapterSelectOwners {
    const support::CNewMsg &messages;
    shape::CEditorTools &editor_tools;
    const shape::SPickListOwners &pick_list;
    const shape::SFileSelectionOwners &file_selection;
    engine::CIni &ini;
    ILoadingScreen &loading_screen;
    CDemonMission &mission;
};

class CGame {
public:
    explicit CGame(const SGameOwners &owners);

    void saveClockTime();
    // The time since the last saveClockTime or updateDT, scaled, at most a quarter second.
    void updateDT();
    // updateDT's time, in 16.16 seconds and in seconds.
    [[nodiscard]] int getDeltaTimeInt() const;
    [[nodiscard]] float getDeltaTimeFloat() const;
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
    // A story to play, or a chapter of one, then the mission it starts with is loaded and its
    // heroes made.
    void showChapterSelect(const SChapterSelectOwners &owners, EChapterSelectMode select_mode);
    // The mission file last started; starting it again keeps its loaded models and textures.
    [[nodiscard]] const std::string &getCurrentSaveFile() const;
    void displayBitmap(char *filename, int width, int height);
    void slamDT(float delta_time);
    void displayActStats();
    void finishAct();
    // data\credits.txt up the right of the stats image to the credits music, until the music ends
    // or Cancel is pressed.
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
    // Each frame's time is multiplied by it; 1 is real time.
    float time_scale_factor = 1.0F;
    // Set while a sim frame runs, when the game's random draws come off the sim stream.
    int is_processing = 0;
    // Set while a saved game loads, whose script is then not checked again.
    bool is_loading = false;

private:
    void seedCalibration();

    SGameOwners owners_;
    // In the game clock's ticks.
    int clocktime_ = 0;
    int delta_time_int_ = 0;
    float delta_time_float_ = 0.0F;
    std::string current_save_file_;
};

} // namespace nocturne::core
