// Name: core_hero.cpp_FUN_004b4c20
// Address: 004b4c20
// Address Range: [[004b4c20, 004b4c2f] [004b4c36, 004b4c5f]]
// Convention: unknown
// Signature: undefined4 core_hero_cpp_FUN_004b4c20(int param_1,undefined4 param_2,int param_3)

#include "nocturne.h"

uint core_hero_cpp_FUN_004b4c20(int param_1,uint param_2,int param_3)

{
  CMotionList *this_ptr;
  int iVar1;
  char *state_name;
  
  if (param_3 == 0) {
    state_name = "GETGRABBED";
    this_ptr = core_motion_cpp_CMotionController_getMotionList_FUN_004e1890
                         ((CMotionController *)(param_1 + 0x150));
    iVar1 = core_motion_cpp_CMotionList_findStateIndex_FUN_004e10a0(this_ptr,state_name,param_3);
    if (iVar1 < 0) {
      return 0;
    }
  }
  return 1;
}
