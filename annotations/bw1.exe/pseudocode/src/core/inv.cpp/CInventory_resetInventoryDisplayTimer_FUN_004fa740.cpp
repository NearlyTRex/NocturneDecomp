// Name: core_inv.cpp_CInventory_resetInventoryDisplayTimer_FUN_004fa740
// Address: 004fa740
// Address Range: [[004fa740, 004fa761]]
// Convention: __cdecl
// Signature: void __cdecl core_inv_cpp_CInventory_resetInventoryDisplayTimer_FUN_004fa740(CInventory *this_ptr)

#include "nocturne.h"

void __cdecl core_inv_cpp_CInventory_resetInventoryDisplayTimer_FUN_004fa740(CInventory *this_ptr)

{
  if ((CHero *)this_ptr->owner != g_CHero_PTR_ARRAY_01d06aa4[g_INT_01d06ab4]) {
    return;
  }
  this_ptr->inventory_display_timer = 5.0;
  return;
}
