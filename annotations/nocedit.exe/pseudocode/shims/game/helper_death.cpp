// =============================================================================
// A HELPER'S DEATH ENDS THE MISSION — implementation
// =============================================================================

#include "game/helper_death.h"
#include "shim_config.h"

#include "nocturne.h"

#if !NOCTURNE_AUTHENTIC_HELPER_DEATH

namespace {

int g_MissionFailedByEnd;

} // namespace

extern "C" void nocturne_helper_death_reset(void) { g_MissionFailedByEnd = 0; }

extern "C" void nocturne_helper_death_note_end(void) { g_MissionFailedByEnd = 1; }

extern "C" int nocturne_helper_death_game_over(void) { return g_MissionFailedByEnd; }

extern "C" int nocturne_helper_death_hold_hero(void)
{
    CDemonActor *focus;
    CCharacter  *character;

    if (g_CScriptPtr == (CScript *)0) {
        return 0;
    }
    focus = g_CScriptPtr->focus_actor;
    if (focus == (CDemonActor *)0 ||
        core_actor_cpp_isOfClass_FUN_0040c6d0(focus, (char *)"CCharacter") == 0) {
        return 0;
    }
    // The companions are CHero subclasses (CSvetlana, CScat, CIcePick), so the
    // test is against the player heroes, not the class.
    if (nocturne_hero_is_player(focus) != 0) {
        return 0;
    }
    character = (CCharacter *)focus;
    // isDead's own test in CEventList::evaluateAtom.
    return (1 < (int)(*(((character->base).vtable._uc)->_uc).getDeathState)(character)) ? 1 : 0;
}

#else

extern "C" void nocturne_helper_death_reset(void) {}
extern "C" void nocturne_helper_death_note_end(void) {}
extern "C" int nocturne_helper_death_game_over(void) { return 0; }
extern "C" int nocturne_helper_death_hold_hero(void) { return 0; }

#endif // !NOCTURNE_AUTHENTIC_HELPER_DEATH
