// =============================================================================
// GAMEPAD — a controller as the game's own input codes, and the menus' keys
// =============================================================================
//
// The pads are gamepad_support's, never one on the machine. The shim opens its
// pad once and keeps it, so the cases run in order: none first, then one
// plugged in. Its mapping files and SDL's subsystem are what the other
// test_gamepad_*.cpp binaries start from.

#include "../gl/ini_support.h"
#include "game/gamepad.h"
#include "game/pad_tuning.h"
#include "gamepad_support.h"
#include "nocturne.h"
#include "nocturne_test.h"

#include <cstring>
#include <filesystem>
#include <memory>
#include <string>
#include <system_error>

using namespace gamepad_support;

namespace {

const int kA = NOCTURNE_PAD_BUTTON(SDL_CONTROLLER_BUTTON_A);

std::unique_ptr<CGame> s_game(new CGame());

void clear_keys() {
    std::memset(g_KeyboardState, 0, sizeof(g_KeyboardState));
}

void press(SDL_GameControllerButton b, bool down = true) {
    pad().buttons[b] = down ? 1 : 0;
}

void pump_at(Uint32 ms) {
    stand.ticks = ms;
    nocturne_gamepad_pump();
}

std::string name(int code) {
    const char *n = nocturne_gamepad_code_name(code);
    return n != nullptr ? n : "(none)";
}

} // namespace

// With no pad, nothing is present, every axis is at rest, and the names are a
// standard pad's.
NOCTURNE_TEST(without_a_pad_nothing_moves) {
    // A game directory of its own, for the INI the tuning reads.
    std::error_code ec;
    const std::filesystem::path dir =
        std::filesystem::temp_directory_path(ec) / "nocturne_gamepad_test";
    std::filesystem::remove_all(dir, ec);
    std::filesystem::create_directories(dir, ec);
    std::filesystem::current_path(dir, ec);
    stand.base_path = "/elsewhere/";
    nocturne_gamepad_init();
    nocturne_gamepad_init();
    CHECK_EQ(stand.mapping_files.size(), (size_t)2);
    CHECK_EQ(nocturne_gamepad_present(), 0);
    float v[6] = {9, 9, 9, 9, 9, 9};
    nocturne_gamepad_axes(&v[0], &v[1], &v[2], &v[3], &v[4], &v[5]);
    for (float f : v)
        CHECK_EQ(f, 0.0f);
    nocturne_gamepad_axes(nullptr, nullptr, nullptr, nullptr, nullptr, nullptr);
    CHECK_EQ(name(kA), std::string("A"));
    SPlayerInput input = {};
    CHECK_EQ(nocturne_gamepad_apply_analog(s_game.get(), &input), 0);
    nocturne_gamepad_pump();
    CHECK_EQ(g_JoystickPresent, 0);
}

// The first device that is a controller and opens is the pad.
NOCTURNE_TEST(the_first_controller_that_opens_is_the_pad) {
    stand.pads.emplace_back();
    stand.pads.back().controller = false;
    stand.pads.emplace_back();
    stand.pads.back().opens = false;
    stand.pads.emplace_back();
    stand.pads.back().name = nullptr;
    stand.pads.back().type = SDL_CONTROLLER_TYPE_UNKNOWN;
    nocturne_gamepad_pump();
    CHECK_EQ(nocturne_gamepad_present(), 1);
    CHECK_EQ(g_JoystickPresent, 2);
    // From here pad() is the open one.
    stand.pads.pop_front();
    stand.pads.pop_front();
}

// A button is its code from the frame it goes down until it is let go, and a
// menu that clears it does not see it again until the next press.
NOCTURNE_TEST(a_button_sets_its_code_once_per_press) {
    clear_keys();
    press(SDL_CONTROLLER_BUTTON_A);
    nocturne_gamepad_pump();
    CHECK_EQ((int)g_KeyboardState[kA], 1);
    g_KeyboardState[kA] = 0;
    nocturne_gamepad_pump();
    CHECK_EQ((int)g_KeyboardState[kA], 0);
    press(SDL_CONTROLLER_BUTTON_A, false);
    nocturne_gamepad_pump();
    CHECK_EQ((int)g_KeyboardState[kA], 0);
    CHECK_EQ(g_JoyButtons, 0u);
    press(SDL_CONTROLLER_BUTTON_B);
    nocturne_gamepad_pump();
    CHECK_EQ(g_JoyButtons, 2u);
    press(SDL_CONTROLLER_BUTTON_B, false);
    nocturne_gamepad_pump();
}

