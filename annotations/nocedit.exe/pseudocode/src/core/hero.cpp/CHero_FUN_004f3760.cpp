// Name: core_hero.cpp_CHero_FUN_004f3760
// Address: 004f3760
// Address Range: [[004f3760, 004f37ce]]
// Convention: __cdecl
// Signature: int __cdecl core_hero_cpp_CHero_FUN_004f3760(CHero *this_ptr)

#include "nocturne.h"

int __cdecl core_hero_cpp_CHero_FUN_004f3760(CHero *this_ptr)

{
  CDemonActor *actor_ptr;
  int iVar1;
  
  actor_ptr = (this_ptr->inventory).selected_item;
  if (actor_ptr == (CDemonActor *)0x0) {
    return 0;
  }
  iVar1 = core_actor_cpp_isOfClass_FUN_0040c6d0(actor_ptr,"CHealthItem");
  if (iVar1 == 0) {
    iVar1 = (*(((this_ptr->base).base.vtable._ue)->_ue).randomize)((CEnemy *)this_ptr);
    if (iVar1 != 0) {
      return 0;
    }
    iVar1 = core_hero_cpp_CHero_FUN_004f35b0(this_ptr);
    if (iVar1 != 0) {
      return 0;
    }
  }
  iVar1 = core_inv_cpp_CInventory_select_FUN_004ff800
                    (&this_ptr->inventory,(this_ptr->inventory).selected_item);
  return iVar1;
}
