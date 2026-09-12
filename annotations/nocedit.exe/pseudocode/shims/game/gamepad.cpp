// =============================================================================
// MODERN CONTROLLER SUPPORT — implementation
// =============================================================================
//
// See gamepad.h for what this is, where the input codes live and why almost
// none of the engine has to know about it.

#include "game/gamepad.h"
#include "game/automap.h"
#include "shim_config.h"
#include "core/debug_log.h"
#include "nocturne.h"

#include <SDL.h>
#include <cstddef>
#include <cstring>
#include <string>

#if !NOCTURNE_AUTHENTIC_GAMEPAD

// Defined in shims/watcom/crt.cpp — the same '\\'->'/' + case-insensitive
// resolution the CRT _fopen shim applies, so the mapping file is looked for
// where the engine would look for it.
std::string watcom_resolve_fs_path(const char *path);

namespace {

// SDL enumerates 21 buttons today; the code space reserves 26 so a future SDL
// can grow into it without moving the trigger and right-stick codes, which are
// persisted in the player's INI.
static_assert(SDL_CONTROLLER_BUTTON_MAX <= NOCTURNE_PAD_BUTTON_SPAN,
              "SDL has more controller buttons than the reserved input-code span");
// And the whole block has to stay inside the unreachable window between the
// last keyboard code (DIK_APPS = 0x15D) and the first mouse code
// (DIM_LBUTTON = 0x200).
static_assert(NOCTURNE_PAD_BUTTON_BASE > DIK_APPS,
              "pad codes overlap the keyboard");
static_assert(NOCTURNE_PAD_CODE_END <= DIM_LBUTTON,
              "pad codes overlap the mouse and joystick codes");

SDL_GameController *s_pad = nullptr;
SDL_JoystickID      s_pad_id = -1;
bool                s_inited = false;

// Frames of navigation suppression still owed to CGame::playerControls. A
// counter rather than a flag because a gameplay frame can present more than
// once — a mid-frame swapBuffers pumps messages like any other — and a single
// flag would leave a one-frame window where a face button also confirmed
// whatever menu the player was not in. Three frames is under 50ms, which is
// far below the time it takes to reach a menu and press anything in it.
int s_gameplay_hold = 0;

// Depth of nocturne_gamepad_suppress_nav. Nonzero silences the navigation
// synthesis for screens that read raw input instead of acting on it.
int s_nav_suppressed = 0;

// Previous frame's pressed state, one slot per pad code plus the four the left
// stick borrows from the original joystick. Indexed by pad_slot() below.
enum {
    kStickLeft = NOCTURNE_PAD_CODE_END - NOCTURNE_PAD_BUTTON_BASE,
    kStickRight,
    kStickUp,
    kStickDown,
    kSlotCount
};
bool s_prev[kSlotCount];

// The six codes the menus navigate with, plus their auto-repeat clocks. Escape
// and Return do not repeat — a held button that re-confirms would walk through
// a whole menu tree on one press — so their repeat entries stay unused.
enum { kNavUp, kNavDown, kNavLeft, kNavRight, kNavConfirm, kNavCancel, kNavCount };
const int kNavCode[kNavCount] = {
    DIK_NUMPAD8, DIK_NUMPAD2, DIK_NUMPAD4, DIK_NUMPAD6, DIK_RETURN, DIK_ESCAPE
};
bool     s_nav_held[kNavCount];
bool     s_nav_ours[kNavCount];
uint32_t s_nav_next_ms[kNavCount];

int pad_slot(int code) { return code - NOCTURNE_PAD_BUTTON_BASE; }

// The rule CGame::resetKeyState used, kept exactly: a code is cleared while
// the control is released, and set on the frame it goes down. It is never
// written while held, so a menu's getAndClearKeyState leaves it clear until
// the next press (one action per press) while gameplay, which reads without
// clearing, still sees it held.
void apply_edge(int code, int slot, bool now) {
    if (!now) {
        g_KeyboardState[code] = '\0';
    } else if (!s_prev[slot]) {
        g_KeyboardState[code] = '\x01';
    }
    s_prev[slot] = now;
}

// Radial deadzone with the live range rescaled to 0..1, so a stick starts
// moving the hero from a standstill rather than from the deadzone edge.
void deadzone(float raw_x, float raw_y, float *out_x, float *out_y) {
    const float dz = NOCTURNE_PAD_STICK_DEADZONE;
    float magnitude = SDL_sqrtf(raw_x * raw_x + raw_y * raw_y);

    if (magnitude <= dz) {
        *out_x = 0.0f;
        *out_y = 0.0f;
        return;
    }
    if (magnitude > 1.0f) {
        magnitude = 1.0f;
    }
    const float scaled = (magnitude - dz) / (1.0f - dz);
    const float gain = scaled / magnitude;
    *out_x = raw_x * gain;
    *out_y = raw_y * gain;
}

float axis_unit(SDL_GameControllerAxis axis) {
    if (s_pad == nullptr) {
        return 0.0f;
    }
    const int raw = SDL_GameControllerGetAxis(s_pad, axis);
    // SDL's negative extent is one larger than its positive one; dividing both
    // by the positive extent and clamping keeps full deflection at exactly 1.
    float unit = (float)raw / 32767.0f;
    if (unit < -1.0f) unit = -1.0f;
    if (unit >  1.0f) unit =  1.0f;
    return unit;
}

void close_pad() {
    if (s_pad != nullptr) {
        SDL_GameControllerClose(s_pad);
        s_pad = nullptr;
        s_pad_id = -1;
    }
    memset(s_prev, 0, sizeof(s_prev));
}

void open_first_pad() {
    if (s_pad != nullptr) {
        return;
    }
    for (int i = 0; i < SDL_NumJoysticks(); i++) {
        if (!SDL_IsGameController(i)) {
            continue;
        }
        SDL_GameController *pad = SDL_GameControllerOpen(i);
        if (pad == nullptr) {
            continue;
        }
        s_pad = pad;
        s_pad_id = SDL_JoystickInstanceID(SDL_GameControllerGetJoystick(pad));
        memset(s_prev, 0, sizeof(s_prev));
        DLOG("input", "controller opened: %s (%s)",
             SDL_GameControllerName(pad) ? SDL_GameControllerName(pad) : "?",
             SDL_GameControllerGetType(pad) == SDL_CONTROLLER_TYPE_UNKNOWN
                 ? "generic" : "known type");
        return;
    }
}

// ---------------------------------------------------------------------------
// Names
// ---------------------------------------------------------------------------

enum LabelFamily { kXbox, kPlayStation, kNintendo };

LabelFamily label_family() {
    if (s_pad == nullptr) {
        return kXbox;
    }
    switch (SDL_GameControllerGetType(s_pad)) {
    case SDL_CONTROLLER_TYPE_PS3:
    case SDL_CONTROLLER_TYPE_PS4:
    case SDL_CONTROLLER_TYPE_PS5:
        return kPlayStation;
    case SDL_CONTROLLER_TYPE_NINTENDO_SWITCH_PRO:
#if SDL_VERSION_ATLEAST(2, 24, 0)
    case SDL_CONTROLLER_TYPE_NINTENDO_SWITCH_JOYCON_LEFT:
    case SDL_CONTROLLER_TYPE_NINTENDO_SWITCH_JOYCON_RIGHT:
    case SDL_CONTROLLER_TYPE_NINTENDO_SWITCH_JOYCON_PAIR:
#endif
        return kNintendo;
    default:
        return kXbox;
    }
}

// One row per SDL_GameControllerButton, in SDL's order. SDL names a face
// button by its position, not its legend — SDL_CONTROLLER_BUTTON_A is always
// the bottom one — so a Switch pad's rows are its own legends against those
// positions, which is why A and B look swapped here. They are not: that is
// what is printed on the plastic.
struct ButtonLabels { const char *xbox, *playstation, *nintendo; };
const ButtonLabels kButtonLabels[] = {
    /* A             */ { "A",            "Cross",      "B"        },
    /* B             */ { "B",            "Circle",     "A"        },
    /* X             */ { "X",            "Square",     "Y"        },
    /* Y             */ { "Y",            "Triangle",   "X"        },
    /* BACK          */ { "Back",         "Share",      "Minus"    },
    /* GUIDE         */ { "Guide",        "PS Button",  "Home"     },
    /* START         */ { "Start",        "Options",    "Plus"     },
    /* LEFTSTICK     */ { "L3",           "L3",         "L Stick"  },
    /* RIGHTSTICK    */ { "R3",           "R3",         "R Stick"  },
    /* LEFTSHOULDER  */ { "LB",           "L1",         "L"        },
    /* RIGHTSHOULDER */ { "RB",           "R1",         "R"        },
    /* DPAD_UP       */ { "D-Pad Up",     "D-Pad Up",    "D-Pad Up"    },
    /* DPAD_DOWN     */ { "D-Pad Down",   "D-Pad Down",  "D-Pad Down"  },
    /* DPAD_LEFT     */ { "D-Pad Left",   "D-Pad Left",  "D-Pad Left"  },
    /* DPAD_RIGHT    */ { "D-Pad Right",  "D-Pad Right", "D-Pad Right" },
    /* MISC1         */ { "Share",        "Microphone", "Capture"  },
    /* PADDLE1       */ { "Paddle 1",     "Paddle 1",   "Paddle 1" },
    /* PADDLE2       */ { "Paddle 2",     "Paddle 2",   "Paddle 2" },
    /* PADDLE3       */ { "Paddle 3",     "Paddle 3",   "Paddle 3" },
    /* PADDLE4       */ { "Paddle 4",     "Paddle 4",   "Paddle 4" },
    /* TOUCHPAD      */ { "Touchpad",     "Touchpad",   "Touchpad" }
};

const char *pick(const ButtonLabels &row, LabelFamily family) {
    switch (family) {
    case kPlayStation: return row.playstation;
    case kNintendo:    return row.nintendo;
    default:           return row.xbox;
    }
}

} // namespace

