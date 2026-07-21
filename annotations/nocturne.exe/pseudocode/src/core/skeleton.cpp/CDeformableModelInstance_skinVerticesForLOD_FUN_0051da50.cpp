// Name: core_skeleton.cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_0051da50
// Address: 0051da50
// Address Range: [[0051da50, 0051da8c]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_0051da50(int param_1,undefined4 param_2)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_0051da50(int param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020
                    (param_1,param_2,param_1 + 0xe80,*(uint *)(param_1 + 0x2234),
                     param_1 + 0x2140);
  core_skeleton_cpp_CDeformableModel_skinVertices_FUN_005181a0(uVar1);
  *(uint *)(param_1 + 0x2230) = param_2;
  return;
}
