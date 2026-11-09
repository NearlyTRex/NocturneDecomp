// Name: core_hero.cpp_FUN_004cea00
// Address: 004cea00
// Address Range: [[004cea00, 004cea0f] [004cea16, 004cea3f]]
// Convention: unknown
// Signature: undefined4 core_hero_cpp_FUN_004cea00(int param_1,undefined4 param_2,int param_3)

#include "nocturne.h"

uint core_hero_cpp_FUN_004cea00(int param_1,uint param_2,int param_3)

{
  CMotionList *this_ptr;
  int iVar1;
  char *state_name;
  
  if (param_3 == 0) {
    state_name = "GETGRABBED";
    this_ptr = core_motion_cpp_FUN_00503860((CMotionController *)(param_1 + 0x2b4));
    iVar1 = core_motion_cpp_FUN_00502fa0(this_ptr,state_name,param_3);
    if (iVar1 < 0) {
      return 0;
    }
  }
  return 1;
}
