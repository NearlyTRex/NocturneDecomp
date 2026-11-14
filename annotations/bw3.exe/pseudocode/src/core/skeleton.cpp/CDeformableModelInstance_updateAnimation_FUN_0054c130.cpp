// Name: core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0054c130
// Address: 0054c130
// Address Range: [[0054c130, 0054c172]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0054c130(CDeformableModelInstance *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0054c130(CDeformableModelInstance *this_ptr)

{
  core_skeleton_cpp_CDeformableModelInstance_updateMotion_FUN_0054c1b0
            (this_ptr,(this_ptr->base).current_motion_index,(this_ptr->base).current_frame_number,-1
            );
  if ((this_ptr->base).tween_progress <= (float)_DAT_005d1fcc) {
    return;
  }
  core_skeleton_cpp_CDeformableModelInstance_blendMotion_FUN_0054cc90
            (this_ptr,(this_ptr->base).tween_target_motion,(this_ptr->base).tween_target_frame,
             (this_ptr->base).tween_progress,-1,core_skeleton_cpp_blendWeightCallback_FUN_0054bef0);
  return;
}
