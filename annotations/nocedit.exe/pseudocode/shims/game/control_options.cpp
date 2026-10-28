// =============================================================================
// CONTROL OPTIONS — implementation
// =============================================================================
//
// See control_options.h, and NOCTURNE_AUTHENTIC_MENU in
// config/shim_config_authentic.h. The configureCustomKeys and
// configureCustomKeyBindings keeps are the shipped screens these follow.

#include "game/control_options.h"

#include "core/menu_page.h"
#include "nocturne.h"

#include <cstdio>

#if !NOCTURNE_AUTHENTIC_MENU

namespace {

using nocturne_menu::LEAVE;
using nocturne_menu::Lines;
using nocturne_menu::Outcome;
using nocturne_menu::Page;
using nocturne_menu::STAY;
using nocturne_menu::STEP_BACK;

char *localized(const char *key) {
    return support_newmsg_cpp_getLocalizedString_FUN_005441f0((char *)key);
}

bool is_gamepad() {
    return g_CGamePtr->game_control == CONTROL_MODE_GAMEPAD;
}

// A gamepad nobody has centred is calibrated before anything that reads it;
// 0 when the player backed out of that.
bool calibrated() {
    return !is_gamepad() || g_CGamePtr->x_center != 0 ||
           core_menu_cpp_calibrateGamepad_FUN_005104d0() != 0;
}

// --- Control Options -----------------------------------------------------------------

enum ControlLine {
    CONTROL_TYPE,
    CONTROL_KEYS,
    CONTROL_X_SENSITIVITY,
    CONTROL_Y_SENSITIVITY,
    CONTROL_INVERT_Y,  // the mouse's
    CONTROL_CALIBRATE, // the gamepad's, after its tuning lines
    CONTROL_PAD_FIRST  // one line per gamepad tuning setting from here
};

const int kControlModes = CONTROL_MODE_GAMEPAD + 1;

// The sensitivities are 16.16 fixed point.
const double kFixedOne = 65536.0;

const char *type_label(CGame *game) {
    switch (game->game_control) {
    case CONTROL_MODE_KEYBOARD:
        return "Control : Keyboard";
    case CONTROL_MODE_MOUSE:
        return "Control : Keyboard/Mouse";
    case CONTROL_MODE_GAMEPAD:
        return "Control : Gamepad";
    default: // read from a bad INI, taken as the keyboard
        game->game_control = CONTROL_MODE_KEYBOARD;
        return "Control : Keyboard";
    }
}

void add_pad_lines(Lines &lines) {
    lines.add(CONTROL_PAD_FIRST + NOCTURNE_PAD_SETTING_DEADZONE, "%s%d%%",
              localized("Stick deadzone : "),
              nocturne_pad_tuning_value(NOCTURNE_PAD_SETTING_DEADZONE));
    lines.add(CONTROL_PAD_FIRST + NOCTURNE_PAD_SETTING_TURN, "%s%d",
              localized("Stick turn speed : "),
              nocturne_pad_tuning_value(NOCTURNE_PAD_SETTING_TURN));
    lines.add(CONTROL_PAD_FIRST + NOCTURNE_PAD_SETTING_LOOK, "%s%d",
              localized("Stick look speed : "),
              nocturne_pad_tuning_value(NOCTURNE_PAD_SETTING_LOOK));
    lines.add_localized(CONTROL_PAD_FIRST + NOCTURNE_PAD_SETTING_INVERT,
                        nocturne_pad_tuning_value(NOCTURNE_PAD_SETTING_INVERT) != 0
                            ? "Invert stick look : ON"
                            : "Invert stick look : OFF");
}

// The type steps either way, wrapping, and brings its own defaults, so the
// bindings always suit the device picked.
void step_type(int step) {
    CGame *game = g_CGamePtr;
    game->game_control =
        (EControlMode)(((int)game->game_control + kControlModes + step) % kControlModes);
    nocturne_gamepad_reseed_for_mode(game);
    core_game_cpp_CGame_restoreDefaultControls_FUN_004dbbc0(game);
}

class ControlOptions : public Page {
public:
    const char *title() override {
        return localized("Control Options");
    }

