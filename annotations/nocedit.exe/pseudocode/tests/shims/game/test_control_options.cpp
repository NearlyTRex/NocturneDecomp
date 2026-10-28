// =============================================================================
// CONTROL OPTIONS — the control settings, and the key bindings under them
// =============================================================================
//
// The lines each control type lists, a type change bringing that type's
// defaults, a gamepad nobody has centred calibrated before leaving; and the
// bindings list: Restore defaults goes back, any binding takes the next single
// code pressed, which any other binding holding it gives up, and leaving checks
// every binding suits the type.

#include "front_support.h"
#include "game/control_options.h"
#include "nocturne_test.h"

#include <string>
#include <vector>

namespace {

using front_support::game;
using front_support::lines_of;
using front_support::Press;
using front_support::stand;

// Where each line sits: the mouse's invert, or the gamepad's tuning lines,
// follow the sensitivities, and the gamepad's Calibrate comes last.
enum { TYPE, KEYS, X_SENS, Y_SENS, INVERT_Y, PAD_FIRST = INVERT_Y, CALIBRATE = PAD_FIRST + 4 };

const char kControl[] = "Control Options";

// A binding list's rows: Restore defaults, the shipped 27, then the map's.
const size_t kRows = 1 + 27 + 1;

Press pick(int line, bool left = false) {
    Press press;
    press.line = line;
    press.left = left;
    return press;
}

void control(std::initializer_list<Press> presses) {
    stand.presses = presses;
    nocturne_control_options_menu();
}

} // namespace

NOCTURNE_TEST(each_type_lists_its_lines) {
    stand.reset();
    game->x_mouse_sensitivity = 0x10000;
    game->y_mouse_sensitivity = 0x18000;
    control({});
    const std::vector<std::string> keyboard = {"Control : Keyboard", "Customize Keys",
                                               "X-axis sensitivity :  1.00",
                                               "Y-axis sensitivity :  1.50"};
    CHECK(lines_of(kControl) == keyboard);

    stand.reset();
    game->game_control = CONTROL_MODE_MOUSE;
    game->invert_mouse_y_axis = 1;
    control({});
    const std::vector<std::string> mouse = lines_of(kControl);
    CHECK_EQ(mouse.size(), (size_t)5);
    CHECK_EQ(mouse[0], std::string("Control : Keyboard/Mouse"));
    CHECK_EQ(mouse[INVERT_Y], std::string("Invert Y Axis : ON"));

    stand.reset();
    game->game_control = CONTROL_MODE_GAMEPAD;
    game->x_center = 1;
    control({});
    const std::vector<std::string> pad = lines_of(kControl);
    CHECK_EQ(pad.size(), (size_t)9);
    CHECK_EQ(pad[0], std::string("Control : Gamepad"));
    CHECK_EQ(pad[PAD_FIRST], std::string("Stick deadzone : 0%"));
    CHECK_EQ(pad[PAD_FIRST + 1], std::string("Stick turn speed : 10"));
    CHECK_EQ(pad[PAD_FIRST + 2], std::string("Stick look speed : 20"));
    CHECK_EQ(pad[PAD_FIRST + 3], std::string("Invert stick look : ON"));
    CHECK_EQ(pad[CALIBRATE], std::string("Calibrate"));

    // A type from a bad INI is taken as the keyboard.
    stand.reset();
    game->game_control = (EControlMode)7;
    control({});
    CHECK_EQ((int)game->game_control, (int)CONTROL_MODE_KEYBOARD);
    CHECK_EQ(lines_of(kControl)[0], std::string("Control : Keyboard"));
}