// A trigger is pressed past its threshold and let go only below a lower one;
// the sticks press their directions past theirs.
NOCTURNE_TEST(triggers_and_sticks_press_their_codes) {
    clear_keys();
    const float pulls[] = {0.30f, 0.40f, 0.25f, 0.15f};
    const int down[] = {0, 1, 1, 0};
    for (int i = 0; i < 4; i++) {
        pad().axes[SDL_CONTROLLER_AXIS_TRIGGERRIGHT] = (Sint16)(pulls[i] * 32767.0f);
        pad().axes[SDL_CONTROLLER_AXIS_TRIGGERLEFT] = (Sint16)(pulls[i] * 32767.0f);
        nocturne_gamepad_pump();
        CHECK_EQ((int)g_KeyboardState[NOCTURNE_PAD_RTRIGGER], down[i]);
        CHECK_EQ((int)g_KeyboardState[NOCTURNE_PAD_LTRIGGER], down[i]);
    }

    const struct {
        SDL_GameControllerAxis axis;
        Sint16 value;
        int code;
    } sticks[] = {
        {SDL_CONTROLLER_AXIS_RIGHTX, -32768, NOCTURNE_PAD_RSTICK_LEFT},
        {SDL_CONTROLLER_AXIS_RIGHTX, 32767, NOCTURNE_PAD_RSTICK_RIGHT},
        {SDL_CONTROLLER_AXIS_RIGHTY, -32768, NOCTURNE_PAD_RSTICK_UP},
        {SDL_CONTROLLER_AXIS_RIGHTY, 32767, NOCTURNE_PAD_RSTICK_DOWN},
        {SDL_CONTROLLER_AXIS_LEFTX, -32768, DIJ_LEFT},
        {SDL_CONTROLLER_AXIS_LEFTX, 32767, DIJ_RIGHT},
        {SDL_CONTROLLER_AXIS_LEFTY, -32768, DIJ_UP},
        {SDL_CONTROLLER_AXIS_LEFTY, 32767, DIJ_DOWN},
    };
    for (const auto &s : sticks) {
        pad().axes[s.axis] = s.value;
        nocturne_gamepad_note_gameplay_frame();
        nocturne_gamepad_pump();
        CHECK_EQ((int)g_KeyboardState[s.code], 1);
        pad().axes[s.axis] = 0;
        nocturne_gamepad_pump();
        CHECK_EQ((int)g_KeyboardState[s.code], 0);
    }
    pad().axes[SDL_CONTROLLER_AXIS_LEFTX] = 32767;
    nocturne_gamepad_pump();
    CHECK_EQ(g_JoyXPos, 65535u);
    pad().axes[SDL_CONTROLLER_AXIS_LEFTX] = 0;
    nocturne_gamepad_pump();
}

// The sticks have a radial deadzone, and the range past it is rescaled from
// nothing to full. A square gate's corner is full deflection on the diagonal,
// held to the unit circle.
NOCTURNE_TEST(the_sticks_have_a_rescaled_deadzone) {
    float mx = 0, my = 0, lx = 0, ly = 0;
    const float dz = nocturne_pad_tuning()->stick_deadzone;
    pad().axes[SDL_CONTROLLER_AXIS_LEFTX] = (Sint16)(dz * 0.9f * 32767.0f);
    nocturne_gamepad_axes(&mx, &my, &lx, &ly, nullptr, nullptr);
    CHECK_EQ(mx, 0.0f);
    pad().axes[SDL_CONTROLLER_AXIS_LEFTX] = (Sint16)((dz + (1.0f - dz) / 2.0f) * 32767.0f);
    nocturne_gamepad_axes(&mx, nullptr, nullptr, nullptr, nullptr, nullptr);
    CHECK_NEAR(mx, 0.5f, 1e-3f);
    pad().axes[SDL_CONTROLLER_AXIS_LEFTX] = 32767;
    pad().axes[SDL_CONTROLLER_AXIS_LEFTY] = 32767;
    nocturne_gamepad_axes(&mx, &my, nullptr, nullptr, nullptr, nullptr);
    CHECK_NEAR(mx, 0.70710678f, 1e-4f);
    CHECK_NEAR(my, 0.70710678f, 1e-4f);
    pad().axes[SDL_CONTROLLER_AXIS_LEFTY] = 0;
    pad().axes[SDL_CONTROLLER_AXIS_LEFTX] = -32768;
    nocturne_gamepad_axes(&mx, nullptr, nullptr, nullptr, nullptr, nullptr);
    CHECK_EQ(mx, -1.0f);
    pad().axes[SDL_CONTROLLER_AXIS_LEFTX] = 0;
}

