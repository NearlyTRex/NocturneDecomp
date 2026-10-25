// =============================================================================
// HERO DEATH — a killed player falls, and a fallen one can be brought back
// =============================================================================

#include "game/hero_death.h"
#include "game_support.h"
#include "nocturne_test.h"

using namespace game_support;

namespace {

void dying_states() {
    stand.motion_states["DIE"] = 4;
    stand.motion_states["DEAD"] = 5;
    stand.motion_states["STAND"] = 0;
}

} // namespace

// Only a player at no health stops regenerating.
NOCTURNE_TEST(only_a_player_at_no_health_stops_regenerating) {
    stand.reset();
    place_heroes(1);
    CHECK_EQ(nocturne_hero_regenerates(nullptr), 1);
    CHECK_EQ(nocturne_hero_regenerates(heroes[0]), 1);
    heroes[0]->base.hit_points = 0.0f;
    CHECK_EQ(nocturne_hero_regenerates(heroes[0]), 0);
    heroes[1]->base.hit_points = 0.0f;
    CHECK_EQ(nocturne_hero_regenerates(heroes[1]), 1);
}

// A player at no health who is still standing is sent to DIE.
NOCTURNE_TEST(a_player_at_no_health_is_sent_to_die) {
    stand.reset();
    place_heroes(1);
    dying_states();
    heroes[0]->base.hit_points = 0.0f;
    nocturne_hero_check_death(heroes[0]);
    CHECK_EQ(stand.forced.size(), (size_t)1);
    if (!stand.forced.empty())
        CHECK_EQ(stand.forced[0].second, 4);
}

// Not when alive, not a player, already dying or dead, already headed for
// either state, or with no DIE to go to. Without a DEAD state, only DIE counts.
NOCTURNE_TEST(a_hero_not_standing_dead_is_left_alone) {
    struct Case {
        const char *name;
        void (*apply)();
    };
    nocturne_hero_check_death(nullptr);
    const Case cases[] = {
        {"alive", [] { heroes[0]->base.hit_points = 1.0f; }},
        {"not a player", [] { g_HeroCount = 0; }},
        {"dying", [] { death[heroes[0]] = DEATH_STATE_DYING; }},
        {"headed to DIE", [] { heroes[0]->base.model.base.state_index = 4; }},
        {"headed to DEAD", [] { heroes[0]->base.model.base.state_index = 5; }},
        {"no DIE", [] { stand.motion_states.erase("DIE"); }},
    };
    for (const Case &c : cases) {
        stand.reset();
        place_heroes(1);
        dying_states();
        heroes[0]->base.hit_points = 0.0f;
        c.apply();
        nocturne_hero_check_death(heroes[0]);
        CHECK_AT(stand.forced.empty(), c.name);
    }

    stand.reset();
    place_heroes(1);
    stand.motion_states["DIE"] = 4;
    heroes[0]->base.hit_points = 0.0f;
    heroes[0]->base.model.base.state_index = 5;
    nocturne_hero_check_death(heroes[0]);
    CHECK_EQ(stand.forced.size(), (size_t)1);
}

// A fallen hero gets his health back and stands up; one the world destroyed is
// put back in it and reassembled first. A standing hero, or none, is left.
NOCTURNE_TEST(a_fallen_hero_is_brought_back) {
    stand.reset();
    place_heroes(1);
    dying_states();
    CHECK_EQ(nocturne_hero_revive(nullptr), 0);
    CHECK_EQ(nocturne_hero_revive(heroes[0]), 0);

    heroes[0]->base.hit_points = 0.0f;
    CHECK_EQ(nocturne_hero_revive(heroes[0]), 1);
    CHECK_EQ(heroes[0]->base.hit_points, 100.0f);
    CHECK_EQ(stand.jumped.size(), (size_t)1);
    CHECK_EQ(stand.desired.size(), (size_t)1);
    if (!stand.desired.empty())
        CHECK(stand.desired[0] == std::make_pair(0, 1));
    CHECK(stand.reassembled.empty());

    // Swallowed whole with his health intact.
    heroes[0]->base.base.lifecycle_state = ACTOR_DESTROYED;
    stand.motion_states.erase("STAND");
    CHECK_EQ(nocturne_hero_revive(heroes[0]), 1);
    CHECK_EQ((int)heroes[0]->base.base.lifecycle_state, (int)ACTOR_CREATED);
    CHECK_EQ(stand.reassembled.size(), (size_t)1);
    CHECK_EQ(stand.desired.size(), (size_t)1);
}

NOCTURNE_TEST_MAIN()
