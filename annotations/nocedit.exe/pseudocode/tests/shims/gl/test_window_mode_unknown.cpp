// =============================================================================
// WINDOW MODE, UNKNOWN — a saved value that is no mode
// =============================================================================
//
// Only a hand-edited ini can hold one, and it is windowed. A run of its own, as
// test_window_mode_saved.cpp is.

#include "gl/window_mode.h"
#include "ini_support.h"
#include "nocturne_test.h"
#include "window_stand.h"

NOCTURNE_TEST(a_saved_value_that_is_no_mode_is_windowed) {
    window_stand::enter_game_directory("nocturne_window_mode_unknown_test");
    ini_support::save("Graphics", "windowMode", "7");
    CHECK_EQ(nocturne_window_mode_get(), NOCTURNE_WINDOW_MODE_WINDOWED);
    ini_support::save("Graphics", "windowMode", "-1"); // and read once only
    CHECK_EQ(nocturne_window_mode_get(), NOCTURNE_WINDOW_MODE_WINDOWED);
}

NOCTURNE_TEST_MAIN()
