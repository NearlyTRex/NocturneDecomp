// Name: core_gargoyle.cpp_FUN_004c51a0
// Address: 004c51a0
// Address Range: [[004c51a0, 004c5330]]
// Convention: unknown
// Signature: undefined4 core_gargoyle_cpp_FUN_004c51a0(int param_1)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint core_gargoyle_cpp_FUN_004c51a0(int param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  byte bVar5;
  float afStackY_1030 [1011];
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_24;
  float local_20;
  float local_1c;
  
  bVar5 = 0;
  iVar1 = *(int *)(param_1 + 0xcde4);
  *(uint *)(param_1 + 0xd0a8) = 0;
  if (iVar1 != 0) {
    local_60 = *(float *)(param_1 + 0x20) - *(float *)(iVar1 + 0x20);
    local_5c = *(float *)(param_1 + 0x24) - *(float *)(iVar1 + 0x24);
    local_58 = *(float *)(param_1 + 0x28) - *(float *)(iVar1 + 0x28);
    if (SQRT(local_58 * local_58 + local_60 * local_60 + local_5c * local_5c) <=
        *(float *)(param_1 + 0xcddc)) {
      local_54 = local_60;
      local_50 = local_5c;
      local_4c = local_58;
      core_vecdir_cpp_FUN_00576250(&stack0xffffffac);
      local_24 = local_48;
      (&stack0xffffffe0)[(uint)bVar5 * 0xfffffffe] =
           (float)*(uint *)((int)&stack0xffffffbc + (uint)bVar5 * 0xfffffffe * 4);
      *(uint *)((int)&stack0xffffffe4 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
           *(uint *)(&stack0xffffffc0 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
      if (&stack0xffffffac != &stack0xffffffdc) {
        local_54 = local_24;
        local_50 = local_20;
        local_4c = local_1c;
      }
      fVar4 = (float)core_actor_cpp_FUN_0040cfa0
                               (*(float *)(*(int *)(param_1 + 0xcde4) + 0x34) - local_50);
      if ((fVar4 < _DAT_005c3f28) || (_DAT_005c3f2c < fVar4)) {
        return 1;
      }
    }
    else {
      iVar1 = *(int *)(param_1 + 0xd090);
      if (iVar1 != 0) {
        fVar4 = *(float *)(iVar1 + 0x20) - *(float *)(param_1 + 0x20);
        fVar2 = *(float *)(iVar1 + 0x24) - *(float *)(param_1 + 0x24);
        fVar3 = *(float *)(iVar1 + 0x28) - *(float *)(param_1 + 0x28);
        if (1.0 <= SQRT(fVar3 * fVar3 + fVar4 * fVar4 + fVar2 * fVar2)) {
          *(uint *)(param_1 + 0xd0a8) = 1;
          return 1;
        }
      }
    }
  }
  return 0;
}
