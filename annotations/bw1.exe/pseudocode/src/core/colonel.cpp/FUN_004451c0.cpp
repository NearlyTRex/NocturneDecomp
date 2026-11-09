// Name: core_colonel.cpp_FUN_004451c0
// Address: 004451c0
// Address Range: [[004451c0, 004452d8]]
// Convention: unknown
// Signature: void core_colonel_cpp_FUN_004451c0(CDemonActor *param_1,int param_2)

#include "nocturne.h"

void core_colonel_cpp_FUN_004451c0(CDemonActor *param_1,int param_2)

{
  CDemonActor *this_ptr;
  float fVar1;
  SMotion *pSVar2;
  
  if ((*(uint *)&param_1[0x90].field_0x50 & 0x7fffffff) != 0) {
    *(uint *)(param_2 + 4) = 0;
  }
  if (*(int *)&g_CGamePtr->field_0x1ec != 0) {
    *(uint *)(param_2 + 4) = 0;
  }
  if (*(int *)&g_CGamePtr->field_0x248 == 0) {
    *(uint *)(param_2 + 4) = 0;
  }
  *(uint *)&param_1[0x90].field_0x50 = 0x3F000000;
  fVar1 = *(float *)&param_1[0x1b].field_0xf0 - *(float *)(param_2 + 4);
  this_ptr = param_1 + 1;
  *(float *)&param_1[0x1b].field_0xf0 = fVar1;
  if (fVar1 <= 0.0) {
    *(uint *)&param_1[0x1b].field_0xf0 = 0;
    pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                       ((CMotionController *)this_ptr);
    if (*(int *)(pSVar2 + 0x24) != 6) {
      pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                         ((CMotionController *)this_ptr);
      if (*(int *)(pSVar2 + 0x24) != 5) {
        *(uint *)&param_1[0x1d].field_0x4 = 0;
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                  ((CMotionController *)this_ptr,5,1);
        core_gore_cpp_CGore_spawnFliesOnActor_FUN_004e64d0
                  (g_CGorePtr,param_1,0x32,50.0,(CVector3f *)0x0);
        core_charactr_cpp_FUN_004319e0(param_1,param_2);
        return;
      }
    }
  }
  else if (0.0 < *(float *)(param_2 + 4)) {
    core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
              ((CMotionController *)this_ptr,4,1);
    core_charactr_cpp_FUN_004319e0(param_1,param_2);
    return;
  }
  core_charactr_cpp_FUN_004319e0(param_1,param_2);
  return;
}
