// Name: core_game.cpp_CGame_resetWeaponSwitchTimers_FUN_004a3a70
// Address: 004a3a70
// Address Range: [[004a3a70, 004a3a8c]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_resetWeaponSwitchTimers_FUN_004a3a70(CGame *this_ptr)

#include "nocturne.h"

void __cdecl core_game_cpp_CGame_resetWeaponSwitchTimers_FUN_004a3a70(CGame *this_ptr)

{
  core_inv_cpp_CInventory_resetWeaponSwitchTimers_FUN_004c1d20
            (&g_HeroActors[g_LocalHeroIndex]->inventory,0);
  return;
}
