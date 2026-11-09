// Name: unkafter_demnfolk.cpp_FUN_00458f80
// Address: 00458f80
// Address Range: [[00458f80, 00458fad]]
// Convention: unknown
// Signature: int unkafter_demnfolk_cpp_FUN_00458f80(CDemonActor *param_1)

#include "nocturne.h"

int unkafter_demnfolk_cpp_FUN_00458f80(CDemonActor *param_1)

{
  SMotion *pSVar1;
  int iVar2;
  
  pSVar1 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070
                     ((CMotionController *)(param_1 + 1));
  if (*(int *)(pSVar1 + 0x24) == 0x23) {
    return 1;
  }
  iVar2 = core_actor_cpp_CDemonActor_shouldIgnoreForTargeting_FUN_0040c7e0(param_1);
  return iVar2;
}
