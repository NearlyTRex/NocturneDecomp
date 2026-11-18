// Name: core_inv.cpp_CInventory_removeItem_FUN_004db8e0
// Address: 004db8e0
// Address Range: [[004db8e0, 004db9c4]]
// Convention: __cdecl
// Signature: void __cdecl core_inv_cpp_CInventory_removeItem_FUN_004db8e0(CInventory *this_ptr,CDemonActor *item_to_remove,int should_delete_actor)

#include "nocturne.h"

void __cdecl core_inv_cpp_CInventory_removeItem_FUN_004db8e0(CInventory *this_ptr,CDemonActor *item_to_remove,int should_delete_actor)

{
  CInventory *pCVar1;
  int iVar2;
  CDemonActor **ppCVar3;
  int iVar4;
  
  engine_console_cpp_CConsole_printf_FUN_00436710(g_CConsolePtr,"Deleting: %s\n");
  if ((CWeapon *)item_to_remove == this_ptr->selected_weapons[this_ptr->current_group]) {
    this_ptr->selected_weapons[this_ptr->current_group] = (CWeapon *)0x0;
  }
  if (item_to_remove == this_ptr->selected_items[this_ptr->current_group]) {
    this_ptr->selected_items[this_ptr->current_group] = (CDemonActor *)0x0;
  }
  iVar4 = 0;
  pCVar1 = this_ptr;
  if (0 < this_ptr->item_count) {
    do {
      if (item_to_remove == pCVar1->items[0]) {
        iVar2 = this_ptr->item_count + -1;
        this_ptr->item_count = iVar2;
        memmove
                  (this_ptr->items + iVar4,this_ptr->items + iVar4 + 1,(iVar2 - iVar4) * 4);
        if (iVar4 < this_ptr->item_count) {
          ppCVar3 = this_ptr->items + iVar4 + -5;
          do {
            ppCVar3[0x11b] = ppCVar3[0x11c];
            iVar4 = iVar4 + 1;
            ppCVar3 = ppCVar3 + 1;
          } while (iVar4 < this_ptr->item_count);
        }
        if (should_delete_actor == 0) {
          return;
        }
        core_actor_cpp_deleteActor_FUN_00408730(item_to_remove);
        return;
      }
      iVar4 = iVar4 + 1;
      pCVar1 = (CInventory *)&pCVar1->owner;
    } while (iVar4 < this_ptr->item_count);
  }
  return;
}
