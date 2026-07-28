// Name: core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_0051dcd0
// Address: 0051dcd0
// Address Range: [[0051dcd0, 0051dcf0]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_0051dcd0(CDeformableModelInstance *this_ptr)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_0051dcd0(CDeformableModelInstance *this_ptr)

{
  CDeformableModel *model_ptr;
  
  model_ptr = core_skeleton_cpp_getDeformableModel_FUN_0051f570(this_ptr->model_name);
  core_skeleton_cpp_CDeformableModelInstance_initializeFromModel_FUN_0051dd00(this_ptr,model_ptr);
  return;
}
