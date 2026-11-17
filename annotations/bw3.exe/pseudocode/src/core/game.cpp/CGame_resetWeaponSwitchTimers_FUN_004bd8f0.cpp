// Name: core_game.cpp_CGame_resetWeaponSwitchTimers_FUN_004bd8f0
// Address: 004bd8f0
// Address Range: [[004bd8f0, 004bd90c]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_resetWeaponSwitchTimers_FUN_004bd8f0(CGame *this_ptr)

#include "nocturne.h"

void __cdecl core_game_cpp_CGame_resetWeaponSwitchTimers_FUN_004bd8f0(CGame *this_ptr)

{
  core_inv_cpp_CInventory_resetWeaponSwitchTimers_FUN_004dd340
            (&g_CHero_PTR_ARRAY_01d5ba04[g_INT_01d5ba14]->inventory,0);
  return;
}
