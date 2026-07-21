// Name: core_motion.cpp_CMotionController_setMotionList_FUN_004e1860
// Address: 004e1860
// Address Range: [[004e1860, 004e188c]]
// Convention: __cdecl
// Signature: void __cdecl core_motion_cpp_CMotionController_setMotionList_FUN_004e1860(undefined4 *param_1,undefined4 param_2)

#include "nocturne.h"

void __cdecl core_motion_cpp_CMotionController_setMotionList_FUN_004e1860(uint *param_1,uint param_2)

{
  uint uVar1;
  
  *param_1 = param_2;
  if (*(char *)(param_1 + 0xc) == '\0') {
    return;
  }
  uVar1 = core_motion_cpp_CMotionList_findMotionIndex_FUN_004e1010(*param_1,param_1 + 0xc,1);
  *(byte *)(param_1 + 0xc) = 0;
  param_1[1] = uVar1;
  return;
}
