// Name: core_baron.cpp_CBaron_processDamage_FUN_004112f0
// Address: 004112f0
// Address Range: [[004112f0, 0041130f]]
// Convention: unknown
// Signature: void core_baron_cpp_CBaron_processDamage_FUN_004112f0(CCharacter *param_1,SDamageInfo *param_2)

#include "nocturne.h"

void core_baron_cpp_CBaron_processDamage_FUN_004112f0(CCharacter *param_1,SDamageInfo *param_2)

{
  param_2->damage_amount = 0.0;
  core_charactr_cpp_CCharacter_processDamage_FUN_00428510(param_1,param_2);
  return;
}