// ---------------------------------------------------------------------------
// Lifecycle
// ---------------------------------------------------------------------------

extern "C" void nocturne_gamepad_init(void) {
    if (s_inited) {
        return;
    }
    s_inited = true;

    if (SDL_InitSubSystem(SDL_INIT_GAMECONTROLLER) != 0) {
        DLOG("input", "no game-controller subsystem: %s", SDL_GetError());
        return;
    }

    // A mapping file beside the game's own data teaches SDL a pad newer than
    // the SDL we linked against. Absent is the normal case, not an error.
    const std::string mapping = watcom_resolve_fs_path(NOCTURNE_PAD_MAPPING_FILE);
    const int added = SDL_GameControllerAddMappingsFromFile(mapping.c_str());
    if (added > 0) {
        DLOG("input", "loaded %d controller mappings from %s",
             added, mapping.c_str());
    }

    open_first_pad();
}

extern "C" int nocturne_gamepad_present(void) {
    return s_pad != nullptr;
}

extern "C" void nocturne_gamepad_note_gameplay_frame(void) {
    s_gameplay_hold = 3;
}

extern "C" void nocturne_gamepad_suppress_nav(int suppress) {
    if (suppress != 0) {
        s_nav_suppressed++;
    } else if (s_nav_suppressed > 0) {
        s_nav_suppressed--;
    }
}

