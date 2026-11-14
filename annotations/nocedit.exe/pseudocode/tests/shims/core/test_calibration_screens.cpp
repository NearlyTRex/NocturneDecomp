// =============================================================================
// CALIBRATION SCREENS — the gamepad's calibration and the monitor's test
// pattern at the game's resolution
// =============================================================================
//
// Where the prompts and the pattern go at 640x480 and on a larger layout, the
// stick's centre and range each leaves in the game, and Escape.

#include "core/calibration_screens.h"
#include "nocturne.h"
#include "nocturne_test.h"
#include "screens_support.h"

#include <string>

namespace {

using screens_support::count;
using screens_support::first;
using screens_support::stand;

// A 1920x1080 screen: the layout 2.25 times as large, 240 in from the left.
void wide() {
    screens_support::screen(1920, 1080);
    stand.layout = {2.25f, 240, 0};
}

} // namespace

// Centred, then moved about: the centre where the stick was at the first
// Enter, the range what it reached before the second. At 640x480 the prompts
// are where they ship, over the moon, the stick's readout in the corner.
NOCTURNE_TEST(a_gamepad_is_centred_and_its_range_taken) {
    stand.reset();
    g_JoyButtons = 0x1f;
    stand.sticks = {{100, 200}, {50, 300}, {150, 100}, {100, 200}, {0, 0}};
    stand.presses = {DIK_RETURN, 0, 0, 0, DIK_RETURN};
    CHECK_EQ(nocturne_calibrate_gamepad(), 1);
    CHECK_EQ(stand.calls[0], std::string("moon"));
    CHECK_EQ(first("text"), std::string("text medium Center gamepad, press ENTER 212 235 7 1"));
    CHECK_EQ(first("text medium Move"),
             std::string("text medium Move gamepad in all directions, press ENTER 148 235 7 1"));
    CHECK_EQ(first("readout"), std::string("readout 100,200,1f 0 0"));
    CHECK_EQ(count("reset keys"), 5);
    CHECK_EQ(stand.swaps, 5);
    CHECK_EQ(g_CGamePtr->x_center, 100);
    CHECK_EQ(g_CGamePtr->y_center, 200);
    CHECK_EQ(g_CGamePtr->x_stick_min, 50);
    CHECK_EQ(g_CGamePtr->x_stick_max, 150);
    CHECK_EQ(g_CGamePtr->y_stick_min, 100);
    CHECK_EQ(g_CGamePtr->y_stick_max, 300);
}

// Larger, the prompt is scaled and centred on the layout; Escape leaves the
// gamepad uncalibrated and the keyboard in its place.
NOCTURNE_TEST(escape_hands_back_to_the_keyboard) {
    stand.reset();
    wide();
    g_CGamePtr->x_center = 9;
    g_CGamePtr->game_control = CONTROL_MODE_GAMEPAD;
    stand.presses = {DIK_ESCAPE};
    CHECK_EQ(nocturne_calibrate_gamepad(), 0);
    CHECK_EQ(first("text"), std::string("text medium Center gamepad, press ENTER 717 529 7 2.25"));
    CHECK_EQ(g_CGamePtr->x_center, 0);
    CHECK_EQ(g_CGamePtr->game_control, CONTROL_MODE_KEYBOARD);

    stand.reset();
    stand.presses = {0, DIK_RETURN, DIK_ESCAPE};
    CHECK_EQ(nocturne_calibrate_gamepad(), 0);
    CHECK_EQ(stand.swaps, 3);
}

// Only a gamepad nobody has centred is calibrated.
NOCTURNE_TEST(only_an_uncentred_gamepad_is_calibrated) {
    stand.reset();
    g_CGamePtr->game_control = CONTROL_MODE_KEYBOARD;
    CHECK_EQ(nocturne_check_and_calibrate_gamepad(), 1);
    g_CGamePtr->game_control = CONTROL_MODE_GAMEPAD;
    g_CGamePtr->x_center = 5;
    CHECK_EQ(nocturne_check_and_calibrate_gamepad(), 1);
    CHECK_EQ(stand.swaps, 0);
    g_CGamePtr->x_center = 0;
    stand.presses = {DIK_ESCAPE};
    CHECK_EQ(nocturne_check_and_calibrate_gamepad(), 0);
    CHECK_EQ(stand.swaps, 1);
}

// The pattern where it ships at 640x480: its prompt three rows above the foot,
// its title two below the top, until a key.
NOCTURNE_TEST(the_test_pattern_is_where_it_ships) {
    stand.reset();
    nocturne_calibration_test_pattern((char *)"Brightness");
    CHECK_EQ(stand.calls[0], std::string("clear"));
    CHECK_EQ(first("scaled"), std::string("scaled 0 0 640x480 ffff 0"));
    CHECK_EQ(first("text"),
             std::string("text small Brightness  Press any key to continue. 168 450 248 1"));
    CHECK_EQ(first("text small Monitor"),
             std::string("text small Monitor calibration 244 20 248 1"));
    CHECK_EQ(stand.swaps, 1);
    CHECK_EQ(count("input"), 1);
    CHECK_EQ(stand.calls.back(), std::string("keypress"));
}

// On a wide screen the picture is stretched over all of it, mixed where a
// stretch is not a whole one; its lines are centred on the screen, placed
// with the stretch and scaled with the layout.
NOCTURNE_TEST(the_test_pattern_fills_a_wide_screen) {
    stand.reset();
    wide();
    nocturne_calibration_test_pattern((char *)"Brightness");
    CHECK_EQ(first("scaled"), std::string("scaled 0 0 1920x1080 ffff 1"));
    CHECK_EQ(first("text"),
             std::string("text small Brightness  Press any key to continue. 618 1013 248 2.25"));
    CHECK_EQ(first("text small Monitor"),
             std::string("text small Monitor calibration 789 45 248 2.25"));

    // A whole stretch both ways keeps the pixels; one that is whole neither
    // way mixes them.
    stand.reset();
    screens_support::screen(1280, 960);
    stand.layout = {2.0f, 0, 0};
    nocturne_calibration_test_pattern((char *)"Brightness");
    CHECK_EQ(first("scaled"), std::string("scaled 0 0 1280x960 ffff 0"));
    stand.reset();
    screens_support::screen(800, 600);
    stand.layout = {1.25f, 0, 0};
    nocturne_calibration_test_pattern((char *)"Brightness");
    CHECK_EQ(first("scaled"), std::string("scaled 0 0 800x600 ffff 1"));
}

NOCTURNE_TEST_MAIN()
