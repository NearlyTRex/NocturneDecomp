// =============================================================================
// MOVEMENT — camera movement written as the controls the hero already reads
// =============================================================================
//
// Under Camera, the four directions or the left stick are directions on the
// screen: the hero is turned toward the way pressed by SPlayerInput's turn,
// walks once he faces within a quarter turn, and runs at full stick. Under
// Tank, or with Strafe on held, or once nothing is held, the controls are the
// shipped path's, Forward and Back put back as their keys hold them. The stand
// camera looks along +z with +x to the right, and the hero faces +z unless a
// test turns him.

#include "../gl/ini_support.h"
#include "game/movement.h"
#include "nocturne_test.h"
#include "view_support.h"

#include <cmath>
#include <filesystem>
#include <string>
#include <system_error>

namespace {

using view_support::game;
using view_support::stand;

const int kForward = 200;
const int kBack = 208;
const int kLeft = 203;
const int kRight = 205;
const int kStrafe = 56;
const int kRun = 42;
const int kUnit = 0x10000;
const float kPi = 3.14159265f;

// The hero's turn rate this frame, as his class sets it.
const float kRate = 0.1f;

CHero *hero() {
    return hero_support::heroes[0];
}

SPlayerInput frame(SPlayerInput input = SPlayerInput());

// A fresh frame: the party of one, the bindings, nothing held, and whatever a
// case before left rewritten handed back.
void fresh() {
    stand.reset();
    hero_support::place_heroes(1);
    hero()->base.turn_speed = kRate;
    game->key_walk = kForward;
    game->key_backup = kBack;
    game->key_left = kLeft;
    game->key_right = kRight;
    game->key_strafe = kStrafe;
    game->key_run = kRun;
    game->game_control = CONTROL_MODE_KEYBOARD;
    frame();
}

void hold(int code, bool down = true) {
    g_KeyboardState[code] = down ? 1 : 0;
}

// The controls after one frame, from what the shipped path left in `input`.
SPlayerInput frame(SPlayerInput input) {
    nocturne_movement_apply(game.get(), &input);
    return input;
}

// The controls as the shipped path left them, with a turn and a strafe in
// them for the rewrite to clear.
SPlayerInput shipped() {
    SPlayerInput input = SPlayerInput();
    input.turn_speed = 0.2f;
    input.strafe_speed = 0.5f;
    input.action_state.walk = 1;
    input.action_state.run = 1;
    return input;
}

void lets_go() {
    hold(kForward, false);
    hold(kBack, false);
    hold(kLeft, false);
    hold(kRight, false);
}

} // namespace

// A scheme the ini does not name is Tank, and under Tank nothing is touched.
NOCTURNE_TEST(a_scheme_the_ini_does_not_name_is_tank) {
    std::error_code ec;
    const std::filesystem::path dir =
        std::filesystem::temp_directory_path(ec) / "nocturne_movement_test";
    std::filesystem::remove_all(dir, ec);
    std::filesystem::create_directories(dir, ec);
    std::filesystem::current_path(dir, ec);
    ini_support::save("Control", "movement", "9");
    CHECK_EQ(nocturne_movement_get(), NOCTURNE_MOVEMENT_TANK);
    fresh();
    hold(kRight);
    const SPlayerInput out = frame(shipped());
    CHECK_EQ(out.turn_speed, 0.2f);
    CHECK_EQ(out.strafe_speed, 0.5f);
}

// The scheme steps, wrapping, and is saved; each has its name.
NOCTURNE_TEST(the_scheme_steps_and_is_saved) {
    CHECK_EQ(nocturne_movement_cycle(-1), NOCTURNE_MOVEMENT_CAMERA);
    CHECK_EQ(ini_support::values["Control/movement"], std::string("1"));
    CHECK_EQ(nocturne_movement_cycle(1), NOCTURNE_MOVEMENT_TANK);
    CHECK_EQ(nocturne_movement_cycle(1), NOCTURNE_MOVEMENT_CAMERA);
    CHECK_EQ(std::string(nocturne_movement_name(NOCTURNE_MOVEMENT_TANK)), std::string("Tank"));
    CHECK_EQ(std::string(nocturne_movement_name(NOCTURNE_MOVEMENT_CAMERA)), std::string("Camera"));
    CHECK_EQ(std::string(nocturne_movement_name(5)), std::string("Tank"));
}

