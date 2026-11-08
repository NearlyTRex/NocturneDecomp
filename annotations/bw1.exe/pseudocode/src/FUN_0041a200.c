// Name: FUN_0041a200
// Address: 0041a200
// Address Range: [[0041a200, 0041a6f5]]
// Convention: unknown
// Signature: void FUN_0041a200(int param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0041a200(int param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  int extraout_ECX;
  int *piVar8;
  int *piVar9;
  int iVar10;
  uint *puVar11;
  int iVar12;
  uint *puVar13;
  byte bVar14;
  float10 fVar15;
  float10 fVar16;
  float10 fVar17;
  float10 fVar18;
  float10 fVar19;
  float10 fVar20;
  float10 fVar21;
  int aiStackY_10a0 [933];
  byte local_1a0 [48];
  byte local_170 [48];
  byte local_140 [48];
  uint local_110 [12];
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  int local_b8;
  int aiStack_b4 [4];
  int local_a4;
  int local_a0;
  int local_9c;
  int local_98;
  int local_94;
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  int local_70;
  uint local_6c;
  uint local_68;
  int local_64;
  int local_58;
  int local_4c;
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
  int *local_18;
  int local_14;
  
  bVar14 = 0;
  FUN_0045f3e0(&local_e0,param_2);
  fVar15 = (float10)local_e0 * (float10)_DAT_005d44e1;
  fVar16 = (float10)local_dc * (float10)_DAT_005d44e1;
  fVar17 = (float10)local_d8 * (float10)_DAT_005d44e1;
  fVar18 = (float10)local_d4 * (float10)_DAT_005d44e1;
  fVar19 = (float10)local_d0 * (float10)_DAT_005d44e1;
  fVar20 = (float10)local_cc * (float10)_DAT_005d44e1;
  fVar21 = (float10)local_c8 * (float10)_DAT_005d44e1;
  FUN_005c03a0();
  local_30 = (int)ROUND(fVar15);
  fVar15 = (float10)local_c4 * (float10)_DAT_005d44e1;
  FUN_005c03a0();
  local_3c = (int)ROUND(fVar16);
  fVar16 = (float10)local_c0 * (float10)_DAT_005d44e1;
  iVar12 = 0;
  FUN_005c03a0();
  FUN_005c03a0();
  FUN_005c03a0();
  FUN_005c03a0();
  FUN_005c03a0();
  FUN_005c03a0();
  FUN_005c03a0();
  local_38 = (int)ROUND(fVar17);
  local_34 = (int)ROUND(fVar18);
  local_24 = (int)ROUND(fVar19);
  local_20 = (int)ROUND(fVar20);
  local_2c = (int)ROUND(fVar21);
  local_28 = (int)ROUND(fVar15);
  local_1c = (int)ROUND(fVar16);
  if (0 < extraout_ECX) {
    iVar10 = 0;
    do {
      iVar1 = *(int *)(param_1 + 0x178);
      lVar2 = (longlong)local_30 * (longlong)*(int *)(iVar1 + iVar10);
      lVar3 = (longlong)local_34 * (longlong)*(int *)(iVar1 + 4 + iVar10);
      lVar4 = (longlong)local_2c * (longlong)*(int *)(iVar1 + 8 + iVar10);
      lVar5 = (longlong)local_3c * (longlong)*(int *)(iVar1 + iVar10);
      lVar6 = (longlong)local_24 * (longlong)*(int *)(iVar1 + 4 + iVar10);
      lVar7 = (longlong)local_28 * (longlong)*(int *)(iVar1 + 8 + iVar10);
      local_40 = ((uint)lVar5 >> 0x10 | (int)((ulonglong)lVar5 >> 0x20) << 0x10) +
                 ((uint)lVar6 >> 0x10 | (int)((ulonglong)lVar6 >> 0x20) << 0x10) +
                 ((uint)lVar7 >> 0x10 | (int)((ulonglong)lVar7 >> 0x20) << 0x10);
      lVar5 = (longlong)local_38 * (longlong)*(int *)(iVar1 + iVar10);
      lVar6 = (longlong)local_20 * (longlong)*(int *)(iVar1 + 4 + iVar10);
      lVar7 = (longlong)local_1c * (longlong)*(int *)(iVar1 + 8 + iVar10);
      *(uint *)(iVar1 + iVar10) =
           ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
           ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10) +
           ((uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10);
      *(uint *)(iVar1 + 8 + iVar10) =
           ((uint)lVar7 >> 0x10 | (int)((ulonglong)lVar7 >> 0x20) << 0x10) +
           ((uint)lVar5 >> 0x10 | (int)((ulonglong)lVar5 >> 0x20) << 0x10) +
           ((uint)lVar6 >> 0x10 | (int)((ulonglong)lVar6 >> 0x20) << 0x10);
      *(int *)(iVar1 + 4 + iVar10) = local_40;
      iVar12 = iVar12 + 1;
      iVar10 = iVar10 + 0xc;
    } while (iVar12 < *(int *)(param_1 + 0x174));
  }
  piVar8 = (int *)(param_1 + 0x30);
  FUN_005b5620(local_140,&DAT_02c8af28,piVar8);
  FUN_005b5620(local_170,&DAT_02c8af28,param_2);
  FUN_005b5200(local_140,local_170);
  puVar11 = local_110;
  puVar13 = (uint *)&stack0xfffffe30;
  for (iVar12 = 0xc; iVar12 != 0; iVar12 = iVar12 + -1) {
    *puVar13 = *puVar11;
    puVar11 = puVar11 + (uint)bVar14 * -2 + 1;
    puVar13 = puVar13 + (uint)bVar14 * -2 + 1;
  }
  FUN_005b5dd0(&stack0xfffffe30);
  local_70 = local_94;
  aiStack_b4[(uint)bVar14 * -2 + 0x12] = aiStack_b4[(uint)bVar14 * -2 + 9];
  aiStack_b4[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x13] =
       aiStack_b4[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 10];
  if (piVar8 != aiStack_b4 + 0x11) {
    *piVar8 = local_70;
    *(uint *)(param_1 + 0x34) = local_6c;
    *(uint *)(param_1 + 0x38) = local_68;
  }
  iVar12 = 0;
  FUN_004088b0(param_1);
  if (0 < *(int *)(param_1 + 0x74c)) {
    piVar8 = (int *)(param_1 + 0x750);
    do {
      local_18 = piVar8;
      FUN_0045f700(&local_e0,piVar8);
      local_a0 = local_58;
      aiStack_b4[(uint)bVar14 * -2 + 6] = aiStack_b4[(uint)bVar14 * -2 + 0x18];
      aiStack_b4[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 7] =
           aiStack_b4[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x19];
      if (piVar8 != aiStack_b4 + 5) {
        *piVar8 = local_a0;
        piVar8[1] = local_9c;
        piVar8[2] = local_98;
      }
      FUN_00408b40(param_1,local_18);
      local_7c = local_64;
      aiStack_b4[(uint)bVar14 * -2 + 0xf] = aiStack_b4[(uint)bVar14 * -2 + 0x15];
      aiStack_b4[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x10] =
           aiStack_b4[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x16];
      local_18[0xb] = local_7c;
      local_18[0xc] = local_78;
      local_18[0xd] = local_74;
      iVar12 = iVar12 + 1;
      piVar8 = piVar8 + 0xac;
    } while (iVar12 < *(int *)(param_1 + 0x74c));
  }
  local_14 = 0;
  if (0 < *(int *)(param_1 + 0x28c)) {
    piVar8 = (int *)(param_1 + 0x290);
    do {
      FUN_0045f700(&local_e0,piVar8);
      local_88 = local_4c;
      aiStack_b4[(uint)bVar14 * -2 + 0xc] = aiStack_b4[(uint)bVar14 * -2 + 0x1b];
      aiStack_b4[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0xd] =
           aiStack_b4[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x1c];
      if (piVar8 != aiStack_b4 + 0xb) {
        *piVar8 = local_88;
        piVar8[1] = local_84;
        piVar8[2] = local_80;
      }
      piVar9 = piVar8 + 3;
      FUN_005b5760(local_1a0,&DAT_02c8af28,piVar9);
      FUN_005b5200(local_1a0,local_170);
      FUN_005b5930(local_170);
      aiStack_b4[2] = local_b8;
      aiStack_b4[(uint)bVar14 * -2 + 3] = aiStack_b4[(uint)bVar14 * -2];
      aiStack_b4[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 4] =
           aiStack_b4[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 1];
      if (piVar9 != aiStack_b4 + 2) {
        *piVar9 = aiStack_b4[2];
        piVar8[4] = aiStack_b4[3];
        piVar8[5] = local_a4;
      }
      piVar8 = piVar8 + 0x65;
      local_14 = local_14 + 1;
    } while (local_14 < *(int *)(param_1 + 0x28c));
  }
  return;
}
