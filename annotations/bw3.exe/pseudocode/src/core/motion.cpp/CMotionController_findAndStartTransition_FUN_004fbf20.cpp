// Name: core_motion.cpp_CMotionController_findAndStartTransition_FUN_004fbf20
// Address: 004fbf20
// Address Range: [[004fbf20, 004fc005]]
// Convention: __cdecl
// Signature: int __cdecl core_motion_cpp_CMotionController_findAndStartTransition_FUN_004fbf20(CMotionController *this_ptr)

#include "nocturne.h"

int __cdecl core_motion_cpp_CMotionController_findAndStartTransition_FUN_004fbf20(CMotionController *this_ptr)

{
  SMotion *pSVar1;
  SMotionTransition *pSVar2;
  int iVar3;
  SMotionTransition *transition;
  
  pSVar1 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070(this_ptr);
  iVar3 = this_ptr->state_index;
  if ((iVar3 < 0) || (iVar3 == pSVar1->state_index)) {
    this_ptr->in_transition = (SMotionTransition *)0x0;
    return 0;
  }
  if ((this_ptr->in_transition == (SMotionTransition *)0x0) ||
     (iVar3 != this_ptr->in_transition->desired_state)) {
    iVar3 = 0;
    transition = (SMotionTransition *)0x0;
    if (0 < pSVar1->transition_count) {
      pSVar2 = pSVar1->transitions;
      do {
        transition = pSVar2;
        if (this_ptr->state_index == pSVar2->desired_state) break;
        iVar3 = iVar3 + 1;
        pSVar2 = pSVar2 + 1;
        transition = (SMotionTransition *)0x0;
      } while (iVar3 < pSVar1->transition_count);
    }
    if ((transition != (SMotionTransition *)0x0) && (transition != this_ptr->in_transition)) {
      this_ptr->in_transition = (SMotionTransition *)0x0;
      core_motion_cpp_CMotionController_clearTweenState_FUN_004fc480(this_ptr);
      switch(transition->cmd) {
      case MOTION_CMD_JUMP:
        core_motion_cpp_CMotionController_jumpToMotion_FUN_004fc420
                  (this_ptr,transition->to_motion_number,transition->to_frame_number);
        if (transition->set_new_state_as_desired != 0) {
          pSVar1 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070(this_ptr);
          this_ptr->state_index = pSVar1->state_index;
        }
        return 1;
      case MOTION_CMD_WAIT_EXIT:
        this_ptr->in_transition = transition;
        return 0;
      case MOTION_CMD_TWEEN:
      case MOTION_CMD_TWEEN_ADVANCE:
      case MOTION_CMD_TWEEN_ADVANCE_BOTH:
      case MOTION_CMD_TWEEN_BIDIR:
        this_ptr->in_transition = transition;
        core_motion_cpp_CMotionController_startTransition_FUN_004fc190(this_ptr,transition);
        return 0;
      }
    }
  }
  return 0;
}
