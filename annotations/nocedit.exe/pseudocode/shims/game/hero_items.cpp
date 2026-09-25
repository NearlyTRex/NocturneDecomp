#include "game/hero_items.h"
#include "nocturne.h"

namespace {

int is_player_hero(CHero *hero)
{
    int i;

    for (i = 0; (i < 4) && (i < g_HeroCount); i++) {
        if (g_HeroActors[i] == hero) {
            return 1;
        }
    }
    return 0;
}

// CScat::process and CIcePick::process already call updateInventory.
int ticks_own_inventory(CHero *hero)
{
    return (core_actor_cpp_castToClassHash_FUN_0040c790
                ((CDemonActor *)hero, g_CScatClassInfo.name_hash) != (void *)0x0) ||
           (core_actor_cpp_castToClassHash_FUN_0040c790
                ((CDemonActor *)hero, g_CIcePickClassInfo.name_hash) != (void *)0x0);
}

int auto_use_health(void)
{
#if !NOCTURNE_AUTHENTIC_NETPLAY
    return nocturne_net_cheats_auto_use_health();
#else
    return g_CGamePtr->auto_use_health;
#endif
}

} // namespace

extern "C" void nocturne_hero_items_process(CHero *hero)
{
    CDemonActor *selected;
    EDeathState death_state;

    if ((hero == (CHero *)0x0) || (is_player_hero(hero) == 0)) {
        return;
    }
    if (ticks_own_inventory(hero) == 0) {
        core_inv_cpp_CInventory_updateInventory_FUN_004ffad0(&hero->inventory);
    }

    if ((hero->player_input).action_state.use_item == 0) {
        return;
    }
    selected = (hero->inventory).selected_item;
    if ((selected == (CDemonActor *)0x0) ||
        (core_actor_cpp_isOfClass_FUN_0040c6d0(selected, "CHealthItem") == 0)) {
        return;
    }
    death_state = (*(((hero->base).base.vtable._uc)->_uc).getDeathState)(&hero->base);
    if ((death_state != DEATH_STATE_ALIVE) || ((hero->base).grabbed_by != (CDemonActor *)0x0)) {
        return;
    }
    core_hero_cpp_CHero_tryUseSelectedItem_FUN_004f3760(hero);
    (hero->player_input).action_state.use_item = 0;
}

extern "C" float nocturne_hero_items_damage_taken(CHero *hero, SDamageInfo *damage_info)
{
    if (is_player_hero(hero) == 0) {
        return (hero->base).hit_points;
    }

    // CStranger::processDamage's test. Types up to DAMAGE_TYPE_UNUSED (drown,
    // explode, shatter, chopped, ...) are never rescued.
    if ((auto_use_health() != 0) && (0xb < (int)damage_info->damage_type) &&
        ((hero->base).hit_points <= 0.0f)) {
        (hero->base).hit_points = 0.0f;
        core_inv_cpp_CInventory_autoUseHealthItem_FUN_00501570(&hero->inventory);
    }
    if (0.0f < damage_info->damage_amount) {
        core_inv_cpp_CInventory_resetInventoryDisplayTimer_FUN_00500020(&hero->inventory);
    }
    return (hero->base).hit_points;
}