namespace {

// Set a shared keyboard code without ever clearing one we did not set: unlike
// the pad codes, DIK_NUMPAD8 and friends belong to the keyboard too, and
// blanking them every frame would eat real key presses.
void nav_press(int nav) {
    g_KeyboardState[kNavCode[nav]] = '\x01';
    s_nav_ours[nav] = true;

    // g_KeyboardState is only half the input the game reads. The other half is
    // the typed-character ring, fed exclusively from WM_CHAR, and the screens
    // that ask "has anything been pressed" ask it rather than the key state —
    // playMovie's skip test is wasKeyPressed(), and so are the text-entry
    // dialogs and the button prompts. Without a character in the ring a pad
    // cannot skip a cutscene or dismiss a prompt.
    //
    // Only confirm and cancel enqueue one, and only the two control characters
    // a keyboard would have produced for Return and Escape — which are already
    // in the set the user32 shim synthesizes WM_CHAR for. The directions
    // deliberately do not: CPickList::handleInput checks the ring BEFORE its
    // arrow-key block and treats whatever it finds as incremental-search text,
    // so a character per stick tick would eat the list's own navigation.
    if (nav == kNavConfirm) {
        wincore_winrun_cpp_enqueueInput_FUN_005f2f30(0x0d);
    } else if (nav == kNavCancel) {
        wincore_winrun_cpp_enqueueInput_FUN_005f2f30(0x1b);
    }
}

void nav_release(int nav) {
    // Only take back a press nobody consumed. A menu clears the code as it
    // reads it, so a still-set code means the press went nowhere and would
    // otherwise be waiting for whatever screen comes up next.
    if (s_nav_ours[nav] && g_KeyboardState[kNavCode[nav]] != '\0') {
        g_KeyboardState[kNavCode[nav]] = '\0';
    }
    s_nav_ours[nav] = false;
}

// A direction: fires on the press, then repeats while held.
void nav_repeating(int nav, bool now, uint32_t now_ms) {
    if (!now) {
        if (s_nav_held[nav]) {
            nav_release(nav);
        }
        s_nav_held[nav] = false;
        return;
    }
    if (!s_nav_held[nav]) {
        s_nav_held[nav] = true;
        s_nav_next_ms[nav] = now_ms + NOCTURNE_PAD_NAV_REPEAT_DELAY_MS;
        nav_press(nav);
        return;
    }
    if ((int32_t)(now_ms - s_nav_next_ms[nav]) >= 0) {
        s_nav_next_ms[nav] = now_ms + NOCTURNE_PAD_NAV_REPEAT_RATE_MS;
        nav_press(nav);
    }
}

// Confirm and cancel: one action per press, however long it is held.
void nav_once(int nav, bool now) {
    if (!now) {
        if (s_nav_held[nav]) {
            nav_release(nav);
        }
        s_nav_held[nav] = false;
        return;
    }
    if (!s_nav_held[nav]) {
        s_nav_held[nav] = true;
        nav_press(nav);
    }
}

bool button_down(SDL_GameControllerButton button) {
    return s_pad != nullptr && SDL_GameControllerGetButton(s_pad, button) != 0;
}

} // namespace

