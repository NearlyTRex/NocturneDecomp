// Name: core_charactr.cpp_CCharacter_applyDamage_FUN_00424ff0
// Address: 00424ff0
// Address Range: [[00424ff0, 00425043]]
// Convention: unknown
// Signature: void core_charactr_cpp_CCharacter_applyDamage_FUN_00424ff0(int param_1,EDamageType param_2,float param_3)

#include "nocturne.h"

void core_charactr_cpp_CCharacter_applyDamage_FUN_00424ff0(int param_1,EDamageType param_2,float param_3)

{
  int iVar1;
  SDamageInfo SStack_40;
  
  iVar1 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x104))(param_1);
  if (0 < iVar1) {
    return;
  }
  core_charactr_cpp_SDamageInfo_ctor_FUN_00423ed0(&SStack_40);
  SStack_40.damage_type = param_2;
  SStack_40.damage_amount = param_3;
  (**(code **)(*(int *)(param_1 + 0x14c) + 0x100))(param_1,&SStack_40);
  return;
}
