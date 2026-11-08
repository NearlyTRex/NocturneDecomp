// Name: FUN_00583c40
// Address: 00583c40
// Address Range: [[00583c40, 00583f19]]
// Convention: unknown
// Signature: void FUN_00583c40(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00583c40(int param_1)

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
  FUN_00408a80(param_1);
  iVar7 = 0;
  FUN_0044fd00(param_1 + 0x2b4);
  if (0 < *(int *)(param_1 + 0xa94)) {
    iVar6 = param_1 + 0xaac;
    do {
      FUN_0044fd00(iVar6);
      iVar7 = iVar7 + 1;
      iVar6 = iVar6 + 0x1b4;
    } while (iVar7 < *(int *)(param_1 + 0xa94));
  }
  iVar7 = FUN_0044fd20(param_1 + 0x2b4);
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
  if ((float *)(param_1 + 0xa88) != &stack0xffffffe4) {
    *(float *)(param_1 + 0xa88) = fStack_1c;
    *(uint *)(param_1 + 0xa8c) = uStack_18;
    *(uint *)(param_1 + 0xa90) = uStack_14;
  }
  fVar1 = *(float *)(param_1 + 0xa74) * (float)_DAT_005edc77;
  *(float *)(param_1 + 0xa78) = fVar1;
  fVar2 = (float)_DAT_005edc7f;
  *(float *)(param_1 + 0xa7c) =
       fVar1 * fVar2 *
       (*(float *)(param_1 + 0xa90) * *(float *)(param_1 + 0xa90) +
       *(float *)(param_1 + 0xa8c) * *(float *)(param_1 + 0xa8c));
  *(float *)(param_1 + 0xa80) =
       *(float *)(param_1 + 0xa78) * fVar2 *
       (*(float *)(param_1 + 0xa90) * *(float *)(param_1 + 0xa90) +
       *(float *)(param_1 + 0xa88) * *(float *)(param_1 + 0xa88));
  *(float *)(param_1 + 0xa84) =
       (*(float *)(param_1 + 0xa8c) * *(float *)(param_1 + 0xa8c) +
       *(float *)(param_1 + 0xa88) * *(float *)(param_1 + 0xa88)) *
       *(float *)(param_1 + 0xa78) * fVar2;
  *(uint *)(param_1 + 0xa4c) = 0;
  *(uint *)(param_1 + 0xa48) = *(uint *)(param_1 + 0xa4c);
  *(uint *)(param_1 + 0xa44) = *(uint *)(param_1 + 0xa48);
  *(uint *)(param_1 + 0xa70) = 0;
  *(uint *)(param_1 + 0xa6c) = *(uint *)(param_1 + 0xa70);
  *(uint *)(param_1 + 0xa68) = *(uint *)(param_1 + 0xa6c);
  *(uint *)(param_1 + 0xa34) = 0;
  *(uint *)(param_1 + 0xa30) = *(uint *)(param_1 + 0xa34);
  *(uint *)(param_1 + 0xa2c) = *(uint *)(param_1 + 0xa30);
  *(uint *)(param_1 + 0xa58) = 0;
  *(uint *)(param_1 + 0xa54) = *(uint *)(param_1 + 0xa58);
  *(uint *)(param_1 + 0xa50) = *(uint *)(param_1 + 0xa54);
  *(uint *)(param_1 + 0xa40) = 0;
  *(uint *)(param_1 + 0xa3c) = *(uint *)(param_1 + 0xa40);
  *(uint *)(param_1 + 0xa38) = *(uint *)(param_1 + 0xa3c);
  *(uint *)(param_1 + 0xa64) = 0;
  *(uint *)(param_1 + 0xa60) = *(uint *)(param_1 + 0xa64);
  *(uint *)(param_1 + 0xa5c) = *(uint *)(param_1 + 0xa60);
  *(uint *)(param_1 + 0xa28) = 0;
  *(uint *)(param_1 + 0xa24) = *(uint *)(param_1 + 0xa28);
  *(uint *)(param_1 + 0xa20) = *(uint *)(param_1 + 0xa24);
  iVar7 = 0;
  if (0 < *(int *)(param_1 + 0xa94)) {
    puVar5 = (uint *)(param_1 + 0xc34);
    puVar3 = (uint *)(param_1 + 0xc28);
    do {
      puVar4 = (uint *)(iVar7 * 0x1b4 + param_1 + 0xa98);
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
    } while (iVar7 < *(int *)(param_1 + 0xa94));
  }
  *(uint *)(param_1 + 0x1168) = 0;
  *(uint *)(param_1 + 0x116c) = 0x3f800000;
  *(uint *)(param_1 + 0x1170) = 0;
  *(uint *)(param_1 + 0x1174) = 0;
  FUN_00438af0(param_1 + 0x117c,param_1 + 0x1190);
  *(uint *)(param_1 + 0x11c8) = 1;
  *(uint *)(param_1 + 0x11b0) = 0;
  *(uint *)(param_1 + 0x11b4) = 0;
  *(uint *)(param_1 + 0x11b8) = 0;
  return;
}
