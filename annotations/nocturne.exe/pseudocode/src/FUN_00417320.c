// Name: FUN_00417320
// Address: 00417320
// Address Range: [[00417320, 00417724]]
// Convention: unknown
// Signature: void FUN_00417320(int param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00417320(int param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  uint *puVar5;
  int extraout_ECX;
  uint *puVar6;
  int iVar7;
  int iVar8;
  uint *puVar9;
  byte bVar10;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  float10 fVar14;
  float10 fVar15;
  float10 fVar16;
  float10 fVar17;
  byte local_194 [48];
  byte local_164 [48];
  byte local_134 [48];
  uint local_104 [12];
  uint local_d4 [12];
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  byte local_7c [12];
  byte local_70 [12];
  byte local_64 [12];
  byte local_58 [12];
  byte local_4c [12];
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  bVar10 = 0;
  FUN_0044d7a0(&local_a4,param_2);
  fVar11 = (float10)local_a4 * (float10)_DAT_005790c2;
  fVar12 = (float10)local_a0 * (float10)_DAT_005790c2;
  fVar13 = (float10)local_9c * (float10)_DAT_005790c2;
  fVar14 = (float10)local_98 * (float10)_DAT_005790c2;
  fVar15 = (float10)local_94 * (float10)_DAT_005790c2;
  fVar16 = (float10)local_90 * (float10)_DAT_005790c2;
  fVar17 = (float10)local_8c * (float10)_DAT_005790c2;
  FUN_00563a30();
  local_2c = (int)ROUND(fVar11);
  fVar11 = (float10)local_88 * (float10)_DAT_005790c2;
  FUN_00563a30();
  local_28 = (int)ROUND(fVar12);
  fVar12 = (float10)local_84 * (float10)_DAT_005790c2;
  iVar8 = 0;
  FUN_00563a30();
  FUN_00563a30();
  FUN_00563a30();
  FUN_00563a30();
  FUN_00563a30();
  FUN_00563a30();
  FUN_00563a30();
  local_24 = (int)ROUND(fVar13);
  local_38 = (int)ROUND(fVar14);
  local_34 = (int)ROUND(fVar15);
  local_18 = (int)ROUND(fVar16);
  local_30 = (int)ROUND(fVar17);
  local_20 = (int)ROUND(fVar11);
  local_14 = (int)ROUND(fVar12);
  if (0 < extraout_ECX) {
    iVar7 = 0;
    do {
      iVar1 = *(int *)(param_1 + 0x170);
      lVar2 = (longlong)local_2c * (longlong)*(int *)(iVar1 + iVar7);
      lVar3 = (longlong)local_38 * (longlong)*(int *)(iVar1 + 4 + iVar7);
      lVar4 = (longlong)local_30 * (longlong)*(int *)(iVar1 + 8 + iVar7);
      local_40 = ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
                 ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10) +
                 ((uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10);
      lVar2 = (longlong)local_28 * (longlong)*(int *)(iVar1 + iVar7);
      lVar3 = (longlong)local_34 * (longlong)*(int *)(iVar1 + 4 + iVar7);
      lVar4 = (longlong)local_20 * (longlong)*(int *)(iVar1 + 8 + iVar7);
      local_3c = ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
                 ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10) +
                 ((uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10);
      lVar2 = (longlong)local_24 * (longlong)*(int *)(iVar1 + iVar7);
      lVar3 = (longlong)local_18 * (longlong)*(int *)(iVar1 + 4 + iVar7);
      lVar4 = (longlong)local_14 * (longlong)*(int *)(iVar1 + 8 + iVar7);
      *(int *)(iVar1 + iVar7) = local_40;
      *(uint *)(iVar1 + 8 + iVar7) =
           ((uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10) +
           ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
           ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10);
      *(int *)(iVar1 + 4 + iVar7) = local_3c;
      iVar8 = iVar8 + 1;
      iVar7 = iVar7 + 0xc;
    } while (iVar8 < *(int *)(param_1 + 0x16c));
  }
  puVar6 = (uint *)(param_1 + 0x30);
  FUN_0055ae80(local_164,&DAT_02dd1184,puVar6);
  FUN_0055ae80(local_134,&DAT_02dd1184,param_2);
  FUN_0055aa00(local_164,local_134);
  puVar5 = local_d4;
  puVar9 = local_104;
  for (iVar8 = 0xc; iVar8 != 0; iVar8 = iVar8 + -1) {
    *puVar9 = *puVar5;
    puVar5 = puVar5 + (uint)bVar10 * -2 + 1;
    puVar9 = puVar9 + (uint)bVar10 * -2 + 1;
  }
  puVar5 = (uint *)FUN_0055b6c0(local_104,local_4c);
  if (puVar6 != puVar5) {
    *puVar6 = *puVar5;
    *(uint *)(param_1 + 0x34) = puVar5[1];
    *(uint *)(param_1 + 0x38) = puVar5[2];
  }
  FUN_0040a000(param_1);
  iVar8 = 0;
  if (0 < *(int *)(param_1 + 0x744)) {
    puVar6 = (uint *)(param_1 + 0x748);
    do {
      puVar5 = (uint *)FUN_0044daa0(&local_a4,local_64,puVar6);
      if (puVar6 != puVar5) {
        *puVar6 = *puVar5;
        puVar6[1] = puVar5[1];
        puVar6[2] = puVar5[2];
      }
      iVar8 = iVar8 + 1;
      puVar5 = (uint *)FUN_0040a240(param_1,local_70,puVar6);
      puVar6[0xb] = *puVar5;
      puVar6[0xc] = puVar5[1];
      puVar6[0xd] = puVar5[2];
      puVar6 = puVar6 + 0xaa;
    } while (iVar8 < *(int *)(param_1 + 0x744));
  }
  local_1c = 0;
  if (0 < *(int *)(param_1 + 0x284)) {
    puVar6 = (uint *)(param_1 + 0x288);
    do {
      puVar5 = (uint *)FUN_0044daa0(&local_a4,local_58,puVar6);
      if (puVar6 != puVar5) {
        *puVar6 = *puVar5;
        puVar6[1] = puVar5[1];
        puVar6[2] = puVar5[2];
      }
      puVar9 = puVar6 + 3;
      FUN_0055afb0(local_194,&DAT_02dd1184,puVar9);
      FUN_0055aa00(local_194,local_134);
      puVar5 = (uint *)FUN_0055b180(local_134,local_7c);
      if (puVar9 != puVar5) {
        *puVar9 = *puVar5;
        puVar6[4] = puVar5[1];
        puVar6[5] = puVar5[2];
      }
      puVar6 = puVar6 + 0x65;
      local_1c = local_1c + 1;
    } while (local_1c < *(int *)(param_1 + 0x284));
  }
  return;
}
