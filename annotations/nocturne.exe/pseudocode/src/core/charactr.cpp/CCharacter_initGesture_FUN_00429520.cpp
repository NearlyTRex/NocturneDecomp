// Name: core_charactr.cpp_CCharacter_initGesture_FUN_00429520
// Address: 00429520
// Address Range: [[00429520, 0042955f]]
// Convention: __cdecl
// Signature: bool __cdecl core_charactr_cpp_CCharacter_initGesture_FUN_00429520(int param_1,undefined4 param_2)

#include "nocturne.h"

bool __cdecl core_charactr_cpp_CCharacter_initGesture_FUN_00429520(int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  *(uint *)(param_1 + 0x25c4) = 0;
  uVar1 = core_motion_cpp_CMotionController_getMotionList_FUN_004e1890(param_1 + 0x150,param_2,0);
  iVar2 = core_motion_cpp_CMotionList_findMotionIndex_FUN_004e1010(uVar1);
  *(int *)(param_1 + 0x25c0) = iVar2;
  return -1 < iVar2;
}
