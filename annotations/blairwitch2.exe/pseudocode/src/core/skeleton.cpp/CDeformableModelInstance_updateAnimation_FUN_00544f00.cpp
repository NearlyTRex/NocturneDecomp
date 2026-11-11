// Name: core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_00544f00
// Address: 00544f00
// Address Range: [[00544f00, 00544f42]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_00544f00(CDeformableModelInstance *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_00544f00(CDeformableModelInstance *this_ptr)

{
  core_skeleton_cpp_FUN_00544f80
            (this_ptr,(this_ptr->base).current_motion_index,(this_ptr->base).current_frame_number,
             0xffffffff);
  if ((this_ptr->base).tween_progress <= (float)_DAT_005e72cf) {
    return;
  }
  core_skeleton_cpp_FUN_00545a60
            (this_ptr,(this_ptr->base).tween_target_motion,(this_ptr->base).tween_target_frame,
             (this_ptr->base).tween_progress,0xffffffff,core_skeleton_cpp_FUN_00544cc0);
  return;
}
