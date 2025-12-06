// Name: core_skeleton.cpp_CDeformableModelInstance_renderBones_FUN_005a17e0
// Address: 005a17e0
// Address Range: [[005a17e0, 005a17fd]]
// Convention: __cdecl
// Signature: void core_skeleton.cpp_CDeformableModelInstance_renderBones_FUN_005a17e0(CDeformableModelInstance * this_ptr)

#include "nocturne.h"

void __cdecl
core_skeleton_cpp_CDeformableModelInstance_renderBones_FUN_005a17e0
          (CDeformableModelInstance *this_ptr)

{
  CDeformableModel *this_ptr_00;
  CMatrix3x4f *unaff_retaddr;
  
  this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0(this_ptr);
  core_skeleton_cpp_CDeformableModel_renderBones_FUN_0059b800(this_ptr_00,unaff_retaddr);
  return;
}
