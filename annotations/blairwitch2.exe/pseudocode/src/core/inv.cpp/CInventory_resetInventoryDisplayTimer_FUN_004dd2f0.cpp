// Name: core_inv.cpp_CInventory_resetInventoryDisplayTimer_FUN_004dd2f0
// Address: 004dd2f0
// Address Range: [[004dd2f0, 004dd311]]
// Convention: __cdecl
// Signature: void __cdecl core_inv_cpp_CInventory_resetInventoryDisplayTimer_FUN_004dd2f0(CInventory *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_inv_cpp_CInventory_resetInventoryDisplayTimer_FUN_004dd2f0(CInventory *this_ptr)

{
  if (this_ptr->owner != *(CDemonActor **)(_DAT_01cedef4 * 4 + 0x1cedee4)) {
    return;
  }
  this_ptr->inventory_display_timer = 5.0;
  return;
}
