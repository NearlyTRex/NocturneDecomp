#pragma once

// =============================================================================
// WINDOW MESSAGES — extension point for input the shipped proc never saw
// =============================================================================
//
// An addition, not a reconstruction. mainWindowProc decodes a fixed set of
// Win32 messages, and anything outside it goes to DefWindowProc. That set was
// settled in 1999, so input the game predates — the mouse wheel being the first
// case — has nowhere to land no matter what the SDL layer delivers.
//
// Rather than growing the proc a case per device, it offers every message here
// first. The proc keeps one hook instead of an expanding decode tree, and a new
// event becomes a change to the pump (shims/win32/user32.cpp, which raises it)
// and to this file (which consumes it), with no further edits to decompiled
// code.
//
// Gated by NOCTURNE_AUTHENTIC_WINDOW_MESSAGES: with it set the pump does not
// emit the extra messages and the proc does not consult the hook, so the
// message vocabulary is exactly the shipped one.

#ifdef __cplusplus
extern "C" {
#endif

// Messages the shipped proc has no case for. Values are the real Win32 ones so
// the pump can queue an ordinary MSG and anything reading a trace sees a
// familiar number.
#define NOCTURNE_WM_MOUSEWHEEL 0x020A

// Win32 reports the wheel in multiples of this, and the pump keeps to that
// convention rather than inventing its own unit.
#define NOCTURNE_WHEEL_DELTA 120

// Offer one message to the shim. Returns non-zero if it was handled and the
// window proc should stop; zero to carry on with the shipped decode.
int nocturne_window_message(unsigned int message, unsigned long wparam, long lparam);

// Wheel notches accumulated since the last call, then reset. Positive is away
// from the user (scroll up / back through history). Consumers poll this once a
// frame; nothing is queued, so a burst between polls arrives as one total.
int nocturne_mouse_wheel_take(void);

#ifdef __cplusplus
}
#endif