// Up the screen, which the hero faces: he walks, with nothing to turn, no
// strafe and no Back.
NOCTURNE_TEST(the_way_he_faces_is_walked) {
    fresh();
    hold(kForward);
    const SPlayerInput out = frame(shipped());
    CHECK_EQ(out.action_state.walk, 1);
    CHECK_EQ(out.action_state.backup, 0);
    CHECK_EQ(out.turn_speed, 0.0f);
    CHECK_EQ(out.strafe_speed, 0.0f);
    CHECK_EQ(out.action_state.run, 1); // the keyboard's own Run stands
}

// Right of the screen is a quarter turn: he turns where he stands, as fast as
// is asked; left is the same the other way. A turn under the fastest is the
// yaw over the rate. With no rate yet there is no turn.
NOCTURNE_TEST(a_quarter_turn_or_more_is_turned_first) {
    fresh();
    hold(kRight);
    SPlayerInput out = frame();
    CHECK_EQ(out.action_state.walk, 0);
    CHECK_EQ(out.turn_speed, 1.0f);
    lets_go();
    frame();
    hold(kLeft);
    out = frame();
    CHECK_EQ(out.turn_speed, -1.0f);

    fresh();
    stand.yaw = 0.05f; // facing a little right of up the screen
    hold(kForward);
    out = frame();
    CHECK_EQ(out.action_state.walk, 1);
    CHECK(std::fabs(out.turn_speed - (-0.05f / kRate)) < 1e-4f);

    fresh();
    hero()->base.turn_speed = 0.0f;
    hold(kRight);
    CHECK_EQ(frame().turn_speed, 0.0f);
}

// Down the screen is behind him: turned, not backed.
NOCTURNE_TEST(down_the_screen_is_turned_to) {
    fresh();
    hold(kBack);
    const SPlayerInput out = frame();
    CHECK_EQ(out.action_state.backup, 0);
    CHECK_EQ(out.action_state.walk, 0);
    CHECK(std::fabs(out.turn_speed) == 1.0f);
}

// Let go, the controls go back: Forward and Back as their keys hold them, no
// turn left over; and the frame after, nothing is touched at all.
NOCTURNE_TEST(letting_go_hands_the_controls_back) {
    fresh();
    hold(kRight);
    frame();
    lets_go();
    SPlayerInput out = frame(shipped());
    CHECK_EQ(out.action_state.walk, 0);
    CHECK_EQ(out.action_state.backup, 0);
    CHECK_EQ(out.turn_speed, 0.0f);
    out = frame(shipped());
    CHECK_EQ(out.action_state.walk, 1);
    CHECK_EQ(out.turn_speed, 0.2f);
}

// Strafe on held gives the shipped controls back, Forward as it is held; so
// does a hero who is dead, or none.
NOCTURNE_TEST(strafe_death_and_no_hero_hand_back) {
    fresh();
    hold(kRight);
    frame();
    hold(kForward);
    hold(kStrafe);
    SPlayerInput out = frame(shipped());
    CHECK_EQ(out.action_state.walk, 1);
    CHECK_EQ(out.turn_speed, 0.0f);
    CHECK_EQ(out.strafe_speed, 0.5f);

    fresh();
    hold(kBack);
    frame();
    hero_support::death[hero()] = DEATH_STATE_DEAD;
    out = frame(shipped());
    CHECK_EQ(out.action_state.backup, 1);

    fresh();
    hold(kRight);
    frame();
    g_HeroActors[0] = nullptr;
    out = frame(shipped());
    CHECK_EQ(out.turn_speed, 0.0f);
}

// Under Tank after a frame of camera movement, the controls are handed back
// once.
NOCTURNE_TEST(switching_to_tank_hands_back) {
    fresh();
    hold(kRight);
    frame();
    nocturne_movement_cycle(1);
    SPlayerInput out = frame(shipped());
    CHECK_EQ(out.turn_speed, 0.0f);
    out = frame(shipped());
    CHECK_EQ(out.turn_speed, 0.2f);
    nocturne_movement_cycle(1);
}

