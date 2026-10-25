// =============================================================================
// HERO MOTION — the motion controller helpers the hero shims share
// =============================================================================

#include "behaviour_support.h"
#include "game/hero_motion.h"
#include "nocturne_test.h"

#include <memory>

using namespace behaviour_support;

// The state a character is playing is its current motion's, and a state is
// found by name in its motion list.
NOCTURNE_TEST(the_state_is_the_current_motions) {
    stand.reset();
    CCharacter *c = character(0);
    SMotion run = {};
    run.state_index = 3;
    stand.motion[&c->model.base] = &run;
    CHECK_EQ(nocturne_hero_motion_state(c), 3);
    stand.states["RUN"] = 3;
    CHECK_EQ(nocturne_hero_motion_find_state(c, "RUN"), 3);
    CHECK_EQ(nocturne_hero_motion_find_state(c, "FLY"), -1);
}

// Forcing a state jumps to the first motion that plays it and asks for it;
// a state no motion plays cannot be forced.
NOCTURNE_TEST(a_state_is_forced_through_its_motion) {
    stand.reset();
    CCharacter *c = character(0);
    std::unique_ptr<CMotionList> list(new CMotionList());
    list->motion_count = 3;
    list->motions[0].state_index = 0;
    list->motions[1].state_index = 7;
    list->motions[2].state_index = 7;
    c->model.base.motion_list_ptr = list.get();
    CHECK_EQ(nocturne_hero_motion_force_state(c, 7), 1);
    CHECK_EQ(stand.jumped.size(), (size_t)1);
    if (!stand.jumped.empty())
        CHECK_EQ(stand.jumped[0].index, 1);
    CHECK_EQ(stand.desired.size(), (size_t)1);
    if (!stand.desired.empty())
        CHECK_EQ(stand.desired[0].force, 0);
    CHECK_EQ(nocturne_hero_motion_force_state(c, 9), 0);
}

// A frame is crossed when the motion went past it this frame, or started at or
// beyond it this frame, whether newly entered or looped back round.
NOCTURNE_TEST(a_frame_is_crossed_once) {
    stand.reset();
    CCharacter *c = character(0);
    SMotion punch = {};
    punch.state_index = 11;
    stand.motion[&c->model.base] = &punch;
    c->model.base.current_frame_number = 16.0f;

    CHECK_EQ(nocturne_hero_motion_crossed(c, 10, 10, 15.0f, 16.0f), 0); // another state
    CHECK_EQ(nocturne_hero_motion_crossed(c, 11, 11, 15.0f, 16.0f), 1); // passed it
    CHECK_EQ(nocturne_hero_motion_crossed(c, 11, 11, 16.0f, 16.0f), 0); // passed before
    CHECK_EQ(nocturne_hero_motion_crossed(c, 11, 11, 15.0f, 17.0f), 0); // not reached
    CHECK_EQ(nocturne_hero_motion_crossed(c, 11, 0, 30.0f, 16.0f), 1);  // entered at it
    CHECK_EQ(nocturne_hero_motion_crossed(c, 11, 11, 20.0f, 16.0f), 1); // looped to it
    CHECK_EQ(nocturne_hero_motion_crossed(c, 11, 0, 0.0f, 17.0f), 0);   // entered short
}

// A move in the world is the character's own move, collided.
NOCTURNE_TEST(a_world_move_is_collided) {
    stand.reset();
    CCharacter *c = character(0);
    const CVector3f step = {1.0f, 0.0f, -2.0f};
    nocturne_hero_move_world(c, &step);
    CHECK_EQ(stand.moves.size(), (size_t)1);
    CHECK_EQ(c->base.location.position.z, -2.0f);
}

// A value steps toward its target and stops on it.
NOCTURNE_TEST(a_value_steps_to_its_target) {
    CHECK_EQ(nocturne_hero_approach(0.0f, 1.0f, 0.25f), 0.25f);
    CHECK_EQ(nocturne_hero_approach(1.0f, 0.0f, 0.25f), 0.75f);
    CHECK_EQ(nocturne_hero_approach(0.9f, 1.0f, 0.25f), 1.0f);
}

// Pitch turns with the look speed, a full turn a second at speed one, and is
// held between the limits.
NOCTURNE_TEST(pitch_turns_and_is_held_in_its_limits) {
    CHECK_NEAR(nocturne_hero_look_pitch(0.0f, 0.1f, 0.5f, -1.0f, 1.0f), 0.31415927f, 1e-6f);
    CHECK_EQ(nocturne_hero_look_pitch(0.0f, -1.0f, 1.0f, -1.0f, 1.0f), -1.0f);
    CHECK_EQ(nocturne_hero_look_pitch(0.0f, 1.0f, 1.0f, -1.0f, 1.0f), 1.0f);
}

NOCTURNE_TEST_MAIN()
