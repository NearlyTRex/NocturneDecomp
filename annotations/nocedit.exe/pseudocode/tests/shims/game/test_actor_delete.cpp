// =============================================================================
// ACTOR DELETE — nothing left pointing at an actor once it is gone
// =============================================================================

#include "behaviour_support.h"
#include "game/actor_delete.h"
#include "nocturne_test.h"

using namespace behaviour_support;

// A sound slot tracking the actor's position, or started by it, lets go of it;
// slots about other actors keep theirs. The mixer is locked throughout.
NOCTURNE_TEST(the_sound_slots_let_go_of_it) {
    stand.reset();
    CDemonActor *gone = &character(0)->base;
    CDemonActor *other = &character(1)->base;
    void *gone_position = &gone->location.position;

    CSfxOptions &tracked = g_SfxSlots[0].options;
    tracked.position_source_ptr = gone_position;
    tracked.position_format = 1;
    tracked.velocity_source_ptr = gone_position;
    tracked.velocity_format = 2;
    CSfxOptions &started = g_SfxSlots[1].options;
    started.userdata[0] = gone;
    started.position_source_ptr = (void *)0x1;
    started.velocity_source_ptr = (void *)0x1;
    CSfxOptions &named = g_SfxSlots[2].options;
    named.userdata[1] = gone;
    CSfxOptions &kept = g_SfxSlots[3].options;
    kept.position_source_ptr = &other->location.position;
    kept.userdata[0] = other;
    kept.userdata[1] = other;

    nocturne_actor_delete_unbind_sounds(gone);
    CHECK(tracked.position_source_ptr == nullptr);
    CHECK_EQ(tracked.velocity_format, 0);
    CHECK(started.position_source_ptr == nullptr);
    CHECK(started.velocity_source_ptr == nullptr);
    CHECK(started.userdata[0] == nullptr);
    CHECK(named.userdata[1] == nullptr);
    CHECK(kept.position_source_ptr == &other->location.position);
    CHECK(kept.userdata[0] == other);
    CHECK(kept.userdata[1] == other);
    CHECK_EQ(stand.sound_locks, 1);
    CHECK_EQ(stand.sound_unlocks, 1);

    nocturne_actor_delete_unbind_sounds(nullptr);
    CHECK_EQ(stand.sound_locks, 1);
}

// No hero is left holding it: as the Stranger's weapon, in either hand, or
// selected in an inventory.
NOCTURNE_TEST(no_hero_is_left_holding_it) {
    stand.reset();
    place_heroes(3);
    CDemonActor *gone = &character(0)->base;
    CDemonActor *other = &character(1)->base;
    CHero *s = &stranger->base;
    g_HeroActors[0] = s;
    stranger->weapon = (CWeapon *)gone;
    s->base.carry_hands[0].carry_actor = gone;
    s->base.carry_hands[1].carry_actor = other;
    s->inventory.selected_weapon = (CWeapon *)gone;
    s->inventory.selected_item = other;
    heroes[2]->inventory.selected_item = gone;
    heroes[2]->inventory.selected_weapon = (CWeapon *)other;
    g_HeroCount = 4;

    nocturne_actor_delete_unbind_heroes(gone);
    CHECK(stranger->weapon == nullptr);
    CHECK(s->base.carry_hands[0].carry_actor == nullptr);
    CHECK(s->base.carry_hands[1].carry_actor == other);
    CHECK(s->inventory.selected_weapon == nullptr);
    CHECK(s->inventory.selected_item == other);
    CHECK(heroes[2]->inventory.selected_item == nullptr);
    CHECK(heroes[2]->inventory.selected_weapon == (CWeapon *)other);

    // A Stranger holding something else keeps it.
    stranger->weapon = (CWeapon *)other;
    nocturne_actor_delete_unbind_heroes(gone);
    CHECK(stranger->weapon == (CWeapon *)other);
}

NOCTURNE_TEST_MAIN()
