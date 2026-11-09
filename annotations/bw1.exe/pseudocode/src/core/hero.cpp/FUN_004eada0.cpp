// Name: core_hero.cpp_FUN_004eada0
// Address: 004eada0
// Address Range: [[004eada0, 004eadaf] [004eadb6, 004eaddf]]
// Convention: unknown
// Signature: undefined4 core_hero_cpp_FUN_004eada0(int param_1,undefined4 param_2,int param_3)

#include "nocturne.h"

uint core_hero_cpp_FUN_004eada0(int param_1,uint param_2,int param_3)

{
  CMotionList *this_ptr;
  int iVar1;
  char *state_name;
  
  if (param_3 == 0) {
    state_name = "GETGRABBED";
    this_ptr = core_motion_cpp_FUN_00524a00((CMotionController *)(param_1 + 0x158));
    iVar1 = core_motion_cpp_FUN_00524150(this_ptr,state_name,param_3);
    if (iVar1 < 0) {
      return 0;
    }
  }
  return 1;
}
