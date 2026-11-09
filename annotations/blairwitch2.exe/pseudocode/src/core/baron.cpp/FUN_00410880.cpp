// Name: core_baron.cpp_FUN_00410880
// Address: 00410880
// Address Range: [[00410880, 0041089f]]
// Convention: unknown
// Signature: void core_baron_cpp_FUN_00410880(CCharacter *param_1,SDamageInfo *param_2)

#include "nocturne.h"

void core_baron_cpp_FUN_00410880(CCharacter *param_1,SDamageInfo *param_2)

{
  if (*(int *)&param_1->field_0x281c != 0) {
    return;
  }
  *(uint *)(param_2 + 4) = 0;
  core_charactr_cpp_CCharacter_processDamage_FUN_00427fb0(param_1,param_2);
  return;
}
