// =============================================================================
// WARPS — the shipped scripts' developer warps, from the pause menu
// =============================================================================

#include "game/warps.h"
#include "menus_support.h"
#include "nocturne_test.h"

#include <string>
#include <vector>

using namespace menus_support;

// A mission's warps are on offer once the warps cheat is on, under any case of
// its name; not in a mission with none, or with no mission, no events, no
// party, or in a network game.
NOCTURNE_TEST(warps_are_offered_for_a_mission_that_has_them) {
    stand.reset();
    run_mission("FOREST");
    CHECK_EQ(nocturne_warps_available(), 1);

    struct Case {
        const char *name;
        void (*apply)();
    };
    const Case cases[] = {
        {"cheat off", [] { stand.warps_cheat = 0; }},
        {"no warps", [] { run_mission("MINE"); }},
        {"no name", [] { run_mission(""); }},
        {"no mission", [] { g_CDemonMissionPtr = nullptr; }},
        {"no events", [] { g_CEventListPtr = nullptr; }},
        {"no party", [] { g_HeroCount = 0; }},
        {"netplay", [] { stand.net_active = 1; }},
    };
    for (const Case &c : cases) {
        stand.reset();
        run_mission("FOREST");
        c.apply();
        CHECK_AT(nocturne_warps_available() == 0, c.name);
    }
}

// The list names each warp; the one picked is raised as the script's own event
// and announced once play resumes. Escape raises nothing.
NOCTURNE_TEST(a_warp_picked_is_raised_and_announced) {
    stand.reset();
    run_mission("forest");
    stand.choices.push_back(2);
    nocturne_warps_menu();
    CHECK_EQ(stand.title, std::string("Warp to"));
    CHECK_EQ(stand.rows.size(), (size_t)12);
    CHECK(stand.commands == std::vector<std::string>({"cheatBridge"}));
    CHECK(stand.messages == std::vector<std::string>({"Warp: Bridge"}));

    nocturne_warps_menu();
    CHECK_EQ(stand.commands.size(), (size_t)1);

    // With no game to show it in, the warp is still raised.
    g_CGamePtr = nullptr;
    stand.choices.push_back(0);
    nocturne_warps_menu();
    CHECK_EQ(stand.commands.size(), (size_t)2);
    CHECK_EQ(stand.messages.size(), (size_t)1);
}

// With nothing to offer, no list is shown.
NOCTURNE_TEST(with_no_warps_no_list_is_shown) {
    stand.reset();
    run_mission("MINE");
    nocturne_warps_menu();
    CHECK_EQ(stand.lists_shown, 0);
}

NOCTURNE_TEST_MAIN()
