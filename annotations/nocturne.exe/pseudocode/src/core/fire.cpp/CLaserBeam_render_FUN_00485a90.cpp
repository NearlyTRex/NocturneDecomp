// Name: core_fire.cpp_CLaserBeam_render_FUN_00485a90
// Address: 00485a90
// Address Range: [[00485a90, 00486d3d]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CLaserBeam_render_FUN_00485a90(float *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_CLaserBeam_render_FUN_00485a90(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int *piVar4;
  float *pfVar5;
  uint *puVar6;
  int iVar7;
  int iVar8;
  uint *puVar9;
  byte bVar10;
  float10 fVar11;
  float10 fVar12;
  uint uVar13;
  float local_2f4;
  float local_2e8;
  float local_2e0;
  float local_2dc;
  uint local_2d8;
  uint local_2d4;
  uint local_2d0;
  uint local_2cc;
  uint local_2c8;
  uint local_2c4;
  uint local_2c0;
  int local_2bc;
  uint local_2b8;
  float local_2b4;
  int local_2b0;
  uint local_2ac;
  float local_2a8;
  int local_2a4;
  uint local_2a0;
  uint local_29c;
  int local_298;
  byte local_294 [8];
  uint local_28c;
  uint local_288;
  uint local_284;
  uint local_280;
  uint local_27c;
  uint local_278;
  uint local_274;
  uint local_270;
  uint local_26c;
  uint local_268;
  uint local_264;
  uint local_260;
  uint local_25c;
  uint local_258;
  uint local_254;
  uint local_250;
  uint local_24c [2];
  uint local_244;
  uint local_240;
  uint local_23c;
  uint local_238;
  uint local_234;
  uint local_230;
  uint local_22c;
  uint local_228;
  byte local_220 [8];
  float local_218;
  float local_20c;
  float local_200;
  byte local_1f8 [8];
  float local_1f0;
  int local_1ec;
  int local_1e8;
  int local_1e4;
  float local_1e0;
  float local_1dc;
  float local_1d8;
  float local_1d4;
  float local_1d0;
  float local_1cc;
  int local_1c8;
  int local_1c4;
  int local_1c0;
  int local_1bc;
  int local_1b8;
  int local_1b4;
  float local_1b0;
  float local_1ac;
  float local_1a8;
  float local_1a4;
  float local_1a0;
  float local_19c;
  int local_198;
  int local_194;
  int local_190;
  float local_18c;
  float local_188;
  float local_184;
  int local_180;
  int local_17c;
  int local_178;
  int local_174;
  int local_170;
  int local_16c;
  float local_168;
  float local_164;
  float local_160;
  byte local_15c [12];
  float local_150;
  float local_14c;
  float local_148;
  float local_144;
  float local_140;
  float local_13c;
  float local_138;
  float local_134;
  float local_130;
  float local_12c;
  float local_128;
  float local_124;
  float local_120;
  float local_11c;
  float local_118;
  float local_114;
  float local_110;
  float local_10c;
  int local_108;
  int local_104;
  int local_100;
  byte local_fc [12];
  byte local_f0 [12];
  float local_e4;
  float local_e0;
  float local_dc;
  int local_d8;
  int local_d4;
  int local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  int local_c0;
  int local_bc;
  int local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  int local_a8;
  int local_a4;
  int local_a0;
  uint local_9c;
  uint local_98;
  uint local_94;
  float local_90;
  float local_8c;
  float local_88;
  int iStack_78;
  float local_6c;
  float local_68;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  uint local_40;
  float local_3c;
  float local_38;
  int local_34;
  int local_30;
  float local_28;
  float local_24;
  int local_20;
  int local_1c;
  float local_18;
  
  bVar10 = 0;
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00461eb0(DAT_005ae704,&DAT_005b852c);
  local_1a4 = param_1[3] - *param_1;
  local_1a0 = param_1[4] - param_1[1];
  local_19c = param_1[5] - param_1[2];
  core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0(&local_9c,&local_1a4);
  fVar2 = SQRT(local_19c * local_19c + local_1a4 * local_1a4 + local_1a0 * local_1a0);
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0(local_220,&local_9c);
  local_2e0 = param_1[6];
  local_2f4 = param_1[7];
  local_2e8 = 0.0;
  pfVar5 = (float *)engine_drender_cpp_CDemonRenderer_getCameraOriginWorld_FUN_00460d30
                              (DAT_005ae704,local_f0);
  local_144 = *pfVar5 - *param_1;
  local_140 = pfVar5[1] - param_1[1];
  local_13c = pfVar5[2] - param_1[2];
  if (&local_120 != &local_144) {
    local_120 = local_144;
    local_11c = local_140;
    local_118 = local_13c;
  }
  local_18c = param_1[3] - *param_1;
  local_188 = param_1[4] - param_1[1];
  local_184 = param_1[5] - param_1[2];
  if (&local_1e0 != &local_18c) {
    local_1e0 = local_18c;
    local_1dc = local_188;
    local_1d8 = local_184;
  }
  fVar1 = local_118 * local_1d8 + local_120 * local_1e0 + local_11c * local_1dc;
  if (0.0 < fVar1) {
    if (param_1[0xf] <= 0.0) {
      engine_drender_cpp_CDemonRenderer_getCameraOriginWorld_FUN_00460d30(DAT_005ae704,&local_1d4);
      local_1d4 = local_1d4 - *param_1;
      local_1d0 = local_1d0 - param_1[1];
      local_1cc = local_1cc - param_1[2];
      pfVar5 = (float *)core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_0044daa0
                                  (local_220,local_fc,&local_1d4);
      if (&local_1d4 != pfVar5) {
        local_1d4 = *pfVar5;
        local_1d0 = pfVar5[1];
        local_1cc = pfVar5[2];
      }
      local_60 = local_1d0 * local_1d0;
      local_58 = ((local_1cc * (float)18) / 448.0) * (float)2;
      local_50 = local_1d4 * local_1d4 + local_60;
      local_5c = local_58 * local_58;
      if (local_50 < local_5c) {
        local_2e8 = 1.0 - local_50 / local_5c;
      }
    }
    else {
      fVar11 = (float10)fcos((float10)param_1[0xf]);
      local_4c = fVar1 / (SQRT(local_1d8 * local_1d8 + local_1e0 * local_1e0 + local_1dc * local_1dc
                              ) * SQRT(local_118 * local_118 +
                                       local_120 * local_120 + local_11c * local_11c));
      fVar1 = (float)fVar11;
      if (fVar1 < local_4c) {
        local_2e8 = (local_4c - fVar1) / (1.0 - fVar1);
      }
      fVar11 = (float10)fptan((float10)param_1[0xf]);
      local_44 = (float)fVar11;
    }
  }
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_00460fb0(DAT_005ae704,0);
  if ((0.0 < local_2e8) && (*(int *)(0x01C775EC + 0xc) != 0)) {
    fVar1 = param_1[6];
    fVar3 = 1.0 - local_2e8 * (float)2;
    local_2e0 = local_2e0 * fVar3;
    local_2f4 = fVar3 * local_2f4;
    iVar8 = 0;
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00461000(DAT_005ae704,1);
    do {
      local_2dc = (float)iVar8 * 5.0679227589555217e-315._0_4_ * fVar2;
      local_28 = local_44;
      if (param_1[0xf] <= 0.0) {
        local_28 = (float)18 / 448.0;
      }
      local_28 = local_28 * local_2dc;
      local_1b0 = local_218 * local_2dc;
      local_1ac = local_20c * local_2dc;
      local_1a8 = local_200 * local_2dc;
      local_90 = local_218;
      local_8c = local_20c;
      local_88 = local_200;
      local_150 = *param_1 + local_1b0;
      local_14c = param_1[1] + local_1ac;
      local_148 = param_1[2] + local_1a8;
      if (&local_168 != &local_150) {
        local_168 = local_150;
        local_164 = local_14c;
        local_160 = local_148;
      }
      local_1c = iVar8;
      engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00
                (DAT_005ae704,&local_168);
      engine_drender_cpp_CDemonRenderer_getCameraRotationRadians_FUN_00460db0
                (DAT_005ae704,local_1f8);
      local_1f0 = (float)iVar8 + local_1f0;
      local_1c = iVar8;
      engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0(DAT_005ae704,local_1f8,0);
      local_e4 = local_28;
      local_e0 = local_28;
      local_dc = 0.0;
      local_180 = (int)ROUND(local_28 * _DAT_0059d1f8);
      local_17c = (int)ROUND(local_28 * _DAT_0059d1f8);
      local_178 = (int)ROUND(_DAT_0059d1f8 * 0.0);
      wincore_windll_cpp_transformAndProjectPoint_FUN_0053075c(*DAT_005ae704,&local_180);
      local_e4 = -local_e4;
      local_c0 = (int)ROUND(local_e4 * _DAT_0059d1f8);
      local_bc = (int)ROUND(local_e0 * _DAT_0059d1f8);
      local_b8 = (int)ROUND(local_dc * _DAT_0059d1f8);
      wincore_windll_cpp_transformAndProjectPoint_FUN_0053075c(*DAT_005ae704 + 0x30,&local_c0);
      local_e0 = -local_e0;
      local_1bc = (int)ROUND(local_e4 * _DAT_0059d1f8);
      local_1b8 = (int)ROUND(local_e0 * _DAT_0059d1f8);
      local_1b4 = (int)ROUND(local_dc * _DAT_0059d1f8);
      wincore_windll_cpp_transformAndProjectPoint_FUN_0053075c(*DAT_005ae704 + 0x60,&local_1bc);
      local_e4 = -local_e4;
      local_174 = (int)ROUND(local_e4 * _DAT_0059d1f8);
      local_170 = (int)ROUND(local_e0 * _DAT_0059d1f8);
      local_16c = (int)ROUND(local_dc * _DAT_0059d1f8);
      wincore_windll_cpp_transformAndProjectPoint_FUN_0053075c(*DAT_005ae704 + 0x90,&local_174);
      engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00461eb0(DAT_005ae704,&DAT_005b8574);
      piVar4 = DAT_005ae704;
      local_244 = 4;
      local_234 = 0;
      local_238 = 0;
      local_23c = 0;
      local_240 = 0;
      local_230 = 0;
      uVar13 = 0x4860cb;
      fVar11 = (float10)round
                                  ((float10)(local_2e8 * fVar1) * (float10)8192);
      iStack_78 = (int)ROUND(fVar11);
      *(int *)(*piVar4 + 0x2c) = iStack_78;
      *(float *)(*piVar4 + 0x20) = param_1[0xb];
      *(float *)(*piVar4 + 0x24) = param_1[0xc];
      *(float *)(*piVar4 + 0x28) = param_1[0xd];
      local_230 = 1;
      *(int *)(*piVar4 + 0x5c) = iStack_78;
      *(float *)(*piVar4 + 0x50) = param_1[0xb];
      *(float *)(*piVar4 + 0x54) = param_1[0xc];
      *(float *)(*piVar4 + 0x58) = param_1[0xd];
      local_22c = 2;
      *(int *)(*piVar4 + 0x8c) = iStack_78;
      *(float *)(*piVar4 + 0x80) = param_1[0xb];
      *(float *)(*piVar4 + 0x84) = param_1[0xc];
      *(float *)(*piVar4 + 0x88) = param_1[0xd];
      local_228 = 3;
      *(int *)(*piVar4 + 0xbc) = iStack_78;
      *(float *)(*piVar4 + 0xb0) = param_1[0xb];
      *(float *)(*piVar4 + 0xb4) = param_1[0xc];
      *(float *)(*piVar4 + 0xb8) = param_1[0xd];
      *(uint *)(*piVar4 + 0x18) = 0xf80000;
      *(uint *)(*piVar4 + 0x1c) = 0xf80000;
      *(uint *)(*piVar4 + 0x48) = 0x80000;
      *(uint *)(*piVar4 + 0x4c) = 0xf80000;
      *(uint *)(*piVar4 + 0x78) = 0x80000;
      *(uint *)(*piVar4 + 0x7c) = 0x80000;
      *(uint *)(*piVar4 + 0xa8) = 0xf80000;
      *(uint *)(*piVar4 + 0xac) = 0x80000;
      engine_drender_cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_00460080
                (piVar4,local_24c,uVar13);
      iVar8 = iVar8 + 1;
      engine_drender_cpp_CDemonRenderer_matrixPop_FUN_00460bf0(DAT_005ae704);
    } while (iVar8 < 0x19);
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00461000(DAT_005ae704,0);
  }
  if (0.0 < local_2e0) {
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00461eb0(DAT_005ae704,&DAT_005b8544);
    engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00(DAT_005ae704,param_1)
    ;
    engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0(DAT_005ae704,&local_9c,0);
    fVar1 = param_1[0xf];
    local_54 = param_1[0xe];
    local_24 = 1.12104e-44;
    if (0.0 < fVar1) {
      fVar11 = (float10)fptan((float10)fVar1);
      local_24 = 2.24208e-44;
      local_54 = (float)(fVar11 * (float10)fVar2);
    }
    local_40 = (uint)(0.0 < fVar1);
    local_3c = (float)core_fire_cpp_computeScreenSpaceSize_FUN_004859a0(0,param_1[0xe]);
    local_18 = local_3c;
    local_38 = (float)core_fire_cpp_computeScreenSpaceSize_FUN_004859a0(fVar2,local_54);
    local_20 = 0;
    local_18 = local_38;
    if (-1 < (int)local_24) {
      local_48 = (fVar2 * 16777220.0f) / 30.0f;
      local_30 = 0x100;
      do {
        piVar4 = DAT_005ae704;
        local_1c = local_20;
        local_18 = local_24;
        fVar11 = ((float10)local_20 / (float10)(int)local_24) * (float10)2 *
                 (float10)3.1415926535000001;
        fVar12 = (float10)fsin(fVar11);
        fVar11 = (float10)fcos(fVar11);
        puVar6 = (uint *)*DAT_005ae704;
        puVar9 = (uint *)*DAT_005ae704 + 0x24;
        for (iVar8 = 0xc; iVar8 != 0; iVar8 = iVar8 + -1) {
          *puVar9 = *puVar6;
          puVar6 = puVar6 + (uint)bVar10 * -2 + 1;
          puVar9 = puVar9 + (uint)bVar10 * -2 + 1;
        }
        local_6c = (float)fVar12;
        iVar8 = *piVar4;
        local_68 = (float)fVar11;
        puVar6 = (uint *)(iVar8 + 0x30);
        puVar9 = (uint *)(iVar8 + 0x60);
        for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
          *puVar9 = *puVar6;
          puVar6 = puVar6 + (uint)bVar10 * -2 + 1;
          puVar9 = puVar9 + (uint)bVar10 * -2 + 1;
        }
        local_c4 = 0.0;
        local_c8 = (float)(fVar12 * (float10)local_3c);
        local_cc = (float)(fVar11 * (float10)local_3c);
        local_a8 = (int)ROUND(local_cc * _DAT_0059d1f8);
        local_a4 = (int)ROUND(local_c8 * _DAT_0059d1f8);
        local_a0 = (int)ROUND(_DAT_0059d1f8 * 0.0);
        wincore_windll_cpp_transformAndProjectPoint_FUN_0053075c(*piVar4,&local_a8);
        local_cc = local_68 * local_38;
        local_c8 = local_6c * local_38;
        local_c4 = fVar2 + (float)-0.10000000000000001;
        local_108 = (int)ROUND(local_cc * _DAT_0059d1f8);
        local_104 = (int)ROUND(local_c8 * _DAT_0059d1f8);
        local_100 = (int)ROUND(local_c4 * _DAT_0059d1f8);
        wincore_windll_cpp_transformAndProjectPoint_FUN_0053075c(*DAT_005ae704 + 0x30,&local_108);
        iVar8 = local_20;
        if (local_20 != 0) {
          uVar13 = 0x4866db;
          fVar11 = (float10)round((float10)local_48);
          piVar4 = DAT_005ae704;
          local_2d8 = 4;
          local_2c8 = 0;
          local_2cc = 0;
          local_2d0 = 0;
          local_2d4 = 0;
          local_2c4 = 0;
          local_2a0 = 3;
          local_2b8 = 1;
          local_2ac = 2;
          local_38 = (float)(int)ROUND(fVar11);
          if (param_1[0xf] <= 0.0) {
            local_2b0 = ((iVar8 << 8) / (int)local_28 + _DAT_01c094b8) * 0x10000;
            local_29c = 0;
            local_298 = (local_34 / (int)local_28 + _DAT_01c094b8) * 0x10000;
            local_2c0 = 0;
            local_2a8 = local_38;
          }
          else {
            local_2b0 = 0x800000;
            local_2a8 = 1.1754944e-38;
            local_29c = 0x800000;
            local_298 = 0x800000;
            local_2c0 = 0x800000;
          }
          *(float *)(*DAT_005ae704 + 0x20) = param_1[0xb];
          *(float *)(*piVar4 + 0x24) = param_1[0xc];
          *(float *)(*piVar4 + 0x28) = param_1[0xd];
          *(float *)(*piVar4 + 0x50) = param_1[0xb];
          *(float *)(*piVar4 + 0x54) = param_1[0xc];
          *(float *)(*piVar4 + 0x58) = param_1[0xd];
          *(float *)(*piVar4 + 0x80) = param_1[0xb];
          *(float *)(*piVar4 + 0x84) = param_1[0xc];
          *(float *)(*piVar4 + 0x88) = param_1[0xd];
          *(float *)(*piVar4 + 0xb0) = param_1[0xb];
          *(float *)(*piVar4 + 0xb4) = param_1[0xc];
          *(float *)(*piVar4 + 0xb8) = param_1[0xd];
          local_2bc = local_2b0;
          local_2b4 = local_2a8;
          local_2a4 = local_298;
          engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00461000(piVar4,1,uVar13);
          fVar1 = local_44;
          uVar13 = 0x486803;
          fVar11 = (float10)round((float10)448.0 * (float10)32767.5)
          ;
          piVar4 = DAT_005ae704;
          local_34 = (int)ROUND(fVar11);
          if (fVar1 == 0.0) {
            engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_00461010
                      (DAT_005ae704,local_34,uVar13);
            engine_drender_cpp_CDemonRenderer_renderBlendedPoly_FUN_00460370
                      (DAT_005ae704,&local_2e0);
          }
          else {
            *(int *)(*DAT_005ae704 + 0x2c) = local_34;
            *(uint *)(*piVar4 + 0x5c) = 0;
            *(uint *)(*piVar4 + 0x8c) = 0;
            *(int *)(*piVar4 + 0xbc) = local_34;
            engine_drender_cpp_CDemonRenderer_renderVertexAlphaPoly_FUN_00460150(piVar4,&local_2e0);
          }
        }
        local_30 = local_30 + 0x100;
        local_20 = local_20 + 1;
      } while (local_20 <= (int)local_24);
    }
    engine_drender_cpp_CDemonRenderer_matrixPop_FUN_00460bf0(DAT_005ae704);
  }
  if (0.0 < local_2f4) {
    local_130 = 1.0 / fVar2;
    local_138 = local_1a4 * local_130;
    local_134 = local_1a0 * local_130;
    local_130 = local_19c * local_130;
    local_114 = local_138 * 5.122630465115234e-315._0_4_;
    local_110 = local_134 * 5.122630465115234e-315._0_4_;
    local_10c = local_130 * 5.122630465115234e-315._0_4_;
    local_12c = param_1[3] - local_114;
    local_128 = param_1[4] - local_110;
    local_124 = param_1[5] - local_10c;
    puVar6 = (uint *)
             core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0(local_15c,param_1 + 8)
    ;
    if (&local_9c != puVar6) {
      local_9c = *puVar6;
      local_98 = puVar6[1];
      local_94 = puVar6[2];
    }
    engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00
              (DAT_005ae704,&local_12c);
    engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0(DAT_005ae704,&local_9c,0);
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00461eb0(DAT_005ae704,&DAT_005b855c);
    local_b4 = 0.2;
    local_ac = 0.0;
    local_b0 = 0.2;
    local_198 = (int)ROUND(_DAT_0059d1f8 * 0.2);
    local_194 = (int)ROUND(_DAT_0059d1f8 * 0.2);
    local_190 = (int)ROUND(_DAT_0059d1f8 * 0.0);
    wincore_windll_cpp_transformAndProjectPoint_FUN_0053075c(*DAT_005ae704,&local_198);
    local_b4 = -local_b4;
    local_d8 = (int)ROUND(local_b4 * _DAT_0059d1f8);
    local_d4 = (int)ROUND(local_b0 * _DAT_0059d1f8);
    local_d0 = (int)ROUND(local_ac * _DAT_0059d1f8);
    wincore_windll_cpp_transformAndProjectPoint_FUN_0053075c(*DAT_005ae704 + 0x30,&local_d8);
    local_b0 = -local_b0;
    local_1ec = (int)ROUND(local_b4 * _DAT_0059d1f8);
    local_1e8 = (int)ROUND(local_b0 * _DAT_0059d1f8);
    local_1e4 = (int)ROUND(local_ac * _DAT_0059d1f8);
    wincore_windll_cpp_transformAndProjectPoint_FUN_0053075c(*DAT_005ae704 + 0x60,&local_1ec);
    local_b4 = -local_b4;
    local_1c8 = (int)ROUND(local_b4 * _DAT_0059d1f8);
    local_1c4 = (int)ROUND(local_b0 * _DAT_0059d1f8);
    local_1c0 = (int)ROUND(local_ac * _DAT_0059d1f8);
    wincore_windll_cpp_transformAndProjectPoint_FUN_0053075c(*DAT_005ae704 + 0x90,&local_1c8);
    piVar4 = DAT_005ae704;
    local_28c = 4;
    local_27c = 0;
    local_280 = 0;
    local_284 = 0;
    local_288 = 0;
    local_278 = 0;
    local_254 = 3;
    local_274 = 0x80000;
    local_270 = 0x80000;
    local_268 = 0xf80000;
    local_264 = 0x80000;
    local_25c = 0xf80000;
    local_258 = 0xf80000;
    local_250 = 0x80000;
    local_24c[0] = 0xf80000;
    local_26c = 1;
    local_260 = 2;
    *(float *)(*DAT_005ae704 + 0x20) = param_1[0xb];
    *(float *)(*piVar4 + 0x24) = param_1[0xc];
    *(float *)(*piVar4 + 0x28) = param_1[0xd];
    *(float *)(*piVar4 + 0x50) = param_1[0xb];
    *(float *)(*piVar4 + 0x54) = param_1[0xc];
    *(float *)(*piVar4 + 0x58) = param_1[0xd];
    *(float *)(*piVar4 + 0x80) = param_1[0xb];
    *(float *)(*piVar4 + 0x84) = param_1[0xc];
    *(float *)(*piVar4 + 0x88) = param_1[0xd];
    *(float *)(*piVar4 + 0xb0) = param_1[0xb];
    *(float *)(*piVar4 + 0xb4) = param_1[0xc];
    *(float *)(*piVar4 + 0xb8) = param_1[0xd];
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00461000(piVar4,1);
    local_18 = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0x47000000,0x471fff00);
    uVar13 = 0x486cf5;
    fVar11 = (float10)round((float10)local_18 * (float10)local_2f4);
    local_20 = (int)ROUND(fVar11);
    engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_00461010(DAT_005ae704,local_20);
    engine_drender_cpp_CDemonRenderer_renderBlendedPoly_FUN_00460370(DAT_005ae704,local_294);
    engine_drender_cpp_CDemonRenderer_matrixPop_FUN_00460bf0(DAT_005ae704,uVar13);
  }
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00461000(DAT_005ae704,0);
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_00461010(DAT_005ae704,0xffff);
  return;
}
