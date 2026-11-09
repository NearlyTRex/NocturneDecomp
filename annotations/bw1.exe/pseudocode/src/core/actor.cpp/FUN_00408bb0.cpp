// Name: core_actor.cpp_FUN_00408bb0
// Address: 00408bb0
// Address Range: [[00408bb0, 00408c10]]
// Convention: unknown
// Signature: void core_actor_cpp_FUN_00408bb0(int param_1,float *param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void core_actor_cpp_FUN_00408bb0(int param_1,float *param_2)

{
  uint *unaff_ESI;
  byte bVar1;
  float afStackY_ffc [1010];
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float local_20;
  float local_1c;
  float local_18;
  uint local_14;
  
  bVar1 = 0;
  fStack_2c = *param_2 - *(float *)(param_1 + 0x20);
  fStack_28 = param_2[1] - *(float *)(param_1 + 0x24);
  fStack_24 = param_2[2] - *(float *)(param_1 + 0x28);
  local_20 = fStack_2c;
  local_1c = fStack_28;
  local_18 = fStack_24;
  core_dirmat_cpp_FUN_0045f700(param_1 + 0x3c,&stack0xffffffd4);
  *unaff_ESI = local_14;
  unaff_ESI[(uint)bVar1 * -2 + 1] =
       *(uint *)((int)&stack0xfffffff0 + (uint)bVar1 * 0xfffffffe * 4);
  (unaff_ESI + (uint)bVar1 * -2 + 1)[(uint)bVar1 * -2 + 1] =
       *(uint *)(&stack0xfffffff4 + (uint)bVar1 * -8 + (uint)bVar1 * -8);
  return;
}
