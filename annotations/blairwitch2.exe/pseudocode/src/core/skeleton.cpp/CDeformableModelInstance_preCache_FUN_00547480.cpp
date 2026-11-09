// Name: core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_00547480
// Address: 00547480
// Address Range: [[00547480, 005474a0]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_00547480(CDeformableModelInstance *this_ptr)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_00547480(CDeformableModelInstance *this_ptr)

{
  CDeformableModel *model_ptr;
  
  model_ptr = (CDeformableModel *)core_skeleton_cpp_FUN_00548e80(&this_ptr->field_0x2260);
  core_skeleton_cpp_CDeformableModelInstance_initializeFromModel_FUN_005474b0(this_ptr,model_ptr);
  return;
}
