// Name: core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_00547480
// Address: 00547480
// Address Range: [[00547480, 005474a0]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_00547480(CDeformableModelInstance *this_ptr)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_00547480(CDeformableModelInstance *this_ptr)

{
  CDeformableModel *model_ptr;
  
  model_ptr = core_skeleton_cpp_getDeformableModel_FUN_00548e80(this_ptr->model_name);
  core_skeleton_cpp_CDeformableModelInstance_initializeFromModel_FUN_005474b0(this_ptr,model_ptr);
  return;
}
