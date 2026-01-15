// Name: core_morph.cpp_CMorphModel_FUN_0052a870
// Address: 0052a870
// Address Range: [[0052a870, 0052a8cb]]
// Convention: __cdecl
// Signature: void core_morph.cpp_CMorphModel_FUN_0052a870(CMorphModel * this_ptr)

#include "nocturne.h"

void __cdecl core_morph_cpp_CMorphModel_FUN_0052a870(CMorphModel *this_ptr)

{
  CDeformableModelInstance *in_stack_00000008;
  
  core_skeleton_cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_005a01d0(in_stack_00000008,0);
  core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0(in_stack_00000008);
  core_morph_cpp_CMorphModel_FUN_0052a710(this_ptr);
  return;
}
