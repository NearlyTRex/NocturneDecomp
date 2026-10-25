// =============================================================================
// CHEATS, AUTHENTIC — the shipped game has no presets
// =============================================================================

#include "game/cheats.h"
#include "nocturne_test.h"

// No menu, nothing applied, every line off, nothing to send and no host's set
// taken.
NOCTURNE_TEST(there_are_no_presets) {
    nocturne_cheats_menu();
    nocturne_cheats_apply();
    CHECK_EQ(nocturne_cheat_active(NOCTURNE_CHEAT_GOD_MODE), 0);
    CHECK_EQ(nocturne_cheat_local(NOCTURNE_CHEAT_GOD_MODE), 0);

    unsigned char state[NOCTURNE_CHEAT_COUNT] = {1};
    CHECK_EQ(nocturne_cheats_pack(state, NOCTURNE_CHEAT_COUNT), 0);
    nocturne_cheats_set_override(state, NOCTURNE_CHEAT_COUNT);
    CHECK_EQ(nocturne_cheats_override_active(), 0);
    nocturne_cheats_clear_override();
    CHECK_EQ(nocturne_cheats_override_active(), 0);
}

NOCTURNE_TEST_MAIN()
