// Name: core_morph.cpp_FUN_0052aa30
// Address: 0052aa30
// Address Range: [[0052aa30, 0052aa7b]]
// Convention: __cdecl
// Signature: void __cdecl core_morph_cpp_FUN_0052aa30(void)

#include "nocturne.h"

void __cdecl core_morph_cpp_FUN_0052aa30(void)

{
  CMorphModel *in_stack_00000004;
  CDeformableModelInstance *in_stack_0000000c;
  
  core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0059e000
            (in_stack_0000000c);
  core_skeleton_cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_005a01d0(in_stack_0000000c,0);
  core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0(in_stack_0000000c);
  core_morph_cpp_CMorphModel_animate_FUN_0052a920(in_stack_00000004);
  return;
}
