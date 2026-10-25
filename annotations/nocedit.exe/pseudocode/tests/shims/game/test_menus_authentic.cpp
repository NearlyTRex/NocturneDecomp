// =============================================================================
// MENUS, AUTHENTIC — the shipped saving, and no warps
// =============================================================================
//
// Built with NOCTURNE_AUTHENTIC_CHEAT_MENU, _SAVE_SLOTS, _AUTOSAVE and
// _MENU_FONT: the single-player submenu stays, without its Continue row.

#include "game/chapter_select.h"
#include "game/save_slots.h"
#include "game/warps.h"
#include "menus_support.h"
#include "nocturne_test.h"

using namespace menus_support;

// No warps, no slot lists, no autosave.
NOCTURNE_TEST(the_additions_are_off) {
    stand.reset();
    run_mission("FOREST");
    CHECK_EQ(nocturne_warps_available(), 0);
    nocturne_warps_menu();
    CHECK_EQ(stand.lists_shown, 0);
    nocturne_save_slots_prewarm();
    char out[64] = "";
    CHECK_EQ(nocturne_save_pick_slot(out, sizeof(out)), 0);
    CHECK_EQ(nocturne_load_pick_slot(out, sizeof(out)), 0);
    nocturne_autosave_session_start();
    nocturne_autosave_poll(game);
    CHECK(stand.saved.empty());
}

// The submenu is Start and Load alone.
NOCTURNE_TEST(the_submenu_has_no_continue) {
    stand.reset();
    stand.menu_choices = {0};
    CHECK_EQ(nocturne_single_player_menu(), NOCTURNE_SP_MENU_START);
    stand.menu_choices = {1};
    CHECK_EQ(nocturne_single_player_menu(), NOCTURNE_SP_MENU_LOAD);
    CHECK_EQ(stand.menu_counts.back(), 2);
}

// The story list is in the theme font, as shipped, and puts the font back.
NOCTURNE_TEST(the_story_list_keeps_the_theme_font) {
    stand.reset();
    stand.missions = {"hq-act1.msn"};
    stand.choices.push_back(0);
    char out[64] = "";
    CHECK_EQ(nocturne_chapter_pick_mission(out, sizeof(out)), 1);
    CHECK(g_EditorFont == nullptr);
}

NOCTURNE_TEST_MAIN()
