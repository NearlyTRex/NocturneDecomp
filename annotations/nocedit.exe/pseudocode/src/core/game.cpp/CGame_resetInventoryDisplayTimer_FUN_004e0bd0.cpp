// Name: core_game.cpp_CGame_resetInventoryDisplayTimer_FUN_004e0bd0
// Address: 004e0bd0
// Address Range: [[004e0bd0, 004e0bea]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_resetInventoryDisplayTimer_FUN_004e0bd0(CGame *this_ptr)

#include "nocturne.h"

void __cdecl core_game_cpp_CGame_resetInventoryDisplayTimer_FUN_004e0bd0(CGame *this_ptr)

{
  core_inv_cpp_CInventory_resetInventoryDisplayTimer_FUN_00500020
            (&g_HeroActors[g_LocalHeroIndex]->inventory);
  return;
}
