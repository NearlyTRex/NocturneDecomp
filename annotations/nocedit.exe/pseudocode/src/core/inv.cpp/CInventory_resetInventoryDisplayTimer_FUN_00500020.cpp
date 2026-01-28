// Name: core_inv.cpp_CInventory_resetInventoryDisplayTimer_FUN_00500020
// Address: 00500020
// Address Range: [[00500020, 00500041]]
// Convention: __cdecl
// Signature: void __cdecl core_inv_cpp_CInventory_resetInventoryDisplayTimer_FUN_00500020(CInventory *this_ptr)

#include "nocturne.h"

void __cdecl core_inv_cpp_CInventory_resetInventoryDisplayTimer_FUN_00500020(CInventory *this_ptr)

{
  if ((CHero *)this_ptr->owner != g_HeroActors[g_LocalHeroIndex]) {
    return;
  }
  this_ptr->inventory_display_timer = 5.0;
  return;
}
