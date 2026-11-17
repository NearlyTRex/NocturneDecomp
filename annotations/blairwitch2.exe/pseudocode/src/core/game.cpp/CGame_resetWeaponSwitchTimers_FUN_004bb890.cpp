// Name: core_game.cpp_CGame_resetWeaponSwitchTimers_FUN_004bb890
// Address: 004bb890
// Address Range: [[004bb890, 004bb8ac]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_resetWeaponSwitchTimers_FUN_004bb890(CGame *this_ptr)

#include "nocturne.h"

void __cdecl core_game_cpp_CGame_resetWeaponSwitchTimers_FUN_004bb890(CGame *this_ptr)

{
  core_inv_cpp_CInventory_resetWeaponSwitchTimers_FUN_004dd270
            (g_CHero_PTR_ARRAY_01cedee4[g_INT_01cedef4]->inventories,0);
  return;
}
