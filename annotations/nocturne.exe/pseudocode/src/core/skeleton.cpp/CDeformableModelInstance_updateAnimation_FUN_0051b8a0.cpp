// Name: core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0051b8a0
// Address: 0051b8a0
// Address Range: [[0051b8a0, 0051b8e2]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0051b8a0(int param_1)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0051b8a0(int param_1)

{
  core_skeleton_cpp_CDeformableModelInstance_updateMotion_FUN_0051b920
            (param_1,*(uint *)(param_1 + 4),*(uint *)(param_1 + 8),0xffffffff);
  if (*(float *)(param_1 + 0x14) <= (float)0.001) {
    return;
  }
  core_skeleton_cpp_CDeformableModelInstance_blendMotion_FUN_0051c3d0
            (param_1,*(uint *)(param_1 + 0x18),*(uint *)(param_1 + 0x1c),
             *(uint *)(param_1 + 0x14),0xffffffff,&LAB_0051b650);
  return;
}