extern "C" void nocturne_gamepad_pump(void) {
    nocturne_gamepad_init();

    const bool was_gameplay = (s_gameplay_hold > 0);
    if (s_gameplay_hold > 0) {
        s_gameplay_hold--;
    }

    // Hotplug. SDL_PollEvent in the user32 shim has already dispatched the
    // device events by the time we run, so ask the subsystem directly rather
    // than trying to intercept them: it is two cheap calls a frame and it
    // cannot miss an event somebody else consumed.
    if (s_pad != nullptr && !SDL_GameControllerGetAttached(s_pad)) {
        DLOG("input", "controller detached");
        close_pad();
    }
    if (s_pad == nullptr) {
        open_first_pad();
    }

    float move_x = 0.0f, move_y = 0.0f, look_x = 0.0f, look_y = 0.0f;
    float trigger_l = 0.0f, trigger_r = 0.0f;
    nocturne_gamepad_axes(&move_x, &move_y, &look_x, &look_y,
                          &trigger_l, &trigger_r);

    // Buttons, in SDL's order, straight onto their codes.
    for (int b = 0; b < SDL_CONTROLLER_BUTTON_MAX; b++) {
        const int code = NOCTURNE_PAD_BUTTON(b);
        apply_edge(code, pad_slot(code),
                   button_down((SDL_GameControllerButton)b));
    }

    // Triggers and the right stick, thresholded so they can be bound as
    // buttons. The analogue values stay available to the movement path.
    apply_edge(NOCTURNE_PAD_LTRIGGER, pad_slot(NOCTURNE_PAD_LTRIGGER),
               trigger_l >= NOCTURNE_PAD_TRIGGER_THRESHOLD);
    apply_edge(NOCTURNE_PAD_RTRIGGER, pad_slot(NOCTURNE_PAD_RTRIGGER),
               trigger_r >= NOCTURNE_PAD_TRIGGER_THRESHOLD);
    apply_edge(NOCTURNE_PAD_RSTICK_LEFT, pad_slot(NOCTURNE_PAD_RSTICK_LEFT),
               look_x <= -NOCTURNE_PAD_MOVE_THRESHOLD);
    apply_edge(NOCTURNE_PAD_RSTICK_RIGHT, pad_slot(NOCTURNE_PAD_RSTICK_RIGHT),
               look_x >= NOCTURNE_PAD_MOVE_THRESHOLD);
    apply_edge(NOCTURNE_PAD_RSTICK_UP, pad_slot(NOCTURNE_PAD_RSTICK_UP),
               look_y <= -NOCTURNE_PAD_MOVE_THRESHOLD);
    apply_edge(NOCTURNE_PAD_RSTICK_DOWN, pad_slot(NOCTURNE_PAD_RSTICK_DOWN),
               look_y >= NOCTURNE_PAD_MOVE_THRESHOLD);

    // The left stick keeps the original joystick's four codes, so a config
    // written by the shipped game still means what it meant.
    apply_edge(DIJ_LEFT,  kStickLeft,  move_x <= -NOCTURNE_PAD_MOVE_THRESHOLD);
    apply_edge(DIJ_RIGHT, kStickRight, move_x >= NOCTURNE_PAD_MOVE_THRESHOLD);
    apply_edge(DIJ_UP,    kStickUp,    move_y <= -NOCTURNE_PAD_MOVE_THRESHOLD);
    apply_edge(DIJ_DOWN,  kStickDown,  move_y >= NOCTURNE_PAD_MOVE_THRESHOLD);

    // What the shipped joystick path published, kept live so the screens that
    // read it still work: the Calibrate line in Control Options draws these,
    // and CGame::resetKeyState's authentic branch is written against them. The
    // axes are the 0..65535 range joyGetPosEx reported in.
    g_JoystickPresent = (s_pad != nullptr) ? 2 : 0;
    g_JoyXPos = (DWORD)((move_x + 1.0f) * 32767.5f);
    g_JoyYPos = (DWORD)((move_y + 1.0f) * 32767.5f);
    g_JoyZPos = (DWORD)((look_y + 1.0f) * 32767.5f);
    g_JoyRPos = (DWORD)((look_x + 1.0f) * 32767.5f);
    g_JoyButtons = 0;
    for (int b = 0; b < 10 && b < SDL_CONTROLLER_BUTTON_MAX; b++) {
        if (button_down((SDL_GameControllerButton)b)) {
            g_JoyButtons |= (1u << b);
        }
    }

    // Navigation. Suppressed on a gameplay frame so a face button does its
    // binding and nothing else — except Start, which is how the in-mission
    // menu is opened and so has to reach DIK_ESCAPE from inside the mission.
    const uint32_t now_ms = SDL_GetTicks();
    const bool nav_ok = (s_nav_suppressed == 0);
    const bool ui = nav_ok && !was_gameplay;

    nav_repeating(kNavUp,    ui && (button_down(SDL_CONTROLLER_BUTTON_DPAD_UP)    || move_y <= -NOCTURNE_PAD_MOVE_THRESHOLD), now_ms);
    nav_repeating(kNavDown,  ui && (button_down(SDL_CONTROLLER_BUTTON_DPAD_DOWN)  || move_y >=  NOCTURNE_PAD_MOVE_THRESHOLD), now_ms);
    nav_repeating(kNavLeft,  ui && (button_down(SDL_CONTROLLER_BUTTON_DPAD_LEFT)  || move_x <= -NOCTURNE_PAD_MOVE_THRESHOLD), now_ms);
    nav_repeating(kNavRight, ui && (button_down(SDL_CONTROLLER_BUTTON_DPAD_RIGHT) || move_x >=  NOCTURNE_PAD_MOVE_THRESHOLD), now_ms);
    nav_once(kNavConfirm, ui && button_down(SDL_CONTROLLER_BUTTON_A));
    nav_once(kNavCancel,  nav_ok && (button_down(SDL_CONTROLLER_BUTTON_START) ||
                                     (ui && button_down(SDL_CONTROLLER_BUTTON_B))));
}

