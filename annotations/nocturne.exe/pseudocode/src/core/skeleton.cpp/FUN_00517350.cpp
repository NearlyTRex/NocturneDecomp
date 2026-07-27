// Name: core_skeleton.cpp_FUN_00517350
// Address: 00517350
// Address Range: [[00517350, 00517399]]
// Convention: unknown
// Signature: void core_skeleton_cpp_FUN_00517350(undefined4 param_1)

#include "nocturne.h"

void core_skeleton_cpp_FUN_00517350(uint param_1)

{
  int iVar1;
  
  FUN_005670b1(8);
  iVar1 = core_motion_cpp_CMotionList_ctor_FUN_004e0900(param_1);
  *(uint *)(iVar1 + 0x28558) = 0;
  *(uint *)(iVar1 + 0x2936c) = 0;
  *(uint *)(iVar1 + 0x29370) = 0;
  *(uint *)(iVar1 + 0x29374) = 0;
  *(uint *)(iVar1 + 0x29378) = 0;
  return;
}
