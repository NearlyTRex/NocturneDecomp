// Name: core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0
// Address: 005675a0
// Address Range: [[005675a0, 005675e2]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0(CDeformableModelInstance *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0(CDeformableModelInstance *this_ptr)

{
  core_skeleton_cpp_CDeformableModelInstance_updateMotion_FUN_00567620
            (this_ptr,(this_ptr->base).current_motion_index,(this_ptr->base).current_frame_number,-1
            );
  if ((this_ptr->base).tween_progress <= (float)_DAT_005f24c9) {
    return;
  }
  core_skeleton_cpp_CDeformableModelInstance_blendMotion_FUN_00568100
            (this_ptr,(this_ptr->base).tween_target_motion,(this_ptr->base).tween_target_frame,
             (this_ptr->base).tween_progress,-1,core_skeleton_cpp_blendWeightCallback_FUN_00567360);
  return;
}
