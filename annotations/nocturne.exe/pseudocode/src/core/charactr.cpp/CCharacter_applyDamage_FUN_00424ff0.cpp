// Name: core_charactr.cpp_CCharacter_applyDamage_FUN_00424ff0
// Address: 00424ff0
// Address Range: [[00424ff0, 00425043]]
// Convention: unknown
// Signature: void core_charactr_cpp_CCharacter_applyDamage_FUN_00424ff0(int param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

void core_charactr_cpp_CCharacter_applyDamage_FUN_00424ff0(int param_1,uint param_2,uint param_3)

{
  int iVar1;
  byte auStack_40 [4];
  uint uStack_3c;
  uint uStack_10;
  
  iVar1 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x104))(param_1);
  if (0 < iVar1) {
    return;
  }
  core_charactr_cpp_SDamageInfo_ctor_FUN_00423ed0(auStack_40);
  uStack_10 = param_2;
  uStack_3c = param_3;
  (**(code **)(*(int *)(param_1 + 0x14c) + 0x100))(param_1,auStack_40);
  return;
}
