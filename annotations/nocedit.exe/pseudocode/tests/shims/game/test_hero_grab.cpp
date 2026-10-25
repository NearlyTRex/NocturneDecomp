// =============================================================================
// HERO GRAB — every hero breaks free of a grab, as the Stranger does
// =============================================================================

#include "behaviour_support.h"
#include "game/hero_grab.h"
#include "nocturne_test.h"

#include <memory>

using namespace behaviour_support;

namespace {

const int kStand = 0, kRun = 2, kGrabbed = 5, kEscape = 6;

std::unique_ptr<CMotionList> s_list(new CMotionList());
SMotion s_run, s_grabbed;

// A hero held by a sentinel, running, with the states his class has: STAND,
// GETGRABBED and the escape named `escape` (or none).
CHero *held(const char *escape = "ESCAPEGRAB") {
    stand.reset();
    nocturne_hero_grab_reset();
    place_heroes(1);
    CHero *hero = heroes[0];
    hero->base.grabbed_by = &character(0)->base;
    hero->base.model.base.state_index = kRun;
    hero->base.model.base.tween_progress = -1.0f;
    stand.states["STAND"] = kStand;
    stand.states["GETGRABBED"] = kGrabbed;
    if (escape != nullptr)
        stand.states[escape] = kEscape;

    std::memset(s_list.get(), 0, sizeof(*s_list));
    s_list->motion_count = 1;
    s_list->motions[0].state_index = kGrabbed;
    hero->base.model.base.motion_list_ptr = s_list.get();
    s_run = SMotion();
    s_run.state_index = kRun;
    s_grabbed = SMotion();
    s_grabbed.state_index = kGrabbed;
    stand.motion[&hero->base.model.base] = &s_run;
    return hero;
}

// Holds on for `seconds` more, a tenth at a time; whether he broke free.
int hold_for(CHero *hero, float seconds) {
    int freed = 0;
    for (float t = 0.0f; t < seconds - 1e-4f && freed == 0; t += 0.1f) {
        freed = nocturne_hero_grab_escape(hero, 0.1f);
    }
    return freed;
}

} // namespace

// Held, a running hero is steered into GETGRABBED through STAND, the struggle
// press is spent, and a little later he is put there outright.
NOCTURNE_TEST(a_held_hero_is_steered_into_the_grab) {
    CHero *hero = held();
    hero->player_input.action_state.fire = 1;
    CHECK_EQ(nocturne_hero_grab_escape(hero, 0.1f), 0);
    CHECK_EQ(hero->player_input.action_state.fire, 0);
    CHECK_EQ(stand.desired.size(), (size_t)1);
    if (!stand.desired.empty())
        CHECK_EQ(stand.desired[0].index, kStand);
    nocturne_hero_grab_escape(hero, 0.1f);
    CHECK_EQ(stand.desired.size(), (size_t)1); // already headed there

    // A motion that routes to it is asked for it directly.
    s_run.transition_count = 2;
    s_run.transitions[1].desired_state = kGrabbed;
    nocturne_hero_grab_escape(hero, 0.05f);
    CHECK_EQ(hero->base.model.base.state_index, kGrabbed);

    // Past the snap time, he is jumped there.
    hold_for(hero, 0.1f);
    CHECK_EQ(stand.jumped.size(), (size_t)1);

    // Mid-tween, or already in it, he is left to it.
    const size_t asked = stand.desired.size();
    hero->base.model.base.tween_progress = 0.5f;
    nocturne_hero_grab_escape(hero, 0.01f);
    hero->base.model.base.tween_progress = -1.0f;
    stand.motion[&hero->base.model.base] = &s_grabbed;
    nocturne_hero_grab_escape(hero, 0.01f);
    CHECK_EQ(stand.desired.size(), asked);
    CHECK_EQ(stand.jumped.size(), (size_t)1);
}

// After the hold, the escape motion plays while either is blended in, and he
// is let go once neither is.
NOCTURNE_TEST(after_the_hold_the_escape_plays_then_he_is_free) {
    CHero *hero = held();
    stand.motion[&hero->base.model.base] = &s_grabbed;
    stand.weights[kGrabbed] = 1.0f;
    CHECK_EQ(hold_for(hero, 1.5f), 0);
    CHECK_EQ(nocturne_hero_grab_escape(hero, 0.1f), 0);
    CHECK_EQ(hero->base.model.base.state_index, kEscape);
    stand.weights[kGrabbed] = 0.0f;
    stand.weights[kEscape] = 1.0f;
    CHECK_EQ(nocturne_hero_grab_escape(hero, 0.1f), 0);
    stand.weights[kEscape] = 0.0f;
    CHECK_EQ(nocturne_hero_grab_escape(hero, 0.1f), 1);
    CHECK_EQ(stand.released.size(), (size_t)1);
}

