// Name: core_game.cpp_CGame_resetWeaponSwitchTimers_FUN_004d6300
// Address: 004d6300
// Address Range: [[004d6300, 004d631c]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_resetWeaponSwitchTimers_FUN_004d6300(CGame *this_ptr)

#include "nocturne.h"

void __cdecl core_game_cpp_CGame_resetWeaponSwitchTimers_FUN_004d6300(CGame *this_ptr)

{
  core_inv_cpp_CInventory_resetWeaponSwitchTimers_FUN_004fa6c0
            (&g_CHero_PTR_ARRAY_01d06aa4[g_INT_01d06ab4]->inventory,0);
  return;
}
