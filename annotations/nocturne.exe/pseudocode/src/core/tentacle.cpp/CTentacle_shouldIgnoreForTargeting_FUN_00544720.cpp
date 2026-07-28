// Name: core_tentacle.cpp_CTentacle_shouldIgnoreForTargeting_FUN_00544720
// Address: 00544720
// Address Range: [[00544720, 0054475a]]
// Convention: unknown
// Signature: undefined4 core_tentacle_cpp_CTentacle_shouldIgnoreForTargeting_FUN_00544720(int param_1)

#include "nocturne.h"

uint core_tentacle_cpp_CTentacle_shouldIgnoreForTargeting_FUN_00544720(int param_1)

{
  SMotion *str1;
  int iVar1;
  uint uVar2;
  char *str2;
  
  str2 = "wait";
  str1 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660
                   ((CMotionController *)(param_1 + 0x150));
  iVar1 = _stricmp(str1->motion_name,str2);
  if (iVar1 == 0) {
    return 1;
  }
  uVar2 = core_actor_cpp_FUN_0040d830(param_1);
  return uVar2;
}
