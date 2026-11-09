// Name: core_curtain.cpp_FUN_0044a380
// Address: 0044a380
// Address Range: [[0044a380, 0044aa08]]
// Convention: unknown
// Signature: void core_curtain_cpp_FUN_0044a380(CDemonActor *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_curtain_cpp_FUN_0044a380(CDemonActor *param_1)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  uint *puVar5;
  byte *puVar6;
  int iVar7;
  int iVar8;
  byte *puVar9;
  byte bVar10;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  ulonglong uVar14;
  float afStackY_1084 [1015];
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_7c;
  byte *puStack_78;
  int iStack_74;
  int iStack_70;
  byte *puStack_6c;
  int iStack_68;
  float fStack_64;
  int iStack_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  byte *puStack_48;
  byte *puStack_44;
  float fStack_40;
  int iStack_3c;
  int iStack_38;
  float *pfStack_34;
  float fStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  byte *puStack_20;
  int iStack_1c;
  int iStack_18;
  
  bVar10 = 0;
  core_actor_cpp_FUN_00408850(param_1);
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00484f00
            (DAT_00612560,(SMRGLTextureBasic *)&param_1[1].field_0xc);
  while( true ) {
    fVar11 = (float10)1 / (float10)*(float *)&param_1[1].field_0xa4;
    fVar12 = (float10)*(float *)(param_1 + 1) * fVar11;
    fVar11 = (float10)*(float *)&param_1[1].field_0x4 * fVar11;
    round();
    iStack_1c = (int)ROUND(fVar12);
    iStack_18 = round();
    iVar4 = (int)ROUND(fVar11);
    iStack_3c = iStack_18 + 1;
    iStack_70 = iVar4 + 1;
    *(int *)&param_1[0x152].field_0xfc = iStack_1c;
    *(int *)&param_1[0x152].field_0x100 = iVar4;
    iVar2 = (iStack_18 + 1) * iStack_70;
    *(int *)&param_1[1].field_0xac = iVar2;
    if (iVar2 < 0x3e9) break;
    *(float *)&param_1[1].field_0xa4 = *(float *)&param_1[1].field_0xa4 * (float)_DAT_005d73e2;
    iStack_18 = iVar4;
  }
  iVar2 = 0;
  iStack_28 = 0;
  fStack_40 = *(float *)&param_1[1].field_0x4;
  fStack_7c = *(float *)&param_1[1].field_0x4 / (float)iVar4;
  fStack_64 = *(float *)(param_1 + 1) / (float)iStack_18;
  if (0 < iStack_70) {
    iStack_5c = iStack_18;
    iStack_60 = iVar4;
    iStack_4c = iStack_18;
    iStack_58 = iStack_18;
    iStack_54 = iVar4;
    iStack_68 = iStack_18;
    iStack_50 = iVar4;
    puStack_78 = &param_1[1].field_0xb0;
    do {
      iVar4 = 0;
      fStack_30 = -*(float *)(param_1 + 1) * (float)_DAT_005d73ea;
      if (0 < iStack_3c) {
        puStack_20 = puStack_78 + iStack_28 * 0x74;
        iStack_2c = iStack_28 - iStack_3c;
        do {
          *(uint *)(puStack_20 + 0x14) = 0;
          *(float *)(puStack_20 + 0xc) = fStack_30;
          *(float *)(puStack_20 + 0x10) = fStack_40;
          if (((((iVar2 == 0) && (*(int *)&param_1[1].field_0x28 != 0)) ||
               ((iVar2 == iStack_50 && (*(int *)&param_1[1].field_0x34 != 0)))) ||
              ((iVar4 == 0 && (*(int *)&param_1[1].field_0x2c != 0)))) ||
             ((iVar4 == iStack_68 && (*(int *)&param_1[1].field_0x30 != 0)))) {
            *(uint *)(puStack_20 + 0x68) = 1;
          }
          else {
            *(uint *)(puStack_20 + 0x68) = 0;
          }
          *(uint *)(puStack_20 + 0x70) = 0;
          if ((iVar4 == 0) && (iVar2 == 0)) {
            *(uint *)(puStack_20 + 0x70) = 1;
          }
          if ((iVar4 == 0) && (iVar2 == iStack_54)) {
            *(uint *)(puStack_20 + 0x70) = 1;
          }
          if ((iVar4 == iStack_58) && (iVar2 == 0)) {
            *(uint *)(puStack_20 + 0x70) = 1;
          }
          if ((iVar4 == iStack_4c) && (iVar2 == iStack_60)) {
            *(uint *)(puStack_20 + 0x70) = 1;
          }
          *(uint *)(puStack_20 + 0x44) = 0;
          if (0 < iVar2) {
            *(int *)(puStack_20 + *(int *)(puStack_20 + 0x44) * 4 + 0x48) = iStack_2c;
            *(int *)(puStack_20 + 0x44) = *(int *)(puStack_20 + 0x44) + 1;
          }
          if (0 < iVar4) {
            *(int *)(puStack_20 + *(int *)(puStack_20 + 0x44) * 4 + 0x48) = iStack_28 + -1;
            *(int *)(puStack_20 + 0x44) = *(int *)(puStack_20 + 0x44) + 1;
          }
          if (iVar4 < iStack_5c) {
            *(int *)(puStack_20 + *(int *)(puStack_20 + 0x44) * 4 + 0x48) = iStack_28 + 1;
            *(int *)(puStack_20 + 0x44) = *(int *)(puStack_20 + 0x44) + 1;
          }
          fVar12 = (float10)_DAT_005d73f2;
          fVar13 = (float10)_DAT_005d73fa;
          fVar11 = (((float10)*(float *)(param_1 + 1) * (float10)_DAT_005d73ea +
                    (float10)*(float *)(puStack_20 + 0xc)) / (float10)*(float *)(param_1 + 1)) *
                   fVar12 * fVar13;
          iVar4 = round();
          iStack_1c = (int)ROUND(fVar11);
          *(int *)(iVar4 + 0x18) = iStack_1c + 0x20000;
          fVar13 = fVar13 * ((float10)1 -
                            (float10)*(float *)(iVar4 + 0x10) /
                            (float10)*(float *)&param_1[1].field_0x4) * fVar12;
          fStack_30 = fStack_30 + fStack_64;
          puVar9 = puStack_20 + 0x74;
          uVar14 = round();
          iVar4 = (int)((ulonglong)uVar14 >> 0x20);
          iStack_1c = (int)ROUND(fVar13);
          puStack_20 = puVar9;
          *(int *)((int)uVar14 + 0x1c) = (int)ROUND(fVar13) + 0x20000;
          iStack_2c = iStack_2c + 1;
          iStack_28 = iStack_28 + 1;
        } while (iVar4 < iStack_3c);
      }
      iVar2 = iVar2 + 1;
      fStack_40 = fStack_40 - fStack_7c;
    } while (iVar2 < iStack_70);
  }
  iStack_74 = 0;
  if (0 < *(int *)&param_1[1].field_0xac) {
    puStack_6c = &param_1[1].field_0xb0;
    puStack_48 = &param_1[1].field_0xb0;
    do {
      iVar4 = 0;
      puStack_44 = puStack_6c;
      if (0 < *(int *)(puStack_6c + 0x44)) {
        pfStack_34 = (float *)(puStack_6c + 0xc);
        puVar9 = puStack_6c;
        do {
          iVar2 = *(int *)(puVar9 + 0x48);
          fStack_9c = *pfStack_34 - *(float *)(puStack_48 + iVar2 * 0x74 + 0xc);
          fStack_98 = pfStack_34[1] - *(float *)(puStack_48 + iVar2 * 0x74 + 0x10);
          fStack_94 = pfStack_34[2] - *(float *)(puStack_48 + iVar2 * 0x74 + 0x14);
          fStack_90 = *pfStack_34 - *(float *)(puStack_48 + iVar2 * 0x74 + 0xc);
          *(uint *)((int)&stack0xffffff74 + (uint)bVar10 * -8) =
               *(uint *)((int)&stack0xffffff68 + (uint)bVar10 * -8);
          *(uint *)((int)&stack0xffffff78 + (uint)bVar10 * -8 + (uint)bVar10 * -8) =
               *(uint *)((int)&stack0xffffff6c + (uint)bVar10 * -8 + (uint)bVar10 * -8);
          fStack_a0 = fStack_88 * fStack_88 + fStack_90 * fStack_90 + fStack_8c * fStack_8c;
          iVar4 = iVar4 + 1;
          *(float *)(puVar9 + 0x58) = SQRT(fStack_a0);
          puVar9 = puVar9 + 4;
        } while (iVar4 < *(int *)(puStack_44 + 0x44));
      }
      iStack_74 = iStack_74 + 1;
      puStack_6c = puStack_6c + 0x74;
    } while (iStack_74 < *(int *)&param_1[1].field_0xac);
  }
  iVar4 = 0;
  if (0 < *(int *)&param_1[1].field_0xac) {
    puVar3 = (uint *)&param_1[1].field_0xbc;
    do {
      puVar5 = (uint *)(&param_1[1].field_0xb0 + iVar4 * 0x74);
      if (puVar5 != puVar3) {
        *puVar5 = *puVar3;
        puVar5[1] = puVar3[1];
        puVar5[2] = puVar3[2];
      }
      puVar5[0xd] = 0;
      iVar4 = iVar4 + 1;
      puVar5[0xc] = puVar5[0xd];
      puVar5[0xb] = puVar5[0xc];
      puVar3 = puVar3 + 0x1d;
    } while (iVar4 < *(int *)&param_1[1].field_0xac);
  }
  puVar9 = &param_1[0x175].field_0xdc;
  puVar6 = &param_1[0x318].field_0x54;
  iStack_38 = 0;
  if (0 < *(int *)&param_1[0x152].field_0x100) {
    do {
      iStack_24 = 0;
      if (0 < *(int *)&param_1[0x152].field_0xfc) {
        do {
          *(uint *)(puVar9 + 0x14) = 0;
          *(uint *)(puVar9 + 4) = 3;
          uVar1 = *(uint *)(puVar9 + 0x14);
          *(uint *)(puVar9 + 0x10) = uVar1;
          *(uint *)(puVar9 + 0xc) = uVar1;
          *(uint *)(puVar9 + 8) = uVar1;
          *(uint *)(puVar6 + 4) = 3;
          *(uint *)(puVar6 + 0x14) = 0;
          uVar1 = *(uint *)(puVar6 + 0x14);
          *(uint *)(puVar6 + 0x10) = uVar1;
          *(uint *)(puVar6 + 0xc) = uVar1;
          *(uint *)(puVar6 + 8) = uVar1;
          iVar2 = (*(int *)&param_1[0x152].field_0xfc + 1) * iStack_38;
          iVar7 = iStack_24 + iVar2;
          *(int *)(puVar9 + 0x18) = iVar7;
          *(uint *)(puVar9 + 0x1c) = *(uint *)(&param_1[1].field_0xc8 + iVar7 * 0x74);
          *(uint *)(puVar9 + 0x20) = *(uint *)(&param_1[1].field_0xcc + iVar7 * 0x74);
          *(int *)(puVar9 + 0x24) = iVar7 + 1;
          *(uint *)(puVar9 + 0x28) = *(uint *)(&param_1[1].field_0x13c + iVar7 * 0x74);
          *(uint *)(puVar9 + 0x2c) = *(uint *)(&param_1[1].field_0x140 + iVar7 * 0x74);
          iVar4 = *(int *)&param_1[0x152].field_0xfc;
          *(int *)(puVar9 + 0x30) = iVar7 + 1 + iVar4 + 1;
          iVar4 = iStack_24 * 0x74 + iVar2 * 0x74 + iVar4 * 0x74 + 0xe8;
          *(uint *)(puVar9 + 0x34) = *(uint *)(&param_1[2].field_0x58 + iVar4 + -0xe8);
          *(uint *)(puVar9 + 0x38) = *(uint *)(&param_1[2].field_0x5c + iVar4 + -0xe8);
          *(uint *)(puVar6 + 0x18) = *(uint *)(puVar9 + 0x30);
          *(uint *)(puVar6 + (uint)bVar10 * -8 + 0x1c) =
               *(uint *)(puVar9 + (uint)bVar10 * -8 + 0x34);
          *(uint *)((int)(puVar6 + (uint)bVar10 * -8 + 0x1c) + ((uint)bVar10 * -2 + 1) * 4) =
               *(uint *)
                ((int)(puVar9 + (uint)bVar10 * -8 + 0x34) + ((uint)bVar10 * -2 + 1) * 4);
          *(uint *)(puVar6 + 0x24) = *(uint *)(puVar9 + 0x24);
          *(uint *)(puVar6 + (uint)bVar10 * -8 + 0x28) =
               *(uint *)(puVar9 + (uint)bVar10 * -8 + 0x28);
          *(uint *)((int)(puVar6 + (uint)bVar10 * -8 + 0x28) + ((uint)bVar10 * -2 + 1) * 4) =
               *(uint *)
                ((int)(puVar9 + (uint)bVar10 * -8 + 0x28) + ((uint)bVar10 * -2 + 1) * 4);
          *(uint *)(puVar6 + 0x30) = *(uint *)(puVar9 + 0x18);
          *(uint *)(puVar6 + (uint)bVar10 * -8 + 0x34) =
               *(uint *)(puVar9 + (uint)bVar10 * -8 + 0x1c);
          *(uint *)((int)(puVar6 + (uint)bVar10 * -8 + 0x34) + ((uint)bVar10 * -2 + 1) * 4) =
               *(uint *)
                ((int)(puVar9 + (uint)bVar10 * -8 + 0x1c) + ((uint)bVar10 * -2 + 1) * 4);
          *(uint *)(puVar9 + 0x4c) = 3;
          *(uint *)(puVar9 + 0x5c) = 0;
          uVar1 = *(uint *)(puVar9 + 0x5c);
          *(uint *)(puVar9 + 0x58) = uVar1;
          *(uint *)(puVar9 + 0x54) = uVar1;
          *(uint *)(puVar9 + 0x50) = uVar1;
          *(uint *)(puVar6 + 0x4c) = 3;
          *(uint *)(puVar6 + 0x5c) = 0;
          uVar1 = *(uint *)(puVar6 + 0x5c);
          *(uint *)(puVar6 + 0x58) = uVar1;
          *(uint *)(puVar6 + 0x54) = uVar1;
          *(uint *)(puVar6 + 0x50) = uVar1;
          iVar7 = (*(int *)&param_1[0x152].field_0xfc + 1) * iStack_38;
          iVar8 = iVar7 + iStack_24;
          *(int *)(puVar9 + 0x60) = iVar8;
          *(uint *)(puVar9 + 100) = *(uint *)(&param_1[1].field_0xc8 + iVar8 * 0x74);
          *(uint *)(puVar9 + 0x68) = *(uint *)(&param_1[1].field_0xcc + iVar8 * 0x74);
          iVar4 = *(int *)&param_1[0x152].field_0xfc;
          iVar8 = iVar8 + iVar4 + 2;
          *(int *)(puVar9 + 0x6c) = iVar8;
          iVar2 = iVar7 * 0x74 + iStack_24 * 0x74 + iVar4 * 0x74 + 0xe8;
          *(uint *)(puVar9 + 0x70) = *(uint *)(&param_1[2].field_0x58 + iVar2 + -0xe8);
          *(uint *)(puVar9 + 0x74) = *(uint *)(&param_1[2].field_0x5c + iVar2 + -0xe8);
          *(int *)(puVar9 + 0x78) = iVar8 + -1;
          iVar4 = iVar7 * 0x74 + iStack_24 * 0x74 + iVar4 * 0x74;
          *(uint *)(puVar9 + 0x7c) = *(uint *)(&param_1[1].field_0x13c + iVar4);
          *(uint *)(puVar9 + 0x80) = *(uint *)(&param_1[1].field_0x140 + iVar4);
          *(uint *)(puVar6 + 0x60) = *(uint *)(puVar9 + 0x78);
          *(uint *)(puVar6 + (uint)bVar10 * -8 + 100) =
               *(uint *)(puVar9 + (uint)bVar10 * -8 + 0x7c);
          *(uint *)((int)(puVar6 + (uint)bVar10 * -8 + 100) + ((uint)bVar10 * -2 + 1) * 4) =
               *(uint *)
                ((int)(puVar9 + (uint)bVar10 * -8 + 0x7c) + ((uint)bVar10 * -2 + 1) * 4);
          *(uint *)(puVar6 + 0x6c) = *(uint *)(puVar9 + 0x6c);
          *(uint *)(puVar6 + (uint)bVar10 * -8 + 0x70) =
               *(uint *)(puVar9 + (uint)bVar10 * -8 + 0x70);
          *(uint *)((int)(puVar6 + (uint)bVar10 * -8 + 0x70) + ((uint)bVar10 * -2 + 1) * 4) =
               *(uint *)
                ((int)(puVar9 + (uint)bVar10 * -8 + 0x70) + ((uint)bVar10 * -2 + 1) * 4);
          *(uint *)(puVar6 + 0x78) = *(uint *)(puVar9 + 0x60);
          *(uint *)(puVar6 + (uint)bVar10 * -8 + 0x7c) =
               *(uint *)(puVar9 + (uint)bVar10 * -8 + 100);
          *(uint *)((int)(puVar6 + (uint)bVar10 * -8 + 0x7c) + ((uint)bVar10 * -2 + 1) * 4) =
               *(uint *)
                ((int)(puVar9 + (uint)bVar10 * -8 + 100) + ((uint)bVar10 * -2 + 1) * 4);
          puVar9 = puVar9 + 0x90;
          puVar6 = puVar6 + 0x90;
          iStack_24 = iStack_24 + 1;
        } while (iStack_24 < *(int *)&param_1[0x152].field_0xfc);
      }
      iStack_38 = iStack_38 + 1;
    } while (iStack_38 < *(int *)&param_1[0x152].field_0x100);
  }
  core_curtain_cpp_FUN_0044aa10(param_1);
  *(uint *)&param_1->field_0xfc = (uint)(*(int *)&param_1[1].field_0x24 < 0xfde9);
  return;
}
