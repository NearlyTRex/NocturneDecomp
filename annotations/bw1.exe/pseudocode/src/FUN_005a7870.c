// Name: FUN_005a7870
// Address: 005a7870
// Address Range: [[005a7870, 005a7b49]]
// Convention: unknown
// Signature: void FUN_005a7870(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005a7870(int param_1)

{
  float fVar1;
  float fVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  int iVar6;
  int iVar7;
  byte bVar8;
  float afStackY_1010 [1010];
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  uint uStack_18;
  uint uStack_14;
  
  bVar8 = 0;
  FUN_00408850(param_1);
  iVar7 = 0;
  FUN_004688e0(param_1 + 0x158);
  if (0 < *(int *)(param_1 + 0x938)) {
    iVar6 = param_1 + 0x950;
    do {
      FUN_004688e0(iVar6);
      iVar7 = iVar7 + 1;
      iVar6 = iVar6 + 0x1b4;
    } while (iVar7 < *(int *)(param_1 + 0x938));
  }
  iVar7 = FUN_00468900(param_1 + 0x158);
  puVar5 = *(uint **)(iVar7 + 0x350);
  puVar3 = &stack0xffffffc0;
  for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar3 = *puVar5;
    puVar5 = puVar5 + (uint)bVar8 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar8 * -2 + 1;
  }
  fStack_28 = fStack_34 - fStack_40;
  fStack_24 = fStack_30 - fStack_3c;
  fStack_20 = fStack_2c - fStack_38;
  fStack_1c = fStack_34 - fStack_40;
  *(uint *)((int)&stack0xffffffe8 + (uint)bVar8 * -8) =
       *(uint *)((int)&stack0xffffffdc + (uint)bVar8 * -8);
  *(uint *)((int)&stack0xffffffec + (uint)bVar8 * -8 + (uint)bVar8 * -8) =
       *(uint *)((int)&stack0xffffffe0 + (uint)bVar8 * -8 + (uint)bVar8 * -8);
  if ((float *)(param_1 + 0x92c) != &stack0xffffffe4) {
    *(float *)(param_1 + 0x92c) = fStack_1c;
    *(uint *)(param_1 + 0x930) = uStack_18;
    *(uint *)(param_1 + 0x934) = uStack_14;
  }
  fVar1 = *(float *)(param_1 + 0x918) * (float)_DAT_005f8fd3;
  *(float *)(param_1 + 0x91c) = fVar1;
  fVar2 = (float)_DAT_005f8fdb;
  *(float *)(param_1 + 0x920) =
       fVar1 * fVar2 *
       (*(float *)(param_1 + 0x934) * *(float *)(param_1 + 0x934) +
       *(float *)(param_1 + 0x930) * *(float *)(param_1 + 0x930));
  *(float *)(param_1 + 0x924) =
       *(float *)(param_1 + 0x91c) * fVar2 *
       (*(float *)(param_1 + 0x934) * *(float *)(param_1 + 0x934) +
       *(float *)(param_1 + 0x92c) * *(float *)(param_1 + 0x92c));
  *(float *)(param_1 + 0x928) =
       (*(float *)(param_1 + 0x930) * *(float *)(param_1 + 0x930) +
       *(float *)(param_1 + 0x92c) * *(float *)(param_1 + 0x92c)) *
       *(float *)(param_1 + 0x91c) * fVar2;
  *(uint *)(param_1 + 0x8f0) = 0;
  *(uint *)(param_1 + 0x8ec) = *(uint *)(param_1 + 0x8f0);
  *(uint *)(param_1 + 0x8e8) = *(uint *)(param_1 + 0x8ec);
  *(uint *)(param_1 + 0x914) = 0;
  *(uint *)(param_1 + 0x910) = *(uint *)(param_1 + 0x914);
  *(uint *)(param_1 + 0x90c) = *(uint *)(param_1 + 0x910);
  *(uint *)(param_1 + 0x8d8) = 0;
  *(uint *)(param_1 + 0x8d4) = *(uint *)(param_1 + 0x8d8);
  *(uint *)(param_1 + 0x8d0) = *(uint *)(param_1 + 0x8d4);
  *(uint *)(param_1 + 0x8fc) = 0;
  *(uint *)(param_1 + 0x8f8) = *(uint *)(param_1 + 0x8fc);
  *(uint *)(param_1 + 0x8f4) = *(uint *)(param_1 + 0x8f8);
  *(uint *)(param_1 + 0x8e4) = 0;
  *(uint *)(param_1 + 0x8e0) = *(uint *)(param_1 + 0x8e4);
  *(uint *)(param_1 + 0x8dc) = *(uint *)(param_1 + 0x8e0);
  *(uint *)(param_1 + 0x908) = 0;
  *(uint *)(param_1 + 0x904) = *(uint *)(param_1 + 0x908);
  *(uint *)(param_1 + 0x900) = *(uint *)(param_1 + 0x904);
  *(uint *)(param_1 + 0x8cc) = 0;
  *(uint *)(param_1 + 0x8c8) = *(uint *)(param_1 + 0x8cc);
  *(uint *)(param_1 + 0x8c4) = *(uint *)(param_1 + 0x8c8);
  iVar7 = 0;
  if (0 < *(int *)(param_1 + 0x938)) {
    puVar5 = (uint *)(param_1 + 0xad8);
    puVar3 = (uint *)(param_1 + 0xacc);
    do {
      puVar4 = (uint *)(iVar7 * 0x1b4 + param_1 + 0x93c);
      if (puVar5 != puVar4) {
        *puVar5 = *puVar4;
        puVar5[1] = puVar4[1];
        puVar5[2] = puVar4[2];
      }
      puVar3[2] = 0;
      puVar5 = puVar5 + 0x6d;
      puVar3[8] = 0;
      iVar7 = iVar7 + 1;
      puVar3[1] = puVar3[2];
      puVar3[7] = puVar3[8];
      *puVar3 = puVar3[1];
      puVar3[6] = puVar3[8];
      puVar3 = puVar3 + 0x6d;
    } while (iVar7 < *(int *)(param_1 + 0x938));
  }
  *(uint *)(param_1 + 0x100c) = 0;
  *(uint *)(param_1 + 0x1010) = 0x3f800000;
  *(uint *)(param_1 + 0x1014) = 0;
  *(uint *)(param_1 + 0x1018) = 0;
  FUN_00447db0(param_1 + 0x1020,param_1 + 0x1034);
  *(uint *)(param_1 + 0x106c) = 1;
  *(uint *)(param_1 + 0x1054) = 0;
  *(uint *)(param_1 + 0x1058) = 0;
  *(uint *)(param_1 + 0x105c) = 0;
  return;
}
