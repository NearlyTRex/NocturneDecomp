// Name: core_carved.cpp_FUN_00429090
// Address: 00429090
// Address Range: [[00429090, 004291e3]]
// Convention: unknown
// Signature: void core_carved_cpp_FUN_00429090(int param_1)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_carved_cpp_FUN_00429090(int param_1)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  float afStackY_1014 [1012];
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  bVar3 = 0;
  if (*(int *)(param_1 + 0xd070) == 0) {
    if (*(int *)(param_1 + 0xcde4) == 0) {
      iVar2 = 1;
      iVar1 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,3);
      core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                ((CMotionController *)(param_1 + 0x158),iVar1 + 3,iVar2);
      return;
    }
    local_14 = core_motion_cpp_FUN_004fc930((CMotionController *)(param_1 + 0x158));
    if (local_14 <= (float)_DAT_005b7ec7) {
      return;
    }
    iVar1 = *(int *)(param_1 + 0xcde4);
    local_20 = *(float *)(iVar1 + 0x20) - *(float *)(param_1 + 0x20);
    local_1c = *(float *)(iVar1 + 0x24) - *(float *)(param_1 + 0x24);
    local_18 = *(float *)(iVar1 + 0x28) - *(float *)(param_1 + 0x28);
    local_2c = local_20;
    (&stack0xffffffd8)[(uint)bVar3 * 0xfffffffe] =
         (float)*(uint *)((int)&stack0xffffffe4 + (uint)bVar3 * -8);
    *(uint *)((int)&stack0xffffffdc + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
         *(uint *)((int)&stack0xffffffe8 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
    if (&stack0xffffffc8 != &stack0xffffffd4) {
      local_38 = local_2c;
      local_34 = local_28;
      local_30 = local_24;
    }
    if ((_DAT_005dcf4c <= SQRT(local_30 * local_30 + local_38 * local_38 + local_34 * local_34)) ||
       (iVar1 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,3), iVar1 != 1)) {
      iVar1 = 1;
      iVar2 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,3);
      iVar2 = iVar2 + 7;
    }
    else {
      iVar2 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,3);
      iVar2 = iVar2 + 3;
    }
  }
  else {
    iVar1 = 1;
    iVar2 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,3);
    iVar2 = iVar2 + 7;
  }
  core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
            ((CMotionController *)(param_1 + 0x158),iVar2,iVar1);
  return;
}