// ---------------------------------------------------------------------------
// State
// ---------------------------------------------------------------------------

extern "C" void nocturne_gamepad_axes(float *move_x, float *move_y,
                                      float *look_x, float *look_y,
                                      float *left_trigger, float *right_trigger) {
    float mx = 0.0f, my = 0.0f, lx = 0.0f, ly = 0.0f;

    if (s_pad != nullptr) {
        deadzone(axis_unit(SDL_CONTROLLER_AXIS_LEFTX),
                 axis_unit(SDL_CONTROLLER_AXIS_LEFTY), &mx, &my);
        deadzone(axis_unit(SDL_CONTROLLER_AXIS_RIGHTX),
                 axis_unit(SDL_CONTROLLER_AXIS_RIGHTY), &lx, &ly);
    }

    if (move_x != nullptr) *move_x = mx;
    if (move_y != nullptr) *move_y = my;
    if (look_x != nullptr) *look_x = lx;
    if (look_y != nullptr) *look_y = ly;

    // Triggers rest at 0 and have no negative half, so they take the raw unit
    // value with a flat threshold rather than the radial deadzone.
    if (left_trigger != nullptr) {
        *left_trigger = axis_unit(SDL_CONTROLLER_AXIS_TRIGGERLEFT);
    }
    if (right_trigger != nullptr) {
        *right_trigger = axis_unit(SDL_CONTROLLER_AXIS_TRIGGERRIGHT);
    }
}

