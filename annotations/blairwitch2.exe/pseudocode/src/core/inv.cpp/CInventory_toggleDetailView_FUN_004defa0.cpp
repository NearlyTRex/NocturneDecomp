// Name: core_inv.cpp_CInventory_toggleDetailView_FUN_004defa0
// Address: 004defa0
// Address Range: [[004defa0, 004df003]]
// Convention: __cdecl
// Signature: void __cdecl core_inv_cpp_CInventory_toggleDetailView_FUN_004defa0(CInventory *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_inv_cpp_CInventory_toggleDetailView_FUN_004defa0(CInventory *this_ptr)

{
  if (*(int *)(this_ptr + 4) == *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4)) {
    *(uint *)(this_ptr + 0x454) = (uint)(*(int *)(this_ptr + 0x454) == 0);
    if (0.0 < *(float *)(this_ptr + 0x344)) {
      core_inv_cpp_CInventory_resetItemSwitchTimers_FUN_004dd2c0(this_ptr);
    }
    if (0.0 < *(float *)(this_ptr + 0x340)) {
      core_inv_cpp_CInventory_resetWeaponSwitchTimers_FUN_004dd270(this_ptr,0);
      return;
    }
  }
  return;
}
