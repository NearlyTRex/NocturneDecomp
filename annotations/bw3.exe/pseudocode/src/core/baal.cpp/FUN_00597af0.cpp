// Name: core_baal.cpp_FUN_00597af0
// Address: 00597af0
// Address Range: [[00597af0, 00597bd5]]
// Convention: unknown
// Signature: void core_baal_cpp_FUN_00597af0(int param_1,int param_2)

#include "nocturne.h"

void core_baal_cpp_FUN_00597af0(int param_1,int param_2)

{
  CMotionController *this_ptr;
  float fVar1;
  int iVar2;
  SMotion *pSVar3;
  
  if (*(int *)(param_2 + 0x30) != 0x70) {
    fVar1 = *(float *)(param_1 + 0x2538) - *(float *)(param_2 + 4);
    this_ptr = (CMotionController *)(param_1 + 0x158);
    *(float *)(param_1 + 0x2538) = fVar1;
    if (fVar1 <= 0.0) {
      *(uint *)(param_1 + 0x2540) = 0;
      *(uint *)(param_1 + 0x2538) = 0;
      (**(code **)(*(int *)(param_1 + 0x154) + 0x128))(param_1,0,0);
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
      iVar2 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,100);
      if (0x5a < iVar2) {
        core_baal_cpp_FUN_00597be0(param_1,0);
      }
    }
    core_enemy_cpp_FUN_00489b80(param_1,param_2);
  }
  return;
}
