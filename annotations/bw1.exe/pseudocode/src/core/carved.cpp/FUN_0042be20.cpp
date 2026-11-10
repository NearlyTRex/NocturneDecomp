// Name: core_carved.cpp_FUN_0042be20
// Address: 0042be20
// Address Range: [[0042be20, 0042bf4b]]
// Convention: unknown
// Signature: void core_carved_cpp_FUN_0042be20(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_carved_cpp_FUN_0042be20(int param_1)

{
  int iVar1;
  int iVar2;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  
  if (*(int *)(param_1 + 0xc284) == 0) {
    iVar1 = *(int *)(param_1 + 0xc1e8);
    if (iVar1 == 0) {
      iVar2 = 1;
      iVar1 = core_actor_cpp_getRandomInt_FUN_0040cc60(0,3);
      core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                ((CMotionController *)(param_1 + 0x158),iVar1 + 3,iVar2);
      return;
    }
    local_38 = *(float *)(iVar1 + 0x20) - *(float *)(param_1 + 0x20);
    local_34 = *(float *)(iVar1 + 0x24) - *(float *)(param_1 + 0x24);
    local_30 = *(float *)(iVar1 + 0x28) - *(float *)(param_1 + 0x28);
    if (&local_2c != &local_38) {
      local_2c = local_38;
      local_28 = local_34;
      local_24 = local_30;
    }
    local_20 = local_38;
    local_1c = local_34;
    local_18 = local_30;
    if ((_DAT_005fd46c <= SQRT(local_24 * local_24 + local_2c * local_2c + local_28 * local_28)) ||
       (iVar1 = core_actor_cpp_getRandomInt_FUN_0040cc60(0,3), iVar1 != 1)) {
      iVar1 = 1;
      iVar2 = core_actor_cpp_getRandomInt_FUN_0040cc60(0,3);
      iVar2 = iVar2 + 7;
    }
    else {
      iVar2 = core_actor_cpp_getRandomInt_FUN_0040cc60(0,3);
      iVar2 = iVar2 + 3;
    }
  }
  else {
    iVar1 = 1;
    iVar2 = core_actor_cpp_getRandomInt_FUN_0040cc60(0,3);
    iVar2 = iVar2 + 7;
  }
  core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
            ((CMotionController *)(param_1 + 0x158),iVar2,iVar1);
  return;
}