    void build(Lines &lines) override {
        CGame *game = g_CGamePtr;
        lines.add_localized(CONTROL_TYPE, type_label(game));
        lines.add_localized(CONTROL_KEYS, "Customize Keys");
        lines.add(CONTROL_X_SENSITIVITY, "%s%5.2f", localized("X-axis sensitivity : "),
                  game->x_mouse_sensitivity / kFixedOne);
        lines.add(CONTROL_Y_SENSITIVITY, "%s%5.2f", localized("Y-axis sensitivity : "),
                  game->y_mouse_sensitivity / kFixedOne);
        if (game->game_control == CONTROL_MODE_MOUSE)
            lines.add_localized(CONTROL_INVERT_Y, game->invert_mouse_y_axis != 0
                                                      ? "Invert Y Axis : ON"
                                                      : "Invert Y Axis : OFF");
        if (is_gamepad()) {
            add_pad_lines(lines);
            lines.add_localized(CONTROL_CALIBRATE, "Calibrate");
        }
    }

    Outcome choose(int id, int step) override {
        CGame *game = g_CGamePtr;
        switch (id) {
        case CONTROL_TYPE:
            step_type(step);
            break;
        case CONTROL_KEYS:
            nocturne_key_bindings_menu();
            break;
        case CONTROL_X_SENSITIVITY:
            core_menu_cpp_adjustMouseSensitivity_FUN_005107c0(
                &game->x_mouse_sensitivity, localized("Adjust X-Axis sensitivity"));
            break;
        case CONTROL_Y_SENSITIVITY:
            core_menu_cpp_adjustMouseSensitivity_FUN_005107c0(
                &game->y_mouse_sensitivity, localized("Adjust Y-Axis sensitivity"));
            break;
        case CONTROL_INVERT_Y:
            game->invert_mouse_y_axis = (int)(game->invert_mouse_y_axis == 0);
            break;
        case CONTROL_CALIBRATE:
            core_menu_cpp_calibrateGamepad_FUN_005104d0();
            break;
        default: // a gamepad tuning line
            nocturne_pad_tuning_step(id - CONTROL_PAD_FIRST, step);
            break;
        }
        return STAY;
    }

