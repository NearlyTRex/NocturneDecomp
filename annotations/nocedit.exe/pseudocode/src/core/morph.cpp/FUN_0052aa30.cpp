// Name: core_morph.cpp_FUN_0052aa30
// Address: 0052aa30
// Address Range: [[0052aa30, 0052aa7b]]
// Convention: __cdecl
// Signature: undefined core_morph.cpp_FUN_0052aa30()

#include "nocturne.h"

void __cdecl
core_morph_cpp_FUN_0052aa30
          (uint param_1,uint param_2,CDeformableModelInstance *param_3,
          CMorphModel *param_4)

{
  core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0059e000(param_3);
  core_skeleton_cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_005a01d0(param_3,0);
  core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0(param_3);
  core_morph_cpp_CMorphModel_animate_FUN_0052a920(param_4);
  return;
}
