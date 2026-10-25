// =============================================================================
// MENUS, AUTHENTIC SINGLE PLAYER — no submenu
// =============================================================================
//
// Built with NOCTURNE_AUTHENTIC_SINGLE_PLAYER_MENU: the main menu starts a game
// directly, so there is no submenu to show and nothing to continue.

#include "game/save_slots.h"
#include "menus_support.h"
#include "nocturne_test.h"

using namespace menus_support;

NOCTURNE_TEST(there_is_no_submenu) {
    stand.reset();
    stand.saves = {{"SLOT01.NOC", 1, 1}};
    CHECK_EQ(nocturne_single_player_menu(), NOCTURNE_SP_MENU_CANCEL);
    char out[64] = "";
    CHECK_EQ(nocturne_save_continue_target(out, sizeof(out)), 0);
    CHECK(stand.menu_counts.empty());
}

NOCTURNE_TEST_MAIN()
