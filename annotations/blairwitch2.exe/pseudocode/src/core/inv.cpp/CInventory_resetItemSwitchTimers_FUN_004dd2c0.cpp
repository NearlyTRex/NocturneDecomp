// Name: core_inv.cpp_CInventory_resetItemSwitchTimers_FUN_004dd2c0
// Address: 004dd2c0
// Address Range: [[004dd2c0, 004dd2eb]]
// Convention: __cdecl
// Signature: void __cdecl core_inv_cpp_CInventory_resetItemSwitchTimers_FUN_004dd2c0(CInventory *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_inv_cpp_CInventory_resetItemSwitchTimers_FUN_004dd2c0(CInventory *this_ptr)

{
  if (this_ptr->owner != *(CDemonActor **)(_DAT_01cedef4 * 4 + 0x1cedee4)) {
    return;
  }
  this_ptr->weapon_highlight_timer = 0.0;
  this_ptr->item_highlight_timer = 5.0;
  return;
}
