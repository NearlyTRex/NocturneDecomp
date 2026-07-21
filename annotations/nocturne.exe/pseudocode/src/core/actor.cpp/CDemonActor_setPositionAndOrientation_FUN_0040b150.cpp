// Name: core_actor.cpp_CDemonActor_setPositionAndOrientation_FUN_0040b150
// Address: 0040b150
// Address Range: [[0040b150, 0040b19f]]
// Convention: unknown
// Signature: undefined4 core_actor_cpp_CDemonActor_setPositionAndOrientation_FUN_0040b150(int param_1,undefined4 *param_2,undefined4 *param_3)

#include "nocturne.h"

uint core_actor_cpp_CDemonActor_setPositionAndOrientation_FUN_0040b150(int param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  
  *(uint *)(param_1 + 0x20) = *param_2;
  *(uint *)(param_1 + 0x24) = param_2[1];
  *(uint *)(param_1 + 0x28) = param_2[2];
  if ((uint *)(param_1 + 0x30) != param_3) {
    *(uint *)(param_1 + 0x30) = *param_3;
    *(uint *)(param_1 + 0x34) = param_3[1];
    *(uint *)(param_1 + 0x38) = param_3[2];
  }
  uVar1 = core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_0040a000(param_1);
  return uVar1;
}