    // Leaving with a gamepad nobody has centred calibrates it first, and stays
    // if that is backed out of.
    Outcome end_frame() override {
        if (g_InputDisabled != 0)
            return LEAVE;
        if ((*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr, DIK_ESCAPE) == 0)
            return STAY;
        return calibrated() ? LEAVE : STAY;
    }
};

// --- the key bindings ----------------------------------------------------------------

// What a binding holds once another took its code, and how far codes run.
const int kUnbound = 599;
const int kInputCodes = 600;

// held_code's answer with two codes down.
const int kTwoHeld = -2;

struct Binding {
    const char *label;
    int CGame::*key;
};

// The shipped list, in its order; Run reads Walk under always-run.
const Binding kBindings[] = {
    {"Forward", &CGame::key_walk},
    {"Back", &CGame::key_backup},
    {"Run", &CGame::key_run},
    {"Strafe on", &CGame::key_strafe},
    {"Strafe left", &CGame::key_strafe_left},
    {"Strafe right", &CGame::key_strafe_right},
    {"Turn left", &CGame::key_left},
    {"Turn right", &CGame::key_right},
    {"Fire / Action", &CGame::key_fire},
    {"Use item", &CGame::key_use_item},
    {"Light", &CGame::key_light},
    {"Night Vision", &CGame::key_infrared},
    {"Draw", &CGame::key_draw},
    {"Point up", &CGame::key_point_up},
    {"Point down", &CGame::key_point_down},
    {"Jump", &CGame::key_jump},
    {"Select pistol weapons", &CGame::key_weapon_1},
    {"Select assault weapons", &CGame::key_weapon_2},
    {"Select flame weapons", &CGame::key_weapon_3},
    {"Select grenade weapons", &CGame::key_weapon_4},
    {"Select melee weapons", &CGame::key_weapon_5},
    {"Next weapon", &CGame::key_next_weapon},
    {"Previous weapon", &CGame::key_prev_weapon},
    {"Next item", &CGame::key_next_item},
    {"Previous item", &CGame::key_prev_item},
    {"Item description", &CGame::key_item_desc},
    {"Next ammo", &CGame::key_next_ammo},
};
const int kBindingCount = (int)(sizeof(kBindings) / sizeof(kBindings[0]));

// The shipped bindings and the automap's, as the list shows them.
struct Row {
    char *label;
    int *key;
};

const int kRowCount = kBindingCount + 1;

char *binding_label(int index) {
    const char *label = kBindings[index].label;
    if (kBindings[index].key == &CGame::key_run && g_CGamePtr->always_run != 0)
        label = "Walk";
    return localized(label);
}

void collect(Row *rows) {
    for (int i = 0; i < kBindingCount; i++) {
        rows[i].label = binding_label(i);
        rows[i].key = &(g_CGamePtr->*kBindings[i].key);
    }
    rows[kBindingCount].label = nocturne_automap_key_label();
    rows[kBindingCount].key = nocturne_automap_key_binding();
}

// The one code held this frame, -1 for none, kTwoHeld for more.
int held_code() {
    if (is_gamepad())
        core_game_cpp_CGame_resetKeyState_FUN_004dbe60(g_CGamePtr);
    int found = -1;
    for (int code = 0; code < kInputCodes; code++) {
        if ((*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr, (EInputCodeType)code) == 0)
            continue;
        if (found >= 0)
            return kTwoHeld;
        found = code;
    }
    return found;
}

bool escape_held() {
    return (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr, DIK_ESCAPE) != 0;
}

void status(char *text) {
    shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790(g_CEditorToolsPtr,
                                                                              "%s", text);
}

// Takes a new code for `rows[at]`: the keys let go first, Escape there backing
// out; then the first single code pressed, which any other binding holding it
// gives up.
void capture(Row *rows, int at) {
    nocturne_gamepad_suppress_nav(1);
    while (held_code() != -1) {
        status(localized("OK - you can release the key now..."));
        if (escape_held())
            break;
        wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    }
    if (escape_held()) {
        nocturne_gamepad_suppress_nav(0);
        engine_2d_c_clearInputAndWait_FUN_00403260();
        return;
    }
    char prompt[512];
    snprintf(prompt, sizeof(prompt), "%s%s", localized("Press new key or button for "),
             rows[at].label);
    status(prompt);
    engine_keys_cpp_CKeys_toggleInputMask_FUN_005024b0(g_CKeysPtr, 1);
    int code;
    do {
        wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
        code = held_code();
    } while (code < 0);
    *rows[at].key = code;
    status(localized("OK - you can release the key now..."));
    while (held_code() != -1)
        wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    for (int i = 0; i < kRowCount; i++) {
        if (i != at && *rows[i].key == code)
            *rows[i].key = kUnbound;
    }
    engine_keys_cpp_CKeys_toggleInputMask_FUN_005024b0(g_CKeysPtr, 0);
    nocturne_gamepad_suppress_nav(0);
}

// Every shipped binding is asked whether its code suits the control type, each
// one reporting its own; any that does not puts the defaults back.
void validate() {
    bool valid = true;
    for (int i = 0; i < kBindingCount; i++) {
        if (core_menu_cpp_isKeyCodeValidForMode_FUN_00513720(
                (EInputCodeType *)&(g_CGamePtr->*kBindings[i].key), binding_label(i)) != 0)
            valid = false;
    }
    if (valid)
        return;
    core_game_cpp_CGame_restoreDefaultControls_FUN_004dbbc0(g_CGamePtr);
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740(
        g_CEditorToolsPtr, "%s", "One or more keys not valid.  Restoring default controls.");
}

} // namespace

extern "C" void nocturne_control_options_menu(void) {
    core_game_cpp_CGame_saveClockTime_FUN_004d7d80(g_CGamePtr);
    ControlOptions page;
    nocturne_menu::run(page);
}

extern "C" void nocturne_key_bindings_menu(void) {
    if (!calibrated())
        return;
    Row rows[kRowCount];
    int cursor = 0;
    for (;;) {
        collect(rows);
        engine_special_cpp_clearScreen_FUN_005b3e70();
        wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();

        CPickList list;
        char line[200];
        shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&list);
        shape_edittool_cpp_CStrList_add_FUN_004a2b80(&list.base, localized("Restore defaults"));
        for (int i = 0; i < kRowCount; i++) {
            snprintf(line, sizeof(line), "%s\t%s", rows[i].label,
                     core_menu_cpp_getKeyDisplayName_FUN_005134e0((EInputCodeType)*rows[i].key));
            shape_edittool_cpp_CStrList_add_FUN_004a2b80(&list.base, line);
        }
        shape_edittool_cpp_CPickList_setSelectedResult_FUN_004a3e10(&list, 1);
        const int choice = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20(
            &list, localized("Edit key settings"), cursor, 0);
        if (choice > 0) {
            cursor = choice;
            capture(rows, choice - 1);
            shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&list, 0);
            continue;
        }
        shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&list, 0);
        // Restore defaults is done, and says so by going back.
        if (choice == 0)
            core_game_cpp_CGame_restoreDefaultControls_FUN_004dbbc0(g_CGamePtr);
        else
            validate();
        return;
    }
}

#endif // !NOCTURNE_AUTHENTIC_MENU
