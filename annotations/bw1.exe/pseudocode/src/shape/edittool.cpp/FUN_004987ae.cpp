// Name: shape_edittool.cpp_FUN_004987ae
// Address: 004987ae
// Address Range: [[004987ae, 00498d76]]
// Convention: unknown
// Signature: void shape_edittool_cpp_FUN_004987ae(undefined4 param_1,int *param_2,int *param_3,int param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void shape_edittool_cpp_FUN_004987ae(uint param_1,int *param_2,int *param_3,int param_4)

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
  byte auStack_f0 [12];
  float afStack_e4 [5];
  float fStack_d0;
  float afStack_cc [5];
  float fStack_b8;
  float afStack_b4 [4];
  float fStack_a4;
  byte auStack_98 [12];
  float fStack_8c;
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
  byte auStack_28 [12];
  int iStack_1c;
  int iStack_18;
  float fStack_14;
  
  bVar7 = 0;
  puStackY_188 = &stack0xfffffe84;
  afStackY_10fc[0x3dc] = 6.752734e-39;
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
        if (_DAT_01c3f544 != 0) {
          engine_mini3d_cpp_FUN_00517d50();
          iVar3 = _DAT_01c4f020;
        }
        _DAT_01c4f020 = iVar3;
        pfVar2 = (float *)&stack0xfffffe84;
        auStack_28._8_4_ = 0;
        do {
          uVar1 = auStack_28._8_4_ ^ 1;
          iVar3 = uVar1 * 0xc;
          auStack_98._0_4_ = (int)ROUND(*pfVar2 * _DAT_005ff7ec);
          auStack_98._4_4_ = (int)ROUND(pfVar2[1] * _DAT_005ff7ec);
          auStack_98._8_4_ = (uint)ROUND(pfVar2[2] * _DAT_005ff7ec);
          puStackY_188 = (byte *)0x4988f2;
          engine_matrix_c_transformToCache_FUN_00507b00(0,(CVector3i *)auStack_98);
          afStack_80[2] = *(float *)(&stack0xfffffe84 + iVar3) * _DAT_005dc288;
          afStack_80[3] = *(float *)(&stack0xfffffe88 + iVar3) * _DAT_005dc288;
          fStack_70 = afStack_154[uVar1 * 3 + -8] * _DAT_005dc288;
          fStack_60 = *(float *)(&stack0xfffffe84 + iVar3) * _DAT_005dc288;
          afStack_80[(uint)bVar7 * -2 + 9] = afStack_80[(uint)bVar7 * -2 + 3];
          afStack_80[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 10] =
               afStack_80[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4];
          fStack_114 = *pfVar2 * _DAT_005dc28c;
          afStack_110[0] = pfVar2[1] * _DAT_005dc28c;
          afStack_110[1] = pfVar2[2] * _DAT_005dc28c;
          afStack_e4[0] = *pfVar2 * _DAT_005dc28c;
          afStack_e4[(uint)bVar7 * -2 + 1] = afStack_110[(uint)bVar7 * -2];
          afStack_e4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 2] =
               afStack_110[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
          fStack_6c = afStack_e4[0] + fStack_60;
          fStack_68 = afStack_e4[1] + fStack_5c;
          fStack_64 = afStack_e4[2] + fStack_58;
          fStack_84 = afStack_e4[0] + fStack_60;
          afStack_80[(uint)bVar7 * -2] = afStack_80[(uint)bVar7 * -2 + 6];
          afStack_80[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
               afStack_80[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7];
          auStack_98._8_4_ = (uint)ROUND(fStack_84 * _DAT_005ff7ec);
          fStack_8c = (float)(int)ROUND(afStack_80[0] * _DAT_005ff7ec);
          iStack_88 = (int)ROUND(afStack_80[1] * _DAT_005ff7ec);
          engine_matrix_c_transformToCache_FUN_00507b00(1,(CVector3i *)(auStack_98 + 8));
          puVar4 = &DAT_00629044;
          pfVar6 = afStackY_10fc + 0x3d8;
          for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
            *pfVar6 = (float)*puVar4;
            puVar4 = puVar4 + (uint)bVar7 * -2 + 1;
            pfVar6 = pfVar6 + (uint)bVar7 * -2 + 1;
          }
          puVar4 = &DAT_00629014;
          pfVar6 = afStackY_10fc + 0x3cc;
          for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
            *pfVar6 = (float)*puVar4;
            puVar4 = puVar4 + (uint)bVar7 * -2 + 1;
            pfVar6 = pfVar6 + (uint)bVar7 * -2 + 1;
          }
          engine_3d_c_clipAndDrawLine2D_FUN_00407af0();
          uVar1 = (uint)unaff_EBP ^ 2;
          auStack_28._0_4_ = (int)ROUND(*pfVar2 * _DAT_005ff7ec);
          auStack_28._4_4_ = (int)ROUND(pfVar2[1] * _DAT_005ff7ec);
          auStack_28._8_4_ = (uint)ROUND(pfVar2[2] * _DAT_005ff7ec);
          engine_matrix_c_transformToCache_FUN_00507b00(0,(CVector3i *)auStack_28);
          auStack_98._0_4_ = afStack_154[uVar1 * 3 + -6] * _DAT_005dc288;
          auStack_98._4_4_ = afStack_154[uVar1 * 3 + -5] * _DAT_005dc288;
          auStack_98._8_4_ = afStack_154[uVar1 * 3 + -4] * _DAT_005dc288;
          auStack_f0._4_4_ = afStack_154[uVar1 * 3 + -6] * _DAT_005dc288;
          *(uint *)(auStack_f0 + (uint)bVar7 * -8 + 8) =
               *(uint *)(auStack_98 + (uint)bVar7 * -8 + 4);
          afStack_e4[(uint)bVar7 * -2 + (uint)bVar7 * -2] =
               *(float *)(auStack_98 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
          afStack_34[2] = *pfVar2 * _DAT_005dc28c;
          auStack_28._0_4_ = pfVar2[1] * _DAT_005dc28c;
          auStack_28._4_4_ = pfVar2[2] * _DAT_005dc28c;
          fStack_14 = *pfVar2 * _DAT_005dc28c;
          *(uint *)(&stack0xfffffff0 + (uint)bVar7 * -8) =
               *(uint *)(auStack_28 + (uint)bVar7 * -8);
          *(uint *)(&stack0xfffffff4 + (uint)bVar7 * -8 + (uint)bVar7 * -8) =
               *(uint *)(auStack_28 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 4);
          fStack_38 = fStack_14 + (float)auStack_f0._4_4_;
          afStack_34[0] = unaff_EBP + (float)auStack_f0._8_4_;
          afStack_34[1] = unaff_EDI + afStack_e4[0];
          afStack_b4[1] = fStack_14 + (float)auStack_f0._4_4_;
          afStack_b4[(uint)bVar7 * -2 + 2] = afStack_34[(uint)bVar7 * -2];
          afStack_b4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 3] =
               afStack_34[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
          auStack_28._8_4_ = (uint)ROUND(afStack_b4[1] * _DAT_005ff7ec);
          iStack_1c = (int)ROUND(afStack_b4[2] * _DAT_005ff7ec);
          iStack_18 = (int)ROUND(afStack_b4[3] * _DAT_005ff7ec);
          engine_matrix_c_transformToCache_FUN_00507b00(1,(CVector3i *)(auStack_28 + 8));
          puVar4 = &DAT_00629044;
          pfVar6 = afStackY_10fc + 0x3dc;
          for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
            *pfVar6 = (float)*puVar4;
            puVar4 = puVar4 + (uint)bVar7 * -2 + 1;
            pfVar6 = pfVar6 + (uint)bVar7 * -2 + 1;
          }
          puVar4 = &DAT_00629014;
          pfVar6 = afStackY_10fc + 0x3d0;
          for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
            *pfVar6 = (float)*puVar4;
            puVar4 = puVar4 + (uint)bVar7 * -2 + 1;
            pfVar6 = pfVar6 + (uint)bVar7 * -2 + 1;
          }
          afStackY_10fc[0x3cf] = 6.754128e-39;
          engine_3d_c_clipAndDrawLine2D_FUN_00407af0();
          uVar1 = unaff_retaddr ^ 4;
          auStack_f0._0_4_ = (int)ROUND(*pfVar2 * _DAT_005ff7ec);
          auStack_f0._4_4_ = (int)ROUND(pfVar2[1] * _DAT_005ff7ec);
          auStack_f0._8_4_ = (uint)ROUND(pfVar2[2] * _DAT_005ff7ec);
          engine_matrix_c_transformToCache_FUN_00507b00(0,(CVector3i *)auStack_f0);
          afStack_b4[2] = afStack_154[uVar1 * 3 + -2] * _DAT_005dc288;
          afStack_b4[3] = afStack_154[uVar1 * 3 + -1] * _DAT_005dc288;
          fStack_a4 = afStack_154[uVar1 * 3] * _DAT_005dc288;
          fStack_b8 = afStack_154[uVar1 * 3 + -2] * _DAT_005dc288;
          afStack_b4[(uint)bVar7 * -2] = afStack_b4[(uint)bVar7 * -2 + 3];
          afStack_b4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
               afStack_b4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4];
          afStack_80[1] = *pfVar2 * _DAT_005dc28c;
          afStack_80[2] = pfVar2[1] * _DAT_005dc28c;
          afStack_80[3] = pfVar2[2] * _DAT_005dc28c;
          afStack_34[0] = *pfVar2 * _DAT_005dc28c;
          afStack_34[(uint)bVar7 * -2 + 1] = afStack_80[(uint)bVar7 * -2 + 2];
          afStack_34[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 2] =
               afStack_80[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 3];
          auStack_98._4_4_ = afStack_34[0] + fStack_b8;
          auStack_98._8_4_ = afStack_34[1] + afStack_b4[0];
          fStack_8c = afStack_34[2] + afStack_b4[1];
          fStack_d0 = afStack_34[0] + fStack_b8;
          afStack_cc[(uint)bVar7 * -2] = *(float *)(auStack_98 + (uint)bVar7 * -8 + 8);
          afStack_cc[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
               (&fStack_8c)[(uint)bVar7 * -2 + (uint)bVar7 * -2];
          auStack_f0._8_4_ = (uint)ROUND(fStack_d0 * _DAT_005ff7ec);
          afStack_e4[0] = (float)(int)ROUND(afStack_cc[0] * _DAT_005ff7ec);
          afStack_e4[1] = (float)(int)ROUND(afStack_cc[1] * _DAT_005ff7ec);
          engine_matrix_c_transformToCache_FUN_00507b00(1,(CVector3i *)(auStack_f0 + 8));
          puVar4 = &DAT_00629044;
          puVar5 = (uint *)&stack0xfffffe84;
          for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
            *puVar5 = *puVar4;
            puVar4 = puVar4 + (uint)bVar7 * -2 + 1;
            puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
          }
          puVar4 = &DAT_00629014;
          pfVar6 = afStackY_10fc + 0x3d4;
          for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
            *pfVar6 = (float)*puVar4;
            puVar4 = puVar4 + (uint)bVar7 * -2 + 1;
            pfVar6 = pfVar6 + (uint)bVar7 * -2 + 1;
          }
          afStackY_10fc[0x3d3] = 6.754666e-39;
          engine_3d_c_clipAndDrawLine2D_FUN_00407af0();
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
