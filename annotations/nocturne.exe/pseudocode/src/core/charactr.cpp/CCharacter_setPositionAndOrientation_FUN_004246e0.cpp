// Name: core_charactr.cpp_CCharacter_setPositionAndOrientation_FUN_004246e0
// Address: 004246e0
// Address Range: [[004246e0, 0042472d]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_setPositionAndOrientation_FUN_004246e0(int param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_setPositionAndOrientation_FUN_004246e0(int param_1,uint param_2,uint param_3)

{
  float fVar1;
  
  (**(code **)(*(int *)(param_1 + 0x14c) + 0xf0))(param_1);
  core_actor_cpp_CDemonActor_setPositionAndOrientation_FUN_0040b150(param_1,param_2,param_3);
  fVar1 = 9999.0f;
  *(uint *)(param_1 + 0x2428) = 0;
  *(uint *)(param_1 + 0x2424) = *(uint *)(param_1 + 0x2428);
  *(uint *)(param_1 + 0x2420) = *(uint *)(param_1 + 0x2424);
  *(float *)(param_1 + 0x240c) = fVar1;
  return;
}
