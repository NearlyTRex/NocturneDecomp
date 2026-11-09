// Name: core_melee.cpp_FUN_005098d0
// Address: 005098d0
// Address Range: [[005098d0, 00509961]]
// Convention: unknown
// Signature: void core_melee_cpp_FUN_005098d0(CMelee *param_1,int param_2,undefined4 param_3,int param_4)

#include "nocturne.h"

void core_melee_cpp_FUN_005098d0(CMelee *param_1,int param_2,uint param_3,int param_4)

{
  int iVar1;
  
  iVar1 = core_actor_cpp_castToClassHash_FUN_0040c600(param_4,g_CCharacterClassInfo.name_hash);
  if (iVar1 == 0) {
    if (param_4 == 0) {
      return;
    }
    (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))(param_1,&param_1->field_0x668);
    return;
  }
  core_melee_cpp_CMelee_initBloodSpurtEffects_FUN_00509970(param_1,0x14,*(int *)(iVar1 + 0x27a0));
  if ((param_2 != 1) && (param_2 != 8)) {
    (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))(param_1,&param_1->field_0x604);
    return;
  }
  (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))(param_1,&param_1->field_0x5a0);
  return;
}