// A gamepad tuning line steps its own setting either way; the invert reads off
// at 0. The mouse's invert reads off the same way.
NOCTURNE_TEST(the_pad_lines_step_their_settings) {
    stand.reset();
    game->game_control = CONTROL_MODE_GAMEPAD;
    game->x_center = 1;
    stand.pad_invert = 0;
    control({pick(PAD_FIRST + NOCTURNE_PAD_SETTING_INVERT, true)});
    CHECK_EQ(stand.count("padStep 3 -1"), 1);
    CHECK_EQ(lines_of(kControl)[PAD_FIRST + 3], std::string("Invert stick look : OFF"));

    stand.reset();
    game->game_control = CONTROL_MODE_MOUSE;
    control({});
    CHECK_EQ(lines_of(kControl)[INVERT_Y], std::string("Invert Y Axis : OFF"));
}

// The type steps either way, wrapping, and brings its defaults.
NOCTURNE_TEST(a_new_type_brings_its_defaults) {
    stand.reset();
    control({pick(TYPE)});
    CHECK_EQ((int)game->game_control, (int)CONTROL_MODE_MOUSE);
    CHECK(stand.in_order({"reseed", "restoreDefaults"}));

    stand.reset();
    control({pick(TYPE, true)});
    CHECK_EQ((int)game->game_control, (int)CONTROL_MODE_GAMEPAD);
}

NOCTURNE_TEST(the_device_lines) {
    stand.reset();
    control({pick(X_SENS), pick(Y_SENS)});
    CHECK(stand.in_order(
        {"sensitivity Adjust X-Axis sensitivity", "sensitivity Adjust Y-Axis sensitivity"}));

    stand.reset();
    game->game_control = CONTROL_MODE_MOUSE;
    control({pick(INVERT_Y)});
    CHECK_EQ(game->invert_mouse_y_axis, 1);

    stand.reset();
    game->game_control = CONTROL_MODE_GAMEPAD;
    game->x_center = 1;
    control({pick(CALIBRATE), pick(PAD_FIRST + 1)});
    CHECK_EQ(stand.count("calibrate"), 1);
    CHECK_EQ(stand.count("padStep 1 1"), 1);

    // Customize Keys opens the bindings.
    stand.reset();
    control({pick(KEYS)});
    CHECK_EQ(stand.list_title, std::string("Edit key settings"));
}

// Leaving with a gamepad nobody has centred calibrates it first, and stays if
// that is backed out of.
NOCTURNE_TEST(leaving_calibrates_a_new_gamepad) {
    Press escape;
    escape.escape = true;

    stand.reset();
    control({escape, Press()});
    CHECK_EQ(stand.frames.size(), (size_t)1);
    CHECK_EQ(stand.count("calibrate"), 0);

    stand.reset();
    game->game_control = CONTROL_MODE_GAMEPAD;
    control({escape, Press()});
    CHECK_EQ(stand.frames.size(), (size_t)1);
    CHECK_EQ(stand.count("calibrate"), 1);

    stand.reset();
    game->game_control = CONTROL_MODE_GAMEPAD;
    stand.calibrates = 0;
    control({escape});
    CHECK_EQ(stand.frames.size(), (size_t)2); // stayed, then the window closed
    CHECK_EQ(stand.count("calibrate"), 1);

    stand.reset();
    game->game_control = CONTROL_MODE_GAMEPAD;
    game->x_center = 1;
    control({escape, Press()});
    CHECK_EQ(stand.count("calibrate"), 0);
}

// --- the bindings --------------------------------------------------------------------

NOCTURNE_TEST(the_bindings_list) {
    stand.reset();
    game->key_walk = 17;
    game->always_run = 1;
    stand.automap_key = 50;
    nocturne_key_bindings_menu();
    CHECK_EQ(stand.rows.size(), kRows);
    CHECK_EQ(stand.rows[0], std::string("Restore defaults"));
    CHECK_EQ(stand.rows[1], std::string("Forward\tkey17"));
    CHECK_EQ(stand.rows[3], std::string("Walk\tkey0"));
    CHECK_EQ(stand.rows[27], std::string("Next ammo\tkey0"));
    CHECK_EQ(stand.rows[28], std::string("Map\tkey50"));
    CHECK_EQ(stand.list_selected, 1);
    CHECK_EQ(stand.list_initial, 0);
    CHECK(stand.in_order({"clearScreen", "swap", "list", "listGone"}));
    CHECK_EQ(stand.count("restoreDefaults"), 0);

    stand.reset();
    nocturne_key_bindings_menu();
    CHECK_EQ(stand.rows[3], std::string("Run\tkey0"));
}

