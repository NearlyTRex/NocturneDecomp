// Name: core_skeleton.cpp_CDeformableModelInstance_skinAndLightVertices_FUN_0051db20
// Address: 0051db20
// Address Range: [[0051db20, 0051db60]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModelInstance_skinAndLightVertices_FUN_0051db20(int param_1,int param_2)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_CDeformableModelInstance_skinAndLightVertices_FUN_0051db20(int param_1,int param_2)

{
  uint uVar1;
  
  if (param_2 != *(int *)(param_1 + 0x2230)) {
    core_skeleton_cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_0051da50(param_1,param_2);
  }
  uVar1 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020
                    (param_1,*(uint *)(param_1 + 0x2230),*(uint *)(param_1 + 0x2234));
  core_skeleton_cpp_CDeformableModel_lightVertices_FUN_00518470(uVar1);
  return;
}
