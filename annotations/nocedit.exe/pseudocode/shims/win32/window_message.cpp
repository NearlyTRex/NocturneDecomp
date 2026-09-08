// =============================================================================
// WINDOW MESSAGES — implementation
// =============================================================================
//
// See win32/window_message.h for what this hook is for.

#include "win32/window_message.h"
#include "shim_config.h"

// Wheel motion is accumulated rather than queued: the console reads it once a
// frame, and a fast flick that delivers several notches between two reads
// should scroll by their sum, not by one.
static int wheel_accumulator = 0;

int nocturne_window_message(unsigned int message, unsigned long wparam, long lparam) {
#if NOCTURNE_AUTHENTIC_WINDOW_MESSAGES
    (void)message;
    (void)wparam;
    (void)lparam;
    return 0;
#else
    (void)lparam;

    if (message == NOCTURNE_WM_MOUSEWHEEL) {
        // Win32 packs a signed notch count into the high word of wParam, so it
        // has to come back through a short before it can be divided or a
        // scroll-down reads as +65416 notches.
        int delta = (int)(short)((wparam >> 16) & 0xffff);
        wheel_accumulator = wheel_accumulator + delta / NOCTURNE_WHEEL_DELTA;
        return 1;
    }

    return 0;
#endif
}

int nocturne_mouse_wheel_take(void) {
    int notches = wheel_accumulator;
    wheel_accumulator = 0;
    return notches;
}
