// Name: FUN_0043dad0
// Address: 0043dad0
// Address Range: [[0043dad0, 0043e10a]]
// Convention: unknown
// Signature: void FUN_0043dad0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0043dad0(int param_1)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint *puVar9;
  int iVar10;
  uint *puVar11;
  int iVar12;
  byte bVar13;
  float10 fVar14;
  float10 fVar15;
  float10 fVar16;
  ulonglong uVar17;
  int local_68;
  int local_60;
  float local_34;
  int local_2c;
  int local_28;
  float local_24;
  int local_20;
  int local_1c;
  int local_18;
  
  bVar13 = 0;
  FUN_00409fc0(param_1);
  FUN_00461eb0(DAT_005ae704,param_1 + 0x15c);
  while( true ) {
    fVar14 = (float10)1 / (float10)*(float *)(param_1 + 500);
    fVar15 = (float10)*(float *)(param_1 + 0x150) * fVar14;
    fVar14 = (float10)*(float *)(param_1 + 0x154) * fVar14;
    FUN_00563a30();
    iVar5 = FUN_00563a30();
    iVar6 = iVar5 + 1;
    iVar12 = (int)ROUND(fVar14);
    iVar7 = iVar12 + 1;
    *(int *)(param_1 + 0x1c724) = (int)ROUND(fVar15);
    *(int *)(param_1 + 0x1c728) = iVar12;
    *(int *)(param_1 + 0x1fc) = iVar6 * iVar7;
    if (iVar6 * iVar7 < 0x3e9) break;
    *(float *)(param_1 + 500) = *(float *)(param_1 + 500) * (float)_DAT_0057b4de;
  }
  fVar1 = *(float *)(param_1 + 0x154);
  fVar2 = *(float *)(param_1 + 0x150);
  iVar10 = 0;
  local_34 = *(float *)(param_1 + 0x154);
  local_20 = 0;
  if (0 < iVar7) {
    do {
      local_24 = -*(float *)(param_1 + 0x150) * (float)_DAT_0057b4e6;
      iVar8 = 0;
      if (0 < iVar6) {
        local_18 = local_20 * 0x74 + param_1 + 0x200;
        local_28 = local_20 - iVar6;
        do {
          *(uint *)(local_18 + 0x14) = 0;
          *(float *)(local_18 + 0xc) = local_24;
          *(float *)(local_18 + 0x10) = local_34;
          if (((((iVar10 == 0) && (*(int *)(param_1 + 0x178) != 0)) ||
               ((iVar10 == iVar12 && (*(int *)(param_1 + 0x184) != 0)))) ||
              ((iVar8 == 0 && (*(int *)(param_1 + 0x17c) != 0)))) ||
             ((iVar8 == iVar5 && (*(int *)(param_1 + 0x180) != 0)))) {
            *(uint *)(local_18 + 0x68) = 1;
          }
          else {
            *(uint *)(local_18 + 0x68) = 0;
          }
          *(uint *)(local_18 + 0x70) = 0;
          if ((iVar8 == 0) && (iVar10 == 0)) {
            *(uint *)(local_18 + 0x70) = 1;
          }
          if ((iVar8 == 0) && (iVar10 == iVar12)) {
            *(uint *)(local_18 + 0x70) = 1;
          }
          if ((iVar8 == iVar5) && (iVar10 == 0)) {
            *(uint *)(local_18 + 0x70) = 1;
          }
          if ((iVar8 == iVar5) && (iVar10 == iVar12)) {
            *(uint *)(local_18 + 0x70) = 1;
          }
          *(uint *)(local_18 + 0x44) = 0;
          if (0 < iVar10) {
            *(int *)(local_18 + 0x48 + *(int *)(local_18 + 0x44) * 4) = local_28;
            *(int *)(local_18 + 0x44) = *(int *)(local_18 + 0x44) + 1;
          }
          if (0 < iVar8) {
            *(int *)(local_18 + 0x48 + *(int *)(local_18 + 0x44) * 4) = local_20 + -1;
            *(int *)(local_18 + 0x44) = *(int *)(local_18 + 0x44) + 1;
          }
          if (iVar8 < iVar5) {
            *(int *)(local_18 + 0x48 + *(int *)(local_18 + 0x44) * 4) = local_20 + 1;
            *(int *)(local_18 + 0x44) = *(int *)(local_18 + 0x44) + 1;
          }
          fVar15 = (float10)_DAT_0057b4ee;
          fVar16 = (float10)_DAT_0057b4f6;
          fVar14 = (((float10)*(float *)(param_1 + 0x150) * (float10)_DAT_0057b4e6 +
                    (float10)*(float *)(local_18 + 0xc)) / (float10)*(float *)(param_1 + 0x150)) *
                   fVar15 * fVar16;
          iVar8 = FUN_00563a30();
          *(int *)(iVar8 + 0x18) = (int)ROUND(fVar14) + 0x20000;
          fVar16 = fVar16 * ((float10)1 -
                            (float10)*(float *)(iVar8 + 0x10) / (float10)*(float *)(param_1 + 0x154)
                            ) * fVar15;
          local_24 = local_24 + fVar2 / (float)iVar5;
          local_18 = local_18 + 0x74;
          uVar17 = FUN_00563a30();
          iVar8 = (int)((ulonglong)uVar17 >> 0x20);
          *(int *)((int)uVar17 + 0x1c) = (int)ROUND(fVar16) + 0x20000;
          local_28 = local_28 + 1;
          local_20 = local_20 + 1;
        } while (iVar8 < iVar6);
      }
      local_34 = local_34 - fVar1 / (float)iVar12;
      iVar10 = iVar10 + 1;
    } while (iVar10 < iVar7);
  }
  local_68 = 0;
  if (0 < *(int *)(param_1 + 0x1fc)) {
    local_60 = param_1 + 0x200;
    do {
      iVar12 = 0;
      if (0 < *(int *)(local_60 + 0x44)) {
        iVar5 = local_60;
        do {
          iVar6 = *(int *)(iVar5 + 0x48) * 0x74 + param_1 + 0x200;
          fVar1 = *(float *)(local_60 + 0xc) - *(float *)(iVar6 + 0xc);
          fVar2 = *(float *)(local_60 + 0x10) - *(float *)(iVar6 + 0x10);
          fVar4 = *(float *)(local_60 + 0x14) - *(float *)(iVar6 + 0x14);
          iVar12 = iVar12 + 1;
          *(float *)(iVar5 + 0x58) = SQRT(fVar4 * fVar4 + fVar1 * fVar1 + fVar2 * fVar2);
          iVar5 = iVar5 + 4;
        } while (iVar12 < *(int *)(local_60 + 0x44));
      }
      local_60 = local_60 + 0x74;
      local_68 = local_68 + 1;
    } while (local_68 < *(int *)(param_1 + 0x1fc));
  }
  iVar12 = 0;
  if (0 < *(int *)(param_1 + 0x1fc)) {
    puVar11 = (uint *)(param_1 + 0x20c);
    do {
      puVar9 = (uint *)(iVar12 * 0x74 + param_1 + 0x200);
      if (puVar9 != puVar11) {
        *puVar9 = *puVar11;
        puVar9[1] = puVar11[1];
        puVar9[2] = puVar11[2];
      }
      puVar9[0xd] = 0;
      iVar12 = iVar12 + 1;
      puVar9[0xc] = puVar9[0xd];
      puVar9[0xb] = puVar9[0xc];
      puVar11 = puVar11 + 0x1d;
    } while (iVar12 < *(int *)(param_1 + 0x1fc));
  }
  iVar12 = param_1 + 0x1f60c;
  iVar5 = param_1 + 0x4288c;
  local_2c = 0;
  if (0 < *(int *)(param_1 + 0x1c728)) {
    do {
      local_1c = 0;
      iVar6 = iVar12;
      iVar7 = iVar5;
      if (0 < *(int *)(param_1 + 0x1c724)) {
        do {
          *(uint *)(iVar6 + 0x14) = 0;
          *(uint *)(iVar6 + 4) = 3;
          uVar3 = *(uint *)(iVar6 + 0x14);
          *(uint *)(iVar6 + 0x10) = uVar3;
          *(uint *)(iVar6 + 0xc) = uVar3;
          *(uint *)(iVar6 + 8) = uVar3;
          *(uint *)(iVar7 + 4) = 3;
          *(uint *)(iVar7 + 0x14) = 0;
          uVar3 = *(uint *)(iVar7 + 0x14);
          *(uint *)(iVar7 + 0x10) = uVar3;
          *(uint *)(iVar7 + 0xc) = uVar3;
          *(uint *)(iVar7 + 8) = uVar3;
          iVar5 = local_1c + (*(int *)(param_1 + 0x1c724) + 1) * local_2c;
          *(int *)(iVar6 + 0x18) = iVar5;
          *(uint *)(iVar6 + 0x1c) = *(uint *)(iVar5 * 0x74 + 0x218 + param_1);
          iVar12 = iVar5 + 1;
          *(uint *)(iVar6 + 0x20) = *(uint *)(iVar5 * 0x74 + 0x21c + param_1);
          *(int *)(iVar6 + 0x24) = iVar12;
          *(uint *)(iVar6 + 0x28) = *(uint *)(iVar12 * 0x74 + 0x218 + param_1);
          *(uint *)(iVar6 + 0x2c) = *(uint *)(iVar12 * 0x74 + 0x21c + param_1);
          iVar12 = iVar12 + *(int *)(param_1 + 0x1c724) + 1;
          *(int *)(iVar6 + 0x30) = iVar12;
          iVar12 = iVar12 * 0x74;
          *(uint *)(iVar6 + 0x34) = *(uint *)(iVar12 + 0x218 + param_1);
          *(uint *)(iVar6 + 0x38) = *(uint *)(iVar12 + 0x21c + param_1);
          puVar9 = (uint *)(iVar7 + 0x1c + (uint)bVar13 * -8);
          puVar11 = (uint *)(iVar6 + 0x34 + (uint)bVar13 * -8);
          *(uint *)(iVar7 + 0x18) = *(uint *)(iVar6 + 0x30);
          *puVar9 = *puVar11;
          puVar9[(uint)bVar13 * -2 + 1] = puVar11[(uint)bVar13 * -2 + 1];
          puVar9 = (uint *)(iVar7 + 0x28 + (uint)bVar13 * -8);
          puVar11 = (uint *)(iVar6 + 0x28 + (uint)bVar13 * -8);
          *(uint *)(iVar7 + 0x24) = *(uint *)(iVar6 + 0x24);
          *puVar9 = *puVar11;
          puVar9[(uint)bVar13 * -2 + 1] = puVar11[(uint)bVar13 * -2 + 1];
          puVar9 = (uint *)(iVar7 + 0x34 + (uint)bVar13 * -8);
          puVar11 = (uint *)(iVar6 + 0x1c + (uint)bVar13 * -8);
          *(uint *)(iVar7 + 0x30) = *(uint *)(iVar6 + 0x18);
          *puVar9 = *puVar11;
          puVar9[(uint)bVar13 * -2 + 1] = puVar11[(uint)bVar13 * -2 + 1];
          *(uint *)(iVar6 + 0x4c) = 3;
          *(uint *)(iVar6 + 0x5c) = 0;
          uVar3 = *(uint *)(iVar6 + 0x5c);
          *(uint *)(iVar6 + 0x58) = uVar3;
          *(uint *)(iVar6 + 0x54) = uVar3;
          *(uint *)(iVar6 + 0x50) = uVar3;
          *(uint *)(iVar7 + 0x4c) = 3;
          *(uint *)(iVar7 + 0x5c) = 0;
          uVar3 = *(uint *)(iVar7 + 0x5c);
          *(uint *)(iVar7 + 0x58) = uVar3;
          *(uint *)(iVar7 + 0x54) = uVar3;
          *(uint *)(iVar7 + 0x50) = uVar3;
          iVar12 = local_1c + (*(int *)(param_1 + 0x1c724) + 1) * local_2c;
          *(int *)(iVar6 + 0x60) = iVar12;
          *(uint *)(iVar6 + 100) = *(uint *)(iVar12 * 0x74 + 0x218 + param_1);
          *(uint *)(iVar6 + 0x68) = *(uint *)(iVar12 * 0x74 + 0x21c + param_1);
          iVar12 = iVar12 + *(int *)(param_1 + 0x1c724) + 2;
          *(int *)(iVar6 + 0x6c) = iVar12;
          *(uint *)(iVar6 + 0x70) = *(uint *)(iVar12 * 0x74 + 0x218 + param_1);
          *(uint *)(iVar6 + 0x74) = *(uint *)(iVar12 * 0x74 + 0x21c + param_1);
          *(int *)(iVar6 + 0x78) = iVar12 + -1;
          iVar12 = (iVar12 + -1) * 0x74;
          *(uint *)(iVar6 + 0x7c) = *(uint *)(iVar12 + 0x218 + param_1);
          *(uint *)(iVar6 + 0x80) = *(uint *)(iVar12 + 0x21c + param_1);
          puVar9 = (uint *)(iVar7 + 100 + (uint)bVar13 * -8);
          puVar11 = (uint *)(iVar6 + 0x7c + (uint)bVar13 * -8);
          *(uint *)(iVar7 + 0x60) = *(uint *)(iVar6 + 0x78);
          *puVar9 = *puVar11;
          puVar9[(uint)bVar13 * -2 + 1] = puVar11[(uint)bVar13 * -2 + 1];
          puVar9 = (uint *)(iVar7 + 0x70 + (uint)bVar13 * -8);
          puVar11 = (uint *)(iVar6 + 0x70 + (uint)bVar13 * -8);
          *(uint *)(iVar7 + 0x6c) = *(uint *)(iVar6 + 0x6c);
          *puVar9 = *puVar11;
          puVar9[(uint)bVar13 * -2 + 1] = puVar11[(uint)bVar13 * -2 + 1];
          iVar12 = iVar6 + 0x90;
          iVar5 = iVar7 + 0x90;
          puVar9 = (uint *)(iVar7 + 0x7c + (uint)bVar13 * -8);
          puVar11 = (uint *)(iVar6 + 100 + (uint)bVar13 * -8);
          *(uint *)(iVar7 + 0x78) = *(uint *)(iVar6 + 0x60);
          *puVar9 = *puVar11;
          puVar9[(uint)bVar13 * -2 + 1] = puVar11[(uint)bVar13 * -2 + 1];
          local_1c = local_1c + 1;
          iVar6 = iVar12;
          iVar7 = iVar5;
        } while (local_1c < *(int *)(param_1 + 0x1c724));
      }
      local_2c = local_2c + 1;
    } while (local_2c < *(int *)(param_1 + 0x1c728));
  }
  FUN_0043e110(param_1);
  *(uint *)(param_1 + 0xfc) = (uint)(*(int *)(param_1 + 0x174) < 0xfde9);
  return;
}
