// Name: core_dlight.cpp_CDemonLight_renderExternalVolumetricShafts_FUN_00451350
// Address: 00451350
// Address Range: [[00451350, 00451a50]]
// Convention: __cdecl
// Signature: void __cdecl core_dlight_cpp_CDemonLight_renderExternalVolumetricShafts_FUN_00451350(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dlight_cpp_CDemonLight_renderExternalVolumetricShafts_FUN_00451350(int param_1)

{
  float fVar1;
  float fVar2;
  int *piVar3;
  float *pfVar4;
  int iVar5;
  byte bVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  unkbyte10 Var11;
  float10 fVar12;
  float afStackY_10d8 [985];
  byte *puVar13;
  uint uVar14;
  uint local_160;
  uint local_15c;
  uint local_158;
  uint local_154;
  uint local_150;
  uint local_14c;
  uint local_148;
  uint local_144;
  uint local_140;
  uint local_13c;
  float local_138;
  float local_134;
  float local_130;
  int local_12c;
  int local_128;
  int local_124;
  uint local_120;
  uint local_11c;
  uint local_118;
  float local_114;
  float local_110;
  float local_10c;
  byte local_108 [12];
  float local_fc;
  float local_f8;
  float local_f4;
  int local_f0;
  float afStack_ec [4];
  float local_dc;
  int local_d8;
  int local_d4;
  int local_d0;
  byte local_cc [12];
  int local_c0;
  int local_bc;
  int local_b8;
  byte local_b4 [12];
  int local_a8;
  int local_a4;
  int local_a0;
  int local_9c;
  float local_98;
  int local_94;
  int local_78;
  int local_70;
  float local_6c;
  int local_68;
  int local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  int local_50;
  float local_4c;
  int local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  int local_24;
  float local_20;
  float local_1c;
  int local_18;
  int local_14;
  
  bVar6 = 0;
  if (((*(int *)(param_1 + 0x1cbc) != 0) &&
      ((float)0.10000000000000001 <= *(float *)(0x01E57284 + 0x15a888))) &&
     (*(int *)(0x01C775EC + 0xc) != 0)) {
    FUN_00460d10(DAT_005ae704);
    local_9c = local_f0;
    (&local_98)[(uint)bVar6 * -2] = afStack_ec[(uint)bVar6 * -2];
    (&local_98)[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
         afStack_ec[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
    local_114 = (float)local_9c * _DAT_0059c038;
    local_110 = (float)(int)local_98 * _DAT_0059c038;
    local_10c = (float)local_94 * _DAT_0059c038;
    afStack_ec[2] = local_114 - *(float *)(param_1 + 0x104);
    afStack_ec[3] = local_110 - *(float *)(param_1 + 0x108);
    local_dc = local_10c - *(float *)(param_1 + 0x10c);
    local_54 = SQRT(local_dc * local_dc +
                    afStack_ec[2] * afStack_ec[2] + afStack_ec[3] * afStack_ec[3]);
    if (0.0 < local_54) {
      fVar1 = 1.0 / local_54;
      afStack_ec[2] = afStack_ec[2] * fVar1;
      afStack_ec[3] = afStack_ec[3] * fVar1;
      local_120 = 0;
      local_11c = 0;
      local_118 = 0x3f800000;
      local_dc = local_dc * fVar1;
      core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_0044da40(param_1 + 0x110,local_108,&local_120)
      ;
      engine_drender_cpp_CDemonRenderer_getCameraOriginWorld_FUN_00460d30(DAT_005ae704,&local_138);
      local_138 = local_138 - *(float *)(param_1 + 0x104);
      local_134 = local_134 - *(float *)(param_1 + 0x108);
      local_130 = local_130 - *(float *)(param_1 + 0x10c);
      pfVar4 = (float *)core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_0044daa0
                                  (param_1 + 0x110,local_cc,&local_138);
      if (&local_138 != pfVar4) {
        local_138 = *pfVar4;
        local_134 = pfVar4[1];
        local_130 = pfVar4[2];
      }
      fVar1 = ((local_130 * (float)18) / *(float *)(param_1 + 0x138)) *
              (float)2;
      fVar2 = local_138 * local_138 + local_134 * local_134;
      fVar1 = fVar1 * fVar1;
      local_58 = 1.0 - fVar2 / fVar1;
      if ((fVar1 <= fVar2) || (local_58 <= (float)0.5)) {
        engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00
                  (DAT_005ae704,param_1 + 0x104);
        core_dirmat_cpp_CMatrix3x3f_getEulerAngles_FUN_0044dbd0(param_1 + 0x110,local_b4);
        puVar13 = local_b4;
        local_50 = 1;
        engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0(DAT_005ae704,puVar13,0);
        do {
          fVar7 = (float10)local_50 *
                  ((float10)18 / (float10)*(float *)(param_1 + 0x138)) *
                  (float10)0.0625;
          local_4c = (float)fVar7;
          Var11 = fpatan(fVar7,(float10)1);
          fVar8 = (float10)fcos(Var11);
          local_48 = 0;
          local_44 = (float)((float10)1 - fVar7);
          local_40 = (float)fVar8;
          do {
            fVar7 = (float10)local_48 * (float10)5.0977633259517284e-315._0_4_ * (float10)3.1415926535000001 *
                    (float10)2;
            fVar8 = (float10)fsin(fVar7);
            fVar12 = (float10)(local_48 + 1) * (float10)5.0977633259517284e-315._0_4_ *
                     (float10)3.1415926535000001 * (float10)2;
            fVar9 = (float10)fsin(fVar12);
            fVar7 = (float10)fcos(fVar7);
            fVar12 = (float10)fcos(fVar12);
            local_18 = *(int *)(param_1 + 0x1cc0) - (*(int *)(param_1 + 0x1cc0) >> 0x1f) >> 1;
            local_14 = *(int *)(param_1 + 0x1cc4) - (*(int *)(param_1 + 0x1cc4) >> 0x1f) >> 1;
            fVar10 = (float10)local_4c;
            local_30 = (float)(fVar7 * fVar10);
            iVar5 = *(int *)(param_1 + 0x1cc0);
            uVar14 = 0x4516ac;
            fVar7 = (float10)round
                                       ((float10)local_14 - (float10)local_14 * (float10)local_30);
            local_78 = (int)ROUND(fVar7);
            iVar5 = local_78 * iVar5;
            local_34 = (float)(fVar8 * fVar10);
            local_160 = 0x4516d1;
            fVar7 = (float10)round
                                       ((float10)local_18 * (float10)local_34 + (float10)local_18);
            local_70 = (int)ROUND(fVar7);
            local_2c = (float)*(ushort *)((iVar5 + local_70) * 2 + *(int *)(param_1 + 0x2f94)) *
                       (float)0.00390625;
            local_24 = 0;
            local_3c = (float)(fVar9 * fVar10);
            local_38 = (float)(fVar10 * fVar12);
            local_28 = local_2c;
            do {
              local_6c = *(float *)(param_1 + 0x100);
              local_20 = (float)local_24 * local_40 * local_6c * 5.1806537865363094e-315._0_4_;
              local_14 = local_24 + 1;
              local_1c = (float)local_14 * local_40 * local_6c * 5.1806537865363094e-315._0_4_;
              local_60 = *(float *)(param_1 + 0x2fa8) *
                         (local_6c - local_20) * (1.0 / local_6c) * (float)512 *
                         local_44;
              local_5c = local_44 *
                         (local_6c - local_1c) * (1.0 / local_6c) * (float)512 *
                         *(float *)(param_1 + 0x2fa8);
              local_68 = (int)ROUND(local_60);
              local_64 = (int)ROUND(local_5c);
              local_f4 = local_28;
              if (local_20 < local_28) {
                local_f4 = local_20;
              }
              local_fc = local_f4 * local_34;
              local_f8 = local_f4 * local_30;
              local_12c = (int)ROUND(local_fc * _DAT_0059c030);
              local_128 = (int)ROUND(local_f8 * _DAT_0059c030);
              local_124 = (int)ROUND(local_f4 * _DAT_0059c030);
              wincore_windll_cpp_transformAndProjectPoint_FUN_0053075c
                        (*DAT_005ae704,&local_12c,puVar13,uVar14);
              local_f4 = local_2c;
              if (local_20 < local_2c) {
                local_f4 = local_20;
              }
              local_fc = local_f4 * local_3c;
              local_f8 = local_f4 * local_38;
              local_a8 = (int)ROUND(local_fc * _DAT_0059c030);
              local_a4 = (int)ROUND(local_f8 * _DAT_0059c030);
              local_a0 = (int)ROUND(local_f4 * _DAT_0059c030);
              wincore_windll_cpp_transformAndProjectPoint_FUN_0053075c
                        (*DAT_005ae704 + 0x30,&local_a8,puVar13,uVar14);
              local_f4 = local_2c;
              if (local_1c < local_2c) {
                local_f4 = local_1c;
              }
              local_fc = local_f4 * local_3c;
              local_f8 = local_f4 * local_38;
              local_d8 = (int)ROUND(local_fc * _DAT_0059c030);
              local_d4 = (int)ROUND(local_f8 * _DAT_0059c030);
              local_d0 = (int)ROUND(local_f4 * _DAT_0059c030);
              wincore_windll_cpp_transformAndProjectPoint_FUN_0053075c
                        (*DAT_005ae704 + 0x60,&local_d8);
              local_f4 = local_28;
              if (local_1c < local_28) {
                local_f4 = local_1c;
              }
              local_fc = local_f4 * local_34;
              local_f8 = local_f4 * local_30;
              local_c0 = (int)ROUND(local_fc * _DAT_0059c030);
              local_bc = (int)ROUND(local_f8 * _DAT_0059c030);
              local_b8 = (int)ROUND(local_f4 * _DAT_0059c030);
              wincore_windll_cpp_transformAndProjectPoint_FUN_0053075c
                        (*DAT_005ae704 + 0x90,&local_c0);
              piVar3 = DAT_005ae704;
              *(int *)(*DAT_005ae704 + 0x20) = local_68;
              *(int *)(*piVar3 + 0x50) = local_68;
              *(int *)(*piVar3 + 0x80) = local_64;
              *(int *)(*piVar3 + 0xb0) = local_64;
              local_15c = 4;
              local_140 = 1;
              local_14c = 0;
              local_150 = 0;
              local_154 = 0;
              local_158 = 0;
              iVar5 = local_24 + 1;
              local_144 = 2;
              local_13c = 0;
              local_148 = 3;
              local_24 = iVar5;
              engine_drender_cpp_CDemonRenderer_renderCustomScanline_FUN_00460e80
                        (piVar3,&local_160,FUN_004442a0);
            } while (iVar5 < 4);
            local_48 = local_48 + 1;
          } while (local_48 < 0x10);
          local_50 = local_50 + 1;
        } while (local_50 < 0x10);
        engine_drender_cpp_CDemonRenderer_matrixPop_FUN_00460bf0(DAT_005ae704);
        return;
      }
    }
  }
  return;
}
