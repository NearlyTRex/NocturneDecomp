// Name: core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_0054e6b0
// Address: 0054e6b0
// Address Range: [[0054e6b0, 0054e6d0]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_0054e6b0(CDeformableModelInstance *this_ptr)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_0054e6b0(CDeformableModelInstance *this_ptr)

{
  CDeformableModel *model_ptr;
  
  model_ptr = (CDeformableModel *)core_skeleton_cpp_FUN_005500b0(this_ptr->model_name);
  core_skeleton_cpp_CDeformableModelInstance_initializeFromModel_FUN_0054e6e0(this_ptr,model_ptr);
  return;
}
