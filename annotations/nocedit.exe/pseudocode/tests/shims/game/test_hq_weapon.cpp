// =============================================================================
// HQ WEAPON — no drawing a weapon or a light at headquarters
// =============================================================================

#include "game/hq_weapon.h"
#include "game_support.h"
#include "nocturne_test.h"

#include <cstdio>
#include <memory>

using namespace game_support;

namespace {

SPlayerInput drawing() {
    SPlayerInput input = {};
    input.action_state.draw = 1;
    input.action_state.light = 1;
    return input;
}

} // namespace

// In an HQ mission, whatever its case, draw and light are taken out of the
// input; anywhere else, or with no mission, they stand.
NOCTURNE_TEST(headquarters_takes_draw_and_light) {
    stand.reset();
    std::unique_ptr<CDemonMission> mission(new CDemonMission());
    SPlayerInput input = drawing();
    nocturne_hq_filter_input(&input);
    CHECK_EQ(input.action_state.draw, 1);

    g_CDemonMissionPtr = mission.get();
    for (const char *name : {"HQ-ACT4B", "hq-act1"}) {
        std::snprintf(mission->mission_name, sizeof(mission->mission_name), "%s", name);
        input = drawing();
        nocturne_hq_filter_input(&input);
        CHECK_EQ(input.action_state.draw, 0);
        CHECK_EQ(input.action_state.light, 0);
    }
    std::snprintf(mission->mission_name, sizeof(mission->mission_name), "MINE");
    input = drawing();
    nocturne_hq_filter_input(&input);
    CHECK_EQ(input.action_state.light, 1);
    nocturne_hq_filter_input(nullptr);
}

NOCTURNE_TEST_MAIN()
