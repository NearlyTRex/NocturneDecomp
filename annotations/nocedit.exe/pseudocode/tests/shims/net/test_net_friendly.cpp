// =============================================================================
// NET FRIENDLY FIRE — in a network game, one hero cannot hurt another
// =============================================================================

#include "net/net_friendly.h"
#include "net_support.h"
#include "nocturne.h"
#include "nocturne_test.h"

#include <cstring>

namespace {

using net_support::heroes;
using net_support::stand;

SDamageInfo hit(CDemonActor *attacker, CDemonActor *wielder, float amount) {
    SDamageInfo info;
    std::memset(&info, 0, sizeof(info));
    info.attacker = attacker;
    info.wielder = wielder;
    info.damage_amount = amount;
    return info;
}

} // namespace

// A hero hit by a hero, directly or through a weapon, in a session.
NOCTURNE_TEST(a_hero_hitting_a_hero_is_blocked_in_a_session) {
    stand.reset();
    net_support::place_heroes(2);
    static CDemonActor weapon = {};
    CCharacter *victim = &heroes[0]->base;
    CDemonActor *other = &heroes[1]->base.base;

    SDamageInfo punch = hit(other, nullptr, 5.0f);
    CHECK_EQ(nocturne_net_friendly_fire_blocked(victim, &punch), 0); // no session

    net_support::start_session(CONNECTION_HOST, 2, 0);
    CHECK_EQ(nocturne_net_friendly_fire_blocked(victim, &punch), 1);
    SDamageInfo shot = hit(&weapon, other, 5.0f);
    CHECK_EQ(nocturne_net_friendly_fire_blocked(victim, &shot), 1);
    SDamageInfo monster = hit(&weapon, nullptr, 5.0f);
    CHECK_EQ(nocturne_net_friendly_fire_blocked(victim, &monster), 0);

    static CCharacter enemy = {};
    CHECK_EQ(nocturne_net_friendly_fire_blocked(&enemy, &punch), 0);
    CHECK_EQ(nocturne_net_friendly_fire_blocked(nullptr, &punch), 0);
    CHECK_EQ(nocturne_net_friendly_fire_blocked(victim, nullptr), 0);
}

// Blocking zeroes the damage; a hit already doing none is left to its path.
NOCTURNE_TEST(blocking_zeroes_the_damage) {
    stand.reset();
    net_support::place_heroes(2);
    net_support::start_session(CONNECTION_HOST, 2, 0);
    CCharacter *victim = &heroes[0]->base;
    CDemonActor *other = &heroes[1]->base.base;
    static CDemonActor weapon = {};

    SDamageInfo punch = hit(other, nullptr, 5.0f);
    CHECK_EQ(nocturne_net_friendly_fire_block(victim, &punch), 1);
    CHECK_EQ(punch.damage_amount, 0.0f);
    CHECK_EQ(nocturne_net_friendly_fire_block(victim, &punch), 0);
    CHECK_EQ(nocturne_net_friendly_fire_block(victim, nullptr), 0);

    SDamageInfo monster = hit(&weapon, nullptr, 5.0f);
    CHECK_EQ(nocturne_net_friendly_fire_block(victim, &monster), 0);
    CHECK_EQ(monster.damage_amount, 5.0f);
}

NOCTURNE_TEST_MAIN()
