// =============================================================================
// WINDOW MESSAGES — the mouse wheel, offered to the game before its own proc
// =============================================================================

#include "nocturne_test.h"
#include "win32/window_message.h"

namespace {

// The wheel message as Win32 packs it: notches times WHEEL_DELTA, signed, in
// the high word.
unsigned long wheel(int clicks) {
    return (unsigned long)(unsigned short)(short)(clicks * NOCTURNE_WHEEL_DELTA) << 16;
}

} // namespace

// Notches add up between reads, either way, and a read takes them all.
NOCTURNE_TEST(wheel_notches_add_up_until_they_are_taken) {
    nocturne_mouse_wheel_take();
    CHECK_EQ(nocturne_window_message(NOCTURNE_WM_MOUSEWHEEL, wheel(1), 0), 1);
    CHECK_EQ(nocturne_window_message(NOCTURNE_WM_MOUSEWHEEL, wheel(2), 0), 1);
    CHECK_EQ(nocturne_mouse_wheel_take(), 3);
    CHECK_EQ(nocturne_mouse_wheel_take(), 0);

    // Down is negative, not 65416 notches up.
    nocturne_window_message(NOCTURNE_WM_MOUSEWHEEL, wheel(-1), 0);
    CHECK_EQ(nocturne_mouse_wheel_take(), -1);
}

// Anything else is the shipped proc's to decode.
NOCTURNE_TEST(other_messages_go_on_to_the_games_proc) {
    CHECK_EQ(nocturne_window_message(0x0100 /* WM_KEYDOWN */, 0, 0), 0);
    CHECK_EQ(nocturne_mouse_wheel_take(), 0);
}

NOCTURNE_TEST_MAIN()
