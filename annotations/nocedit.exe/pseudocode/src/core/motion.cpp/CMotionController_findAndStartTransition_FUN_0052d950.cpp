// Name: core_motion.cpp_CMotionController_findAndStartTransition_FUN_0052d950
// Address: 0052d950
// Address Range: [[0052d950, 0052da44]]
// Convention: __cdecl
// Signature: int __cdecl core_motion_cpp_CMotionController_findAndStartTransition_FUN_0052d950(CMotionController *this_ptr)

#include "nocturne.h"

int __cdecl
core_motion_cpp_CMotionController_findAndStartTransition_FUN_0052d950(CMotionController *this_ptr)

{
  SMotion *pSVar1;
  int iVar2;
  SMotion *pSVar3;
  SMotionTransition *transition;
  
  pSVar1 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0(this_ptr);
  iVar2 = this_ptr->state_index;
  if ((iVar2 < 0) || (iVar2 == pSVar1->state_index)) {
    this_ptr->in_transition = 0;
    return 0;
  }
  if (((int *)this_ptr->in_transition == (int *)0x0) || (iVar2 != *(int *)this_ptr->in_transition))
  {
    iVar2 = 0;
    transition = (SMotionTransition *)0x0;
    pSVar3 = pSVar1;
    if (0 < pSVar1->transition_count) {
      do {
        if (pSVar3->transitions[0].desired_state == this_ptr->state_index) {
          transition = pSVar1->transitions + iVar2;
          break;
        }
        iVar2 = iVar2 + 1;
        pSVar3 = (SMotion *)(pSVar3->motion_name + 0x18);
      } while (iVar2 < pSVar1->transition_count);
    }
    if ((transition != (SMotionTransition *)0x0) &&
       (transition != (SMotionTransition *)this_ptr->in_transition)) {
      this_ptr->in_transition = 0;
      core_motion_cpp_CMotionController_clearTweenState_FUN_0052de40(this_ptr);
      switch(transition->cmd) {
      case 1:
        core_motion_cpp_CMotionController_jumpToMotion_FUN_0052dde0
                  (this_ptr,transition->to_motion_number,transition->to_frame_number);
        if (transition->set_new_state_as_desired != 0) {
          pSVar1 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0(this_ptr);
          this_ptr->state_index = pSVar1->state_index;
        }
        return 1;
      case 2:
        this_ptr->in_transition = (int)transition;
        return 0;
      case 3:
      case 4:
      case 5:
      case 6:
        this_ptr->in_transition = (int)transition;
        core_motion_cpp_CMotionController_startTransition_FUN_0052dbc0(this_ptr,transition);
        return 0;
      }
    }
  }
  return 0;
}
