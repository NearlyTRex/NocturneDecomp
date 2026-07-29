// Name: core_hero.cpp_FUN_004b5b00
// Address: 004b5b00
// Address Range: [[004b5b00, 004b5b6e]]
// Convention: __cdecl
// Signature: int __cdecl core_hero_cpp_FUN_004b5b00(CHero *this_ptr)

#include "nocturne.h"

int __cdecl core_hero_cpp_FUN_004b5b00(CHero *this_ptr)

{
  CDemonActor *actor_ptr;
  int iVar1;
  
  actor_ptr = (this_ptr->inventory).selected_item;
  if (actor_ptr == (CDemonActor *)0x0) {
    return 0;
  }
  iVar1 = core_actor_cpp_isOfClass_FUN_0040d7e0(actor_ptr,"CHealthItem");
  if (iVar1 == 0) {
    iVar1 = (*(((this_ptr->base).base.vtable._uh)->_uh).isWeaponDrawn)(this_ptr);
    if (iVar1 != 0) {
      return 0;
    }
    iVar1 = core_hero_cpp_CHero_findItemUseTarget_FUN_004b5950(this_ptr);
    if (iVar1 != 0) {
      return 0;
    }
  }
  iVar1 = core_inv_cpp_CInventory_select_FUN_004c1580
                    (&this_ptr->inventory,(this_ptr->inventory).selected_item);
  return iVar1;
}
