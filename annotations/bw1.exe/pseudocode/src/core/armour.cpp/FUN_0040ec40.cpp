// Name: core_armour.cpp_FUN_0040ec40
// Address: 0040ec40
// Address Range: [[0040ec40, 0040ec83]]
// Convention: unknown
// Signature: void core_armour_cpp_FUN_0040ec40(CCharacter *param_1,undefined4 param_2)

#include "nocturne.h"

void core_armour_cpp_FUN_0040ec40(CCharacter *param_1,uint param_2)

{
  if (*(int *)&param_1->field_0x27b0 != 0) {
    return;
  }
  core_charactr_cpp_CCharacter_dismember_FUN_00430d90(param_1,(CVector3f *)0x0,-1.0,1);
  (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))(param_1,"armour.wav");
  core_enemy_cpp_FUN_004a0f00(param_1,param_2);
  return;
}
