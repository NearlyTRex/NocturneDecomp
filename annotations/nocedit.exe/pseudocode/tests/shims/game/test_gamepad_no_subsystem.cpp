// =============================================================================
// GAMEPAD, NO SUBSYSTEM — SDL without its controllers
// =============================================================================

#include "game/gamepad.h"
#include "gamepad_support.h"
#include "nocturne_test.h"

using namespace gamepad_support;

// With no controller subsystem there is nothing to load mappings into and no
// pad, whatever is plugged in.
NOCTURNE_TEST(without_the_subsystem_there_is_no_pad) {
    stand.subsystem_result = -1;
    stand.pads.emplace_back();
    nocturne_gamepad_init();
    CHECK(stand.mapping_files.empty());
    CHECK_EQ(nocturne_gamepad_present(), 0);
}

NOCTURNE_TEST_MAIN()
