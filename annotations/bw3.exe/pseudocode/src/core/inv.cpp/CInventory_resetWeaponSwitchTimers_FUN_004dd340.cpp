// Name: core_inv.cpp_CInventory_resetWeaponSwitchTimers_FUN_004dd340
// Address: 004dd340
// Address Range: [[004dd340, 004dd380]]
// Convention: __cdecl
// Signature: void __cdecl core_inv_cpp_CInventory_resetWeaponSwitchTimers_FUN_004dd340(CInventory *this_ptr,int reset_both)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_inv_cpp_CInventory_resetWeaponSwitchTimers_FUN_004dd340(CInventory *this_ptr,int reset_both)

{
  if (*(int *)(this_ptr + 4) == *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04)) {
    *(uint *)(this_ptr + 0x344) = 0;
    *(uint *)(this_ptr + 0x340) = 0x40a00000;
    if (reset_both != 0) {
      *(uint *)(this_ptr + 0x350) = 0x40a00000;
      return;
    }
  }
  return;
}
