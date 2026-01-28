// Name: core_game.cpp_CGame_FUN_004e0bb0
// Address: 004e0bb0
// Address Range: [[004e0bb0, 004e0bcc]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_FUN_004e0bb0(CGame *this_ptr)

#include "nocturne.h"

void __cdecl core_game_cpp_CGame_FUN_004e0bb0(CGame *this_ptr)

{
  core_inv_cpp_CInventory_resetWeaponSwitchTimers_FUN_004fffa0
            (&g_HeroActors[g_LocalHeroIndex]->inventory,0);
  return;
}
