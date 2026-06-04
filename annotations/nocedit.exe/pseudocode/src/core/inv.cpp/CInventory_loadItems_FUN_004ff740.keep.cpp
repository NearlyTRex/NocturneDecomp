// Name: core_inv.cpp_CInventory_loadItems_FUN_004ff740
// Address: 004ff740
// MANUAL RECONSTRUCTION
// Address Range: [[004ff740, 004ff77f]]
// Convention: __cdecl
// Signature: void __cdecl core_inv_cpp_CInventory_loadItems_FUN_004ff740(CInventory *this_ptr)

#include "nocturne.h"

void __cdecl core_inv_cpp_CInventory_loadItems_FUN_004ff740(CInventory *this_ptr)

{
  int iVar1;

  iVar1 = 0;
  if (0 < this_ptr->item_count) {
    do {
      core_mission_cpp_CDemonMission_removeActorFromList_FUN_00523be0
                (g_CDemonMissionPtr,this_ptr->items[iVar1]);
      iVar1 = iVar1 + 1;
    } while (iVar1 < this_ptr->item_count);
  }
  this_ptr->preserve_items = 0;
  return;
}
