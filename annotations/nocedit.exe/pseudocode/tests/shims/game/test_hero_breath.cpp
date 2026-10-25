// =============================================================================
// HERO BREATH — cold breath for a player hero of any class
// =============================================================================

#include "game/hero_breath.h"
#include "game_support.h"
#include "nocturne_test.h"

using namespace game_support;

// A player breathes; a hero who is not one does not.
NOCTURNE_TEST(a_player_hero_breathes) {
    stand.reset();
    place_heroes(1);
    nocturne_hero_breath(heroes[0], 0.25f);
    nocturne_hero_breath(heroes[1], 0.25f);
    CHECK_EQ(stand.smoked.size(), (size_t)1);
    if (!stand.smoked.empty()) {
        CHECK(stand.smoked[0].first == &heroes[0]->base);
        CHECK_EQ(stand.smoked[0].second, 0.25f);
    }
}

NOCTURNE_TEST_MAIN()
