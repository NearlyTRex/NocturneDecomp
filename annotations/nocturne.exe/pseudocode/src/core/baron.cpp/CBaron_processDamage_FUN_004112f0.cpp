// Name: core_baron.cpp_CBaron_processDamage_FUN_004112f0
// Address: 004112f0
// Address Range: [[004112f0, 0041130f]]
// Convention: unknown
// Signature: undefined4 core_baron_cpp_CBaron_processDamage_FUN_004112f0(undefined4 param_1,int param_2)

#include "nocturne.h"

uint core_baron_cpp_CBaron_processDamage_FUN_004112f0(uint param_1,int param_2)

{
  uint uVar1;
  
  *(uint *)(param_2 + 4) = 0;
  uVar1 = core_charactr_cpp_CCharacter_processDamage_FUN_00428510(param_1,param_2);
  return uVar1;
}
