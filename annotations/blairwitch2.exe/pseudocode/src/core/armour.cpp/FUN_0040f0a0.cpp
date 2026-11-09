// Name: core_armour.cpp_FUN_0040f0a0
// Address: 0040f0a0
// Address Range: [[0040f0a0, 0040f0e3]]
// Convention: unknown
// Signature: void core_armour_cpp_FUN_0040f0a0(CCharacter *param_1,undefined4 param_2)

#include "nocturne.h"

void core_armour_cpp_FUN_0040f0a0(CCharacter *param_1,uint param_2)

{
  if (*(int *)&param_1->field_0x281c != 0) {
    return;
  }
  core_charactr_cpp_CCharacter_dismember_FUN_00427360(param_1,(CVector3f *)0x0,-1.0,1);
  (**(code **)(*(int *)&param_1->field_0x2b0 + 0x34))(param_1,"armour.wav");
  core_enemy_cpp_FUN_00488890(param_1,param_2);
  return;
}
