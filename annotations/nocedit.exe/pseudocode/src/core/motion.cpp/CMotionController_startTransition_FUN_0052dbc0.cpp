// Name: core_motion.cpp_CMotionController_startTransition_FUN_0052dbc0
// Address: 0052dbc0
// Address Range: [[0052dbc0, 0052dc76]]
// Convention: __cdecl
// Signature: void core_motion.cpp_CMotionController_startTransition_FUN_0052dbc0(CMotionController * this_ptr, SMotionTransition * transition)

#include "nocturne.h"

void __cdecl
core_motion_cpp_CMotionController_startTransition_FUN_0052dbc0
          (CMotionController *this_ptr,SMotionTransition *transition)

{
  float fVar1;
  int iVar2;
  SMotion *pSVar3;
  float unaff_ESI;
  
  if (transition->to_frame_number == -1.0f) {
    iVar2 = (*this_ptr->vtable->findPatchToFrame)
                      (this_ptr,this_ptr->current_motion_index,this_ptr->current_frame_number,
                       transition->to_motion_number);
    unaff_ESI = (float)iVar2;
  }
  if (transition->tween_time <= 0.0) {
    core_motion_cpp_CMotionController_jumpToMotion_FUN_0052dde0
              (this_ptr,transition->to_motion_number,unaff_ESI);
    if (transition->set_new_state_as_desired != 0) {
      pSVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0(this_ptr);
      this_ptr->state_index = pSVar3->state_index;
      return;
    }
  }
  else {
    this_ptr->tween_target_motion = transition->to_motion_number;
    this_ptr->tween_target_frame = unaff_ESI;
    iVar2 = transition->cmd;
    this_ptr->tween_progress = 0.001;
    this_ptr->tween_type = iVar2;
    fVar1 = transition->tween_time;
    this_ptr->tween_direction = 0;
    this_ptr->tween_speed = 1.0 / fVar1;
    this_ptr->tween_set_new_state = transition->set_new_state_as_desired;
  }
  return;
}
