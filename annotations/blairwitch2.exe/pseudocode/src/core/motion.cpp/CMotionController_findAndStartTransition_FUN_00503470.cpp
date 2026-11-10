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
     (iVar3 != *(int *)this_ptr->in_transition)) {
    iVar3 = 0;
    transition = (SMotionTransition *)0x0;
    if (0 < *(int *)(iVar1 + 0x68)) {
      pSVar2 = *(SMotionTransition **)(iVar1 + 0x6c);
      do {
        transition = pSVar2;
        if (this_ptr->state_index == *(int *)pSVar2) break;
        iVar3 = iVar3 + 1;
        pSVar2 = pSVar2 + 0x18;
        transition = (SMotionTransition *)0x0;
      } while (iVar3 < *(int *)(iVar1 + 0x68));
    }
    if ((transition != (SMotionTransition *)0x0) && (transition != this_ptr->in_transition)) {
      this_ptr->in_transition = (SMotionTransition *)0x0;
      core_motion_cpp_CMotionController_clearTweenState_FUN_005039e0(this_ptr);
      switch(*(uint *)(transition + 4)) {
      case 1:
        core_motion_cpp_CMotionController_jumpToMotion_FUN_00503980
                  (this_ptr,*(int *)(transition + 8),*(float *)(transition + 0xc));
        if (*(int *)(transition + 0x14) != 0) {
          iVar3 = core_motion_cpp_FUN_005035c0(this_ptr);
          this_ptr->state_index = *(int *)(iVar3 + 0x24);
        }
        return 1;
      case 2:
        this_ptr->in_transition = transition;
        return 0;
      case 3:
      case 4:
      case 5:
      case 6:
        this_ptr->in_transition = transition;
        core_motion_cpp_CMotionController_startTransition_FUN_005036e0(this_ptr,transition);
        return 0;
      }
    }
  }
  return 0;
}