// An escape that never finishes is cut short, and he is let go anyway.
NOCTURNE_TEST(an_escape_that_hangs_is_cut_short) {
    CHero *hero = held();
    stand.motion[&hero->base.model.base] = &s_grabbed;
    stand.weights[kGrabbed] = 1.0f;
    CHECK_EQ(hold_for(hero, 5.0f), 1);
}

// A class whose escape is PUSHOFF uses it; one with no escape, or one not yet
// in GETGRABBED when the hold runs out, is let go when it does.
NOCTURNE_TEST(the_escape_is_the_classs_own_or_none) {
    CHero *hero = held("PUSHOFF");
    stand.motion[&hero->base.model.base] = &s_grabbed;
    stand.weights[kGrabbed] = 1.0f;
    hold_for(hero, 1.6f);
    CHECK_EQ(hero->base.model.base.state_index, kEscape);

    hero = held(nullptr);
    stand.motion[&hero->base.model.base] = &s_grabbed;
    stand.weights[kGrabbed] = 1.0f;
    CHECK_EQ(hold_for(hero, 1.4f), 0);
    CHECK_EQ(nocturne_hero_grab_escape(hero, 0.2f), 1);

    hero = held();
    stand.motion[&hero->base.model.base] = &s_grabbed;
    CHECK_EQ(hold_for(hero, 1.4f), 0);
    CHECK_EQ(nocturne_hero_grab_escape(hero, 0.2f), 1);
}

// A class with no GETGRABBED is simply held for the time and let go.
NOCTURNE_TEST(a_class_with_no_grab_state_is_let_go_in_time) {
    CHero *hero = held();
    stand.states.clear();
    CHECK_EQ(hold_for(hero, 1.4f), 0);
    CHECK_EQ(hold_for(hero, 0.2f), 1);
}

// Free, or held by the script, there is nothing to escape; a free hero's hold
// is given back, so a fresh grab starts from nothing; with every hold taken,
// another hero waits.
NOCTURNE_TEST(only_a_hero_held_by_an_enemy_escapes) {
    CHero *hero = held();
    stand.states.clear();
    hold_for(hero, 1.0f);
    hero->base.grabbed_by = nullptr;
    CHECK_EQ(nocturne_hero_grab_escape(hero, 0.1f), 0);
    hero->base.grabbed_by = &character(0)->base;
    CHECK_EQ(hold_for(hero, 1.0f), 0);

    hero->base.grabbed_type = 1;
    CHECK_EQ(hold_for(hero, 2.0f), 0);
    CHECK_EQ(nocturne_hero_grab_escape(nullptr, 0.1f), 0);

    // A free hero with no hold has none to give back.
    std::unique_ptr<CHero> free_hero(new CHero());
    CHECK_EQ(nocturne_hero_grab_escape(free_hero.get(), 0.1f), 0);

    // Eight heroes held at once fill the table.
    stand.reset();
    stand.states.clear();
    std::unique_ptr<CHero> held_heroes[9];
    for (int i = 0; i < 9; i++) {
        held_heroes[i].reset(new CHero());
        held_heroes[i]->base.grabbed_by = &character(0)->base;
        nocturne_hero_grab_escape(held_heroes[i].get(), 0.1f);
    }
    CHECK_EQ(hold_for(held_heroes[8].get(), 2.0f), 0);
}

// Heroes destroyed while held never give their holds back; a new mission's
// reset does, and a hero held then breaks free again.
NOCTURNE_TEST(a_reset_lets_go_of_holds_whose_heroes_are_gone) {
    CHero *hero = held();
    stand.states.clear();
    std::unique_ptr<CHero> gone[8];
    for (auto &g : gone) {
        g.reset(new CHero());
        g->base.grabbed_by = &character(0)->base;
        nocturne_hero_grab_escape(g.get(), 0.1f);
    }
    CHECK_EQ(hold_for(hero, 2.0f), 0);

    nocturne_hero_grab_reset();
    CHECK_EQ(hold_for(hero, 2.0f), 1);
}

// A character carried off is moved there through collision; anything else is
// left to the caller.
NOCTURNE_TEST(a_carried_character_is_moved_through_collision) {
    stand.reset();
    CCharacter *victim = character(0);
    give_class(&victim->base, &g_CCharacterClassInfo);
    victim->base.location.position = CVector3f{1.0f, 0.0f, 0.0f};
    CVector3f target = {4.0f, 0.0f, 0.0f};
    CHECK_EQ(nocturne_grab_carry_move(&victim->base, &target), 1);
    CHECK_EQ(victim->base.location.position.x, 4.0f);

    CDemonActor *crate = &character(1)->base;
    give_class(crate, &item_type);
    CHECK_EQ(nocturne_grab_carry_move(crate, &target), 0);
    CHECK_EQ(nocturne_grab_carry_move(nullptr, &target), 0);
    CHECK_EQ(nocturne_grab_carry_move(&victim->base, nullptr), 0);
}

NOCTURNE_TEST_MAIN()
