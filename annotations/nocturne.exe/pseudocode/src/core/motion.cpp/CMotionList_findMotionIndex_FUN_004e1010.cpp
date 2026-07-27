// Name: core_motion.cpp_CMotionList_findMotionIndex_FUN_004e1010
// Address: 004e1010
// Address Range: [[004e1010, 004e1092]]
// Convention: __cdecl
// Signature: int __cdecl core_motion_cpp_CMotionList_findMotionIndex_FUN_004e1010(int param_1,undefined4 param_2,int param_3)

#include "nocturne.h"

int __cdecl core_motion_cpp_CMotionList_findMotionIndex_FUN_004e1010(int param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x964)) {
    iVar3 = param_1 + 0x968;
    do {
      iVar1 = _stricmp(iVar3,param_2);
      if (iVar1 == 0) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x54c;
    } while (iVar2 < *(int *)(param_1 + 0x964));
  }
  if (param_3 == 0) {
    return -1;
  }
  PTR_01cc4800 = "..\\core\\motion.cpp";
  INT_01cc4804 = 0x100;
  core_main_c_FUN_004c8440("Can't find motion \"%s\" in motion list",param_2);
  return -1;
}
