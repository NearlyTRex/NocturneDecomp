// Name: core_inv.cpp_CInventory_resetItemSwitchTimers_FUN_004fa710
// Address: 004fa710
// Address Range: [[004fa710, 004fa73b]]
// Convention: __cdecl
// Signature: void __cdecl core_inv_cpp_CInventory_resetItemSwitchTimers_FUN_004fa710(CInventory *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_inv_cpp_CInventory_resetItemSwitchTimers_FUN_004fa710(CInventory *this_ptr)

{
  if (this_ptr->owner != *(CDemonActor **)(_DAT_01d06ab4 * 4 + 0x1d06aa4)) {
    return;
  }
  this_ptr->weapon_highlight_timer = 0.0;
  this_ptr->item_highlight_timer = 5.0;
  return;
}
