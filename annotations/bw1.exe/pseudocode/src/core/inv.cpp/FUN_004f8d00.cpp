// Name: core_inv.cpp_FUN_004f8d00
// Address: 004f8d00
// Address Range: [[004f8d00, 004f8dba]]
// Convention: __cdecl
// Signature: void __cdecl core_inv_cpp_FUN_004f8d00(CInventory *this_ptr,CDemonActor *item_to_remove,int should_delete_actor)

#include "nocturne.h"

void __cdecl core_inv_cpp_FUN_004f8d00(CInventory *this_ptr,CDemonActor *item_to_remove,int should_delete_actor)

{
  CDemonActor *pCVar1;
  int iVar2;
  CInventory *pCVar3;
  int iVar4;
  
  if ((CWeapon *)item_to_remove == this_ptr->selected_weapon) {
    this_ptr->selected_weapon = (CWeapon *)0x0;
  }
  if (item_to_remove == this_ptr->selected_item) {
    this_ptr->selected_item = (CDemonActor *)0x0;
  }
  if ((CLightGun *)item_to_remove == this_ptr->light_gun_ptr) {
    this_ptr->light_gun_ptr = (CLightGun *)0x0;
  }
  if ((CGoggles *)item_to_remove == this_ptr->goggles_ptr) {
    this_ptr->goggles_ptr = (CGoggles *)0x0;
  }
  iVar2 = 0;
  pCVar3 = this_ptr;
  if (0 < this_ptr->item_count) {
    do {
      pCVar1 = pCVar3->items[0];
      if (item_to_remove == pCVar1) {
        iVar4 = this_ptr->item_count + -1;
        this_ptr->item_count = iVar4;
        memmove
                  (this_ptr->items + iVar2,this_ptr->items + iVar2 + 1,(iVar4 - iVar2) * 4);
        if (should_delete_actor == 0) {
          return;
        }
        core_actor_cpp_FUN_00408560(pCVar1);
        return;
      }
      iVar2 = iVar2 + 1;
      pCVar3 = (CInventory *)&pCVar3->owner;
    } while (iVar2 < this_ptr->item_count);
  }
  return;
}
