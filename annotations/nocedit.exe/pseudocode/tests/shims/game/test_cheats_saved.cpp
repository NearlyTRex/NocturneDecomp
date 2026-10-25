// =============================================================================
// CHEATS, SAVED — the lines a saved INI arms
// =============================================================================

#include "../gl/ini_support.h"
#include "cheats_support.h"
#include "game/cheats.h"
#include "nocturne_test.h"

using namespace cheats_support;

// A line reads as the INI left it; a state no line has, as a hand edit could
// leave, reads as off.
NOCTURNE_TEST(the_saved_lines_are_read_and_held_in_range) {
    enter_empty_dir("nocturne_cheats_saved_test");
    stand.reset();
    ini_support::save("Cheats", "godMode", "1");
    ini_support::save("Cheats", "weather", "2");
    ini_support::save("Cheats", "oldHat", "-1");
    ini_support::save("Cheats", "bigHead", "5");
    CHECK_EQ(nocturne_cheat_local(NOCTURNE_CHEAT_GOD_MODE), 1);
    CHECK_EQ(nocturne_cheat_local(NOCTURNE_CHEAT_WEATHER), NOCTURNE_CHEAT_WEATHER_SNOW);
    CHECK_EQ(nocturne_cheat_local(NOCTURNE_CHEAT_OLD_HAT), 0);
    CHECK_EQ(nocturne_cheat_local(NOCTURNE_CHEAT_BIG_HEAD), 0);
    CHECK_EQ(nocturne_cheat_local(NOCTURNE_CHEAT_FREEZE), 0);
}

NOCTURNE_TEST_MAIN()
