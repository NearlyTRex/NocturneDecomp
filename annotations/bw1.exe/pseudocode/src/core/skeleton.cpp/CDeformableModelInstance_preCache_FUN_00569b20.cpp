// Name: core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_00569b20
// Address: 00569b20
// Address Range: [[00569b20, 00569b40]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_00569b20(CDeformableModelInstance *this_ptr)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_00569b20(CDeformableModelInstance *this_ptr)

{
  CDeformableModel *model_ptr;
  
  model_ptr = (CDeformableModel *)core_skeleton_cpp_FUN_0056b520(this_ptr->model_name);
  core_skeleton_cpp_CDeformableModelInstance_initializeFromModel_FUN_00569b50(this_ptr,model_ptr);
  return;
}