// Out of focus the pad reads as released, as the keyboard does.
NOCTURNE_TEST(out_of_focus_the_pad_is_released) {
    clear_keys();
    press(SDL_CONTROLLER_BUTTON_X);
    stand.focused = false;
    nocturne_gamepad_pump();
    CHECK_EQ((int)g_KeyboardState[NOCTURNE_PAD_BUTTON(SDL_CONTROLLER_BUTTON_X)], 0);
    stand.focused = true;
    nocturne_gamepad_pump();
    CHECK_EQ((int)g_KeyboardState[NOCTURNE_PAD_BUTTON(SDL_CONTROLLER_BUTTON_X)], 1);
    press(SDL_CONTROLLER_BUTTON_X, false);
    nocturne_gamepad_pump();
}

// In the menus the d-pad and stick are the arrow keys, repeating while held;
// a press nobody took is taken back on release.
NOCTURNE_TEST(directions_navigate_and_repeat) {
    clear_keys();
    press(SDL_CONTROLLER_BUTTON_DPAD_UP);
    pump_at(1000);
    CHECK_EQ((int)g_KeyboardState[DIK_NUMPAD8], 1);
    g_KeyboardState[DIK_NUMPAD8] = 0;
    pump_at(1100);
    CHECK_EQ((int)g_KeyboardState[DIK_NUMPAD8], 0);
    pump_at(1000 + NOCTURNE_PAD_NAV_REPEAT_DELAY_MS);
    CHECK_EQ((int)g_KeyboardState[DIK_NUMPAD8], 1);
    press(SDL_CONTROLLER_BUTTON_DPAD_UP, false);
    pump_at(2000);
    CHECK_EQ((int)g_KeyboardState[DIK_NUMPAD8], 0);

    // The left stick navigates as the d-pad does.
    for (SDL_GameControllerAxis axis : {SDL_CONTROLLER_AXIS_LEFTX, SDL_CONTROLLER_AXIS_LEFTY}) {
        for (Sint16 value : {(Sint16)-32768, (Sint16)32767}) {
            clear_keys();
            pad().axes[axis] = value;
            pump_at(3000);
            const int code = (axis == SDL_CONTROLLER_AXIS_LEFTX)
                                 ? (value < 0 ? DIK_NUMPAD4 : DIK_NUMPAD6)
                                 : (value < 0 ? DIK_NUMPAD8 : DIK_NUMPAD2);
            CHECK_EQ((int)g_KeyboardState[code], 1);
            pad().axes[axis] = 0;
            pump_at(3010);
            CHECK_EQ((int)g_KeyboardState[code], 0);
        }
    }
    for (SDL_GameControllerButton b :
         {SDL_CONTROLLER_BUTTON_DPAD_DOWN, SDL_CONTROLLER_BUTTON_DPAD_LEFT,
          SDL_CONTROLLER_BUTTON_DPAD_RIGHT}) {
        press(b);
        pump_at(4000);
        press(b, false);
        pump_at(4010);
    }
}

// A confirms and B or Start cancels, once per press, and each types the key
// it stands for so a prompt waiting on a keypress sees one.
NOCTURNE_TEST(confirm_and_cancel_fire_once_and_type) {
    clear_keys();
    stand.typed.clear();
    press(SDL_CONTROLLER_BUTTON_A);
    pump_at(5000);
    CHECK_EQ((int)g_KeyboardState[DIK_RETURN], 1);
    g_KeyboardState[DIK_RETURN] = 0;
    pump_at(6000);
    CHECK_EQ((int)g_KeyboardState[DIK_RETURN], 0);
    press(SDL_CONTROLLER_BUTTON_A, false);
    pump_at(6010);
    press(SDL_CONTROLLER_BUTTON_B);
    pump_at(6020);
    CHECK_EQ((int)g_KeyboardState[DIK_ESCAPE], 1);
    press(SDL_CONTROLLER_BUTTON_B, false);
    pump_at(6030);
    CHECK_EQ((int)g_KeyboardState[DIK_ESCAPE], 0);
    CHECK_EQ(stand.typed.size(), (size_t)2);
    if (stand.typed.size() == 2) {
        CHECK_EQ(stand.typed[0], 0x0d);
        CHECK_EQ(stand.typed[1], 0x1b);
    }
}

