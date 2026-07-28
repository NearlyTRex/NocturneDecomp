// Name: core_motion.cpp_CMotionController_startTransition_FUN_004e1770
// Address: 004e1770
// Address Range: [[004e1770, 004e1826]]
// Convention: __cdecl
// Signature: void __cdecl core_motion_cpp_CMotionController_startTransition_FUN_004e1770(CMotionController *this_ptr,SMotionTransition *transition)

#include "nocturne.h"

void __cdecl core_motion_cpp_CMotionController_startTransition_FUN_004e1770(CMotionController *this_ptr,SMotionTransition *transition)

{
  float fVar1;
  EMotionTransitionCmd EVar2;
  int iVar3;
  SMotion *pSVar4;
  float local_18;
  
  local_18 = transition->to_frame_number;
  if (local_18 == -1.0f) {
    iVar3 = (*this_ptr->vtable->findPatchToFrame)
                      (this_ptr,this_ptr->current_motion_index,this_ptr->current_frame_number,
                       transition->to_motion_number);
    local_18 = (float)iVar3;
  }
  if (transition->tween_time <= 0.0) {
    core_motion_cpp_CMotionController_jumpToMotion_FUN_004e1990
              (this_ptr,transition->to_motion_number,local_18);
    if (transition->set_new_state_as_desired != 0) {
      pSVar4 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660(this_ptr);
      this_ptr->state_index = pSVar4->state_index;
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