extern "C" const char *nocturne_gamepad_code_name(int code) {
    if (!NOCTURNE_PAD_IS_CODE(code)) {
        return nullptr;
    }
    const LabelFamily family = label_family();
    const int index = code - NOCTURNE_PAD_BUTTON_BASE;

    if (index < (int)(sizeof(kButtonLabels) / sizeof(kButtonLabels[0]))) {
        return pick(kButtonLabels[index], family);
    }

    switch (code) {
    case NOCTURNE_PAD_LTRIGGER:
        return family == kPlayStation ? "L2" : family == kNintendo ? "ZL" : "LT";
    case NOCTURNE_PAD_RTRIGGER:
        return family == kPlayStation ? "R2" : family == kNintendo ? "ZR" : "RT";
    case NOCTURNE_PAD_RSTICK_UP:    return "Right Stick Up";
    case NOCTURNE_PAD_RSTICK_DOWN:  return "Right Stick Down";
    case NOCTURNE_PAD_RSTICK_LEFT:  return "Right Stick Left";
    case NOCTURNE_PAD_RSTICK_RIGHT: return "Right Stick Right";
    default:
        // A button SDL does not enumerate yet, inside the reserved span.
        return "Button";
    }
}

// ---------------------------------------------------------------------------
// Bindings
// ---------------------------------------------------------------------------

extern "C" void nocturne_gamepad_apply_defaults(CGame *game) {
    if (game == (CGame *)0x0) {
        return;
    }

    // Before the bindings, because the screens that would demand calibration
    // test x_center before anything calls resetKeyState.
    nocturne_gamepad_seed_calibration(game);

    // Movement: both sticks, no modifier. "Strafe on" would only get in the
    // way of a stick that already strafes without one.
    game->key_walk         = DIJ_UP;
    game->key_backup       = DIJ_DOWN;
    game->key_strafe_left  = DIJ_LEFT;
    game->key_strafe_right = DIJ_RIGHT;
    game->key_strafe       = INPUT_NONE;
    game->key_left         = NOCTURNE_PAD_RSTICK_LEFT;
    game->key_right        = NOCTURNE_PAD_RSTICK_RIGHT;
    game->key_point_up     = NOCTURNE_PAD_RSTICK_UP;
    game->key_point_down   = NOCTURNE_PAD_RSTICK_DOWN;
    game->key_run          = NOCTURNE_PAD_BUTTON(SDL_CONTROLLER_BUTTON_LEFTSTICK);

    game->key_fire     = NOCTURNE_PAD_RTRIGGER;
    game->key_draw     = NOCTURNE_PAD_LTRIGGER;
    game->key_jump     = NOCTURNE_PAD_BUTTON(SDL_CONTROLLER_BUTTON_A);
    game->key_use_item = NOCTURNE_PAD_BUTTON(SDL_CONTROLLER_BUTTON_B);
    game->key_light    = NOCTURNE_PAD_BUTTON(SDL_CONTROLLER_BUTTON_X);
    game->key_infrared = NOCTURNE_PAD_BUTTON(SDL_CONTROLLER_BUTTON_Y);

    game->key_prev_weapon = NOCTURNE_PAD_BUTTON(SDL_CONTROLLER_BUTTON_LEFTSHOULDER);
    game->key_next_weapon = NOCTURNE_PAD_BUTTON(SDL_CONTROLLER_BUTTON_RIGHTSHOULDER);
    game->key_prev_item   = NOCTURNE_PAD_BUTTON(SDL_CONTROLLER_BUTTON_DPAD_LEFT);
    game->key_next_item   = NOCTURNE_PAD_BUTTON(SDL_CONTROLLER_BUTTON_DPAD_RIGHT);
    game->key_next_ammo   = NOCTURNE_PAD_BUTTON(SDL_CONTROLLER_BUTTON_DPAD_UP);
    game->key_weapon_5    = NOCTURNE_PAD_BUTTON(SDL_CONTROLLER_BUTTON_DPAD_DOWN);
    game->key_item_desc   = NOCTURNE_PAD_BUTTON(SDL_CONTROLLER_BUTTON_GUIDE);

    // The map, which does not live in CGame - see automap.h. Written here with
    // the rest of the pad defaults rather than in the automap shim, which has
    // no SDL, and after nocturne_automap_apply_default_binding() has put the
    // keyboard default in, exactly as CGame's own fields are overridden above.
    //
    // Back is the map button by convention, and it is free because item
    // information moved to Guide. Guide is not delivered by every driver and
    // SDL can be told to keep it; if it does not arrive, the binding is still
    // reachable from Customize Keys like any other.
    *nocturne_automap_key_binding() = NOCTURNE_PAD_BUTTON(SDL_CONTROLLER_BUTTON_BACK);

    // Reachable by cycling with the shoulders; left free for the spare buttons
    // a pad may or may not have.
    game->key_weapon_1 = INPUT_NONE;
    game->key_weapon_2 = INPUT_NONE;
    game->key_weapon_3 = INPUT_NONE;
    game->key_weapon_4 = INPUT_NONE;
}

