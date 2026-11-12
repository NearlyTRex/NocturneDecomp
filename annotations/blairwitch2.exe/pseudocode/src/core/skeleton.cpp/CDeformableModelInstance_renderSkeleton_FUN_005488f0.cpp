// Name: core_skeleton.cpp_CDeformableModelInstance_renderSkeleton_FUN_005488f0
// Address: 005488f0
// Address Range: [[005488f0, 00548919]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModelInstance_renderSkeleton_FUN_005488f0(CDeformableModelInstance *this_ptr,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_CDeformableModelInstance_renderSkeleton_FUN_005488f0(CDeformableModelInstance *this_ptr,uint param_2,uint param_3)

{
  CDeformableModel *pCVar1;
  CMatrix3x4f *pCVar2;
  
  pCVar2 = (this_ptr->bone_transform).bone_model_matrices;
  pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_00547810(this_ptr);
  core_skeleton_cpp_FUN_005424b0(pCVar1,param_2,pCVar2,param_3);
  return;
}
