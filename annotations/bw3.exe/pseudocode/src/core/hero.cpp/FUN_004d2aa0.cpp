// Name: core_hero.cpp_FUN_004d2aa0
// Address: 004d2aa0
// Address Range: [[004d2aa0, 004d2aaf] [004d2ab6, 004d2adf]]
// Convention: unknown
// Signature: undefined4 core_hero_cpp_FUN_004d2aa0(int param_1,undefined4 param_2,int param_3)

#include "nocturne.h"

uint core_hero_cpp_FUN_004d2aa0(int param_1,uint param_2,int param_3)

{
  CMotionList *this_ptr;
  int iVar1;
  char *state_name;
  
  if (param_3 == 0) {
    state_name = "GETGRABBED";
    this_ptr = core_motion_cpp_CMotionController_getMotionList_FUN_004fc310
                         ((CMotionController *)(param_1 + 0x158));
    iVar1 = core_motion_cpp_CMotionList_findStateIndex_FUN_004fba50(this_ptr,state_name,param_3);
    if (iVar1 < 0) {
      return 0;
    }
  }
  return 1;
}
