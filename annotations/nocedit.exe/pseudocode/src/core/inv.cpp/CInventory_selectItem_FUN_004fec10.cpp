// Name: core_inv.cpp_CInventory_selectItem_FUN_004fec10
// Address: 004fec10
// Address Range: [[004fec10, 004fed04]]
// Convention: __cdecl
// Signature: void core_inv.cpp_CInventory_selectItem_FUN_004fec10(CInventory * this_ptr, int direction)

#include "nocturne.h"

void __cdecl core_inv_cpp_CInventory_selectItem_FUN_004fec10(CInventory *this_ptr,int direction)

{
  int iVar1;
  int iVar2;
  CInventory *pCVar3;
  int iVar4;
  
  core_inv_cpp_CInventory_resetItemSwitchTimers_FUN_004ffff0(this_ptr);
  if (this_ptr->selected_item == (CDemonActor *)0x0) {
    iVar4 = 0;
    pCVar3 = this_ptr;
    if (0 < this_ptr->item_count) {
      do {
        iVar1 = core_actor_cpp_isOfClass_FUN_0040c6d0(pCVar3->items[0],"CWeapon");
        if ((iVar1 == 0) &&
           (iVar1 = core_actor_cpp_isOfClass_FUN_0040c6d0(pCVar3->items[0],"CAmmo"),
           iVar1 == 0)) {
          this_ptr->selected_item = pCVar3->items[0];
          return;
        }
        iVar4 = iVar4 + 1;
        pCVar3 = (CInventory *)&pCVar3->owner;
      } while (iVar4 < this_ptr->item_count);
    }
    return;
  }
  iVar4 = 0;
  pCVar3 = this_ptr;
  iVar1 = iVar4;
  if (0 < this_ptr->item_count) {
    do {
      iVar1 = iVar4;
      if (this_ptr->selected_item == pCVar3->items[0]) break;
      iVar4 = iVar4 + 1;
      pCVar3 = (CInventory *)&pCVar3->owner;
      iVar1 = iVar4;
    } while (iVar4 < this_ptr->item_count);
  }
  while( true ) {
    iVar4 = iVar4 + direction;
    if (iVar4 < this_ptr->item_count) {
      if (iVar4 < 0) {
        iVar4 = this_ptr->item_count + -1;
      }
    }
    else {
      iVar4 = 0;
    }
    iVar2 = core_actor_cpp_isOfClass_FUN_0040c6d0(this_ptr->items[iVar4],"CWeapon");
    if ((iVar2 == 0) &&
       (iVar2 = core_actor_cpp_isOfClass_FUN_0040c6d0(this_ptr->items[iVar4],"CAmmo"),
       iVar2 == 0)) break;
    if (iVar4 == iVar1) {
      return;
    }
  }
  this_ptr->selected_item = this_ptr->items[iVar4];
  return;
}
