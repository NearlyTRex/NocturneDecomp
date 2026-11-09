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
  iVar3 = *(int *)&this_ptr->field_0x28;
  if ((iVar3 < 0) || (iVar3 == *(int *)(pSVar1 + 0x24))) {
    *(uint *)&this_ptr->field_0x2c = 0;
    return 0;
  }
  if ((*(int **)&this_ptr->field_0x2c == (int *)0x0) || (iVar3 != **(int **)&this_ptr->field_0x2c))
  {
    iVar3 = 0;
    transition = (SMotionTransition *)0x0;
    if (0 < *(int *)(pSVar1 + 0x70)) {
      pSVar2 = *(SMotionTransition **)(pSVar1 + 0x74);
      do {
        transition = pSVar2;
        if (*(int *)&this_ptr->field_0x28 == *(int *)pSVar2) break;
        iVar3 = iVar3 + 1;
        pSVar2 = pSVar2 + 0x18;
        transition = (SMotionTransition *)0x0;
      } while (iVar3 < *(int *)(pSVar1 + 0x70));
    }
    if ((transition != (SMotionTransition *)0x0) &&
       (transition != *(SMotionTransition **)&this_ptr->field_0x2c)) {
      *(uint *)&this_ptr->field_0x2c = 0;
      core_motion_cpp_CMotionController_clearTweenState_FUN_004fc480(this_ptr);
      switch(*(uint *)(transition + 4)) {
      case 1:
        core_motion_cpp_CMotionController_jumpToMotion_FUN_004fc420
                  (this_ptr,*(int *)(transition + 8),*(float *)(transition + 0xc));
        if (*(int *)(transition + 0x14) != 0) {
          pSVar1 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070(this_ptr);
          *(uint *)&this_ptr->field_0x28 = *(uint *)(pSVar1 + 0x24);
        }
        return 1;
      case 2:
        *(SMotionTransition **)&this_ptr->field_0x2c = transition;
        return 0;
      case 3:
      case 4:
      case 5:
      case 6:
        *(SMotionTransition **)&this_ptr->field_0x2c = transition;
        core_motion_cpp_CMotionController_startTransition_FUN_004fc190(this_ptr,transition);
        return 0;
      }
    }
  }
  return 0;
}
