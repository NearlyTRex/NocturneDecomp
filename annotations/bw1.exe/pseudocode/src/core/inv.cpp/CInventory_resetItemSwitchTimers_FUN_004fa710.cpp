// Name: core_inv.cpp_CInventory_resetItemSwitchTimers_FUN_004fa710
// Address: 004fa710
// Address Range: [[004fa710, 004fa73b]]
// Convention: __cdecl
// Signature: void __cdecl core_inv_cpp_CInventory_resetItemSwitchTimers_FUN_004fa710(CInventory *this_ptr)

#include "nocturne.h"

void __cdecl core_inv_cpp_CInventory_resetItemSwitchTimers_FUN_004fa710(CInventory *this_ptr)

{
  if ((CHero *)this_ptr->owner != g_CHero_PTR_ARRAY_01d06aa4[g_INT_01d06ab4]) {
    return;
  }
  this_ptr->weapon_highlight_timer = 0.0;
  this_ptr->item_highlight_timer = 5.0;
  return;
}
