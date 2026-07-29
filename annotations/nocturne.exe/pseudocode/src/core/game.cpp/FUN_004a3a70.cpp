// Name: core_game.cpp_FUN_004a3a70
// Address: 004a3a70
// Address Range: [[004a3a70, 004a3a8c]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_FUN_004a3a70(CGame *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_game_cpp_FUN_004a3a70(CGame *this_ptr)

{
  core_inv_cpp_CInventory_resetWeaponSwitchTimers_FUN_004c1d20
            ((CInventory *)(*(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8) + 0x1f5a0),0);
  return;
}
