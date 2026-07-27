// Name: core_hero.cpp_FUN_004b5b00
// Address: 004b5b00
// Address Range: [[004b5b00, 004b5b6e]]
// Convention: unknown
// Signature: undefined4 core_hero_cpp_FUN_004b5b00(int param_1)

#include "nocturne.h"

uint core_hero_cpp_FUN_004b5b00(int param_1)

{
  int iVar1;
  uint uVar2;
  
  if (*(int *)(param_1 + 0x1f8d4) == 0) {
    return 0;
  }
  iVar1 = core_actor_cpp_isOfClass_FUN_0040d7e0(*(int *)(param_1 + 0x1f8d4),"CHealthItem");
  if (iVar1 == 0) {
    iVar1 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x140))(param_1);
    if (iVar1 != 0) {
      return 0;
    }
    iVar1 = core_hero_cpp_CHero_findItemUseTarget_FUN_004b5950(param_1);
    if (iVar1 != 0) {
      return 0;
    }
  }
  uVar2 = core_inv_cpp_CInventory_select_FUN_004c1580
                    (param_1 + 0x1f5a0,*(uint *)(param_1 + 0x1f8d4));
  return uVar2;
}
