// Name: FUN_004b2980
// Address: 004b2980
// Address Range: [[004b2980, 004b2aef]]
// Convention: unknown
// Signature: void FUN_004b2980(int param_1)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004b2980(int param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  byte bVar6;
  uint auStackY_1038 [1012];
  uint local_50;
  uint local_44;
  int local_24;
  int local_20;
  int local_1c;
  float *local_18;
  
  bVar6 = 0;
  local_1c = 0;
  if (0 < _DAT_01c58768) {
    local_18 = (float *)(param_1 + 4);
    local_20 = 0;
    do {
      iVar5 = *(int *)(&DAT_01c5876c + local_20);
      if (((*(int *)(param_1 + 0x20) == 2) || (*(int *)(iVar5 + 0x27c0) != 0)) &&
         (fVar2 = *(float *)(iVar5 + 0x20) - *local_18,
         fVar4 = *(float *)(iVar5 + 0x24) - local_18[1],
         fVar3 = *(float *)(iVar5 + 0x28) - local_18[2],
         fVar3 * fVar3 + fVar4 * fVar4 + fVar2 * fVar2 <= _DAT_005df4d4)) {
        FUN_00569eb0(iVar5 + 0x158);
        FUN_00408bb0(iVar5,local_18);
        local_50 = local_44;
        *(uint *)((int)&stack0xffffffb4 + (uint)bVar6 * 0xfffffffe * 4) =
             *(uint *)(&stack0xffffffc0 + (uint)bVar6 * -8);
        *(uint *)(&stack0xffffffb8 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
             *(uint *)(&stack0xffffffc4 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
        FUN_004308a0(iVar5,&stack0xffffffb0,0,0,0x3f800000,*(int *)(param_1 + 0x20) == 2);
      }
      local_20 = local_20 + 4;
      local_1c = local_1c + 1;
    } while (local_1c < _DAT_01c58768);
  }
  iVar5 = 0;
  if (0 < _DAT_01c58834) {
    local_24 = 0;
    do {
      iVar1 = *(int *)(&DAT_01c58838 + local_24);
      fVar2 = *(float *)(iVar1 + 0x20) - *(float *)(param_1 + 4);
      fVar4 = *(float *)(iVar1 + 0x24) - *(float *)(param_1 + 8);
      fVar3 = *(float *)(iVar1 + 0x28) - *(float *)(param_1 + 0xc);
      if (fVar3 * fVar3 + fVar4 * fVar4 + fVar2 * fVar2 <= (float)_DAT_005df4dc) {
        FUN_004b9180(iVar1);
      }
      local_24 = local_24 + 4;
      iVar5 = iVar5 + 1;
    } while (iVar5 < _DAT_01c58834);
  }
  return;
}
