// Name: core_hero.cpp_FUN_004cfc80
// Address: 004cfc80
// Address Range: [[004cfc80, 004cfd5b]]
// Convention: unknown
// Signature: undefined4 core_hero_cpp_FUN_004cfc80(CHero *param_1)

#include "nocturne.h"

uint core_hero_cpp_FUN_004cfc80(CHero *param_1)

{
  CDemonActor *actor_ptr;
  int iVar1;
  uint uVar2;
  
  actor_ptr = param_1->inventories[0].selected_items[param_1->inventories[0].current_group];
  if (actor_ptr == (CDemonActor *)0x0) {
    return 0;
  }
  iVar1 = core_actor_cpp_isOfClass_FUN_0040c840(actor_ptr,"N@CHealthItem" + 2);
  if (iVar1 == 0) {
    iVar1 = core_actor_cpp_isOfClass_FUN_0040c840
                      (param_1->inventories[0].selected_items[param_1->inventories[0].current_group]
                       ,"CAmmo");
    if (iVar1 == 0) {
      iVar1 = core_actor_cpp_isOfClass_FUN_0040c840
                        (param_1->inventories[0].selected_items
                         [param_1->inventories[0].current_group],"CBoxActor");
      if (iVar1 == 0) {
        iVar1 = (*(((param_1->base).base.vtable._uh)->_uh).isWeaponDrawn)(param_1);
        if (iVar1 != 0) {
          return 0;
        }
        iVar1 = core_hero_cpp_CHero_findItemUseTarget_FUN_004cfb00(param_1);
        if (iVar1 != 0) {
          return 0;
        }
        uVar2 = core_inv_cpp_FUN_004dc8c0
                          (param_1->inventories,
                           param_1->inventories[0].selected_items
                           [param_1->inventories[0].current_group]);
        return uVar2;
      }
    }
  }
  uVar2 = core_inv_cpp_FUN_004dc8c0
                    (param_1->inventories,
                     param_1->inventories[0].selected_items[param_1->inventories[0].current_group]);
  return uVar2;
}
