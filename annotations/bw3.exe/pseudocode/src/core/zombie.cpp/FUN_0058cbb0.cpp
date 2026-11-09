// Name: core_zombie.cpp_FUN_0058cbb0
// Address: 0058cbb0
// Address Range: [[0058cbb0, 0058cbdd]]
// Convention: unknown
// Signature: int core_zombie_cpp_FUN_0058cbb0(CDemonActor *param_1)

#include "nocturne.h"

int core_zombie_cpp_FUN_0058cbb0(CDemonActor *param_1)

{
  SMotion *pSVar1;
  int iVar2;
  
  pSVar1 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070
                     ((CMotionController *)(param_1 + 1));
  if (*(int *)(pSVar1 + 0x24) == 0xf) {
    return 1;
  }
  iVar2 = core_actor_cpp_CDemonActor_shouldIgnoreForTargeting_FUN_0040c7e0(param_1);
  return iVar2;
}
