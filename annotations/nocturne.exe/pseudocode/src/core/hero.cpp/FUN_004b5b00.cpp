// Name: core_hero.cpp_FUN_004b5b00
// Address: 004b5b00
// Address Range: [[004b5b00, 004b5b6e]]
// Convention: unknown
// Signature: int core_hero_cpp_FUN_004b5b00(CHero *param_1)

#include "nocturne.h"

int core_hero_cpp_FUN_004b5b00(CHero *param_1)

{
  CDemonActor *actor_ptr;
  int iVar1;
  int unaff_EBP;
  CMatrix3x4f *unaff_ESI;
  
  actor_ptr = (param_1->inventory).selected_item;
  if (actor_ptr == (CDemonActor *)0x0) {
    return 0;
  }
  iVar1 = core_actor_cpp_isOfClass_FUN_0040d7e0(actor_ptr,"CHealthItem");
  if (iVar1 == 0) {
    iVar1 = (*(((param_1->base).base.vtable._uc)->_uc).getCarryObjToBodyXForm)
                      (&param_1->base,unaff_EBP,unaff_ESI);
    if (iVar1 != 0) {
      return 0;
    }
    iVar1 = core_hero_cpp_CHero_findItemUseTarget_FUN_004b5950(param_1);
    if (iVar1 != 0) {
      return 0;
    }
  }
  iVar1 = core_inv_cpp_CInventory_select_FUN_004c1580
                    (&param_1->inventory,(param_1->inventory).selected_item);
  return iVar1;
}
