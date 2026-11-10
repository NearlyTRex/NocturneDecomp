// Name: core_motion.cpp_CMotionController_startTransition_FUN_00524880
// Address: 00524880
// Address Range: [[00524880, 00524936]]
// Convention: __cdecl
// Signature: void __cdecl core_motion_cpp_CMotionController_startTransition_FUN_00524880(CMotionController *this_ptr,SMotionTransition *transition)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_motion_cpp_CMotionController_startTransition_FUN_00524880(CMotionController *this_ptr,SMotionTransition *transition)

{
  float fVar1;
  EMotionTransitionCmd EVar2;
  int iVar3;
  SMotion *pSVar4;
  float local_18;
  
  local_18 = *(float *)(transition + 0xc);
  if (local_18 == _DAT_005eaeef) {
    iVar3 = (**(code **)(this_ptr->vtable + 4))
                      (this_ptr,this_ptr->current_motion_index,this_ptr->current_frame_number,
                       *(uint *)(transition + 8));
    local_18 = (float)iVar3;
  }
  if (*(float *)(transition + 0x10) <= 0.0) {
    core_motion_cpp_CMotionController_jumpToMotion_FUN_00524b10
              (this_ptr,*(int *)(transition + 8),local_18);
    if (*(int *)(transition + 0x14) != 0) {
      pSVar4 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770(this_ptr);
      this_ptr->state_index = *(int *)(pSVar4 + 0x24);
      return;
    }
  }
  else {
    this_ptr->tween_target_motion = *(int *)(transition + 8);
    this_ptr->tween_target_frame = local_18;
    EVar2 = *(EMotionTransitionCmd *)(transition + 4);
    this_ptr->tween_progress = 0.001;
    this_ptr->tween_type = EVar2;
    fVar1 = *(float *)(transition + 0x10);
    this_ptr->tween_direction = 0;
    this_ptr->tween_speed = 1.0 / fVar1;
    this_ptr->tween_set_new_state = *(int *)(transition + 0x14);
  }
  return;
}
