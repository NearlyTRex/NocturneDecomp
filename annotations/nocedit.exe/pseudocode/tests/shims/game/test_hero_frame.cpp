// =============================================================================
// HERO FRAME — what every hero class gets each frame
// =============================================================================

#include "game/hero_frame.h"
#include "game_support.h"
#include "nocturne_test.h"

using namespace game_support;

// Any player hero has its death checked, its items run and its breath shown.
NOCTURNE_TEST(a_hero_is_checked_runs_its_items_and_breathes) {
    stand.reset();
    place_heroes(1);
    stand.motion_states["DIE"] = 4;
    heroes[0]->base.hit_points = 0.0f;
    nocturne_hero_frame(heroes[0], 0.1f);
    CHECK_EQ(stand.forced.size(), (size_t)1);
    CHECK_EQ(stand.items_processed.size(), (size_t)1);
    CHECK_EQ(stand.smoked.size(), (size_t)1);
    CHECK(stand.regenerated.empty());
    nocturne_hero_frame(nullptr, 0.1f);
}

// Svetlana breathes by herself, so she is not given a second breath.
NOCTURNE_TEST(svetlana_breathes_by_herself) {
    stand.reset();
    place_heroes(1);
    give_class(&heroes[0]->base.base, &g_CSvetlanaClassInfo);
    nocturne_hero_frame(heroes[0], 0.1f);
    CHECK_EQ(stand.items_processed.size(), (size_t)1);
    CHECK(stand.smoked.empty());
}

// Moloch is not killed, does not breathe, and regenerates.
NOCTURNE_TEST(moloch_regenerates_and_is_not_killed) {
    stand.reset();
    place_heroes(1);
    give_class(&heroes[0]->base.base, &g_CMolochClassInfo);
    stand.motion_states["DIE"] = 4;
    heroes[0]->base.hit_points = 0.0f;
    nocturne_hero_frame(heroes[0], 0.1f);
    CHECK(stand.forced.empty());
    CHECK(stand.smoked.empty());
    CHECK_EQ(stand.regenerated.size(), (size_t)1);
    CHECK_EQ(stand.items_processed.size(), (size_t)1);
}

NOCTURNE_TEST_MAIN()
