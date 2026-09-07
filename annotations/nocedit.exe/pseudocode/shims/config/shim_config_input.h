#pragma once

// =============================================================================
// SHIM CONFIG — CONTROLLER TUNING
// =============================================================================
//
// The knobs for the modern controller path. Whether that path exists at all is
// the authenticity question, and lives with the rest of those in
// shim_config_authentic.h as NOCTURNE_AUTHENTIC_GAMEPAD; everything here tunes
// a feature that has no shipped answer to be faithful to.
//
// Nothing here is read when NOCTURNE_AUTHENTIC_GAMEPAD is 1.
//
// Included from shim_config.h, which is what nocturne.h reaches.

// NOCTURNE_PAD_STICK_DEADZONE
//   Radius, as a fraction of full deflection, inside which a stick reads as
//   centred. Applied radially to the pair rather than per axis, so the
//   diagonal is not a larger dead area than the cardinals, and the live range
//   outside it is rescaled to 0..1 so movement starts from a standstill
//   instead of snapping to the deadzone edge.
#ifndef NOCTURNE_PAD_STICK_DEADZONE
#define NOCTURNE_PAD_STICK_DEADZONE 0.20f
#endif

// NOCTURNE_PAD_WALK_THRESHOLD
//   Left-stick deflection at which the hero breaks into a run.
//
//   The engine has no continuous forward speed: SPlayerActionState carries
//   walk/backup/run as three ints, and the character classes turn them into a
//   motion-controller state (1 = walk, 3 = run, 2 = back). So a stick pushed
//   half way cannot move the hero at half speed; the honest analogue reading
//   is the two speeds the animation set actually has. Below this, walk; at or
//   above it, run. Strafing, turning and looking are genuinely continuous —
//   they are floats the character multiplies by — and are not thresholded.
#ifndef NOCTURNE_PAD_WALK_THRESHOLD
#define NOCTURNE_PAD_WALK_THRESHOLD 0.65f
#endif

// NOCTURNE_PAD_MOVE_THRESHOLD
//   Left-stick deflection at which the hero starts moving at all, and at which
//   the four DIJ_LEFT/RIGHT/UP/DOWN codes read as pressed. Above the deadzone
//   so that a binding on a stick direction does not chatter.
#ifndef NOCTURNE_PAD_MOVE_THRESHOLD
#define NOCTURNE_PAD_MOVE_THRESHOLD 0.40f
#endif

// NOCTURNE_PAD_TRIGGER_THRESHOLD
//   Trigger pull at which its input code reads as pressed. The triggers are
//   bindable as buttons; nothing in the game takes an analogue pull.
#ifndef NOCTURNE_PAD_TRIGGER_THRESHOLD
#define NOCTURNE_PAD_TRIGGER_THRESHOLD 0.35f
#endif

// NOCTURNE_PAD_TURN_RATE / NOCTURNE_PAD_LOOK_RATE
//   Full-deflection right-stick turn and look speeds, in the units
//   SPlayerInput carries. CGame::processKeyboardControls ramps a held key to
//   0.25 in each, and the character multiplies turn_speed by its own
//   base.turn_speed, so 0.25 is "as fast as the keyboard can turn". The stick
//   reaches the same ceiling at full deflection and is proportional below it.
//
//   Both are scaled by the Options screen's X/Y sensitivity sliders, so the
//   existing controls tune the pad as well as the mouse.
#ifndef NOCTURNE_PAD_TURN_RATE
#define NOCTURNE_PAD_TURN_RATE 0.25f
#endif
#ifndef NOCTURNE_PAD_LOOK_RATE
#define NOCTURNE_PAD_LOOK_RATE 0.25f
#endif

// NOCTURNE_PAD_INVERT_LOOK
//   1 to push the right stick down to look up. The Options screen's "Invert Y
//   Axis" line only appears in mouse mode, so the pad needs its own answer.
#ifndef NOCTURNE_PAD_INVERT_LOOK
#define NOCTURNE_PAD_INVERT_LOOK 0
#endif

// NOCTURNE_PAD_NAV_REPEAT_DELAY_MS / NOCTURNE_PAD_NAV_REPEAT_RATE_MS
//   Auto-repeat for menu navigation: how long a direction must be held before
//   it starts repeating, and the interval between repeats after that. Without
//   these a held stick moves the highlight exactly one line, which is unusable
//   on the thirty-entry Customize Keys list.
#ifndef NOCTURNE_PAD_NAV_REPEAT_DELAY_MS
#define NOCTURNE_PAD_NAV_REPEAT_DELAY_MS 400
#endif
#ifndef NOCTURNE_PAD_NAV_REPEAT_RATE_MS
#define NOCTURNE_PAD_NAV_REPEAT_RATE_MS 110
#endif

// NOCTURNE_PAD_MAPPING_FILE
//   A gamecontrollerdb.txt to load on top of SDL's built-in mapping table, so
//   a pad newer than the linked SDL can be taught without rebuilding. Resolved
//   the same way the game resolves its own data paths; absent is not an error.
#ifndef NOCTURNE_PAD_MAPPING_FILE
#define NOCTURNE_PAD_MAPPING_FILE ".\\gamecontrollerdb.txt"
#endif
