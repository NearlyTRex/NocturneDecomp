// Name: core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_005a0450
// Address: 005a0450
// Address Range: [[005a0450, 005a0470]]
// Convention: __cdecl
// Signature: void core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_005a0450(CDeformableModelInstance * this_ptr)

#include "nocturne.h"

void __cdecl
core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_005a0450(CDeformableModelInstance *this_ptr)

{
  CDeformableModel *model_ptr;
  
  model_ptr = core_skeleton_cpp_getDeformableModel_FUN_005a1cf0(this_ptr->model_name);
  core_skeleton_cpp_CDeformableModelInstance_initializeFromModel_FUN_005a0480(this_ptr,model_ptr);
  return;
}