namespace {

// The bindable actions, in the order the Customize Keys screen lists them.
int *binding_fields(CGame *game, int *count) {
    // key_walk is the first and key_next_ammo the last, and CGame declares
    // them contiguously (0x28..0x90), so the set is one run of ints. Asserted
    // rather than assumed, since a struct change would silently widen it.
    static_assert(offsetof(CGame, key_next_ammo) - offsetof(CGame, key_walk)
                      == 26 * sizeof(int),
                  "the key_* bindings are no longer one contiguous run");
    *count = 27;
    return &game->key_walk;
}

bool is_pad_binding(int code) {
    return NOCTURNE_PAD_IS_CODE(code) ||
           (code >= DIJ_BUTTON1 && code <= DIJ_BUTTON10) ||
           (code >= DIJ_LEFT && code <= DIJ_DOWN);
}

} // namespace

extern "C" void nocturne_gamepad_reseed_for_mode(CGame *game) {
    if (game == (CGame *)0x0) {
        return;
    }

    // Unconditionally, not just on the branch that restores defaults: a player
    // whose saved pad map survives the switch still needs the calibration
    // screen to have nothing left to ask.
    nocturne_gamepad_seed_calibration(game);

    int count = 0;
    const int *fields = binding_fields(game, &count);

    int pad_bindings = 0;
    int other_bindings = 0;
    for (int i = 0; i < count; i++) {
        if (fields[i] == INPUT_NONE) {
            continue;
        }
        if (is_pad_binding(fields[i])) {
            pad_bindings++;
        } else {
            other_bindings++;
        }
    }

    // The map binding is outside the run binding_fields walks, so it has to be
    // counted by hand or a player whose only binding of a kind is the map is
    // told he has none.
    const int map_binding = *nocturne_automap_key_binding();
    if (map_binding != INPUT_NONE && map_binding != 0) {
        if (is_pad_binding(map_binding)) {
            pad_bindings++;
        } else {
            other_bindings++;
        }
    }

    // Only the two crossings that leave the player with nothing to press. A
    // move between keyboard and mouse is left alone: the keyboard bindings
    // work in mouse mode, which is why the shipped mouse defaults only ever
    // arrived through Restore defaults.
    const bool wants_pad = (game->game_control == CONTROL_MODE_GAMEPAD);
    if (wants_pad && pad_bindings == 0) {
        DLOG("input", "control mode -> gamepad with no pad binding; seeding defaults");
        core_game_cpp_CGame_restoreDefaultControls_FUN_004dbbc0(game);
    } else if (!wants_pad && other_bindings == 0) {
        DLOG("input", "control mode -> %d with only pad bindings; seeding defaults",
             (int)game->game_control);
        core_game_cpp_CGame_restoreDefaultControls_FUN_004dbbc0(game);
    }
}

