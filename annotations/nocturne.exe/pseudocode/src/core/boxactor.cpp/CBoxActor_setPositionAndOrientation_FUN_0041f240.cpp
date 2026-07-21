// Name: core_boxactor.cpp_CBoxActor_setPositionAndOrientation_FUN_0041f240
// Address: 0041f240
// Address Range: [[0041f240, 0041f2c2]]
// Convention: unknown
// Signature: void core_boxactor_cpp_CBoxActor_setPositionAndOrientation_FUN_0041f240(int param_1,undefined4 *param_2,undefined4 *param_3)

#include "nocturne.h"

void core_boxactor_cpp_CBoxActor_setPositionAndOrientation_FUN_0041f240(int param_1,uint *param_2,uint *param_3)

{
  *(uint *)(param_1 + 0x20) = *param_2;
  *(uint *)(param_1 + 0x24) = param_2[1];
  *(uint *)(param_1 + 0x28) = param_2[2];
  if ((uint *)(param_1 + 0x30) != param_3) {
    *(uint *)(param_1 + 0x30) = *param_3;
    *(uint *)(param_1 + 0x34) = param_3[1];
    *(uint *)(param_1 + 0x38) = param_3[2];
  }
  core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_0040a000(param_1);
  if ((uint *)(param_1 + 0x38c) != param_2) {
    *(uint *)(param_1 + 0x38c) = *param_2;
    *(uint *)(param_1 + 0x390) = param_2[1];
    *(uint *)(param_1 + 0x394) = param_2[2];
  }
  if ((uint *)(param_1 + 0x398) != param_3) {
    *(uint *)(param_1 + 0x398) = *param_3;
    *(uint *)(param_1 + 0x39c) = param_3[1];
    *(uint *)(param_1 + 0x3a0) = param_3[2];
  }
  core_boxactor_cpp_CBoxActor_setupPhysicsBox_FUN_0041e4d0(param_1);
  return;
}
