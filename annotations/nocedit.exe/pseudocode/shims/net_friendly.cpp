// =============================================================================
// NETPLAY — FRIENDLY FIRE — implementation
// =============================================================================
//
// See net_friendly.h for what this is and why it zeroes rather than returns.

#include "net_friendly.h"
#include "nocturne.h"

namespace {

int actor_is_hero(CDemonActor *actor)
{
    if (actor == (CDemonActor *)0x0) {
        return 0;
    }
    return core_actor_cpp_castToClassHash_FUN_0040c790(actor, g_CHeroClassInfo.name_hash) !=
                   (CDemonActor *)0x0
               ? 1
               : 0;
}

} // namespace

extern "C" int nocturne_net_friendly_fire_block(CCharacter *victim, SDamageInfo *damage_info)
{
#if NOCTURNE_AUTHENTIC_FRIENDLY_FIRE
    (void)victim;
    (void)damage_info;
    return 0;
#else
    if (victim == (CCharacter *)0x0 || damage_info == (SDamageInfo *)0x0) {
        return 0;
    }
    if (g_CNetGamePtr == (CNetGame *)0x0 ||
        g_CNetGamePtr->connection_type == CONNECTION_NONE) {
        return 0;
    }
    if (damage_info->damage_amount <= 0.0f) {
        return 0;
    }
    if (actor_is_hero(&victim->base) == 0) {
        return 0;
    }
    // Either field naming a hero means a hero caused it - a weapon arrives as
    // attacker with the hero as its wielder, a punch as attacker alone.
    if (actor_is_hero(damage_info->attacker) == 0 &&
        actor_is_hero(damage_info->wielder) == 0) {
        return 0;
    }

    damage_info->damage_amount = 0.0f;
    return 1;
#endif
}
