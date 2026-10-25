// =============================================================================
// HERO SLOTS — which heroes are players
// =============================================================================

#include "game/hero_slot.h"
#include "game_support.h"
#include "nocturne_test.h"

using namespace game_support;

// The local hero is the slot g_LocalHeroIndex names, and none when it names no
// slot.
NOCTURNE_TEST(the_local_hero_is_the_slot_named) {
    stand.reset();
    place_heroes(2);
    g_LocalHeroIndex = 1;
    CHECK(nocturne_hero_local() == heroes[1]);
    for (int index : {-1, NOCTURNE_HERO_SLOTS}) {
        g_LocalHeroIndex = index;
        CHECK(nocturne_hero_local() == nullptr);
    }
}

// An actor's slot is where the party holds it, among the heroes in play; any
// other actor, or none, is no player.
NOCTURNE_TEST(a_player_is_a_hero_in_the_party) {
    stand.reset();
    place_heroes(2);
    g_HeroActors[2] = heroes[2]; // left over past the hero count
    CHECK_EQ(nocturne_hero_slot(heroes[1]), 1);
    CHECK_EQ(nocturne_hero_is_player(heroes[0]), 1);
    CHECK_EQ(nocturne_hero_slot(heroes[2]), -1);
    CHECK_EQ(nocturne_hero_slot(character(0)), -1);
    CHECK_EQ(nocturne_hero_slot(nullptr), -1);
    CHECK_EQ(nocturne_hero_is_player(nullptr), 0);

    // A count past the slots is held to them.
    place_heroes(4);
    g_HeroCount = 9;
    CHECK_EQ(nocturne_hero_slot(heroes[3]), 3);
    CHECK_EQ(nocturne_hero_slot(character(0)), -1);
}

NOCTURNE_TEST_MAIN()
