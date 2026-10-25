// =============================================================================
// HERO LIGHT — a flashlight, a beam and goggles for each hero
// =============================================================================

#include "behaviour_support.h"
#include "game/hero_light.h"
#include "net/net_weapon.h"
#include "nocturne_test.h"

#include <string>

using namespace behaviour_support;

namespace {

void party() {
    stand.reset();
    place_heroes(2);
    nocturne_hero_light_reset();
    nocturne_hero_goggles_reset();
}

} // namespace

// The local hero's flashlight is the game's own switch; each other player has
// his own; anyone else gets one that is always off.
NOCTURNE_TEST(each_player_has_his_own_flashlight) {
    party();
    CHECK(nocturne_hero_flashlight(heroes[0]) == &game->flashlight_active);
    *nocturne_hero_flashlight(heroes[1]) = 1;
    CHECK_EQ(nocturne_hero_flashlight_lit(&heroes[1]->base.base), 1);
    game->flashlight_active = 0;
    CHECK_EQ(nocturne_hero_flashlight_lit(&heroes[0]->base.base), 0);
    *nocturne_hero_flashlight(heroes[2]) = 1;
    CHECK_EQ(*nocturne_hero_flashlight(heroes[2]), 0);
    CHECK_EQ(nocturne_hero_flashlight_lit(&heroes[2]->base.base), 0);

    nocturne_hero_light_reset();
    CHECK_EQ(*nocturne_hero_flashlight(heroes[1]), 0);
}

// The local hero's beam and corona are the game's; another player's are his
// own, the beam built the first time it is asked for, as the game builds its.
NOCTURNE_TEST(each_player_has_his_own_beam) {
    party();
    CHECK(nocturne_hero_light(heroes[0]) == &g_CDemonLightInstance);
    CHECK(nocturne_hero_corona(heroes[0]) == &g_WeaponCoronaGlobe);
    CDemonLight *beam = nocturne_hero_light(heroes[1]);
    CHECK(beam != &g_CDemonLightInstance);
    CHECK(nocturne_hero_light(heroes[1]) == beam);
    CHECK_EQ(std::string(beam->base.camera_name), std::string("Flashlight"));
    CHECK_EQ(stand.lights_built.size(), (size_t)1);
    CHECK(nocturne_hero_corona(heroes[1]) != &g_WeaponCoronaGlobe);

    beam->light_enabled_flag = 1;
    nocturne_hero_light_reset();
    CHECK_EQ(beam->light_enabled_flag, 0);
}

// Room for a light is made by dropping another player's beam from the dynamic
// list; another player's beam is not given room, and with no such beam to drop
// the light is let in.
NOCTURNE_TEST(room_is_made_by_dropping_another_players_beam) {
    party();
    CDemonLight *beam = nocturne_hero_light(heroes[1]);
    CDemonLight other = {};
    g_DynamicLights[0] = &other;
    g_DynamicLights[1] = beam;
    g_DynamicLights[2] = &other;
    g_DynamicLightCount = 3;
    CHECK_EQ(nocturne_hero_light_make_room(beam), 0);
    CHECK_EQ(nocturne_hero_light_make_room(&g_CDemonLightInstance), 1);
    CHECK_EQ(g_DynamicLightCount, 2);
    CHECK(g_DynamicLights[1] == &other);
    CHECK_EQ(nocturne_hero_light_make_room(&g_CDemonLightInstance), 1);
    CHECK_EQ(g_DynamicLightCount, 2);
}

// Alone, only the local hero wears goggles, and only while the game has them
// on. In netplay each player's are what he last said, and the local player's
// are said when they change.
NOCTURNE_TEST(goggles_are_each_players_own_in_netplay) {
    party();
    CHECK_EQ(nocturne_hero_goggles(heroes[0]), 0);
    game->goggles_active = 1;
    CHECK_EQ(nocturne_hero_goggles(heroes[0]), 1);
    CHECK_EQ(nocturne_hero_goggles(heroes[1]), 0);
    nocturne_hero_goggles_publish();
    CHECK(stand.weapon_requests.empty());

    stand.net_playing = 1;
    nocturne_hero_goggles_set(heroes[1], 5);
    nocturne_hero_goggles_set(heroes[2], 1);
    CHECK_EQ(nocturne_hero_goggles(heroes[1]), 1);
    CHECK_EQ(nocturne_hero_goggles(heroes[0]), 0);
    CHECK_EQ(nocturne_hero_goggles(heroes[2]), 0);

    nocturne_hero_goggles_publish();
    nocturne_hero_goggles_publish();
    game->goggles_active = 0;
    nocturne_hero_goggles_publish();
    CHECK_EQ(stand.weapon_requests.size(), (size_t)2);
    if (stand.weapon_requests.size() == 2) {
        CHECK(stand.weapon_requests[0] == std::make_pair(NOCTURNE_NET_WEAPON_GOGGLES, 1));
        CHECK(stand.weapon_requests[1] == std::make_pair(NOCTURNE_NET_WEAPON_GOGGLES, 0));
    }

    nocturne_hero_goggles_reset();
    CHECK_EQ(nocturne_hero_goggles(heroes[1]), 0);
}

NOCTURNE_TEST_MAIN()