// In play the face buttons only do their bindings; Start still opens the menu.
// A press begun there does not fire when play stops under it.
NOCTURNE_TEST(in_play_only_start_navigates) {
    clear_keys();
    nocturne_gamepad_note_gameplay_frame();
    press(SDL_CONTROLLER_BUTTON_A);
    pump_at(7000);
    CHECK_EQ((int)g_KeyboardState[DIK_RETURN], 0);
    pump_at(7010);
    pump_at(7020);
    pump_at(7030);
    CHECK_EQ((int)g_KeyboardState[DIK_RETURN], 0);
    press(SDL_CONTROLLER_BUTTON_A, false);
    pump_at(7040);

    nocturne_gamepad_note_gameplay_frame();
    press(SDL_CONTROLLER_BUTTON_START);
    pump_at(7050);
    CHECK_EQ((int)g_KeyboardState[DIK_ESCAPE], 1);
    press(SDL_CONTROLLER_BUTTON_START, false);
    pump_at(7060);
}

// A screen reading raw input silences the menus' keys for as long as it asks,
// however deeply; a key it wants back can be withdrawn.
NOCTURNE_TEST(navigation_can_be_silenced_and_withdrawn) {
    clear_keys();
    nocturne_gamepad_suppress_nav(1);
    nocturne_gamepad_suppress_nav(1);
    press(SDL_CONTROLLER_BUTTON_A);
    pump_at(8000);
    CHECK_EQ((int)g_KeyboardState[DIK_RETURN], 0);
    press(SDL_CONTROLLER_BUTTON_A, false);
    pump_at(8010);
    nocturne_gamepad_suppress_nav(0);
    nocturne_gamepad_suppress_nav(0);
    nocturne_gamepad_suppress_nav(0);

    press(SDL_CONTROLLER_BUTTON_A);
    pump_at(8020);
    CHECK_EQ((int)g_KeyboardState[DIK_RETURN], 1);
    nocturne_gamepad_withdraw_nav(DIK_RETURN);
    nocturne_gamepad_withdraw_nav(DIK_A);
    CHECK_EQ((int)g_KeyboardState[DIK_RETURN], 0);
    press(SDL_CONTROLLER_BUTTON_A, false);
    pump_at(8030);
}

// Each family's legends, by what is printed on its pad.
NOCTURNE_TEST(buttons_are_named_by_the_pads_own_legends) {
    const struct {
        SDL_GameControllerType type;
        const char *a, *lt, *rt;
    } families[] = {
        {SDL_CONTROLLER_TYPE_XBOXONE, "A", "LT", "RT"},
        {SDL_CONTROLLER_TYPE_PS3, "Cross", "L2", "R2"},
        {SDL_CONTROLLER_TYPE_PS4, "Cross", "L2", "R2"},
        {SDL_CONTROLLER_TYPE_PS5, "Cross", "L2", "R2"},
        {SDL_CONTROLLER_TYPE_NINTENDO_SWITCH_PRO, "B", "ZL", "ZR"},
        {SDL_CONTROLLER_TYPE_NINTENDO_SWITCH_JOYCON_LEFT, "B", "ZL", "ZR"},
        {SDL_CONTROLLER_TYPE_NINTENDO_SWITCH_JOYCON_RIGHT, "B", "ZL", "ZR"},
        {SDL_CONTROLLER_TYPE_NINTENDO_SWITCH_JOYCON_PAIR, "B", "ZL", "ZR"},
    };
    for (const auto &f : families) {
        pad().type = f.type;
        CHECK_EQ(name(kA), std::string(f.a));
        CHECK_EQ(name(NOCTURNE_PAD_LTRIGGER), std::string(f.lt));
        CHECK_EQ(name(NOCTURNE_PAD_RTRIGGER), std::string(f.rt));
    }
    CHECK_EQ(name(NOCTURNE_PAD_RSTICK_UP), std::string("Right Stick Up"));
    CHECK_EQ(name(NOCTURNE_PAD_RSTICK_DOWN), std::string("Right Stick Down"));
    CHECK_EQ(name(NOCTURNE_PAD_RSTICK_LEFT), std::string("Right Stick Left"));
    CHECK_EQ(name(NOCTURNE_PAD_RSTICK_RIGHT), std::string("Right Stick Right"));
    CHECK_EQ(name(NOCTURNE_PAD_BUTTON(SDL_CONTROLLER_BUTTON_MAX)), std::string("Button"));
    CHECK_EQ(name(DIK_A), std::string("(none)"));
    CHECK_EQ(name(NOCTURNE_PAD_CODE_END), std::string("(none)"));
    pad().type = SDL_CONTROLLER_TYPE_XBOXONE;
}

