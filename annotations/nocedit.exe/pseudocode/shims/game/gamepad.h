#pragma once

// =============================================================================
// MODERN CONTROLLER SUPPORT
// =============================================================================
//
// An addition on top of one the game already had. nocedit.exe reads a pad
// through winmm — joyGetPosEx, two axes, ten buttons, one hat — and
// CGame::resetKeyState turns that into fourteen input codes that the ordinary
// key-binding path consumes. This replaces the poll, keeps the fourteen codes,
// and adds the rest of a controller made since 1999.
//
// Why it needs almost no engine change
// ------------------------------------
// Every screen in the game reads input from one array. `g_KeyboardState[code]`
// is written by the window proc for the keyboard, by CGame::resetKeyState for
// the pad, and read by everything: the gameplay bindings, the Options menus
// (getAndClearKeyState on DIK_NUMPAD8/2/4/6, DIK_RETURN, DIK_ESCAPE), the
// in-mission Escape menu, and the editor's CPickList — the same six codes in
// all of them. So a controller that can write that array can drive every menu
// in the game without any of them knowing it exists, which is what the UI
// synthesis below does.
//
// Where the new codes live
// ------------------------
// The code space is 0..599 (`INPUT_NONE` = 599 means unassigned). Keyboard
// codes stop at DIK_APPS = 0x15D; mouse and the original joystick occupy
// 0x200..0x256. That leaves 0x15E..0x1FF — 162 codes — unreachable from any
// device, and the pad codes are allocated there. Nothing else has to move:
// `g_PrevKeyboardState[600]` and `g_MessageFlags[600]` already span them, the
// `memcpy(..., 0x258)` in CGame::playerControls already copies them, and the
// rebinding scan in configureCustomKeyBindings already walks to 600, so a new
// code is discovered by pressing it exactly like a key.
//
//   0x160 + SDL_GameControllerButton   the 21 buttons SDL enumerates, in SDL's
//                                      own order — A/B/X/Y, back, guide,
//                                      start, stick clicks, shoulders, the
//                                      four d-pad directions, misc1, the four
//                                      Elite paddles, touchpad click.
//   0x17A / 0x17B                      left and right trigger, past a pull
//                                      threshold. Bindable as buttons; nothing
//                                      in the game takes an analogue pull.
//   0x17C..0x17F                       right stick up/down/left/right.
//
// The base and the span are frozen: they are written into the player's INI as
// plain integers, so moving them would silently rebind everybody's controls.
// SDL_CONTROLLER_BUTTON_MAX is checked against the reserved span at compile
// time rather than used to derive it.
//
// The left stick deliberately keeps the original DIJ_LEFT/RIGHT/UP/DOWN codes
// rather than taking new ones, so a config saved by the shipped game still
// means what it meant, and so the engine's own gamepad defaults still resolve.
//
// Where it runs
// -------------
// nocturne_gamepad_pump() is called from the SDL event drain in the user32
// shim, on the same empty-queue boundary that already drives the movie pump
// and the debug dumps — which is once per swapBuffers, and therefore once per
// frame of every loop in the game, menus included. It writes the pad codes
// always, and the UI navigation codes only on frames that gameplay did not
// claim (see nocturne_gamepad_note_gameplay_frame).

struct CGame;
struct SPlayerInput;

