// Name: core_motion.cpp_CMotionController_startTransition_FUN_005036e0
// Address: 005036e0
// Address Range: [[005036e0, 00503796]]
// Convention: __cdecl
// Signature: void __cdecl core_motion_cpp_CMotionController_startTransition_FUN_005036e0(CMotionController *this_ptr,SMotionTransition *transition)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_motion_cpp_CMotionController_startTransition_FUN_005036e0(CMotionController *this_ptr,SMotionTransition *transition)

{
  float fVar1;
  EMotionTransitionCmd EVar2;
  int iVar3;
  float local_18;
  
  local_18 = transition->to_frame_number;
  if (local_18 == _DAT_005dfc94) {
    iVar3 = (*this_ptr->vtable->findPatchToFrame)
                      (this_ptr,this_ptr->current_motion_index,this_ptr->current_frame_number,
                       transition->to_motion_number);
    local_18 = (float)iVar3;
  }
  if (transition->tween_time <= 0.0) {
    core_motion_cpp_CMotionController_jumpToMotion_FUN_00503980
              (this_ptr,transition->to_motion_number,local_18);
    if (transition->set_new_state_as_desired != 0) {
      iVar3 = core_motion_cpp_FUN_005035c0(this_ptr);
      this_ptr->state_index = *(int *)(iVar3 + 0x24);
      return;
    }
  }
  else {
    this_ptr->tween_target_motion = transition->to_motion_number;
    this_ptr->tween_target_frame = local_18;
    EVar2 = transition->cmd;
    this_ptr->tween_progress = 0.001;
    this_ptr->tween_type = EVar2;
    fVar1 = transition->tween_time;
    this_ptr->tween_direction = 0;
    this_ptr->tween_speed = 1.0 / fVar1;
    this_ptr->tween_set_new_state = transition->set_new_state_as_desired;
  }
  return;
}
