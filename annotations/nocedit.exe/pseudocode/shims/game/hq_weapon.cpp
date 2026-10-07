// =============================================================================
// HQ WEAPON — see hq_weapon.h
// =============================================================================

#include "game/hq_weapon.h"
#include "core/ascii_case.h"
#include "nocturne.h"

// Nonzero while the loaded mission is an HQ mission.
static int mission_is_hq(void)
{
    if (g_CDemonMissionPtr == (CDemonMission *)0) {
        return 0;
    }
    return nocturne_ascii_icompare_n(g_CDemonMissionPtr->mission_name, "HQ-", 3) == 0;
}

extern "C" void nocturne_hq_filter_input(struct SPlayerInput *input)
{
    if ((input == (SPlayerInput *)0) || (mission_is_hq() == 0)) {
        return;
    }
    input->action_state.draw = 0;
    input->action_state.light = 0;
}
