// =============================================================================
// PER-FRAME HERO ADDITIONS — implementation
// =============================================================================

#include "game/hero_frame.h"
#include "nocturne.h"

#if !NOCTURNE_AUTHENTIC_HERO_ACTIONS

namespace {

int is_class(CHero *hero, CDemonActorType *class_info)
{
    return core_actor_cpp_castToClassHash_FUN_0040c790
               (&(hero->base).base, class_info->name_hash) != (CDemonActor *)0x0;
}

} // namespace

extern "C" void nocturne_hero_frame(CHero *hero, float delta_time)
{
    int is_moloch;

    if (hero == (CHero *)0x0) {
        return;
    }
    is_moloch = is_class(hero, &g_CMolochClassInfo);

    // Moloch cannot be brought below MOLOCH_MIN_HIT_POINTS.
    if (is_moloch == 0) {
        nocturne_hero_check_death(hero);
    }
    nocturne_hero_items_process(hero);
    // CSvetlana::process calls processSmoking itself; Moloch does not breathe.
    if ((is_moloch == 0) && (is_class(hero, &g_CSvetlanaClassInfo) == 0)) {
        nocturne_hero_breath(hero, delta_time);
    }
    if (is_moloch != 0) {
        nocturne_moloch_regenerate((CMoloch *)hero, delta_time);
    }
}

#endif