extern "C" void nocturne_gamepad_seed_calibration(CGame *game) {
    if (game == (CGame *)0x0 || game->x_center != 0) {
        return;
    }
    // SDL normalises every pad to the same span, so there is nothing for the
    // calibration screen to measure. These are the values it would have
    // recorded from a stick that centres and reaches both extents exactly, in
    // the 0..65535 range getJoystickState reports in.
    game->x_center    = 0x8000;
    game->y_center    = 0x8000;
    game->x_stick_min = 0;
    game->y_stick_min = 0;
    game->x_stick_max = 0xffff;
    game->y_stick_max = 0xffff;
}

extern "C" int nocturne_gamepad_apply_analog(CGame *game, SPlayerInput *input) {
    if (game == (CGame *)0x0 || input == (SPlayerInput *)0x0 || s_pad == nullptr) {
        return 0;
    }

    float move_x = 0.0f, move_y = 0.0f, look_x = 0.0f, look_y = 0.0f;
    nocturne_gamepad_axes(&move_x, &move_y, &look_x, &look_y, (float *)0, (float *)0);

    // The Options screen's sensitivity sliders are 16.16 fixed point with
    // 0x10000 as 1.0, and they tune the pad as well as the mouse.
    const float x_sensitivity = (float)game->x_mouse_sensitivity * 1.52587890625e-05f;
    const float y_sensitivity = (float)game->y_mouse_sensitivity * 1.52587890625e-05f;

    // Each axis overrides the ramped value only while its stick is deflected,
    // so a binding on the d-pad or a key still drives the same field through
    // CGame::processKeyboardControls the rest of the time.
    if (move_x != 0.0f) {
        input->strafe_speed = move_x;
    }
    if (look_x != 0.0f) {
        input->turn_speed = look_x * NOCTURNE_PAD_TURN_RATE * x_sensitivity;
    }
    if (look_y != 0.0f) {
        const float look = NOCTURNE_PAD_INVERT_LOOK ? -look_y : look_y;
        input->look_up_down_speed = look * NOCTURNE_PAD_LOOK_RATE * y_sensitivity;
    }

    // Speed. SPlayerActionState has no continuous forward speed — the
    // character classes turn walk/backup/run into a motion-controller state —
    // so the stick's deflection picks between the two speeds the animation set
    // has, and whatever is bound to "Run"/"Walk" inverts that choice while it
    // is held.
    const float forward = (move_y < 0.0f) ? -move_y : move_y;
    if (forward >= NOCTURNE_PAD_MOVE_THRESHOLD) {
        int run = (forward >= NOCTURNE_PAD_WALK_THRESHOLD);
        if (g_KeyboardState[game->key_run] != '\0') {
            run = !run;
        }
        (input->action_state).run = run;
    }

    return 1;
}

#else // NOCTURNE_AUTHENTIC_GAMEPAD

// The joyGetPos path stands on its own — CGame::resetKeyState polls it and the
// calibration screen measures it — so every entry point here is inert rather
// than absent, and the call sites do not need their own guards.

extern "C" void nocturne_gamepad_init(void) {}
extern "C" void nocturne_gamepad_pump(void) {}
extern "C" void nocturne_gamepad_note_gameplay_frame(void) {}
extern "C" void nocturne_gamepad_suppress_nav(int suppress) { (void)suppress; }
extern "C" int  nocturne_gamepad_present(void) { return 0; }

extern "C" void nocturne_gamepad_axes(float *move_x, float *move_y,
                                      float *look_x, float *look_y,
                                      float *left_trigger, float *right_trigger) {
    if (move_x != nullptr)        *move_x = 0.0f;
    if (move_y != nullptr)        *move_y = 0.0f;
    if (look_x != nullptr)        *look_x = 0.0f;
    if (look_y != nullptr)        *look_y = 0.0f;
    if (left_trigger != nullptr)  *left_trigger = 0.0f;
    if (right_trigger != nullptr) *right_trigger = 0.0f;
}

extern "C" const char *nocturne_gamepad_code_name(int code) {
    (void)code;
    return nullptr;
}

extern "C" void nocturne_gamepad_apply_defaults(CGame *game) { (void)game; }
extern "C" void nocturne_gamepad_reseed_for_mode(CGame *game) { (void)game; }
extern "C" void nocturne_gamepad_seed_calibration(CGame *game) { (void)game; }

extern "C" int nocturne_gamepad_apply_analog(CGame *game, SPlayerInput *input) {
    (void)game; (void)input;
    return 0;
}

#endif // !NOCTURNE_AUTHENTIC_GAMEPAD