#ifdef __cplusplus
extern "C" {
#endif

// ---------------------------------------------------------------------------
// Input codes
// ---------------------------------------------------------------------------

// First pad code. Frozen: these values are persisted in the player's INI.
#define NOCTURNE_PAD_BUTTON_BASE 0x160

// One code per SDL_GameControllerButton, in SDL's order.
#define NOCTURNE_PAD_BUTTON(sdl_button) (NOCTURNE_PAD_BUTTON_BASE + (sdl_button))

// The reserved button span, independent of the SDL actually linked.
#define NOCTURNE_PAD_BUTTON_SPAN 26

#define NOCTURNE_PAD_LTRIGGER    (NOCTURNE_PAD_BUTTON_BASE + NOCTURNE_PAD_BUTTON_SPAN + 0)
#define NOCTURNE_PAD_RTRIGGER    (NOCTURNE_PAD_BUTTON_BASE + NOCTURNE_PAD_BUTTON_SPAN + 1)
#define NOCTURNE_PAD_RSTICK_UP   (NOCTURNE_PAD_BUTTON_BASE + NOCTURNE_PAD_BUTTON_SPAN + 2)
#define NOCTURNE_PAD_RSTICK_DOWN (NOCTURNE_PAD_BUTTON_BASE + NOCTURNE_PAD_BUTTON_SPAN + 3)
#define NOCTURNE_PAD_RSTICK_LEFT (NOCTURNE_PAD_BUTTON_BASE + NOCTURNE_PAD_BUTTON_SPAN + 4)
#define NOCTURNE_PAD_RSTICK_RIGHT (NOCTURNE_PAD_BUTTON_BASE + NOCTURNE_PAD_BUTTON_SPAN + 5)

// One past the last pad code. Everything in [BASE, END) is a pad code.
#define NOCTURNE_PAD_CODE_END    (NOCTURNE_PAD_BUTTON_BASE + NOCTURNE_PAD_BUTTON_SPAN + 6)

// True for any code this shim owns. The left stick is not among them: it keeps
// the original DIJ_LEFT/RIGHT/UP/DOWN.
#define NOCTURNE_PAD_IS_CODE(code) \
    ((code) >= NOCTURNE_PAD_BUTTON_BASE && (code) < NOCTURNE_PAD_CODE_END)

// ---------------------------------------------------------------------------
// Lifecycle
// ---------------------------------------------------------------------------

// Bring up SDL's game-controller subsystem and adopt whatever is already
// plugged in. Safe to call more than once, and safe to call with no pad
// attached — everything below then reads as centred and unpressed. Called from
// the user32 shim's first pump rather than from an init path, so it does not
// depend on where SDL_Init happened.
void nocturne_gamepad_init(void);

// One frame's worth of controller work: absorb hotplug, sample the device, and
// write both the pad input codes and (when the frame is not a gameplay frame)
// the UI navigation codes into g_KeyboardState. A no-op when
// NOCTURNE_AUTHENTIC_GAMEPAD is 1.
void nocturne_gamepad_pump(void);

// Called by CGame::playerControls once it has decided the frame really is
// gameplay — not paused, not a modal dialog, hero controls live. Suppresses
// the UI navigation synthesis for that frame, so a face button does its
// binding rather than also confirming a menu underneath. Start is the
// exception and always reaches DIK_ESCAPE, since that is what opens the
// in-mission menu.
void nocturne_gamepad_note_gameplay_frame(void);

// ---------------------------------------------------------------------------
// State
// ---------------------------------------------------------------------------

// Nonzero when a controller is connected and open.
int nocturne_gamepad_present(void);

// Hold off the UI navigation synthesis while a screen is reading raw input
// rather than acting on it. The rebinding prompt in configureCustomKeyBindings
// is the case that needs it: it waits for exactly one pressed code and starts
// over if it sees two, so a face button that also produced DIK_RETURN would
// never resolve. Reference-counted, so nested screens each balance their own
// call.
void nocturne_gamepad_suppress_nav(int suppress);

// Deadzoned, rescaled stick and trigger values for the analogue path.
// Sticks are -1..1 with y positive downwards (SDL's sign, which is also the
// engine's for look_up_down_speed); triggers are 0..1. Any pointer may be
// null. All zero when no pad is present.
void nocturne_gamepad_axes(float *move_x, float *move_y,
                           float *look_x, float *look_y,
                           float *left_trigger, float *right_trigger);

// The name to show for a pad code on the Customize Keys screen, in the labels
// the connected controller actually carries — "Cross" and "L1" on a
// PlayStation pad, "A" and "LB" on an Xbox one, Nintendo's swapped face
// buttons on a Switch pad. Falls back to Xbox names when the pad is unknown or
// absent, which is also what an INI written on another machine displays as.
// Returns null for a code this shim does not own.
const char *nocturne_gamepad_code_name(int code);

// Overwrite CGame's bindings with the pad defaults, for a controller with
// every button present:
//
//   Left stick    move and strafe          Right stick   turn and look
//   L3            run / walk modifier      Start         (reserved: menu)
//   RT            Fire / Action            LT            Draw
//   A             Jump                     B             Use item
//   X             Light                    Y             Night vision
//   LB            Previous weapon          RB            Next weapon
//   D-Pad Left    Previous item            D-Pad Right   Next item
//   D-Pad Up      Next ammo                D-Pad Down    Select melee weapons
//   Back          Item description
//
// The four remaining weapon-class selects are left unassigned: a pad has no
// room for five direct selects, and every weapon is still reachable by cycling
// with the shoulders. They stay bindable, which is what the spare buttons on a
// pad that has them — the paddles, the touchpad click, the share button — are
// for. "Strafe on" is unassigned for the same reason: the left stick strafes
// without a modifier.
//
// Called from CGame::restoreDefaultControls after it has laid down the
// keyboard defaults, so anything without a pad default keeps its key.
void nocturne_gamepad_apply_defaults(struct CGame *game);

// Called after the Control Options screen changes control mode. Picking a mode
// has never touched the bindings, and the load path only lays down defaults
// before overlaying whatever the INI saved — so choosing Gamepad left every
// action on a keyboard key the pad cannot press, and the choice survived a
// restart to do it again. This restores the new mode's defaults when, and only
// when, nothing in the current set can be produced by the device just chosen:
// a map the player has customised for that mode is left alone.
void nocturne_gamepad_reseed_for_mode(struct CGame *game);

// Fill in CGame's stick calibration with the span SDL already normalises to,
// so the "Center gamepad, press ENTER" screen has nothing left to learn and
// the Control Options screen stops demanding it. A no-op once calibrated.
void nocturne_gamepad_seed_calibration(struct CGame *game);

// Write the analogue half of a frame's input: strafe_speed, turn_speed,
// look_up_down_speed from the sticks, and walk/backup/run from the left
// stick's deflection. Returns nonzero when a pad drove the frame, so the
// caller knows whether the digital path still has to supply movement.
int nocturne_gamepad_apply_analog(struct CGame *game, struct SPlayerInput *input);

#ifdef __cplusplus
}
#endif
