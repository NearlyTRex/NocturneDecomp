// Name: core_inv.cpp_CInventory_removeItem_FUN_004fea70
// Address: 004fea70
// Address Range: [[004fea70, 004feb06]]
// Convention: __cdecl
// Signature: void core_inv.cpp_CInventory_removeItem_FUN_004fea70(CInventory * this_ptr, CDemonActor * item_to_remove, int should_delete_actor)

#include "nocturne.h"

void __cdecl
core_inv_cpp_CInventory_removeItem_FUN_004fea70
          (CInventory *this_ptr,CDemonActor *item_to_remove,int should_delete_actor)

{
  CDemonActor *actor_ptr;
  int iVar1;
  CInventory *pCVar2;
  int iVar3;
  
  if ((CWeapon *)item_to_remove == this_ptr->selected_weapon) {
    this_ptr->selected_weapon = (CWeapon *)0x0;
  }
  if (item_to_remove == this_ptr->selected_item) {
    this_ptr->selected_item = (CDemonActor *)0x0;
  }
  iVar1 = 0;
  pCVar2 = this_ptr;
  if (0 < this_ptr->item_count) {
    do {
      actor_ptr = pCVar2->items[0];
      if (item_to_remove == actor_ptr) {
        iVar3 = this_ptr->item_count + -1;
        this_ptr->item_count = iVar3;
        crt_string_c_memmove_FUN_005fe5e0
                  (this_ptr->items + iVar1,this_ptr->items + iVar1 + 1,(iVar3 - iVar1) * 4);
        if (should_delete_actor == 0) {
          return;
        }
        core_actor_cpp_deleteActor_FUN_00408820(actor_ptr);
        return;
      }
      iVar1 = iVar1 + 1;
      pCVar2 = (CInventory *)&pCVar2->owner;
    } while (iVar1 < this_ptr->item_count);
  }
  return;
}
