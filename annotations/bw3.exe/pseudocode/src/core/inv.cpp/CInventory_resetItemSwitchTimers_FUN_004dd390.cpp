// Name: core_inv.cpp_CInventory_resetItemSwitchTimers_FUN_004dd390
// Address: 004dd390
// Address Range: [[004dd390, 004dd3bb]]
// Convention: __cdecl
// Signature: void __cdecl core_inv_cpp_CInventory_resetItemSwitchTimers_FUN_004dd390(CInventory *this_ptr)

#include "nocturne.h"

void __cdecl core_inv_cpp_CInventory_resetItemSwitchTimers_FUN_004dd390(CInventory *this_ptr)

{
  if ((CHero *)this_ptr->owner != g_CHero_PTR_ARRAY_01d5ba04[g_INT_01d5ba14]) {
    return;
  }
  this_ptr->weapon_highlight_timer = 0.0;
  this_ptr->item_highlight_timer = 5.0;
  return;
}
