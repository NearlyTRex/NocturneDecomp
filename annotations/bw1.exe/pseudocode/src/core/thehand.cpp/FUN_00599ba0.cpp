// Name: core_thehand.cpp_FUN_00599ba0
// Address: 00599ba0
// Address Range: [[00599ba0, 00599bda]]
// Convention: unknown
// Signature: int core_thehand_cpp_FUN_00599ba0(CDemonActor *param_1)

#include "nocturne.h"

int core_thehand_cpp_FUN_00599ba0(CDemonActor *param_1)

{
  SMotion *str1;
  int iVar1;
  char *str2;
  
  str2 = "@stand" + 1;
  str1 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                   ((CMotionController *)(param_1 + 1));
  iVar1 = _stricmp((char *)str1,str2);
  if (iVar1 == 0) {
    return 1;
  }
  iVar1 = core_actor_cpp_CDemonActor_shouldIgnoreForTargeting_FUN_0040c5a0(param_1);
  return iVar1;
}
