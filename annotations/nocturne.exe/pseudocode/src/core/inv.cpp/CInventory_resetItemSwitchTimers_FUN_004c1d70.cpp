// Name: core_inv.cpp_CInventory_resetItemSwitchTimers_FUN_004c1d70
// Address: 004c1d70
// Address Range: [[004c1d70, 004c1d9b]]
// Convention: __cdecl
// Signature: void __cdecl core_inv_cpp_CInventory_resetItemSwitchTimers_FUN_004c1d70(CInventory *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_inv_cpp_CInventory_resetItemSwitchTimers_FUN_004c1d70(CInventory *this_ptr)

{
  if (this_ptr->owner != *(CDemonActor **)(_DAT_01cae0e8 * 4 + 0x1cae0d8)) {
    return;
  }
  this_ptr->weapon_highlight_timer = 0.0;
  this_ptr->item_highlight_timer = 5.0;
  return;
}
