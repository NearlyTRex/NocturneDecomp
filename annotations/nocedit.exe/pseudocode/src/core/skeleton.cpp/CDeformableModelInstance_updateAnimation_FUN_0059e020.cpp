// Name: core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020
// Address: 0059e020
// Address Range: [[0059e020, 0059e062]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020(CDeformableModelInstance *this_ptr)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020(CDeformableModelInstance *this_ptr)

{
  core_skeleton_cpp_CDeformableModelInstance_updateMotion_FUN_0059e0a0
            (this_ptr,(this_ptr->base).current_motion_index,(this_ptr->base).current_frame_number,-1
            );
  if ((this_ptr->base).tween_progress <= (float)0.001) {
    return;
  }
  core_skeleton_cpp_CDeformableModelInstance_blendMotion_FUN_0059eb50
            (this_ptr,(this_ptr->base).tween_target_motion,(this_ptr->base).tween_target_frame,
             (this_ptr->base).tween_progress,-1,core_skeleton_cpp_blendWeightCallback_FUN_0059ddb0);
  return;
}
