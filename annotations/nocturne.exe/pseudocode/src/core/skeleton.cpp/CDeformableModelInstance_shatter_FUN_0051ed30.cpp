// Name: core_skeleton.cpp_CDeformableModelInstance_shatter_FUN_0051ed30
// Address: 0051ed30
// Address Range: [[0051ed30, 0051ed8c]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModelInstance_shatter_FUN_0051ed30(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_CDeformableModelInstance_shatter_FUN_0051ed30(int param_1,uint param_2,uint param_3,int param_4)

{
  uint uVar1;
  
  if (param_4 != *(int *)(param_1 + 0x2230)) {
    core_skeleton_cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_0051da50(param_1,param_4);
  }
  uVar1 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020
                    (param_1,param_2,param_3,*(uint *)(param_1 + 0x2230),
                     *(uint *)(param_1 + 0x2234),param_1 + 0x2140,param_1 + 0x21b8);
  core_skeleton_cpp_CDeformableModel_shatter_FUN_0051a780(uVar1);
  return;
}
