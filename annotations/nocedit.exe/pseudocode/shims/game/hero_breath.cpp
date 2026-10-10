// =============================================================================
// COLD BREATH FOR THE CLASSES THAT ARE NOT THE STRANGER — implementation
// =============================================================================
//
// See hero_breath.h for which classes already breathe.

#include "game/hero_breath.h"
#include "nocturne.h"

#if !NOCTURNE_AUTHENTIC_HERO_ACTIONS

extern "C" void nocturne_hero_breath(CHero *hero, float delta_time)
{
    if (nocturne_hero_is_player(hero) != 0) {
        core_charactr_cpp_CCharacter_processSmoking_FUN_0042ea40(&hero->base, delta_time);
    }
}

#endif
