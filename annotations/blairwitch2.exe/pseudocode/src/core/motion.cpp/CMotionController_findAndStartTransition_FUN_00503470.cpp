// Name: core_motion.cpp_CMotionController_findAndStartTransition_FUN_00503470
// Address: 00503470
// Address Range: [[00503470, 00503555]]
// Convention: __cdecl
// Signature: int __cdecl core_motion_cpp_CMotionController_findAndStartTransition_FUN_00503470(CMotionController *this_ptr)

#include "nocturne.h"

int __cdecl core_motion_cpp_CMotionController_findAndStartTransition_FUN_00503470(CMotionController *this_ptr)

{
  int iVar1;
  SMotionTransition *pSVar2;
  int iVar3;
  SMotionTransition *transition;
  
  iVar1 = core_motion_cpp_FUN_005035c0(this_ptr);
  iVar3 = this_ptr->state_index;
  if ((iVar3 < 0) || (iVar3 == *(int *)(iVar1 + 0x24))) {
    this_ptr->in_transition = (SMotionTransition *)0x0;
    return 0;
  }
  if ((this_ptr->in_transition == (SMotionTransition *)0x0) ||
     (iVar3 != this_ptr->in_transition->desired_state)) {
    iVar3 = 0;
    transition = (SMotionTransition *)0x0;
    if (0 < *(int *)(iVar1 + 0x68)) {
      pSVar2 = *(SMotionTransition **)(iVar1 + 0x6c);
      do {
        transition = pSVar2;
        if (this_ptr->state_index == pSVar2->desired_state) break;
        iVar3 = iVar3 + 1;
        pSVar2 = pSVar2 + 1;
        transition = (SMotionTransition *)0x0;
      } while (iVar3 < *(int *)(iVar1 + 0x68));
    }
    if ((transition != (SMotionTransition *)0x0) && (transition != this_ptr->in_transition)) {
      this_ptr->in_transition = (SMotionTransition *)0x0;
      core_motion_cpp_CMotionController_clearTweenState_FUN_005039e0(this_ptr);
      switch(transition->cmd) {
      case MOTION_CMD_JUMP:
        core_motion_cpp_CMotionController_jumpToMotion_FUN_00503980
                  (this_ptr,transition->to_motion_number,transition->to_frame_number);
        if (transition->set_new_state_as_desired != 0) {
          iVar3 = core_motion_cpp_FUN_005035c0(this_ptr);
          this_ptr->state_index = *(int *)(iVar3 + 0x24);
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
        core_motion_cpp_CMotionController_startTransition_FUN_005036e0(this_ptr,transition);
        return 0;
      }
    }
  }
  return 0;
}
