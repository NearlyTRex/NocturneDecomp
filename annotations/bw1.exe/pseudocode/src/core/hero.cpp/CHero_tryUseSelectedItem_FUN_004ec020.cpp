// Name: core_hero.cpp_CHero_tryUseSelectedItem_FUN_004ec020
// Address: 004ec020
// Address Range: [[004ec020, 004ec08e]]
// Convention: __cdecl
// Signature: int __cdecl core_hero_cpp_CHero_tryUseSelectedItem_FUN_004ec020(CHero *this_ptr)

#include "nocturne.h"

int __cdecl core_hero_cpp_CHero_tryUseSelectedItem_FUN_004ec020(CHero *this_ptr)

{
  CDemonActor *actor_ptr;
  int iVar1;
  
  actor_ptr = (this_ptr->inventory).selected_item;
  if (actor_ptr == (CDemonActor *)0x0) {
    return 0;
  }
  iVar1 = core_actor_cpp_isOfClass_FUN_0040c550(actor_ptr,"CHealthItem");
  if (iVar1 == 0) {
    iVar1 = (*(((this_ptr->base).base.vtable._uh)->_uh).isWeaponDrawn)(this_ptr);
    if (iVar1 != 0) {
      return 0;
    }
    iVar1 = core_hero_cpp_CHero_findItemUseTarget_FUN_004ebeb0(this_ptr);
    if (iVar1 != 0) {
      return 0;
    }
  }
  iVar1 = core_inv_cpp_CInventory_select_FUN_004f9bd0
                    (&this_ptr->inventory,(this_ptr->inventory).selected_item);
  return iVar1;
}
