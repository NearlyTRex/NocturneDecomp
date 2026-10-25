// =============================================================================
// HERO BARON — one Baron per Baron weapon, in netplay
// =============================================================================

#include "game/hero_baron.h"
#include "game_support.h"
#include "nocturne_test.h"

using namespace game_support;

namespace {

CBaronWeapon *weapon(int i) {
    return (CBaronWeapon *)(0x1000 + i * 0x10);
}
CBaron *baron(int i) {
    return (CBaron *)(0x9000 + i * 0x10);
}

} // namespace

// Outside netplay nothing is claimed, so nothing is claimed by another.
NOCTURNE_TEST(outside_netplay_there_are_no_claims) {
    stand.reset();
    nocturne_baron_reset();
    nocturne_baron_claim(weapon(0), baron(0));
    stand.net_active = 1;
    CHECK_EQ(nocturne_baron_claimed_by_other(weapon(1), baron(0)), 0);
    stand.net_active = 0;
    CHECK_EQ(nocturne_baron_claimed_by_other(weapon(1), baron(0)), 0);
}

// A Baron a weapon has claimed is another weapon's no longer; a weapon claiming
// again moves its claim, and no Baron is no claim.
NOCTURNE_TEST(a_claimed_baron_is_not_another_weapons) {
    stand.reset();
    stand.net_active = 1;
    nocturne_baron_reset();
    nocturne_baron_claim(weapon(0), baron(0));
    nocturne_baron_claim(weapon(1), nullptr);
    CHECK_EQ(nocturne_baron_claimed_by_other(weapon(1), baron(0)), 1);
    CHECK_EQ(nocturne_baron_claimed_by_other(weapon(0), baron(0)), 0);
    CHECK_EQ(nocturne_baron_claimed_by_other(weapon(1), baron(1)), 0);

    nocturne_baron_claim(weapon(0), baron(1));
    CHECK_EQ(nocturne_baron_claimed_by_other(weapon(1), baron(0)), 0);
    CHECK_EQ(nocturne_baron_claimed_by_other(weapon(1), baron(1)), 1);

    nocturne_baron_reset();
    CHECK_EQ(nocturne_baron_claimed_by_other(weapon(1), baron(1)), 0);
}

// Past the sixteen claims the table holds, more are not kept.
NOCTURNE_TEST(the_claims_past_the_table_are_not_kept) {
    stand.reset();
    stand.net_active = 1;
    nocturne_baron_reset();
    for (int i = 0; i < 17; i++)
        nocturne_baron_claim(weapon(i), baron(i));
    CHECK_EQ(nocturne_baron_claimed_by_other(weapon(99), baron(15)), 1);
    CHECK_EQ(nocturne_baron_claimed_by_other(weapon(99), baron(16)), 0);
}

NOCTURNE_TEST_MAIN()