// Restore defaults is done, and goes back.
NOCTURNE_TEST(restore_defaults_goes_back) {
    stand.reset();
    stand.list_choices = {0};
    nocturne_key_bindings_menu();
    CHECK_EQ(stand.count("list"), 1);
    CHECK(stand.in_order({"listGone", "restoreDefaults"}));
}

// Leaving checks every binding; one that does not suit the type puts the
// defaults back, and says so.
NOCTURNE_TEST(leaving_checks_the_bindings) {
    stand.reset();
    game->key_jump = 77;
    stand.invalid_code = 77;
    nocturne_key_bindings_menu();
    CHECK(stand.in_order({"restoreDefaults", "showError"}));
}

// A gamepad nobody has centred is calibrated before the list, and backing out
// of that backs out of the list too.
NOCTURNE_TEST(a_new_gamepad_calibrates_first) {
    stand.reset();
    game->game_control = CONTROL_MODE_GAMEPAD;
    stand.calibrates = 0;
    nocturne_key_bindings_menu();
    CHECK_EQ(stand.count("list"), 0);

    stand.reset();
    game->game_control = CONTROL_MODE_GAMEPAD;
    nocturne_key_bindings_menu();
    CHECK_EQ(stand.count("calibrate"), 1);
    CHECK_EQ(stand.count("list"), 1);
}

// A binding takes the next single code pressed, once every key is let go; two
// down at once wait for one. Another binding holding the code gives it up, and
// the list comes back on the binding.
NOCTURNE_TEST(a_binding_takes_the_next_code) {
    stand.reset();
    game->key_jump = 30; // to give up
    stand.held = {5};    // still down from picking the row
    stand.list_choices = {3};
    stand.held_after_swap = {
        {5},      // the swap before the list
        {},       // let go
        {30, 31}, // two down: not yet
        {30},     // the code
        {30},     // still down
        {},       // let go
    };
    nocturne_key_bindings_menu();
    CHECK_EQ(game->key_run, 30);
    CHECK_EQ(game->key_jump, 599);
    CHECK_EQ(stand.list_initial, 3);
    CHECK_EQ(stand.count("list"), 2);
    CHECK(stand.in_order({"suppressNav 1", "status OK - you can release the key now...",
                          "status Press new key or button for Run", "inputMask 1",
                          "status OK - you can release the key now...", "inputMask 0",
                          "suppressNav 0"}));
}

// Escape held while the keys are let go backs out, the binding unchanged.
NOCTURNE_TEST(escape_backs_out_of_a_binding) {
    stand.reset();
    game->key_run = 9;
    stand.held = {DIK_ESCAPE};
    stand.list_choices = {3};
    stand.held_after_swap = {{DIK_ESCAPE}, {}};
    nocturne_key_bindings_menu();
    CHECK_EQ(game->key_run, 9);
    CHECK(stand.in_order({"suppressNav 1", "suppressNav 0", "clearInput", "listGone", "list"}));
    CHECK_EQ(stand.count("inputMask 1"), 0);
}

// The gamepad's state is read afresh for every scan.
NOCTURNE_TEST(a_gamepad_is_read_afresh) {
    stand.reset();
    game->game_control = CONTROL_MODE_GAMEPAD;
    game->x_center = 1;
    stand.list_choices = {1};
    stand.held_after_swap = {{}, {40}, {}};
    nocturne_key_bindings_menu();
    CHECK_EQ(game->key_walk, 40);
    CHECK(stand.count("resetKeys") >= 3);
}

NOCTURNE_TEST_MAIN()
