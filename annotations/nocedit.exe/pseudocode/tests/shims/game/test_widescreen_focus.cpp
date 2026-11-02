// =============================================================================
// WIDESCREEN FOCUS — the focus actor's height, handed to the crop once a scene
// =============================================================================
//
// The middle of the script's focus actor's bounding box, put in the world and
// projected through the scene camera in its 1/256 fixed point; its height in
// scene pixels goes to the crop with the screen, the camera, the letterbox and
// the frame time. With no focus, or one the camera does not see, the crop is
// told so.

#include "game/movement.h"
#include "game/widescreen_focus.h"
#include "nocturne_test.h"
#include "view_support.h"

#include <filesystem>
#include <system_error>

namespace {

using view_support::game;
using view_support::set;
using view_support::stand;

const int kUnit = 0x10000;

// A box from (-1, 0, -1) to (1, 4, 1) about the actor's origin.
CBoundingBox3D *box(CDemonActor *, CBoundingBox3D *out) {
    out->min = CVector3f{-1.0f, 0.0f, -1.0f};
    out->max = CVector3f{1.0f, 4.0f, 1.0f};
    return out;
}

// The focus, a hero at (10, 0, 20) with that box.
CDemonActor *focus() {
    CDemonActor *actor = &hero_support::heroes[1]->base.base;
    hero_support::give_class(actor, &g_CHeroClassInfo);
    hero_support::vtable._ub.getBoundingBox = box;
    actor->location.position = CVector3f{10.0f, 0.0f, 20.0f};
    return actor;
}

const view_support::Track &last() {
    return stand.tracked.back();
}

} // namespace

// A focus the camera sees is tracked at its projected height, with the
// screen, the camera, the letterbox and the frame time.
NOCTURNE_TEST(a_focus_in_shot_is_tracked_at_its_height) {
    stand.reset();
    view_support::script->focus_actor = focus();
    stand.screen = CVector3i{320 * kUnit, 300 * kUnit + kUnit / 2, 5};
    set->selected_camera_index = 4;
    game->letterbox_mode = 1;
    game->delta_time_float = 0.02f;
    nocturne_widescreen_note_scene();
    CHECK_EQ(stand.projected.x, 10 * 256);
    CHECK_EQ(stand.projected.y, 2 * 256);
    CHECK_EQ(stand.projected.z, 20 * 256);
    CHECK_EQ((int)stand.tracked.size(), 1);
    CHECK_EQ(last().width, 1280);
    CHECK_EQ(last().height, 720);
    CHECK_EQ(last().camera, 4);
    CHECK_EQ(last().focus_visible, 1);
    CHECK_EQ(last().focus_y, 300.5f);
    CHECK_EQ(last().cinematic, 1);
    CHECK_EQ(last().seconds, 0.02f);
}

// Out of shot, with no focus, or with no script, the crop is told there is
// none to follow; without the letterbox it is not a cinematic.
NOCTURNE_TEST(without_a_focus_in_shot_there_is_none_to_follow) {
    stand.reset();
    view_support::script->focus_actor = focus();
    stand.screen = CVector3i{0, 0, 0};
    nocturne_widescreen_note_scene();
    CHECK_EQ(last().focus_visible, 0);
    CHECK_EQ(last().cinematic, 0);
    CHECK_EQ(last().look, 0.0f);

    view_support::script->focus_actor = nullptr;
    nocturne_widescreen_note_scene();
    CHECK_EQ(last().focus_visible, 0);

    g_CScriptPtr = nullptr;
    nocturne_widescreen_note_scene();
    CHECK_EQ(last().focus_visible, 0);
    CHECK_EQ((int)stand.tracked.size(), 3);
}

// Under camera movement on a pad the right stick looks, pushed away for up;
// with tank movement, or off the pad, there is no look.
NOCTURNE_TEST(the_right_stick_looks_under_camera_movement) {
    std::error_code ec;
    const std::filesystem::path dir =
        std::filesystem::temp_directory_path(ec) / "nocturne_widescreen_focus_test";
    std::filesystem::remove_all(dir, ec);
    std::filesystem::create_directories(dir, ec);
    std::filesystem::current_path(dir, ec);
    stand.reset();
    stand.look_y = -0.75f;
    game->game_control = CONTROL_MODE_GAMEPAD;
    nocturne_widescreen_note_scene();
    CHECK_EQ(last().look, 0.0f); // tank
    nocturne_movement_cycle(1);
    nocturne_widescreen_note_scene();
    CHECK_EQ(last().look, 0.75f);
    game->game_control = CONTROL_MODE_KEYBOARD;
    nocturne_widescreen_note_scene();
    CHECK_EQ(last().look, 0.0f);
}

NOCTURNE_TEST_MAIN()
