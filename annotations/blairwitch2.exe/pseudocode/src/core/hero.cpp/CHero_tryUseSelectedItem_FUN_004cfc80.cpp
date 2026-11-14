// Name: core_hero.cpp_CHero_tryUseSelectedItem_FUN_004cfc80
// Address: 004cfc80
// Address Range: [[004cfc80, 004cfd5b]]
// Convention: __cdecl
// Signature: int __cdecl core_hero_cpp_CHero_tryUseSelectedItem_FUN_004cfc80(CHero *this_ptr)

#include "nocturne.h"

int __cdecl core_hero_cpp_CHero_tryUseSelectedItem_FUN_004cfc80(CHero *this_ptr)

{
  CDemonActor *actor_ptr;
  int iVar1;
  
  actor_ptr = this_ptr->inventories[0].selected_items[this_ptr->inventories[0].current_group];
  if (actor_ptr == (CDemonActor *)0x0) {
    return 0;
  }
  iVar1 = core_actor_cpp_isOfClass_FUN_0040c840(actor_ptr,"N@CHealthItem" + 2);
  if (iVar1 == 0) {
    iVar1 = core_actor_cpp_isOfClass_FUN_0040c840
                      (this_ptr->inventories[0].selected_items
                       [this_ptr->inventories[0].current_group],"CAmmo");
    if (iVar1 == 0) {
      iVar1 = core_actor_cpp_isOfClass_FUN_0040c840
                        (this_ptr->inventories[0].selected_items
                         [this_ptr->inventories[0].current_group],"CBoxActor");
      if (iVar1 == 0) {
        iVar1 = (*(((this_ptr->base).base.vtable._uh)->_uh).isWeaponDrawn)(this_ptr);
        if (iVar1 != 0) {
          return 0;
        }
        iVar1 = core_hero_cpp_CHero_findItemUseTarget_FUN_004cfb00(this_ptr);
        if (iVar1 != 0) {
          return 0;
        }
        iVar1 = core_inv_cpp_CInventory_select_FUN_004dc8c0
                          (this_ptr->inventories,
                           this_ptr->inventories[0].selected_items
                           [this_ptr->inventories[0].current_group]);
        return iVar1;
      }
    }
  }
  iVar1 = core_inv_cpp_CInventory_select_FUN_004dc8c0
                    (this_ptr->inventories,
                     this_ptr->inventories[0].selected_items[this_ptr->inventories[0].current_group]
                    );
  return iVar1;
}