// The map, which has emptied the controls, is left alone; and the frame after
// it has nothing to hand back.
NOCTURNE_TEST(the_map_keeps_its_controls) {
    fresh();
    hold(kRight);
    frame();
    stand.map_owns = 1;
    SPlayerInput out = frame(shipped());
    CHECK_EQ(out.turn_speed, 0.2f);
    stand.map_owns = 0;
    lets_go();
    out = frame(shipped());
    CHECK_EQ(out.turn_speed, 0.2f);
}

// The screen's axes are kept while a direction is held, so a cut that turns
// the camera round does not turn the hero; a new direction takes the new
// camera's.
NOCTURNE_TEST(a_held_direction_keeps_its_axes_across_a_cut) {
    fresh();
    hold(kRight);
    CHECK_EQ(frame().turn_speed, 1.0f);
    view_support::camera_axes({-kUnit, 0, 0}, {0, kUnit, 0}, {0, 0, -kUnit});
    CHECK_EQ(frame().turn_speed, 1.0f);
    hold(kForward); // up and right together
    CHECK_EQ(frame().turn_speed, -1.0f);
}

// A camera with no axes on the ground hands the controls back: none to the
// right, or none ahead.
NOCTURNE_TEST(a_camera_without_axes_hands_back) {
    fresh();
    view_support::camera_axes({0, kUnit, 0}, {0, 0, 0}, {0, 0, 0});
    hold(kForward);
    CHECK_EQ(frame(shipped()).turn_speed, 0.2f);
    view_support::camera_axes({kUnit, 0, 0}, {0, 0, 0}, {0, kUnit, 0});
    CHECK_EQ(frame(shipped()).turn_speed, 0.2f);
}

// Straight down, ahead is the camera's up; the projection's signs say which
// way each axis runs on the screen.
NOCTURNE_TEST(the_projection_says_which_way_the_axes_run) {
    fresh();
    view_support::camera_axes({kUnit, 0, 0}, {0, 0, kUnit}, {0, -kUnit, 0});
    hold(kForward);
    CHECK_EQ(frame().action_state.walk, 1);

    fresh();
    g_CDemonCameraInstance.cached_projection.neg_half_height_fixed = 240 * kUnit;
    view_support::camera_axes({kUnit, 0, 0}, {0, 0, kUnit}, {0, -kUnit, 0});
    hold(kForward);
    CHECK_EQ(frame().action_state.walk, 0); // ahead runs down the screen

    fresh();
    g_CDemonCameraInstance.cached_projection.half_width_fixed = -320 * kUnit;
    hold(kRight);
    CHECK_EQ(frame().turn_speed, -1.0f);
}

// On a ladder, pushing or held, the direction is Forward near his facing, Back
// near behind him, and nothing across; there is no turn.
NOCTURNE_TEST(where_he_cannot_turn_the_direction_is_forward_or_back) {
    CLadder ladder = {};
    CBoxActor box = {};
    CDemonActor grabber = {};
    for (int place = 0; place < 4; ++place) {
        fresh();
        CHero *h = hero();
        if (place == 0)
            h->base.grabbed_by = &grabber;
        else if (place == 1)
            h->pushed_object = &box;
        else if (place == 2)
            h->ladder_to_climb = &ladder;
        else {
            hero_support::stranger->ladder_to_descend = &ladder;
            hero_support::stranger->base.base.turn_speed = kRate;
            g_HeroActors[0] = &hero_support::stranger->base;
        }
        hold(kForward);
        SPlayerInput out = frame();
        CHECK_EQ_AT(out.action_state.walk, 1, std::to_string(place));
        CHECK_EQ_AT(out.turn_speed, 0.0f, std::to_string(place));
        lets_go();
        hold(kBack);
        out = frame();
        CHECK_EQ_AT(out.action_state.backup, 1, std::to_string(place));
        lets_go();
        hold(kRight);
        out = frame();
        CHECK_EQ_AT(out.action_state.walk + out.action_state.backup, 0, std::to_string(place));
    }

    // A Stranger off the ladder turns as anyone does.
    fresh();
    hero_support::stranger->base.base.turn_speed = kRate;
    g_HeroActors[0] = &hero_support::stranger->base;
    hold(kRight);
    CHECK_EQ(frame().turn_speed, 1.0f);
}

