// Name: core_charactr.cpp_CCharacter_setPositionAndOrientation_FUN_004246e0
// Address: 004246e0
// Address Range: [[004246e0, 0042472d]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_setPositionAndOrientation_FUN_004246e0(int param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_charactr_cpp_CCharacter_setPositionAndOrientation_FUN_004246e0(int param_1,uint param_2,uint param_3)

{
  uint uVar1;
  
  (**(code **)(*(int *)(param_1 + 0x14c) + 0xf0))(param_1);
  core_actor_cpp_CDemonActor_setPositionAndOrientation_FUN_0040b150(param_1,param_2,param_3);
  uVar1 = _DAT_0059b094;
  *(uint *)(param_1 + 0x2428) = 0;
  *(uint *)(param_1 + 0x2424) = *(uint *)(param_1 + 0x2428);
  *(uint *)(param_1 + 0x2420) = *(uint *)(param_1 + 0x2424);
  *(uint *)(param_1 + 0x240c) = uVar1;
  return;
}
