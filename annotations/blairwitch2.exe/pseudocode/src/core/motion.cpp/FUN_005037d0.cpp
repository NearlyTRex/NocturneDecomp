// Name: core_motion.cpp_FUN_005037d0
// Address: 005037d0
// Address Range: [[005037d0, 0050380d]]
// Convention: unknown
// Signature: void core_motion_cpp_FUN_005037d0(undefined4 *param_1,undefined4 param_2)

#include "nocturne.h"

void core_motion_cpp_FUN_005037d0(uint *param_1,uint param_2)

{
  int iVar1;
  
  *param_1 = param_2;
  if (*(char *)(param_1 + 0xc) == '\0') {
    return;
  }
  iVar1 = core_motion_cpp_FUN_00502f10((CMotionList *)*param_1,(char *)(param_1 + 0xc),0);
  param_1[1] = iVar1;
  if (-1 < iVar1) {
    *(byte *)(param_1 + 0xc) = 0;
    return;
  }
  param_1[1] = 0;
  *(byte *)(param_1 + 0xc) = 0;
  return;
}
