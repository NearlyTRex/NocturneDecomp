// Name: FUN_0054e7f0
// Address: 0054e7f0
// Address Range: [[0054e7f0, 0054eade]]
// Convention: unknown
// Signature: void FUN_0054e7f0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0054e7f0(int param_1)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  int iVar7;
  int iVar8;
  float local_1c;
  float local_18;
  float local_14;
  
  FUN_00409fc0(param_1);
  iVar8 = 0;
  FUN_00454510(param_1 + 0x150);
  if (0 < *(int *)(param_1 + 0x930)) {
    iVar7 = param_1 + 0x948;
    do {
      FUN_00454510(iVar7);
      iVar8 = iVar8 + 1;
      iVar7 = iVar7 + 0x1b4;
    } while (iVar8 < *(int *)(param_1 + 0x930));
  }
  iVar8 = FUN_00454530(param_1 + 0x150);
  pfVar1 = *(float **)(iVar8 + 0x350);
  local_1c = pfVar1[3] - *pfVar1;
  local_18 = pfVar1[4] - pfVar1[1];
  local_14 = pfVar1[5] - pfVar1[2];
  if ((float *)(param_1 + 0x924) != &local_1c) {
    *(float *)(param_1 + 0x924) = local_1c;
    *(float *)(param_1 + 0x928) = local_18;
    *(float *)(param_1 + 0x92c) = local_14;
  }
  fVar2 = *(float *)(param_1 + 0x910) * (float)_DAT_00597310;
  *(float *)(param_1 + 0x914) = fVar2;
  fVar3 = (float)_DAT_00597318;
  *(float *)(param_1 + 0x918) =
       fVar2 * fVar3 *
       (*(float *)(param_1 + 0x92c) * *(float *)(param_1 + 0x92c) +
       *(float *)(param_1 + 0x928) * *(float *)(param_1 + 0x928));
  *(float *)(param_1 + 0x91c) =
       *(float *)(param_1 + 0x914) * fVar3 *
       (*(float *)(param_1 + 0x92c) * *(float *)(param_1 + 0x92c) +
       *(float *)(param_1 + 0x924) * *(float *)(param_1 + 0x924));
  *(float *)(param_1 + 0x920) =
       (*(float *)(param_1 + 0x928) * *(float *)(param_1 + 0x928) +
       *(float *)(param_1 + 0x924) * *(float *)(param_1 + 0x924)) *
       *(float *)(param_1 + 0x914) * fVar3;
  *(uint *)(param_1 + 0x8e8) = 0;
  *(uint *)(param_1 + 0x8e4) = *(uint *)(param_1 + 0x8e8);
  *(uint *)(param_1 + 0x8e0) = *(uint *)(param_1 + 0x8e4);
  *(uint *)(param_1 + 0x90c) = 0;
  *(uint *)(param_1 + 0x908) = *(uint *)(param_1 + 0x90c);
  *(uint *)(param_1 + 0x904) = *(uint *)(param_1 + 0x908);
  *(uint *)(param_1 + 0x8d0) = 0;
  *(uint *)(param_1 + 0x8cc) = *(uint *)(param_1 + 0x8d0);
  *(uint *)(param_1 + 0x8c8) = *(uint *)(param_1 + 0x8cc);
  *(uint *)(param_1 + 0x8f4) = 0;
  *(uint *)(param_1 + 0x8f0) = *(uint *)(param_1 + 0x8f4);
  *(uint *)(param_1 + 0x8ec) = *(uint *)(param_1 + 0x8f0);
  *(uint *)(param_1 + 0x8dc) = 0;
  *(uint *)(param_1 + 0x8d8) = *(uint *)(param_1 + 0x8dc);
  *(uint *)(param_1 + 0x8d4) = *(uint *)(param_1 + 0x8d8);
  *(uint *)(param_1 + 0x900) = 0;
  *(uint *)(param_1 + 0x8fc) = *(uint *)(param_1 + 0x900);
  *(uint *)(param_1 + 0x8f8) = *(uint *)(param_1 + 0x8fc);
  *(uint *)(param_1 + 0x8c4) = 0;
  *(uint *)(param_1 + 0x8c0) = *(uint *)(param_1 + 0x8c4);
  *(uint *)(param_1 + 0x8bc) = *(uint *)(param_1 + 0x8c0);
  iVar8 = 0;
  if (0 < *(int *)(param_1 + 0x930)) {
    puVar6 = (uint *)(param_1 + 0xad0);
    puVar4 = (uint *)(param_1 + 0xac4);
    do {
      puVar5 = (uint *)(iVar8 * 0x1b4 + param_1 + 0x934);
      if (puVar6 != puVar5) {
        *puVar6 = *puVar5;
        puVar6[1] = puVar5[1];
        puVar6[2] = puVar5[2];
      }
      puVar4[2] = 0;
      puVar6 = puVar6 + 0x6d;
      puVar4[8] = 0;
      iVar8 = iVar8 + 1;
      puVar4[1] = puVar4[2];
      puVar4[7] = puVar4[8];
      *puVar4 = puVar4[1];
      puVar4[6] = puVar4[8];
      puVar4 = puVar4 + 0x6d;
    } while (iVar8 < *(int *)(param_1 + 0x930));
  }
  *(uint *)(param_1 + 0x1004) = 0;
  *(uint *)(param_1 + 0x1008) = 0x3f800000;
  *(uint *)(param_1 + 0x100c) = 0;
  *(uint *)(param_1 + 0x1010) = 0;
  FUN_0043b690(param_1 + 0x1018,param_1 + 0x102c);
  *(uint *)(param_1 + 0x1064) = 1;
  *(uint *)(param_1 + 0x104c) = 0;
  *(uint *)(param_1 + 0x1050) = 0;
  *(uint *)(param_1 + 0x1054) = 0;
  return;
}
