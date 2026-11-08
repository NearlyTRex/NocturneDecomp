// Name: FUN_004464c0
// Address: 004464c0
// Address Range: [[004464c0, 00446b48]]
// Convention: unknown
// Signature: void FUN_004464c0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004464c0(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  uint *puVar6;
  int iVar7;
  byte bVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  ulonglong uVar12;
  float afStackY_1084 [1015];
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_7c;
  int iStack_78;
  int iStack_74;
  int iStack_70;
  int iStack_6c;
  int iStack_68;
  float fStack_64;
  int iStack_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  float fStack_40;
  int iStack_3c;
  int iStack_38;
  float *pfStack_34;
  float fStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  
  bVar8 = 0;
  FUN_00408890(param_1);
  FUN_0046e5e0(DAT_005f2afc,param_1 + 0x164);
  while( true ) {
    fVar9 = (float10)1 / (float10)*(float *)(param_1 + 0x1fc);
    fVar10 = (float10)*(float *)(param_1 + 0x158) * fVar9;
    fVar9 = (float10)*(float *)(param_1 + 0x15c) * fVar9;
    FUN_005a3120();
    iStack_1c = (int)ROUND(fVar10);
    iStack_18 = FUN_005a3120();
    iVar3 = (int)ROUND(fVar9);
    iStack_3c = iStack_18 + 1;
    iStack_70 = iVar3 + 1;
    *(int *)(param_1 + 0x1c72c) = iStack_1c;
    *(int *)(param_1 + 0x1c730) = iVar3;
    iVar2 = (iStack_18 + 1) * iStack_70;
    *(int *)(param_1 + 0x204) = iVar2;
    if (iVar2 < 0x3e9) break;
    *(float *)(param_1 + 0x1fc) = *(float *)(param_1 + 0x1fc) * (float)_DAT_005b9a49;
    iStack_18 = iVar3;
  }
  iVar2 = 0;
  iStack_28 = 0;
  fStack_40 = *(float *)(param_1 + 0x15c);
  fStack_7c = *(float *)(param_1 + 0x15c) / (float)iVar3;
  fStack_64 = *(float *)(param_1 + 0x158) / (float)iStack_18;
  if (0 < iStack_70) {
    iStack_5c = iStack_18;
    iStack_60 = iVar3;
    iStack_4c = iStack_18;
    iStack_58 = iStack_18;
    iStack_54 = iVar3;
    iStack_68 = iStack_18;
    iStack_50 = iVar3;
    iStack_78 = param_1 + 0x208;
    do {
      iVar3 = 0;
      fStack_30 = -*(float *)(param_1 + 0x158) * (float)_DAT_005b9a51;
      if (0 < iStack_3c) {
        iStack_20 = iStack_28 * 0x74 + iStack_78;
        iStack_2c = iStack_28 - iStack_3c;
        do {
          *(uint *)(iStack_20 + 0x14) = 0;
          *(float *)(iStack_20 + 0xc) = fStack_30;
          *(float *)(iStack_20 + 0x10) = fStack_40;
          if (((((iVar2 == 0) && (*(int *)(param_1 + 0x180) != 0)) ||
               ((iVar2 == iStack_50 && (*(int *)(param_1 + 0x18c) != 0)))) ||
              ((iVar3 == 0 && (*(int *)(param_1 + 0x184) != 0)))) ||
             ((iVar3 == iStack_68 && (*(int *)(param_1 + 0x188) != 0)))) {
            *(uint *)(iStack_20 + 0x68) = 1;
          }
          else {
            *(uint *)(iStack_20 + 0x68) = 0;
          }
          *(uint *)(iStack_20 + 0x70) = 0;
          if ((iVar3 == 0) && (iVar2 == 0)) {
            *(uint *)(iStack_20 + 0x70) = 1;
          }
          if ((iVar3 == 0) && (iVar2 == iStack_54)) {
            *(uint *)(iStack_20 + 0x70) = 1;
          }
          if ((iVar3 == iStack_58) && (iVar2 == 0)) {
            *(uint *)(iStack_20 + 0x70) = 1;
          }
          if ((iVar3 == iStack_4c) && (iVar2 == iStack_60)) {
            *(uint *)(iStack_20 + 0x70) = 1;
          }
          *(uint *)(iStack_20 + 0x44) = 0;
          if (0 < iVar2) {
            *(int *)(iStack_20 + 0x48 + *(int *)(iStack_20 + 0x44) * 4) = iStack_2c;
            *(int *)(iStack_20 + 0x44) = *(int *)(iStack_20 + 0x44) + 1;
          }
          if (0 < iVar3) {
            *(int *)(iStack_20 + 0x48 + *(int *)(iStack_20 + 0x44) * 4) = iStack_28 + -1;
            *(int *)(iStack_20 + 0x44) = *(int *)(iStack_20 + 0x44) + 1;
          }
          if (iVar3 < iStack_5c) {
            *(int *)(iStack_20 + 0x48 + *(int *)(iStack_20 + 0x44) * 4) = iStack_28 + 1;
            *(int *)(iStack_20 + 0x44) = *(int *)(iStack_20 + 0x44) + 1;
          }
          fVar10 = (float10)_DAT_005b9a59;
          fVar11 = (float10)_DAT_005b9a61;
          fVar9 = (((float10)*(float *)(param_1 + 0x158) * (float10)_DAT_005b9a51 +
                   (float10)*(float *)(iStack_20 + 0xc)) / (float10)*(float *)(param_1 + 0x158)) *
                  fVar10 * fVar11;
          iVar3 = FUN_005a3120();
          iStack_1c = (int)ROUND(fVar9);
          *(int *)(iVar3 + 0x18) = iStack_1c + 0x20000;
          fVar11 = fVar11 * ((float10)1 -
                            (float10)*(float *)(iVar3 + 0x10) / (float10)*(float *)(param_1 + 0x15c)
                            ) * fVar10;
          fStack_30 = fStack_30 + fStack_64;
          iVar7 = iStack_20 + 0x74;
          uVar12 = FUN_005a3120();
          iVar3 = (int)((ulonglong)uVar12 >> 0x20);
          iStack_1c = (int)ROUND(fVar11);
          iStack_20 = iVar7;
          *(int *)((int)uVar12 + 0x1c) = (int)ROUND(fVar11) + 0x20000;
          iStack_2c = iStack_2c + 1;
          iStack_28 = iStack_28 + 1;
        } while (iVar3 < iStack_3c);
      }
      iVar2 = iVar2 + 1;
      fStack_40 = fStack_40 - fStack_7c;
    } while (iVar2 < iStack_70);
  }
  iStack_74 = 0;
  if (0 < *(int *)(param_1 + 0x204)) {
    iStack_6c = param_1 + 0x208;
    iStack_48 = param_1 + 0x208;
    do {
      iVar3 = 0;
      iStack_44 = iStack_6c;
      if (0 < *(int *)(iStack_6c + 0x44)) {
        pfStack_34 = (float *)(iStack_6c + 0xc);
        iVar2 = iStack_6c;
        do {
          iVar7 = *(int *)(iVar2 + 0x48) * 0x74 + iStack_48;
          fStack_9c = *pfStack_34 - *(float *)(iVar7 + 0xc);
          fStack_98 = pfStack_34[1] - *(float *)(iVar7 + 0x10);
          fStack_94 = pfStack_34[2] - *(float *)(iVar7 + 0x14);
          fStack_90 = fStack_9c;
          *(uint *)((int)&stack0xffffff74 + (uint)bVar8 * -8) =
               *(uint *)((int)&stack0xffffff68 + (uint)bVar8 * -8);
          *(uint *)((int)&stack0xffffff78 + (uint)bVar8 * -8 + (uint)bVar8 * -8) =
               *(uint *)((int)&stack0xffffff6c + (uint)bVar8 * -8 + (uint)bVar8 * -8);
          fStack_a0 = fStack_88 * fStack_88 + fStack_90 * fStack_90 + fStack_8c * fStack_8c;
          iVar3 = iVar3 + 1;
          *(float *)(iVar2 + 0x58) = SQRT(fStack_a0);
          iVar2 = iVar2 + 4;
        } while (iVar3 < *(int *)(iStack_44 + 0x44));
      }
      iStack_74 = iStack_74 + 1;
      iStack_6c = iStack_6c + 0x74;
    } while (iStack_74 < *(int *)(param_1 + 0x204));
  }
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x204)) {
    puVar6 = (uint *)(param_1 + 0x214);
    do {
      puVar4 = (uint *)(iVar3 * 0x74 + param_1 + 0x208);
      if (puVar4 != puVar6) {
        *puVar4 = *puVar6;
        puVar4[1] = puVar6[1];
        puVar4[2] = puVar6[2];
      }
      puVar4[0xd] = 0;
      iVar3 = iVar3 + 1;
      puVar4[0xc] = puVar4[0xd];
      puVar4[0xb] = puVar4[0xc];
      puVar6 = puVar6 + 0x1d;
    } while (iVar3 < *(int *)(param_1 + 0x204));
  }
  iVar3 = param_1 + 0x1f614;
  iVar2 = param_1 + 0x42894;
  iStack_38 = 0;
  if (0 < *(int *)(param_1 + 0x1c730)) {
    do {
      iStack_24 = 0;
      if (0 < *(int *)(param_1 + 0x1c72c)) {
        do {
          *(uint *)(iVar3 + 0x14) = 0;
          *(uint *)(iVar3 + 4) = 3;
          uVar1 = *(uint *)(iVar3 + 0x14);
          *(uint *)(iVar3 + 0x10) = uVar1;
          *(uint *)(iVar3 + 0xc) = uVar1;
          *(uint *)(iVar3 + 8) = uVar1;
          *(uint *)(iVar2 + 4) = 3;
          *(uint *)(iVar2 + 0x14) = 0;
          uVar1 = *(uint *)(iVar2 + 0x14);
          *(uint *)(iVar2 + 0x10) = uVar1;
          *(uint *)(iVar2 + 0xc) = uVar1;
          *(uint *)(iVar2 + 8) = uVar1;
          iVar5 = iStack_24 + (*(int *)(param_1 + 0x1c72c) + 1) * iStack_38;
          *(int *)(iVar3 + 0x18) = iVar5;
          *(uint *)(iVar3 + 0x1c) = *(uint *)(iVar5 * 0x74 + 0x220 + param_1);
          iVar7 = iVar5 + 1;
          *(uint *)(iVar3 + 0x20) = *(uint *)(iVar5 * 0x74 + 0x224 + param_1);
          *(int *)(iVar3 + 0x24) = iVar7;
          *(uint *)(iVar3 + 0x28) = *(uint *)(iVar7 * 0x74 + 0x220 + param_1);
          *(uint *)(iVar3 + 0x2c) = *(uint *)(iVar7 * 0x74 + 0x224 + param_1);
          iVar7 = iVar7 + *(int *)(param_1 + 0x1c72c) + 1;
          *(int *)(iVar3 + 0x30) = iVar7;
          iVar7 = iVar7 * 0x74;
          *(uint *)(iVar3 + 0x34) = *(uint *)(iVar7 + 0x220 + param_1);
          *(uint *)(iVar3 + 0x38) = *(uint *)(iVar7 + 0x224 + param_1);
          puVar4 = (uint *)(iVar2 + 0x1c + (uint)bVar8 * -8);
          puVar6 = (uint *)(iVar3 + 0x34 + (uint)bVar8 * -8);
          *(uint *)(iVar2 + 0x18) = *(uint *)(iVar3 + 0x30);
          *puVar4 = *puVar6;
          puVar4[(uint)bVar8 * -2 + 1] = puVar6[(uint)bVar8 * -2 + 1];
          puVar4 = (uint *)(iVar2 + 0x28 + (uint)bVar8 * -8);
          puVar6 = (uint *)(iVar3 + 0x28 + (uint)bVar8 * -8);
          *(uint *)(iVar2 + 0x24) = *(uint *)(iVar3 + 0x24);
          *puVar4 = *puVar6;
          puVar4[(uint)bVar8 * -2 + 1] = puVar6[(uint)bVar8 * -2 + 1];
          puVar4 = (uint *)(iVar2 + 0x34 + (uint)bVar8 * -8);
          puVar6 = (uint *)(iVar3 + 0x1c + (uint)bVar8 * -8);
          *(uint *)(iVar2 + 0x30) = *(uint *)(iVar3 + 0x18);
          *puVar4 = *puVar6;
          puVar4[(uint)bVar8 * -2 + 1] = puVar6[(uint)bVar8 * -2 + 1];
          *(uint *)(iVar3 + 0x4c) = 3;
          *(uint *)(iVar3 + 0x5c) = 0;
          uVar1 = *(uint *)(iVar3 + 0x5c);
          *(uint *)(iVar3 + 0x58) = uVar1;
          *(uint *)(iVar3 + 0x54) = uVar1;
          *(uint *)(iVar3 + 0x50) = uVar1;
          *(uint *)(iVar2 + 0x4c) = 3;
          *(uint *)(iVar2 + 0x5c) = 0;
          uVar1 = *(uint *)(iVar2 + 0x5c);
          *(uint *)(iVar2 + 0x58) = uVar1;
          *(uint *)(iVar2 + 0x54) = uVar1;
          *(uint *)(iVar2 + 0x50) = uVar1;
          iVar7 = (*(int *)(param_1 + 0x1c72c) + 1) * iStack_38 + iStack_24;
          *(int *)(iVar3 + 0x60) = iVar7;
          *(uint *)(iVar3 + 100) = *(uint *)(iVar7 * 0x74 + 0x220 + param_1);
          *(uint *)(iVar3 + 0x68) = *(uint *)(iVar7 * 0x74 + 0x224 + param_1);
          iVar7 = iVar7 + *(int *)(param_1 + 0x1c72c) + 2;
          *(int *)(iVar3 + 0x6c) = iVar7;
          *(uint *)(iVar3 + 0x70) = *(uint *)(iVar7 * 0x74 + 0x220 + param_1);
          *(uint *)(iVar3 + 0x74) = *(uint *)(iVar7 * 0x74 + 0x224 + param_1);
          *(int *)(iVar3 + 0x78) = iVar7 + -1;
          iVar7 = (iVar7 + -1) * 0x74;
          *(uint *)(iVar3 + 0x7c) = *(uint *)(iVar7 + 0x220 + param_1);
          *(uint *)(iVar3 + 0x80) = *(uint *)(iVar7 + 0x224 + param_1);
          puVar4 = (uint *)(iVar2 + 100 + (uint)bVar8 * -8);
          puVar6 = (uint *)(iVar3 + 0x7c + (uint)bVar8 * -8);
          *(uint *)(iVar2 + 0x60) = *(uint *)(iVar3 + 0x78);
          *puVar4 = *puVar6;
          puVar4[(uint)bVar8 * -2 + 1] = puVar6[(uint)bVar8 * -2 + 1];
          puVar4 = (uint *)(iVar2 + 0x70 + (uint)bVar8 * -8);
          puVar6 = (uint *)(iVar3 + 0x70 + (uint)bVar8 * -8);
          *(uint *)(iVar2 + 0x6c) = *(uint *)(iVar3 + 0x6c);
          *puVar4 = *puVar6;
          puVar4[(uint)bVar8 * -2 + 1] = puVar6[(uint)bVar8 * -2 + 1];
          puVar4 = (uint *)(iVar2 + 0x7c + (uint)bVar8 * -8);
          puVar6 = (uint *)(iVar3 + 100 + (uint)bVar8 * -8);
          *(uint *)(iVar2 + 0x78) = *(uint *)(iVar3 + 0x60);
          *puVar4 = *puVar6;
          puVar4[(uint)bVar8 * -2 + 1] = puVar6[(uint)bVar8 * -2 + 1];
          iVar3 = iVar3 + 0x90;
          iVar2 = iVar2 + 0x90;
          iStack_24 = iStack_24 + 1;
        } while (iStack_24 < *(int *)(param_1 + 0x1c72c));
      }
      iStack_38 = iStack_38 + 1;
    } while (iStack_38 < *(int *)(param_1 + 0x1c730));
  }
  FUN_00446b50(param_1);
  *(uint *)(param_1 + 0xfc) = (uint)(*(int *)(param_1 + 0x17c) < 0xfde9);
  return;
}
