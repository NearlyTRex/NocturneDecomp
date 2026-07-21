// Name: core_motion.cpp_CMotionController_jumpToMotionByName_FUN_004e1960
// Address: 004e1960
// Address Range: [[004e1960, 004e198a]]
// Convention: __cdecl
// Signature: void __cdecl core_motion_cpp_CMotionController_jumpToMotionByName_FUN_004e1960(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

void __cdecl core_motion_cpp_CMotionController_jumpToMotionByName_FUN_004e1960(uint *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  
  uVar1 = core_motion_cpp_CMotionList_findMotionIndex_FUN_004e1010(*param_1,param_2,1);
  core_motion_cpp_CMotionController_jumpToMotion_FUN_004e1990(param_1,uVar1,param_3);
  return;
}