// On the pad the left stick is the direction, up the screen when pushed away;
// full tilt runs and Run inverts it. A stick at rest leaves the four
// bindings, the d-pad's among them, to say.
NOCTURNE_TEST(the_stick_is_the_direction_and_its_tilt_the_speed) {
    fresh();
    game->game_control = CONTROL_MODE_GAMEPAD;
    stand.move_y = -1.0f;
    SPlayerInput out = frame();
    CHECK_EQ(out.action_state.walk, 1);
    CHECK_EQ(out.action_state.run, 1);
    hold(kRun);
    CHECK_EQ(frame().action_state.run, 0);
    hold(kRun, false);
    stand.move_y = -0.3f;
    CHECK_EQ(frame().action_state.run, 0);
    hold(kRun);
    CHECK_EQ(frame().action_state.run, 1);

    fresh();
    game->game_control = CONTROL_MODE_GAMEPAD;
    stand.move_x = 0.5f;
    CHECK_EQ(frame().turn_speed, 1.0f);

    fresh();
    game->game_control = CONTROL_MODE_GAMEPAD;
    hold(kForward);
    out = frame(shipped());
    CHECK_EQ(out.action_state.walk, 1);
    CHECK_EQ(out.action_state.run, 1); // not the stick's to say
}

// On the pad the right stick does not steer: deflected, it neither points nor
// turns; at rest, Point up and down and the turn are as the shipped path left
// them.
NOCTURNE_TEST(the_right_stick_does_not_steer) {
    fresh();
    game->game_control = CONTROL_MODE_GAMEPAD;
    SPlayerInput input = SPlayerInput();
    input.look_up_down_speed = 0.2f;
    input.turn_speed = 0.1f;
    stand.look_y = 0.5f;
    stand.look_x = -0.5f;
    SPlayerInput out = frame(input);
    CHECK_EQ(out.look_up_down_speed, 0.0f);
    CHECK_EQ(out.turn_speed, 0.0f);
    stand.look_y = 0.0f;
    stand.look_x = 0.0f;
    out = frame(input);
    CHECK_EQ(out.look_up_down_speed, 0.2f);
    CHECK_EQ(out.turn_speed, 0.1f);
}

// The pad binds Turn left and right to the right stick; held there, they are
// the view's and move nothing, at either end of the range.
NOCTURNE_TEST(a_binding_on_the_right_stick_moves_nothing) {
    fresh();
    game->game_control = CONTROL_MODE_GAMEPAD;
    game->key_left = NOCTURNE_PAD_RSTICK_LEFT;
    game->key_right = NOCTURNE_PAD_RSTICK_RIGHT;
    game->key_walk = NOCTURNE_PAD_RSTICK_UP;
    hold(NOCTURNE_PAD_RSTICK_LEFT);
    hold(NOCTURNE_PAD_RSTICK_UP);
    SPlayerInput out = frame(shipped());
    CHECK_EQ(out.action_state.walk, 1); // not rewritten: nothing is held to move
    CHECK_EQ(out.turn_speed, 0.2f);
    hold(NOCTURNE_PAD_RSTICK_LEFT, false);
    hold(NOCTURNE_PAD_RSTICK_UP, false);
    hold(NOCTURNE_PAD_RSTICK_RIGHT);
    CHECK_EQ(frame(shipped()).turn_speed, 0.2f);

    // A code past the stick's is a direction like any other.
    hold(NOCTURNE_PAD_RSTICK_RIGHT, false);
    game->key_backup = NOCTURNE_PAD_RSTICK_RIGHT + 1;
    hold(NOCTURNE_PAD_RSTICK_RIGHT + 1);
    CHECK_EQ(frame().action_state.walk, 0);
    CHECK(std::fabs(frame().turn_speed) == 1.0f);
}

// Through the goggles the shipped controls run whole, the right stick's look
// and turn included; putting them on mid-stride hands the controls back.
NOCTURNE_TEST(the_goggles_keep_the_shipped_controls) {
    fresh();
    game->game_control = CONTROL_MODE_GAMEPAD;
    stand.move_x = 1.0f;
    frame();
    game->goggles_active = 1;
    stand.look_x = 0.5f;
    stand.look_y = 0.5f;
    SPlayerInput input = shipped();
    input.look_up_down_speed = 0.2f;
    const SPlayerInput out = frame(input);
    CHECK_EQ(out.turn_speed, 0.0f); // handed back once
    CHECK_EQ(out.look_up_down_speed, 0.2f);
    CHECK_EQ(frame(input).turn_speed, 0.2f);
}

NOCTURNE_TEST_MAIN()
