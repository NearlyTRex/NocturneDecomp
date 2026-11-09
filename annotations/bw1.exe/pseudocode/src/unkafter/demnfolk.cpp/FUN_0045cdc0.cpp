// Name: unkafter_demnfolk.cpp_FUN_0045cdc0
// Address: 0045cdc0
// Address Range: [[0045cdc0, 0045cded]]
// Convention: unknown
// Signature: int unkafter_demnfolk_cpp_FUN_0045cdc0(CDemonActor *param_1)

#include "nocturne.h"

int unkafter_demnfolk_cpp_FUN_0045cdc0(CDemonActor *param_1)

{
  SMotion *pSVar1;
  int iVar2;
  
  pSVar1 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                     ((CMotionController *)(param_1 + 1));
  if (*(int *)(pSVar1 + 0x24) == 0x24) {
    return 1;
  }
  iVar2 = core_actor_cpp_CDemonActor_shouldIgnoreForTargeting_FUN_0040c5a0(param_1);
  return iVar2;
}
