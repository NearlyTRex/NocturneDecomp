// Name: core_inv.cpp_CInventory_resetItemSwitchTimers_FUN_004dd2c0
// Address: 004dd2c0
// Address Range: [[004dd2c0, 004dd2eb]]
// Convention: __cdecl
// Signature: void __cdecl core_inv_cpp_CInventory_resetItemSwitchTimers_FUN_004dd2c0(CInventory *this_ptr)

#include "nocturne.h"

void __cdecl core_inv_cpp_CInventory_resetItemSwitchTimers_FUN_004dd2c0(CInventory *this_ptr)

{
  if ((CHero *)this_ptr->owner != g_CHero_PTR_ARRAY_01cedee4[g_INT_01cedef4]) {
    return;
  }
  this_ptr->weapon_highlight_timer = 0.0;
  this_ptr->item_highlight_timer = 5.0;
  return;
}
