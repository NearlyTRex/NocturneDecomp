// Name: shape_edittool.cpp_FUN_00473190
// Address: 00473190
// Address Range: [[00473190, 0047364a]]
// Convention: unknown
// Signature: void shape_edittool_cpp_FUN_00473190(undefined4 param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void shape_edittool_cpp_FUN_00473190(uint param_1,uint *param_2,uint *param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  float *pfVar3;
  uint *puVar4;
  uint *puVar5;
  byte bVar6;
  uint auStack_170 [12];
  uint auStack_140 [8];
  uint uStack_120;
  float *pfStack_11c;
  uint uStack_118;
  WatcomTypeInfo *pWStack_114;
  float afStack_110 [24];
  int iStack_b0;
  int iStack_ac;
  int iStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  int iStack_8c;
  int iStack_88;
  int iStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  uint uStack_20;
  uint uStack_1c;
  uint uStack_18;
  uint uStack_14;
  
  bVar6 = 0;
  pWStack_114 = &g_CVectorTypeInfo_005993b0;
  uStack_118 = 8;
  pfStack_11c = afStack_110;
  uStack_120 = 0x4731b9;
  __arrinit();
  pfVar3 = afStack_110;
  uVar1 = 0;
  do {
    uStack_1c = *param_3;
    iVar2 = uVar1 * 0xc;
    while( true ) {
      *(uint *)((int)afStack_110 + iVar2) = uStack_1c;
      if ((uVar1 & 2) == 0) {
        uStack_14 = param_3[1];
      }
      else {
        uStack_14 = param_2[1];
      }
      *(uint *)((int)afStack_110 + iVar2 + 4) = uStack_14;
      if ((uVar1 & 4) == 0) {
        uStack_18 = param_3[2];
      }
      else {
        uStack_18 = param_2[2];
      }
      uVar1 = uVar1 + 1;
      *(uint *)((int)afStack_110 + iVar2 + 8) = uStack_18;
      if (7 < (int)uVar1) {
        uStack_20 = 0;
        _DAT_01c00c70 = param_4;
        do {
          uVar1 = uStack_20 ^ 1;
          iStack_8c = (int)ROUND(*pfVar3 * _DAT_0059ca4c);
          iStack_88 = (int)ROUND(pfVar3[1] * _DAT_0059ca4c);
          iStack_84 = (int)ROUND(pfVar3[2] * _DAT_0059ca4c);
          pWStack_114 = (WatcomTypeInfo *)&iStack_8c;
          uStack_118 = 0;
          pfStack_11c = (float *)0x47327c;
          engine_matrix_c_transformToCache_FUN_004cd210();
          fStack_68 = afStack_110[uVar1 * 3] * 0.2f;
          fStack_64 = afStack_110[uVar1 * 3 + 1] * 0.2f;
          fStack_60 = afStack_110[uVar1 * 3 + 2] * 0.2f;
          fStack_38 = *pfVar3 * 3.0517585321376802e-05._0_4_;
          fStack_34 = pfVar3[1] * 3.0517585321376802e-05._0_4_;
          fStack_30 = pfVar3[2] * 3.0517585321376802e-05._0_4_;
          fStack_44 = *pfVar3 * 3.0517585321376802e-05._0_4_ + afStack_110[uVar1 * 3] * 0.2f;
          fStack_40 = pfVar3[1] * 3.0517585321376802e-05._0_4_ +
                      afStack_110[uVar1 * 3 + 1] * 0.2f;
          fStack_3c = fStack_30 + afStack_110[uVar1 * 3 + 2] * 0.2f;
          iStack_8c = (int)ROUND(fStack_44 * _DAT_0059ca4c);
          iStack_88 = (int)ROUND(fStack_40 * _DAT_0059ca4c);
          iStack_84 = (int)ROUND(fStack_3c * _DAT_0059ca4c);
          pWStack_114 = (WatcomTypeInfo *)&iStack_8c;
          uStack_118 = 1;
          pfStack_11c = (float *)0x47335b;
          engine_matrix_c_transformToCache_FUN_004cd210();
          puVar4 = &DAT_005c5044;
          puVar5 = auStack_140;
          for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
            *puVar5 = *puVar4;
            puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
            puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
          }
          puVar4 = &DAT_005c5014;
          puVar5 = auStack_170;
          for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
            *puVar5 = *puVar4;
            puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
            puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
          }
          engine_3d_c_clipAndDrawLine2D_FUN_00409290();
          uVar1 = uStack_20 ^ 2;
          iStack_b0 = (int)ROUND(*pfVar3 * _DAT_0059ca4c);
          iStack_ac = (int)ROUND(pfVar3[1] * _DAT_0059ca4c);
          iStack_a8 = (int)ROUND(pfVar3[2] * _DAT_0059ca4c);
          pWStack_114 = (WatcomTypeInfo *)&iStack_b0;
          uStack_118 = 0;
          pfStack_11c = (float *)0x4733ce;
          engine_matrix_c_transformToCache_FUN_004cd210();
          fStack_98 = afStack_110[uVar1 * 3] * 0.2f;
          fStack_94 = afStack_110[uVar1 * 3 + 1] * 0.2f;
          fStack_90 = afStack_110[uVar1 * 3 + 2] * 0.2f;
          fStack_74 = *pfVar3 * 3.0517585321376802e-05._0_4_;
          fStack_70 = pfVar3[1] * 3.0517585321376802e-05._0_4_;
          fStack_6c = pfVar3[2] * 3.0517585321376802e-05._0_4_;
          fStack_2c = *pfVar3 * 3.0517585321376802e-05._0_4_ + afStack_110[uVar1 * 3] * 0.2f;
          fStack_28 = pfVar3[1] * 3.0517585321376802e-05._0_4_ +
                      afStack_110[uVar1 * 3 + 1] * 0.2f;
          fStack_24 = fStack_6c + afStack_110[uVar1 * 3 + 2] * 0.2f;
          iStack_b0 = (int)ROUND(fStack_2c * _DAT_0059ca4c);
          iStack_ac = (int)ROUND(fStack_28 * _DAT_0059ca4c);
          iStack_a8 = (int)ROUND(fStack_24 * _DAT_0059ca4c);
          pWStack_114 = (WatcomTypeInfo *)&iStack_b0;
          uStack_118 = 1;
          pfStack_11c = (float *)0x47349b;
          engine_matrix_c_transformToCache_FUN_004cd210();
          puVar4 = &DAT_005c5044;
          puVar5 = auStack_140;
          for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
            *puVar5 = *puVar4;
            puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
            puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
          }
          puVar4 = &DAT_005c5014;
          puVar5 = auStack_170;
          for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
            *puVar5 = *puVar4;
            puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
            puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
          }
          engine_3d_c_clipAndDrawLine2D_FUN_00409290();
          uVar1 = uStack_20 ^ 4;
          iStack_50 = (int)ROUND(*pfVar3 * _DAT_0059ca4c);
          iStack_4c = (int)ROUND(pfVar3[1] * _DAT_0059ca4c);
          iStack_48 = (int)ROUND(pfVar3[2] * _DAT_0059ca4c);
          pWStack_114 = (WatcomTypeInfo *)&iStack_50;
          uStack_118 = 0;
          pfStack_11c = (float *)0x473512;
          engine_matrix_c_transformToCache_FUN_004cd210();
          fStack_80 = afStack_110[uVar1 * 3] * 0.2f;
          fStack_7c = afStack_110[uVar1 * 3 + 1] * 0.2f;
          fStack_78 = 0.2f * afStack_110[uVar1 * 3 + 2];
          fStack_a4 = *pfVar3 * 3.0517585321376802e-05._0_4_;
          fStack_a0 = pfVar3[1] * 3.0517585321376802e-05._0_4_;
          fStack_9c = 3.0517585321376802e-05._0_4_ * pfVar3[2];
          fStack_5c = *pfVar3 * 3.0517585321376802e-05._0_4_ + afStack_110[uVar1 * 3] * 0.2f;
          fStack_58 = pfVar3[1] * 3.0517585321376802e-05._0_4_ +
                      afStack_110[uVar1 * 3 + 1] * 0.2f;
          fStack_54 = fStack_9c + 0.2f * afStack_110[uVar1 * 3 + 2];
          iStack_50 = (int)ROUND(fStack_5c * _DAT_0059ca4c);
          iStack_4c = (int)ROUND(fStack_58 * _DAT_0059ca4c);
          iStack_48 = (int)ROUND(fStack_54 * _DAT_0059ca4c);
          pWStack_114 = (WatcomTypeInfo *)&iStack_50;
          uStack_118 = 1;
          pfStack_11c = (float *)0x4735d2;
          engine_matrix_c_transformToCache_FUN_004cd210();
          puVar4 = &DAT_005c5044;
          puVar5 = auStack_140;
          for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
            *puVar5 = *puVar4;
            puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
            puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
          }
          puVar4 = &DAT_005c5014;
          puVar5 = auStack_170;
          for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
            *puVar5 = *puVar4;
            puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
            puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
          }
          engine_3d_c_clipAndDrawLine2D_FUN_00409290();
          uStack_20 = uStack_20 + 1;
          pfVar3 = pfVar3 + 3;
        } while ((int)uStack_20 < 8);
        return;
      }
      if ((uVar1 & 1) == 0) break;
      uStack_1c = *param_2;
      iVar2 = iVar2 + 0xc;
    }
  } while( true );
}
