// Name: core_inv.cpp_CInventory_loadItems_FUN_004c14d0
// Address: 004c14d0
// Address Range: [[004c14d0, 004c150f]]
// Convention: __cdecl
// Signature: void __cdecl core_inv_cpp_CInventory_loadItems_FUN_004c14d0(CInventory *this_ptr)

#include "nocturne.h"

void __cdecl core_inv_cpp_CInventory_loadItems_FUN_004c14d0(CInventory *this_ptr)

{
  int iVar1;
  CInventory *pCVar2;
  
  iVar1 = 0;
  pCVar2 = this_ptr;
  if (0 < this_ptr->item_count) {
    do {
      iVar1 = iVar1 + 1;
      core_mission_cpp_FUN_004d8cd0(g_CDemonMission_PTR_005baf90,pCVar2->items[0]);
      pCVar2 = (CInventory *)&pCVar2->owner;
    } while (iVar1 < this_ptr->item_count);
  }
  this_ptr->preserve_items = 0;
  return;
}
