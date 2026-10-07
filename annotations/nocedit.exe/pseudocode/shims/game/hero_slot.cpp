// =============================================================================
// WHICH HEROES ARE PLAYERS — implementation
// =============================================================================

#include "game/hero_slot.h"
#include "nocturne.h"

static_assert(NOCTURNE_HERO_SLOTS == (int)(sizeof(g_HeroActors) / sizeof(g_HeroActors[0])),
              "NOCTURNE_HERO_SLOTS must match g_HeroActors");

extern "C" CHero *nocturne_hero_local(void)
{
    if ((g_LocalHeroIndex < 0) || (NOCTURNE_HERO_SLOTS <= g_LocalHeroIndex)) {
        return (CHero *)0x0;
    }
    return g_HeroActors[g_LocalHeroIndex];
}

extern "C" int nocturne_hero_slot(const void *actor)
{
    int i;

    if (actor == (const void *)0x0) {
        return -1;
    }
    for (i = 0; (i < NOCTURNE_HERO_SLOTS) && (i < g_HeroCount); i++) {
        if ((const void *)g_HeroActors[i] == actor) {
            return i;
        }
    }
    return -1;
}

extern "C" int nocturne_hero_is_player(const void *actor)
{
    return (nocturne_hero_slot(actor) >= 0) ? 1 : 0;
}
