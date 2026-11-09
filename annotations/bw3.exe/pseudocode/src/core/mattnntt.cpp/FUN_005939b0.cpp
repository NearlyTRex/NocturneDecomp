// Name: core_mattnntt.cpp_FUN_005939b0
// Address: 005939b0
// Address Range: [[005939b0, 00593a8e]]
// Convention: unknown
// Signature: void core_mattnntt_cpp_FUN_005939b0(int param_1,int param_2)

#include "nocturne.h"

void core_mattnntt_cpp_FUN_005939b0(int param_1,int param_2)

{
  CMotionController *this_ptr;
  float fVar1;
  int iVar2;
  SMotion *pSVar3;
  
  if (0 < *(int *)(param_1 + 0x33a0)) {
    return;
  }
  fVar1 = *(float *)(param_2 + 4);
  *(uint *)(param_1 + 0xcde0) = 0x3f99999a;
  fVar1 = *(float *)(param_1 + 0x2538) - fVar1;
  this_ptr = (CMotionController *)(param_1 + 0x158);
  *(float *)(param_1 + 0x2538) = fVar1;
  if (fVar1 <= 0.0) {
    *(uint *)(param_1 + 0x2540) = 0;
    *(uint *)(param_1 + 0x2538) = 0;
    pSVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070(this_ptr);
    if ((*(int *)(pSVar3 + 0x24) != 9) && (*(int *)(pSVar3 + 0x24) != 8)) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(this_ptr,8,1);
      (**(code **)(*(int *)(param_1 + 0x154) + 0xa8))(param_1,0x32,0x41c80000);
      core_enemy_cpp_FUN_00489b80(param_1,param_2);
      return;
    }
  }
  else {
    iVar2 = unkafter_enemy_cpp_FUN_0048a1b0(param_1,*(uint *)(param_2 + 4));
    if (iVar2 != 0) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(this_ptr,7,1);
    }
    if (*(float *)(param_1 + 0xd054) <= 0.0) {
      *(uint *)(param_1 + 0xd054) = 0x40000000;
    }
  }
  core_enemy_cpp_FUN_00489b80(param_1,param_2);
  return;
}
