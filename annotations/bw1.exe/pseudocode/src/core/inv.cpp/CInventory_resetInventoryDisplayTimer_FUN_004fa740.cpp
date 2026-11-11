// Name: core_inv.cpp_CInventory_resetInventoryDisplayTimer_FUN_004fa740
// Address: 004fa740
// Address Range: [[004fa740, 004fa761]]
// Convention: __cdecl
// Signature: void __cdecl core_inv_cpp_CInventory_resetInventoryDisplayTimer_FUN_004fa740(CInventory *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_inv_cpp_CInventory_resetInventoryDisplayTimer_FUN_004fa740(CInventory *this_ptr)

{
  if (this_ptr->owner != *(CDemonActor **)(_DAT_01d06ab4 * 4 + 0x1d06aa4)) {
    return;
  }
  this_ptr->inventory_display_timer = 5.0;
  return;
}
