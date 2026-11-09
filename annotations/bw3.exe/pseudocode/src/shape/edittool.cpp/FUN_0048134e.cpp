// Name: shape_edittool.cpp_FUN_0048134e
// Address: 0048134e
// Address Range: [[0048134e, 0048134f]]
// Convention: unknown
// Signature: void shape_edittool_cpp_FUN_0048134e(undefined4 param_1,int *param_2,int *param_3,int param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void shape_edittool_cpp_FUN_0048134e(uint param_1,int *param_2,int *param_3,int param_4)

{
  uint uVar1;
  float unaff_EBP;
  float *pfVar2;
  int iVar3;
  uint *puVar4;
  float unaff_EDI;
  uint *puVar5;
  float *pfVar6;
  byte bVar7;
  uint unaff_retaddr;
  float afStackY_10fc [989];
  byte *puStackY_188;
  float afStack_154 [16];
  float fStack_114;
  float afStack_110 [8];
  int iStack_f0;
  float fStack_ec;
  float afStack_e8 [6];
  float fStack_d0;
  float afStack_cc [5];
  float fStack_b8;
  float afStack_b4 [4];
  float fStack_a4;
  float fStack_98;
  float fStack_94;
  float afStack_90 [2];
  int iStack_88;
  float fStack_84;
  float afStack_80 [4];
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_38;
  float afStack_34 [3];
  float afStack_28 [2];
  uint uStack_20;
  int iStack_1c;
  int iStack_18;
  float fStack_14;
  
  bVar7 = 0;
  puStackY_188 = &stack0xfffffe84;
  afStackY_10fc[0x3dc] = 6.619151e-39;
  __arrinit();
  uVar1 = 0;
  do {
    iStack_1c = *param_3;
    iVar3 = uVar1 * 0xc;
    while( true ) {
      *(int *)(&stack0xfffffe84 + iVar3) = iStack_1c;
      if ((uVar1 & 2) == 0) {
        iStack_18 = param_3[1];
      }
      else {
        iStack_18 = param_2[1];
      }
      *(int *)(&stack0xfffffe88 + iVar3) = iStack_18;
      if ((uVar1 & 4) == 0) {
        fStack_14 = (float)param_3[2];
      }
      else {
        fStack_14 = (float)param_2[2];
      }
      uVar1 = uVar1 + 1;
      *(float *)((int)afStack_154 + iVar3 + -0x20) = fStack_14;
      if (7 < (int)uVar1) {
        iVar3 = param_4;
        if (_DAT_01c5baec != 0) {
          engine_mini3d_cpp_FUN_004f3520();
          iVar3 = _DAT_01c6b5c0;
        }
        _DAT_01c6b5c0 = iVar3;
        pfVar2 = (float *)&stack0xfffffe84;
        uStack_20 = 0;
        do {
          uVar1 = uStack_20 ^ 1;
          iVar3 = uVar1 * 0xc;
          fStack_98 = (float)(int)ROUND(*pfVar2 * _DAT_005deffc);
          fStack_94 = (float)(int)ROUND(pfVar2[1] * _DAT_005deffc);
          afStack_90[0] = (float)(int)ROUND(pfVar2[2] * _DAT_005deffc);
          puStackY_188 = (byte *)0x481492;
          engine_matrix_c_transformToCache_FUN_004e5540(0,(CVector3i *)&fStack_98);
          afStack_80[2] = *(float *)(&stack0xfffffe84 + iVar3) * _DAT_005bd345;
          afStack_80[3] = *(float *)(&stack0xfffffe88 + iVar3) * _DAT_005bd345;
          fStack_70 = afStack_154[uVar1 * 3 + -8] * _DAT_005bd345;
          fStack_60 = *(float *)(&stack0xfffffe84 + iVar3) * _DAT_005bd345;
          afStack_80[(uint)bVar7 * -2 + 9] = afStack_80[(uint)bVar7 * -2 + 3];
          afStack_80[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 10] =
               afStack_80[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4];
          fStack_114 = *pfVar2 * _DAT_005bd349;
          afStack_110[0] = pfVar2[1] * _DAT_005bd349;
          afStack_110[1] = pfVar2[2] * _DAT_005bd349;
          afStack_e8[1] = *pfVar2 * _DAT_005bd349;
          afStack_e8[(uint)bVar7 * -2 + 2] = afStack_110[(uint)bVar7 * -2];
          afStack_e8[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 3] =
               afStack_110[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
          fStack_6c = afStack_e8[1] + fStack_60;
          fStack_68 = afStack_e8[2] + fStack_5c;
          fStack_64 = afStack_e8[3] + fStack_58;
          fStack_84 = afStack_e8[1] + fStack_60;
          afStack_80[(uint)bVar7 * -2] = afStack_80[(uint)bVar7 * -2 + 6];
          afStack_80[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
               afStack_80[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7];
          afStack_90[0] = (float)(int)ROUND(fStack_84 * _DAT_005deffc);
          afStack_90[1] = (float)(int)ROUND(afStack_80[0] * _DAT_005deffc);
          iStack_88 = (int)ROUND(afStack_80[1] * _DAT_005deffc);
          engine_matrix_c_transformToCache_FUN_004e5540(1,(CVector3i *)afStack_90);
          puVar4 = &DAT_0060b044;
          pfVar6 = afStackY_10fc + 0x3d8;
          for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
            *pfVar6 = (float)*puVar4;
            puVar4 = puVar4 + (uint)bVar7 * -2 + 1;
            pfVar6 = pfVar6 + (uint)bVar7 * -2 + 1;
          }
          puVar4 = &DAT_0060b014;
          pfVar6 = afStackY_10fc + 0x3cc;
          for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
            *pfVar6 = (float)*puVar4;
            puVar4 = puVar4 + (uint)bVar7 * -2 + 1;
            pfVar6 = pfVar6 + (uint)bVar7 * -2 + 1;
          }
          engine_3d_c_FUN_00407b30();
          uVar1 = (uint)unaff_EBP ^ 2;
          afStack_28[0] = (float)(int)ROUND(*pfVar2 * _DAT_005deffc);
          afStack_28[1] = (float)(int)ROUND(pfVar2[1] * _DAT_005deffc);
          uStack_20 = (uint)ROUND(pfVar2[2] * _DAT_005deffc);
          engine_matrix_c_transformToCache_FUN_004e5540(0,(CVector3i *)afStack_28);
          fStack_98 = afStack_154[uVar1 * 3 + -6] * _DAT_005bd345;
          fStack_94 = afStack_154[uVar1 * 3 + -5] * _DAT_005bd345;
          afStack_90[0] = afStack_154[uVar1 * 3 + -4] * _DAT_005bd345;
          fStack_ec = afStack_154[uVar1 * 3 + -6] * _DAT_005bd345;
          afStack_e8[(uint)bVar7 * -2] = (&fStack_94)[(uint)bVar7 * -2];
          afStack_e8[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
               afStack_90[(uint)bVar7 * -2 + (uint)bVar7 * -2];
          afStack_34[2] = *pfVar2 * _DAT_005bd349;
          afStack_28[0] = pfVar2[1] * _DAT_005bd349;
          afStack_28[1] = pfVar2[2] * _DAT_005bd349;
          fStack_14 = *pfVar2 * _DAT_005bd349;
          *(float *)(&stack0xfffffff0 + (uint)bVar7 * -8) = afStack_28[(uint)bVar7 * -2];
          *(float *)(&stack0xfffffff4 + (uint)bVar7 * -8 + (uint)bVar7 * -8) =
               afStack_28[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
          fStack_38 = fStack_14 + fStack_ec;
          afStack_34[0] = unaff_EBP + afStack_e8[0];
          afStack_34[1] = unaff_EDI + afStack_e8[1];
          afStack_b4[1] = fStack_14 + fStack_ec;
          afStack_b4[(uint)bVar7 * -2 + 2] = afStack_34[(uint)bVar7 * -2];
          afStack_b4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 3] =
               afStack_34[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
          uStack_20 = (uint)ROUND(afStack_b4[1] * _DAT_005deffc);
          iStack_1c = (int)ROUND(afStack_b4[2] * _DAT_005deffc);
          iStack_18 = (int)ROUND(afStack_b4[3] * _DAT_005deffc);
          engine_matrix_c_transformToCache_FUN_004e5540(1,(CVector3i *)&uStack_20);
          puVar4 = &DAT_0060b044;
          pfVar6 = afStackY_10fc + 0x3dc;
          for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
            *pfVar6 = (float)*puVar4;
            puVar4 = puVar4 + (uint)bVar7 * -2 + 1;
            pfVar6 = pfVar6 + (uint)bVar7 * -2 + 1;
          }
          puVar4 = &DAT_0060b014;
          pfVar6 = afStackY_10fc + 0x3d0;
          for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
            *pfVar6 = (float)*puVar4;
            puVar4 = puVar4 + (uint)bVar7 * -2 + 1;
            pfVar6 = pfVar6 + (uint)bVar7 * -2 + 1;
          }
          afStackY_10fc[0x3cf] = 6.620545e-39;
          engine_3d_c_FUN_00407b30();
          uVar1 = unaff_retaddr ^ 4;
          iStack_f0 = (int)ROUND(*pfVar2 * _DAT_005deffc);
          fStack_ec = (float)(int)ROUND(pfVar2[1] * _DAT_005deffc);
          afStack_e8[0] = (float)(int)ROUND(pfVar2[2] * _DAT_005deffc);
          engine_matrix_c_transformToCache_FUN_004e5540(0,(CVector3i *)&iStack_f0);
          afStack_b4[2] = afStack_154[uVar1 * 3 + -2] * _DAT_005bd345;
          afStack_b4[3] = afStack_154[uVar1 * 3 + -1] * _DAT_005bd345;
          fStack_a4 = afStack_154[uVar1 * 3] * _DAT_005bd345;
          fStack_b8 = afStack_154[uVar1 * 3 + -2] * _DAT_005bd345;
          afStack_b4[(uint)bVar7 * -2] = afStack_b4[(uint)bVar7 * -2 + 3];
          afStack_b4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
               afStack_b4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4];
          afStack_80[1] = *pfVar2 * _DAT_005bd349;
          afStack_80[2] = pfVar2[1] * _DAT_005bd349;
          afStack_80[3] = pfVar2[2] * _DAT_005bd349;
          afStack_34[0] = *pfVar2 * _DAT_005bd349;
          afStack_34[(uint)bVar7 * -2 + 1] = afStack_80[(uint)bVar7 * -2 + 2];
          afStack_34[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 2] =
               afStack_80[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 3];
          fStack_94 = afStack_34[0] + fStack_b8;
          afStack_90[0] = afStack_34[1] + afStack_b4[0];
          afStack_90[1] = afStack_34[2] + afStack_b4[1];
          fStack_d0 = afStack_34[0] + fStack_b8;
          afStack_cc[(uint)bVar7 * -2] = afStack_90[(uint)bVar7 * -2];
          afStack_cc[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
               afStack_90[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
          afStack_e8[0] = (float)(int)ROUND(fStack_d0 * _DAT_005deffc);
          afStack_e8[1] = (float)(int)ROUND(afStack_cc[0] * _DAT_005deffc);
          afStack_e8[2] = (float)(int)ROUND(afStack_cc[1] * _DAT_005deffc);
          engine_matrix_c_transformToCache_FUN_004e5540(1,(CVector3i *)afStack_e8);
          puVar4 = &DAT_0060b044;
          puVar5 = (uint *)&stack0xfffffe84;
          for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
            *puVar5 = *puVar4;
            puVar4 = puVar4 + (uint)bVar7 * -2 + 1;
            puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
          }
          puVar4 = &DAT_0060b014;
          pfVar6 = afStackY_10fc + 0x3d4;
          for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
            *pfVar6 = (float)*puVar4;
            puVar4 = puVar4 + (uint)bVar7 * -2 + 1;
            pfVar6 = pfVar6 + (uint)bVar7 * -2 + 1;
          }
          afStackY_10fc[0x3d3] = 6.621083e-39;
          engine_3d_c_FUN_00407b30();
          param_4 = param_4 + 1;
          pfVar2 = pfVar2 + 3;
        } while (param_4 < 8);
        return;
      }
      if ((uVar1 & 1) == 0) break;
      iStack_1c = *param_2;
      iVar3 = iVar3 + 0xc;
    }
  } while( true );
}
