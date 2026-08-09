// Name: core_inv.cpp_CInventory_resetItemSwitchTimers_FUN_004c1d70
// Address: 004c1d70
// Address Range: [[004c1d70, 004c1d9b]]
// Convention: __cdecl
// Signature: void __cdecl core_inv_cpp_CInventory_resetItemSwitchTimers_FUN_004c1d70(CInventory *this_ptr)

#include "nocturne.h"

void __cdecl core_inv_cpp_CInventory_resetItemSwitchTimers_FUN_004c1d70(CInventory *this_ptr)

{
  if ((CHero *)this_ptr->owner != g_HeroActors[g_LocalHeroIndex]) {
    return;
  }
  this_ptr->weapon_highlight_timer = 0.0;
  this_ptr->item_highlight_timer = 5.0;
  return;
}
