// Name: core_game.cpp_CGame_resetWeaponSwitchTimers_FUN_004bb890
// Address: 004bb890
// Address Range: [[004bb890, 004bb8ac]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_resetWeaponSwitchTimers_FUN_004bb890(CGame *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_game_cpp_CGame_resetWeaponSwitchTimers_FUN_004bb890(CGame *this_ptr)

{
  core_inv_cpp_CInventory_resetWeaponSwitchTimers_FUN_004dd270
            ((CInventory *)(*(int *)(_DAT_01cedef4 * 4 + 0x1cedee4) + 0x2437c),0);
  return;
}
