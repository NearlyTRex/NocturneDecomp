// Name: core_baal.cpp_FUN_00597be0
// Address: 00597be0
// Address Range: [[00597be0, 00597c69]]
// Convention: unknown
// Signature: void core_baal_cpp_FUN_00597be0(int param_1,int param_2)

#include "nocturne.h"

void core_baal_cpp_FUN_00597be0(int param_1,int param_2)

{
  CMotionController *this_ptr;
  int iVar1;
  
  this_ptr = (CMotionController *)(param_1 + 0x158);
  if (0.0 < *(float *)(param_1 + 0xd080)) {
    core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(this_ptr,0,1);
    return;
  }
  iVar1 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,100);
  if (0x31 < iVar1) {
    if ((iVar1 < 0x32) || (0x5e < iVar1)) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                ((CMotionController *)(param_1 + 0x158),2,1);
      return;
    }
    if (param_2 != 0) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(this_ptr,0,1);
      *(uint *)(param_1 + 0xd080) = 0;
      return;
    }
  }
  core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(this_ptr,1,1);
  return;
}