// The pad's defaults bind both sticks, the triggers, the face buttons and the
// map, and seed the calibration the screens would otherwise ask for.
NOCTURNE_TEST(the_defaults_bind_the_whole_pad) {
    CGame *game = s_game.get();
    std::memset(game, 0, sizeof(*game));
    nocturne_gamepad_apply_defaults(game);
    CHECK_EQ(game->key_walk, (int)DIJ_UP);
    CHECK_EQ(game->key_fire, NOCTURNE_PAD_RTRIGGER);
    CHECK_EQ(game->key_strafe, (int)INPUT_NONE);
    CHECK_EQ(game->x_center, 0x8000);
    CHECK_EQ(stand.map_binding, NOCTURNE_PAD_BUTTON(SDL_CONTROLLER_BUTTON_BACK));
    nocturne_gamepad_apply_defaults(nullptr);

    // A calibration already there is kept.
    game->x_center = 5;
    nocturne_gamepad_seed_calibration(game);
    CHECK_EQ(game->x_center, 5);
    nocturne_gamepad_seed_calibration(nullptr);
}

// Switching mode restores the defaults only when the player would be left with
// nothing to press; the map's binding counts.
NOCTURNE_TEST(a_mode_switch_never_leaves_nothing_to_press) {
    CGame *game = s_game.get();
    nocturne_gamepad_reseed_for_mode(nullptr);

    // Pad bindings, gamepad mode: kept.
    std::memset(game, 0, sizeof(*game));
    nocturne_gamepad_apply_defaults(game);
    game->game_control = CONTROL_MODE_GAMEPAD;
    stand.defaults_restored = 0;
    nocturne_gamepad_reseed_for_mode(game);
    CHECK_EQ(stand.defaults_restored, 0);
    // Keyboard mode with only pad bindings: restored.
    game->game_control = CONTROL_MODE_KEYBOARD;
    nocturne_gamepad_reseed_for_mode(game);
    CHECK_EQ(stand.defaults_restored, 1);
    // ...unless the map is on a key.
    stand.map_binding = DIK_M;
    nocturne_gamepad_reseed_for_mode(game);
    CHECK_EQ(stand.defaults_restored, 1);

    // Keyboard bindings, gamepad mode: restored, unless the map is on the pad.
    int *keys = &game->key_walk;
    for (int i = 0; i < 27; i++)
        keys[i] = (i == 0) ? DIK_W : (int)INPUT_NONE;
    game->game_control = CONTROL_MODE_GAMEPAD;
    nocturne_gamepad_reseed_for_mode(game);
    CHECK_EQ(stand.defaults_restored, 2);
    stand.map_binding = NOCTURNE_PAD_BUTTON(SDL_CONTROLLER_BUTTON_BACK);
    nocturne_gamepad_reseed_for_mode(game);
    CHECK_EQ(stand.defaults_restored, 2);
    // A joystick button binding is a pad binding; an unbound map is no binding.
    keys[0] = DIJ_BUTTON1;
    for (int map : {(int)INPUT_NONE, 0}) {
        stand.map_binding = map;
        game->game_control = CONTROL_MODE_KEYBOARD;
        nocturne_gamepad_reseed_for_mode(game);
    }
    CHECK_EQ(stand.defaults_restored, 4);
    // Codes either side of the joystick's are the keyboard's or the mouse's.
    for (int code : {(int)DIJ_BUTTON10 + 1, (int)DIJ_DOWN + 1}) {
        keys[0] = code;
        nocturne_gamepad_reseed_for_mode(game);
    }
    CHECK_EQ(stand.defaults_restored, 4);
}

