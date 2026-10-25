// =============================================================================
// HERO SVETLANA — a player Svetlana can be grabbed
// =============================================================================

#include "game/hero_svetlana.h"
#include "game_support.h"
#include "nocturne_test.h"

using namespace game_support;

// As a player she is grabbed the way any hero is, and says whether she was; as
// anyone else's she is not.
NOCTURNE_TEST(a_player_svetlana_is_grabbed_as_a_hero) {
    stand.reset();
    place_heroes(1);
    stand.grab_result = 7;
    CHECK_EQ(nocturne_svetlana_get_grabbed(heroes[0], &character(0)->base, 2), 7);
    CHECK_EQ(nocturne_svetlana_get_grabbed(heroes[1], &character(0)->base, 2), 0);
    CHECK_EQ(stand.grabbed.size(), (size_t)1);
    if (!stand.grabbed.empty())
        CHECK_EQ(stand.grabbed[0].second, 2);
}

NOCTURNE_TEST_MAIN()
