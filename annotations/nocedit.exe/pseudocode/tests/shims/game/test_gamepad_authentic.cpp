// =============================================================================
// GAMEPAD, AUTHENTIC — the shipped joystick path alone
// =============================================================================
//
// Built with NOCTURNE_AUTHENTIC_GAMEPAD: every entry point is there for its
// callers and does nothing.

#include "game/gamepad.h"
#include "gamepad_support.h"
#include "nocturne.h"
#include "nocturne_test.h"

using namespace gamepad_support;

NOCTURNE_TEST(there_is_no_pad) {
    stand.pads.emplace_back();
    nocturne_gamepad_init();
    nocturne_gamepad_pump();
    nocturne_gamepad_note_gameplay_frame();
    nocturne_gamepad_suppress_nav(1);
    nocturne_gamepad_withdraw_nav(DIK_RETURN);
    CHECK_EQ(nocturne_gamepad_present(), 0);
    float v[6] = {9, 9, 9, 9, 9, 9};
    nocturne_gamepad_axes(&v[0], &v[1], &v[2], &v[3], &v[4], &v[5]);
    for (float f : v)
        CHECK_EQ(f, 0.0f);
    nocturne_gamepad_axes(nullptr, nullptr, nullptr, nullptr, nullptr, nullptr);
    CHECK(nocturne_gamepad_code_name(NOCTURNE_PAD_BUTTON(0)) == nullptr);
    CGame game = {};
    nocturne_gamepad_apply_defaults(&game);
    nocturne_gamepad_reseed_for_mode(&game);
    nocturne_gamepad_seed_calibration(&game);
    CHECK_EQ(game.x_center, 0);
    SPlayerInput input = {};
    CHECK_EQ(nocturne_gamepad_apply_analog(&game, &input), 0);
}

NOCTURNE_TEST_MAIN()