// The sticks drive strafe, turn and look while deflected, scaled by the
// sensitivity sliders and the tuning; push far enough to walk, further to run,
// and Run inverts it. Nothing while the map has the controls.
NOCTURNE_TEST(the_sticks_drive_the_hero) {
    CGame *game = s_game.get();
    std::memset(game, 0, sizeof(*game));
    game->x_mouse_sensitivity = 0x10000;
    game->y_mouse_sensitivity = 0x20000;
    game->key_run = NOCTURNE_PAD_BUTTON(SDL_CONTROLLER_BUTTON_LEFTSTICK);
    SPlayerInput input = {};
    CHECK_EQ(nocturne_gamepad_apply_analog(nullptr, &input), 0);
    CHECK_EQ(nocturne_gamepad_apply_analog(game, nullptr), 0);

    // At rest, nothing is overridden.
    input.strafe_speed = 7.0f;
    CHECK_EQ(nocturne_gamepad_apply_analog(game, &input), 1);
    CHECK_EQ(input.strafe_speed, 7.0f);

    const NocturnePadTuning *tuning = nocturne_pad_tuning();
    pad().axes[SDL_CONTROLLER_AXIS_LEFTX] = 32767;
    pad().axes[SDL_CONTROLLER_AXIS_RIGHTX] = 32767;
    nocturne_gamepad_apply_analog(game, &input);
    CHECK_EQ(input.strafe_speed, 1.0f);
    CHECK_NEAR(input.turn_speed, tuning->turn_rate, 1e-5f);
    pad().axes[SDL_CONTROLLER_AXIS_LEFTX] = 0;
    pad().axes[SDL_CONTROLLER_AXIS_RIGHTX] = 0;
    pad().axes[SDL_CONTROLLER_AXIS_RIGHTY] = 32767;
    pad().axes[SDL_CONTROLLER_AXIS_LEFTY] = -32767;
    nocturne_gamepad_apply_analog(game, &input);
    CHECK_NEAR(input.look_up_down_speed, tuning->look_rate * 2.0f, 1e-5f);
    CHECK_EQ(input.action_state.run, 1);
    // Inverted, up is down.
    ini_support::save("Control", "invertPadYAxis", "1");
    nocturne_pad_tuning_reload();
    nocturne_gamepad_apply_analog(game, &input);
    CHECK_NEAR(input.look_up_down_speed, -tuning->look_rate * 2.0f, 1e-5f);
    ini_support::values.clear();
    nocturne_pad_tuning_reload();
    g_KeyboardState[game->key_run] = 1;
    nocturne_gamepad_apply_analog(game, &input);
    CHECK_EQ(input.action_state.run, 0);
    g_KeyboardState[game->key_run] = 0;

    // A gentle push walks; less than that leaves the speed alone.
    pad().axes[SDL_CONTROLLER_AXIS_LEFTY] = (Sint16)(0.55f * 32767.0f);
    nocturne_gamepad_apply_analog(game, &input);
    CHECK_EQ(input.action_state.run, 0);
    input.action_state.run = 1;
    pad().axes[SDL_CONTROLLER_AXIS_LEFTY] = 0;
    nocturne_gamepad_apply_analog(game, &input);
    CHECK_EQ(input.action_state.run, 1);

    stand.map_owns_controls = 1;
    input.strafe_speed = 7.0f;
    CHECK_EQ(nocturne_gamepad_apply_analog(game, &input), 1);
    CHECK_EQ(input.strafe_speed, 7.0f);
    stand.map_owns_controls = 0;
    for (Sint16 &a : pad().axes)
        a = 0;
}

// Unplugged, the pad is closed, its codes released, and the next one taken.
NOCTURNE_TEST(an_unplugged_pad_is_let_go) {
    clear_keys();
    press(SDL_CONTROLLER_BUTTON_Y);
    nocturne_gamepad_pump();
    // Pulled out, and another plugged in.
    pad(0).attached = false;
    pad(0).controller = false;
    stand.pads.emplace_back();
    nocturne_gamepad_pump();
    CHECK_EQ(stand.closed, 1);
    CHECK_EQ(nocturne_gamepad_present(), 1);
    CHECK_EQ((int)g_KeyboardState[NOCTURNE_PAD_BUTTON(SDL_CONTROLLER_BUTTON_Y)], 0);
    // A blip: detached and straight back, the same one is opened again.
    pad(1).attached = false;
    nocturne_gamepad_pump();
    CHECK_EQ(stand.closed, 2);
    CHECK_EQ(nocturne_gamepad_present(), 1);
    // Gone for good.
    pad(1).controller = false;
    nocturne_gamepad_pump();
    CHECK_EQ(nocturne_gamepad_present(), 0);
}

NOCTURNE_TEST_MAIN()
