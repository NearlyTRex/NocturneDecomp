// Name: FUN_00417730
// Address: 00417730
// Address Range: [[00417730, 00417abb]]
// Convention: unknown
// Signature: void FUN_00417730(int param_1,int *param_2,int *param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00417730(int param_1,int *param_2,int *param_3)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  int *piVar4;
  int extraout_EDX;
  int iVar5;
  int iVar6;
  int iVar7;
  byte bVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  float10 fVar14;
  float10 fVar15;
  int aiStackY_106c [1001];
  int local_c0;
  int local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_90;
  float local_8c;
  uint local_88;
  int local_84;
  int aiStack_80 [8];
  int local_60;
  int local_5c;
  int local_58;
  float local_54;
  float local_50;
  uint local_4c;
  int local_48;
  int local_44;
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
  
  bVar8 = 0;
  local_44 = 0x7fffffff;
  local_48 = 0;
  do {
    local_bc = local_48;
    local_c0 = 0;
    do {
      local_18 = local_bc;
      local_54 = (float)local_c0 * (float)_DAT_005790ca * (float)_DAT_005790d2;
      local_50 = (float)local_bc * (float)_DAT_005790ca * (float)_DAT_005790d2;
      local_4c = 0;
      FUN_0044d7a0(&local_b8,&local_54);
      fVar9 = (float10)local_b8 * (float10)_DAT_005790da;
      fVar10 = (float10)local_b4 * (float10)_DAT_005790da;
      fVar11 = (float10)local_b0 * (float10)_DAT_005790da;
      fVar12 = (float10)local_ac * (float10)_DAT_005790da;
      fVar13 = (float10)local_a8 * (float10)_DAT_005790da;
      fVar14 = (float10)local_a4 * (float10)_DAT_005790da;
      fVar15 = (float10)local_a0 * (float10)_DAT_005790da;
      FUN_00563a30();
      local_28 = (int)ROUND(fVar9);
      fVar9 = (float10)local_9c * (float10)_DAT_005790da;
      FUN_00563a30();
      local_24 = (int)ROUND(fVar10);
      fVar10 = (float10)local_98 * (float10)_DAT_005790da;
      local_58 = 0x7fffffff;
      local_5c = 0x7fffffff;
      local_60 = 0x7fffffff;
      aiStack_80[4] = -0x7fffffff;
      aiStack_80[3] = -0x7fffffff;
      aiStack_80[2] = -0x7fffffff;
      iVar7 = 0;
      FUN_00563a30();
      FUN_00563a30();
      FUN_00563a30();
      FUN_00563a30();
      FUN_00563a30();
      FUN_00563a30();
      FUN_00563a30();
      local_3c = (int)ROUND(fVar11);
      local_20 = (int)ROUND(fVar12);
      local_34 = (int)ROUND(fVar13);
      local_2c = (int)ROUND(fVar14);
      local_30 = (int)ROUND(fVar15);
      local_38 = (int)ROUND(fVar9);
      local_40 = (int)ROUND(fVar10);
      if (0 < extraout_EDX) {
        local_1c = 0;
        do {
          piVar4 = (int *)(*(int *)(param_1 + 0x170) + local_1c);
          lVar1 = (longlong)(int)ROUND(fVar12) * (longlong)piVar4[1];
          lVar2 = (longlong)(int)ROUND(fVar15) * (longlong)piVar4[2];
          iVar5 = ((uint)((longlong)local_28 * (longlong)*piVar4) >> 0x10 |
                  (int)((ulonglong)((longlong)local_28 * (longlong)*piVar4) >> 0x20) << 0x10) +
                  ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
                  ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
          lVar1 = (longlong)(int)ROUND(fVar13) * (longlong)piVar4[1];
          lVar2 = (longlong)(int)ROUND(fVar9) * (longlong)piVar4[2];
          iVar6 = ((uint)((longlong)local_24 * (longlong)*piVar4) >> 0x10 |
                  (int)((ulonglong)((longlong)local_24 * (longlong)*piVar4) >> 0x20) << 0x10) +
                  ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
                  ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
          lVar1 = (longlong)(int)ROUND(fVar11) * (longlong)*piVar4;
          lVar2 = (longlong)(int)ROUND(fVar14) * (longlong)piVar4[1];
          local_18 = ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
                     ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
          lVar1 = (longlong)(int)ROUND(fVar10) * (longlong)piVar4[2];
          iVar3 = ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) + local_18;
          if (iVar5 < local_60) {
            local_60 = iVar5;
          }
          if (aiStack_80[2] < iVar5) {
            aiStack_80[2] = iVar5;
          }
          if (iVar6 < local_5c) {
            local_5c = iVar6;
          }
          if (aiStack_80[3] < iVar6) {
            aiStack_80[3] = iVar6;
          }
          if (iVar3 < local_58) {
            local_58 = iVar3;
          }
          if (aiStack_80[4] < iVar3) {
            aiStack_80[4] = iVar3;
          }
          iVar7 = iVar7 + 1;
          local_1c = local_1c + 0xc;
        } while (iVar7 < *(int *)(param_1 + 0x16c));
      }
      iVar7 = aiStack_80[2] - local_60;
      if (aiStack_80[2] - local_60 < aiStack_80[3] - local_5c) {
        iVar7 = aiStack_80[3] - local_5c;
      }
      if (iVar7 < local_44) {
        local_84 = local_60;
        aiStack_80[(uint)bVar8 * -2] = aiStack_80[(uint)bVar8 * -2 + 9];
        aiStack_80[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
             aiStack_80[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 10];
        local_44 = iVar7;
        aiStack_80[5] = aiStack_80[2];
        aiStack_80[(uint)bVar8 * -2 + 6] = aiStack_80[(uint)bVar8 * -2 + 3];
        aiStack_80[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 7] =
             aiStack_80[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4];
        if (&local_90 != &local_54) {
          local_90 = local_54;
          local_8c = local_50;
          local_88 = local_4c;
        }
      }
      local_c0 = local_c0 + 2;
    } while (local_c0 != 0x18);
    local_48 = local_48 + 2;
  } while (local_48 != 0x18);
  *param_2 = local_84;
  param_2[(uint)bVar8 * -2 + 1] = aiStack_80[(uint)bVar8 * -2];
  (param_2 + (uint)bVar8 * -2 + 1)[(uint)bVar8 * -2 + 1] =
       aiStack_80[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
  *param_3 = aiStack_80[5];
  param_3[(uint)bVar8 * -2 + 1] = aiStack_80[(uint)bVar8 * -2 + 6];
  (param_3 + (uint)bVar8 * -2 + 1)[(uint)bVar8 * -2 + 1] =
       aiStack_80[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 7];
  FUN_00417320(param_1,&local_90);
  return;
}
