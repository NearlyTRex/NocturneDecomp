// Name: core_fire.cpp_CLaserBeam_render_FUN_004b01a0
// Address: 004b01a0
// Address Range: [[004b01a0, 004b15ce]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CLaserBeam_render_FUN_004b01a0(CLaserBeam *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_CLaserBeam_render_FUN_004b01a0(CLaserBeam *this_ptr)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  CDemonRenderer *pCVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  CDemonRenderer *this_ptr_00;
  uint *puVar9;
  uint *puVar10;
  byte bVar11;
  float10 fVar12;
  float10 fVar13;
  float afStackY_1274 [942];
  CVector3f *pCVar14;
  float local_394;
  float local_390;
  float local_380;
  SMRGLPrimitivePoly local_378 [4];
  uint local_374;
  uint local_370;
  uint local_36c;
  uint local_368;
  uint local_364;
  uint local_360;
  uint local_35c;
  uint local_358;
  uint local_354;
  uint local_350;
  uint local_34c;
  uint local_348;
  uint local_344;
  uint local_340;
  uint local_33c;
  uint local_338;
  uint local_334;
  SMRGLPrimitivePoly local_330 [4];
  uint local_32c;
  uint local_328;
  uint local_324;
  uint local_320;
  uint local_31c;
  uint local_318;
  uint local_314;
  int local_310;
  uint local_30c;
  int local_308;
  int local_304;
  uint local_300;
  int local_2fc;
  int local_2f8;
  uint local_2f4;
  uint local_2f0;
  int local_2ec;
  SMRGLHeaderPrimitive local_2e8 [4];
  uint local_2e4;
  uint local_2e0;
  uint local_2dc;
  uint local_2d8;
  uint local_2d4;
  uint local_2d0;
  uint local_2cc;
  uint local_2c8;
  uint local_2c4;
  CMatrix3x3f local_2c0 [8];
  float local_2b8;
  float local_2ac;
  float local_2a0;
  int local_298;
  int local_294;
  int local_290;
  byte local_28c [12];
  int local_280;
  int local_27c;
  int local_278;
  float local_274;
  float local_270 [4];
  float local_260;
  float local_25c;
  float local_258;
  float local_254;
  float local_250;
  float local_24c;
  float local_248;
  float local_244;
  float local_240;
  float local_23c;
  int local_238;
  int local_234;
  int local_230;
  float local_22c;
  float local_228;
  float local_224;
  float local_220;
  float local_21c [4];
  float local_20c;
  float local_208;
  float local_1fc;
  float local_1f8;
  float local_1f4;
  byte local_1f0 [8];
  float local_1e8 [4];
  float local_1d8;
  float local_1d4;
  float local_1d0;
  float local_1cc;
  float local_1c8;
  float local_1c4;
  float local_1c0;
  float local_1bc [4];
  float local_1ac;
  float local_1a8;
  float local_1a4;
  float local_1a0;
  float local_19c;
  float local_198 [2];
  CVector3f local_190;
  float local_184;
  float local_180 [2];
  CVector3f local_178;
  float local_16c;
  float local_168 [4];
  float local_158;
  float local_154 [3];
  CVector3f local_148;
  int local_13c;
  int local_138;
  int local_134;
  float local_130;
  float afStack_12c [2];
  CVector3f local_124;
  float local_118;
  float local_114 [2];
  byte local_10c [8];
  float afStack_104 [4];
  int local_f4;
  int local_f0;
  int local_ec;
  CVector3f local_e8;
  int local_dc;
  int local_d8;
  int local_d4;
  int local_d0;
  int local_cc;
  int local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  int local_b8;
  int local_b4;
  int local_b0;
  float local_ac;
  float afStack_a8 [2];
  int local_a0;
  int local_9c;
  int local_98;
  int local_94;
  int local_90;
  int local_8c;
  int local_74;
  float local_70;
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
  int local_2c;
  float local_28;
  float local_24;
  int local_20;
  int local_1c;
  int local_18;
  float local_14;
  
  bVar11 = 0;
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00484f00
            (DAT_00612560,(SMRGLTextureBasic *)&DAT_0061c4c4);
  local_1fc = *(float *)&this_ptr->field_0xc - *(float *)this_ptr;
  local_1f8 = *(float *)&this_ptr->field_0x10 - *(float *)&this_ptr->field_0x4;
  local_1f4 = *(float *)&this_ptr->field_0x14 - *(float *)&this_ptr->field_0x8;
  local_19c = local_1fc;
  local_198[(uint)bVar11 * -2] = local_21c[(uint)bVar11 * -2 + 9];
  local_198[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
       local_21c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 10];
  core_vecdir_cpp_FUN_005a7520(local_1bc + 8);
  fVar2 = SQRT(local_198[1] * local_198[1] + local_19c * local_19c + local_198[0] * local_198[0]);
  pCVar14 = &local_e8;
  local_e8._0_4_ = local_148._0_4_;
  *(uint *)((int)&local_e8 + (uint)bVar11 * -8 + 4) =
       *(uint *)((int)&local_148 + (uint)bVar11 * -8 + 4);
  *(uint *)((int)&local_e8 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8) =
       *(uint *)((int)&local_148 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8);
  core_dirmat_cpp_FUN_0045f3e0(local_2c0,pCVar14);
  local_380 = *(float *)&this_ptr->field_0x18;
  local_394 = *(float *)&this_ptr->field_0x1c;
  local_390 = 0.0;
  engine_matrix_c_FUN_00483ae0(DAT_00612560);
  local_168[2] = local_130;
  local_168[(uint)bVar11 * -2 + 3] = afStack_12c[(uint)bVar11 * -2];
  local_168[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4] =
       afStack_12c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
  local_1e8[1] = local_168[2] - *(float *)this_ptr;
  local_1e8[2] = local_168[3] - *(float *)&this_ptr->field_0x4;
  local_1e8[3] = local_158 - *(float *)&this_ptr->field_0x8;
  local_250 = local_168[2] - *(float *)this_ptr;
  local_270[(uint)bVar11 * -2 + 9] = local_1e8[(uint)bVar11 * -2 + 2];
  local_270[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 10] =
       local_1e8[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 3];
  if (local_1e8 + 4 != local_270 + 8) {
    local_1d8 = local_250;
    local_1d4 = local_24c;
    local_1d0 = local_248;
  }
  local_244 = *(float *)&this_ptr->field_0xc - *(float *)this_ptr;
  local_240 = *(float *)&this_ptr->field_0x10 - *(float *)&this_ptr->field_0x4;
  local_23c = *(float *)&this_ptr->field_0x14 - *(float *)&this_ptr->field_0x8;
  local_16c = local_244;
  local_168[(uint)bVar11 * -2] = local_270[(uint)bVar11 * -2 + 0xc];
  local_168[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
       local_270[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0xd];
  if (&local_1cc != &local_16c) {
    local_1cc = local_16c;
    local_1c8 = local_168[0];
    local_1c4 = local_168[1];
  }
  fVar1 = local_1d0 * local_1c4 + local_1d8 * local_1cc + local_1d4 * local_1c8;
  if (0.0 < fVar1) {
    if (*(float *)&this_ptr->field_0x3c <= 0.0) {
      engine_matrix_c_FUN_00483ae0(DAT_00612560);
      local_270[2] = local_208;
      local_270[(uint)bVar11 * -2 + 3] = local_21c[(uint)bVar11 * -2 + 6];
      local_270[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4] =
           local_21c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 7];
      local_270[2] = local_270[2] - *(float *)this_ptr;
      local_270[3] = local_270[3] - *(float *)&this_ptr->field_0x4;
      local_260 = local_260 - *(float *)&this_ptr->field_0x8;
      core_dirmat_cpp_FUN_0045f700(local_2c0,local_270 + 2);
      local_1bc[2] = local_ac;
      local_1bc[(uint)bVar11 * -2 + 3] = afStack_a8[(uint)bVar11 * -2];
      local_1bc[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4] =
           afStack_a8[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
      if (local_270 + 2 != local_1bc + 2) {
        local_270[2] = local_1bc[2];
        local_270[3] = local_1bc[3];
        local_260 = local_1ac;
      }
      local_60 = local_270[3] * local_270[3];
      local_5c = ((local_260 * (float)_DAT_005df2cc) / 448.0) * (float)_DAT_005df2d4;
      local_58 = local_270[2] * local_270[2] + local_60;
      local_54 = local_5c * local_5c;
      if (local_58 < local_54) {
        local_390 = 1.0 - local_58 / local_54;
      }
    }
    else {
      fVar12 = (float10)fcos((float10)*(float *)&this_ptr->field_0x3c);
      local_4c = fVar1 / (SQRT(local_1c4 * local_1c4 + local_1cc * local_1cc + local_1c8 * local_1c8
                              ) * SQRT(local_1d0 * local_1d0 +
                                       local_1d8 * local_1d8 + local_1d4 * local_1d4));
      fVar1 = (float)fVar12;
      if (fVar1 < local_4c) {
        local_390 = (local_4c - fVar1) / (1.0 - fVar1);
      }
      fVar12 = (float10)fptan((float10)*(float *)&this_ptr->field_0x3c);
      local_48 = (float)fVar12;
    }
  }
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_00483d80(DAT_00612560,0);
  if ((0.0 < local_390) && (*(int *)&g_CGamePtr->field_0xc != 0)) {
    fVar1 = *(float *)&this_ptr->field_0x18;
    fVar3 = 1.0 - local_390 * (float)_DAT_005df2d4;
    local_380 = local_380 * fVar3;
    local_394 = fVar3 * local_394;
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00483dd0(DAT_00612560,1);
    local_20 = 0;
    do {
      local_18 = local_20;
      fVar3 = (float)local_20 * _DAT_005df2dc * fVar2;
      fVar4 = local_48;
      if (*(float *)&this_ptr->field_0x3c <= 0.0) {
        fVar4 = (float)_DAT_005df2cc / 448.0;
      }
      local_28 = fVar4 * fVar3;
      local_1c0 = local_2b8 * fVar3;
      local_1bc[0] = local_2ac * fVar3;
      local_1bc[1] = local_2a0 * fVar3;
      local_184 = local_2b8 * fVar3;
      local_180[(uint)bVar11 * -2] = local_1bc[(uint)bVar11 * -2];
      local_180[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
           local_1bc[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
      local_21c[2] = *(float *)this_ptr + local_184;
      local_21c[3] = *(float *)&this_ptr->field_0x4 + local_180[0];
      local_20c = *(float *)&this_ptr->field_0x8 + local_180[1];
      local_154[0] = *(float *)this_ptr + local_184;
      local_168[(uint)bVar11 * -2 + 6] = local_21c[(uint)bVar11 * -2 + 3];
      local_168[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 7] =
           local_21c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4];
      if (&local_178 != (CVector3f *)(local_168 + 5)) {
        local_178._0_4_ = local_154[0];
        local_178._4_4_ = local_154[1];
        local_178._8_4_ = local_154[2];
      }
      engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0
                (DAT_00612560,&local_178);
      engine_matrix_c_FUN_00483b70(DAT_00612560);
      iVar7 = local_20;
      pCVar14 = (CVector3f *)0x0;
      local_1f0._0_4_ = local_28c._0_4_;
      *(uint *)(local_1f0 + (uint)bVar11 * -8 + 4) =
           *(uint *)(local_28c + (uint)bVar11 * -8 + 4);
      local_1e8[(uint)bVar11 * -2 + (uint)bVar11 * -2] =
           *(float *)(local_28c + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8);
      local_18 = iVar7;
      local_1e8[0] = (float)iVar7 + local_1e8[0];
      engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00483850
                (DAT_00612560,(CVector3f *)local_1f0,pCVar14);
      local_bc = 0.0;
      local_c4 = local_28;
      local_c0 = local_28;
      local_13c = (int)ROUND(local_28 * _DAT_005fff94);
      local_138 = (int)ROUND(local_28 * _DAT_005fff94);
      local_134 = (int)ROUND(_DAT_005fff94 * 0.0);
      engine_special_cpp_FUN_00580173(*(SProjectedVertex **)DAT_00612560,(CVector3i *)&local_13c);
      local_c4 = -local_c4;
      local_d0 = (int)ROUND(local_c4 * _DAT_005fff94);
      local_cc = (int)ROUND(local_c0 * _DAT_005fff94);
      local_c8 = (int)ROUND(local_bc * _DAT_005fff94);
      engine_special_cpp_FUN_00580173
                ((SProjectedVertex *)(*(int *)DAT_00612560 + 0x30),(CVector3i *)&local_d0);
      local_c0 = -local_c0;
      local_a0 = (int)ROUND(local_c4 * _DAT_005fff94);
      local_9c = (int)ROUND(local_c0 * _DAT_005fff94);
      local_98 = (int)ROUND(local_bc * _DAT_005fff94);
      engine_special_cpp_FUN_00580173
                ((SProjectedVertex *)(*(int *)DAT_00612560 + 0x60),(CVector3i *)&local_a0);
      local_c4 = -local_c4;
      local_f4 = (int)ROUND(local_c4 * _DAT_005fff94);
      local_f0 = (int)ROUND(local_c0 * _DAT_005fff94);
      local_ec = (int)ROUND(local_bc * _DAT_005fff94);
      engine_special_cpp_FUN_00580173
                ((SProjectedVertex *)(*(int *)DAT_00612560 + 0x90),(CVector3i *)&local_f4);
      engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00484f00
                (DAT_00612560,(SMRGLTextureBasic *)&DAT_0061c50c);
      local_2e4 = 4;
      local_2d4 = 0;
      local_2d8 = 0;
      local_2dc = 0;
      local_2e0 = 0;
      local_2d0 = 0;
      fVar12 = (float10)(local_390 * fVar1) * (float10)_DAT_005df2e4;
      iVar7 = *(int *)DAT_00612560;
      round();
      local_74 = (int)ROUND(fVar12);
      *(int *)(iVar7 + 0x2c) = local_74;
      *(uint *)(*(int *)this_ptr_00 + 0x20) = *(uint *)&this_ptr->field_0x2c;
      *(uint *)(*(int *)this_ptr_00 + 0x24) = *(uint *)&this_ptr->field_0x30;
      *(uint *)(*(int *)this_ptr_00 + 0x28) = *(uint *)&this_ptr->field_0x34;
      local_2cc = 1;
      *(int *)(*(int *)this_ptr_00 + 0x5c) = local_74;
      *(uint *)(*(int *)this_ptr_00 + 0x50) = *(uint *)&this_ptr->field_0x2c;
      *(uint *)(*(int *)this_ptr_00 + 0x54) = *(uint *)&this_ptr->field_0x30;
      *(uint *)(*(int *)this_ptr_00 + 0x58) = *(uint *)&this_ptr->field_0x34;
      local_2c8 = 2;
      *(int *)(*(int *)this_ptr_00 + 0x8c) = local_74;
      *(uint *)(*(int *)this_ptr_00 + 0x80) = *(uint *)&this_ptr->field_0x2c;
      *(uint *)(*(int *)this_ptr_00 + 0x84) = *(uint *)&this_ptr->field_0x30;
      *(uint *)(*(int *)this_ptr_00 + 0x88) = *(uint *)&this_ptr->field_0x34;
      local_2c4 = 3;
      *(int *)(*(int *)this_ptr_00 + 0xbc) = local_74;
      *(uint *)(*(int *)this_ptr_00 + 0xb0) = *(uint *)&this_ptr->field_0x2c;
      *(uint *)(*(int *)this_ptr_00 + 0xb4) = *(uint *)&this_ptr->field_0x30;
      *(uint *)(*(int *)this_ptr_00 + 0xb8) = *(uint *)&this_ptr->field_0x34;
      *(uint *)(*(int *)this_ptr_00 + 0x18) = 0xf80000;
      *(uint *)(*(int *)this_ptr_00 + 0x1c) = 0xf80000;
      *(uint *)(*(int *)this_ptr_00 + 0x48) = 0x80000;
      *(uint *)(*(int *)this_ptr_00 + 0x4c) = 0xf80000;
      *(uint *)(*(int *)this_ptr_00 + 0x78) = 0x80000;
      *(uint *)(*(int *)this_ptr_00 + 0x7c) = 0x80000;
      *(uint *)(*(int *)this_ptr_00 + 0xa8) = 0xf80000;
      *(uint *)(*(int *)this_ptr_00 + 0xac) = 0x80000;
      engine_drender_cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_00482e30(this_ptr_00,local_2e8);
      engine_matrix_c_pop_FUN_004839a0();
      local_20 = local_20 + 1;
    } while (local_20 < 0x19);
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00483dd0(DAT_00612560,0);
  }
  if (0.0 < local_380) {
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00484f00
              (DAT_00612560,(SMRGLTextureBasic *)&DAT_0061c4dc);
    engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0
              (DAT_00612560,(CVector3f *)this_ptr);
    engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00483850
              (DAT_00612560,&local_e8,(CVector3f *)0x0);
    fVar1 = *(float *)&this_ptr->field_0x3c;
    local_50 = *(float *)&this_ptr->field_0x38;
    local_24 = 1.12104e-44;
    if (0.0 < fVar1) {
      fVar12 = (float10)fptan((float10)fVar1);
      local_24 = 2.24208e-44;
      local_50 = (float)(fVar12 * (float10)fVar2);
    }
    local_40 = (uint)(0.0 < fVar1);
    local_3c = (float)core_fire_cpp_computeScreenSpaceSize_FUN_004b00b0
                                (0,*(uint *)&this_ptr->field_0x38);
    local_14 = local_3c;
    local_38 = (float)core_fire_cpp_computeScreenSpaceSize_FUN_004b00b0(fVar2,local_50);
    local_1c = 0;
    local_14 = local_38;
    if (-1 < (int)local_24) {
      local_44 = (fVar2 * _DAT_005df2ec) / _DAT_005df2f0;
      local_30 = 0x100;
      do {
        pCVar5 = DAT_00612560;
        local_18 = local_1c;
        local_14 = local_24;
        fVar12 = ((float10)local_1c / (float10)(int)local_24) * (float10)_DAT_005df2d4 *
                 (float10)_DAT_005df2f4;
        fVar13 = (float10)fsin(fVar12);
        fVar12 = (float10)fcos(fVar12);
        puVar9 = *(uint **)DAT_00612560;
        puVar10 = *(uint **)DAT_00612560 + 0x24;
        for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
          *puVar10 = *puVar9;
          puVar9 = puVar9 + (uint)bVar11 * -2 + 1;
          puVar10 = puVar10 + (uint)bVar11 * -2 + 1;
        }
        iVar7 = *(int *)pCVar5;
        local_68 = (float)fVar13;
        puVar9 = (uint *)(iVar7 + 0x30);
        puVar10 = (uint *)(iVar7 + 0x60);
        for (iVar8 = 0xc; iVar8 != 0; iVar8 = iVar8 + -1) {
          *puVar10 = *puVar9;
          puVar9 = puVar9 + (uint)bVar11 * -2 + 1;
          puVar10 = puVar10 + (uint)bVar11 * -2 + 1;
        }
        local_70 = (float)fVar12;
        local_224 = 0.0;
        local_228 = (float)(fVar13 * (float10)local_3c);
        local_22c = (float)(fVar12 * (float10)local_3c);
        local_280 = (int)ROUND(local_22c * _DAT_005fff94);
        local_27c = (int)ROUND(local_228 * _DAT_005fff94);
        local_278 = (int)ROUND(_DAT_005fff94 * 0.0);
        engine_special_cpp_FUN_00580173(*(SProjectedVertex **)pCVar5,(CVector3i *)&local_280);
        local_22c = local_70 * local_38;
        local_228 = local_68 * local_38;
        local_224 = fVar2 + (float)_DAT_005df30c;
        local_238 = (int)ROUND(local_22c * _DAT_005fff94);
        local_234 = (int)ROUND(local_228 * _DAT_005fff94);
        local_230 = (int)ROUND(local_224 * _DAT_005fff94);
        engine_special_cpp_FUN_00580173
                  ((SProjectedVertex *)(*(int *)DAT_00612560 + 0x30),(CVector3i *)&local_238);
        iVar7 = local_1c;
        if (local_1c != 0) {
          fVar12 = (float10)local_44;
          local_2f4 = round();
          pCVar5 = DAT_00612560;
          local_32c = 4;
          local_31c = 0;
          local_320 = 0;
          local_324 = 0;
          local_328 = 0;
          local_318 = 0;
          local_30c = 1;
          local_300 = 2;
          local_34 = (int)ROUND(fVar12);
          if (*(float *)&this_ptr->field_0x3c <= 0.0) {
            local_314 = 0;
            local_304 = ((iVar7 << 8) / (int)local_24 + _DAT_01c57e18) * 0x10000;
            local_2ec = (local_30 / (int)local_24 + _DAT_01c57e18) * 0x10000;
            local_2f0 = 0;
            local_2fc = local_34;
          }
          else {
            local_304 = 0x800000;
            local_2fc = 0x800000;
            local_2f0 = 0x800000;
            local_2ec = 0x800000;
            local_314 = 0x800000;
          }
          *(uint *)(*(int *)DAT_00612560 + 0x20) = *(uint *)&this_ptr->field_0x2c;
          *(uint *)(*(int *)pCVar5 + 0x24) = *(uint *)&this_ptr->field_0x30;
          *(uint *)(*(int *)pCVar5 + 0x28) = *(uint *)&this_ptr->field_0x34;
          *(uint *)(*(int *)pCVar5 + 0x50) = *(uint *)&this_ptr->field_0x2c;
          *(uint *)(*(int *)pCVar5 + 0x54) = *(uint *)&this_ptr->field_0x30;
          *(uint *)(*(int *)pCVar5 + 0x58) = *(uint *)&this_ptr->field_0x34;
          *(uint *)(*(int *)pCVar5 + 0x80) = *(uint *)&this_ptr->field_0x2c;
          *(uint *)(*(int *)pCVar5 + 0x84) = *(uint *)&this_ptr->field_0x30;
          *(uint *)(*(int *)pCVar5 + 0x88) = *(uint *)&this_ptr->field_0x34;
          *(uint *)(*(int *)pCVar5 + 0xb0) = *(uint *)&this_ptr->field_0x2c;
          *(uint *)(*(int *)pCVar5 + 0xb4) = *(uint *)&this_ptr->field_0x30;
          *(uint *)(*(int *)pCVar5 + 0xb8) = *(uint *)&this_ptr->field_0x34;
          local_310 = local_304;
          local_308 = local_2fc;
          local_2f8 = local_2ec;
          engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00483dd0(pCVar5,1);
          uVar6 = local_40;
          fVar12 = (float10)local_380 * (float10)_DAT_005df2fc;
          round();
          pCVar5 = DAT_00612560;
          local_2c = (int)ROUND(fVar12);
          if (uVar6 == 0) {
            engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_00483de0(DAT_00612560,local_2c);
            engine_drender_cpp_CDemonRenderer_renderBlendedPoly_FUN_00483120(DAT_00612560,local_330)
            ;
          }
          else {
            *(int *)(*(int *)DAT_00612560 + 0x2c) = local_2c;
            *(uint *)(*(int *)pCVar5 + 0x5c) = 0;
            *(uint *)(*(int *)pCVar5 + 0x8c) = 0;
            *(int *)(*(int *)pCVar5 + 0xbc) = local_2c;
            engine_drender_cpp_CDemonRenderer_renderVertexAlphaPoly_FUN_00482f00(pCVar5,local_330);
          }
        }
        local_30 = local_30 + 0x100;
        local_1c = local_1c + 1;
      } while (local_1c <= (int)local_24);
    }
    engine_matrix_c_pop_FUN_004839a0();
  }
  if (0.0 < local_394) {
    fVar2 = 1.0 / fVar2;
    local_220 = local_19c * fVar2;
    local_21c[0] = local_198[0] * fVar2;
    local_21c[1] = local_198[1] * fVar2;
    local_118 = local_19c * fVar2;
    local_114[(uint)bVar11 * -2] = local_21c[(uint)bVar11 * -2];
    local_114[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
         local_21c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
    local_25c = local_118 * _DAT_005df304;
    local_258 = local_114[0] * _DAT_005df304;
    local_254 = local_114[1] * _DAT_005df304;
    local_274 = local_118 * _DAT_005df304;
    local_270[(uint)bVar11 * -2] = local_270[(uint)bVar11 * -2 + 6];
    local_270[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
         local_270[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 7];
    afStack_104[1] = *(float *)&this_ptr->field_0xc - local_274;
    afStack_104[2] = *(float *)&this_ptr->field_0x10 - local_270[0];
    afStack_104[3] = *(float *)&this_ptr->field_0x14 - local_270[1];
    local_10c._0_4_ = afStack_104[1];
    *(float *)((int)local_10c + (uint)bVar11 * -8 + 4) = afStack_104[(uint)bVar11 * 0xfffffffe + 2];
    *(float *)((int)local_10c + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8) =
         afStack_104[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 3];
    core_vecdir_cpp_FUN_005a7520(&this_ptr->field_0x20);
    local_124._0_4_ = local_190._0_4_;
    *(uint *)((int)&local_124 + (uint)bVar11 * -8 + 4) =
         *(uint *)((int)&local_190 + (uint)bVar11 * -8 + 4);
    *(uint *)((int)&local_124 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8) =
         *(uint *)((int)&local_190 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8);
    if (&local_e8 != &local_124) {
      local_e8._0_4_ = local_124._0_4_;
      local_e8._4_4_ = local_124._4_4_;
      local_e8._8_4_ = local_124._8_4_;
    }
    engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0
              (DAT_00612560,(CVector3f *)local_10c);
    engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00483850
              (DAT_00612560,&local_e8,(CVector3f *)0x0);
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00484f00
              (DAT_00612560,(SMRGLTextureBasic *)&DAT_0061c4f4);
    local_1a8 = 0.2;
    local_1a0 = 0.0;
    local_1a4 = 0.2;
    local_298 = (int)ROUND(_DAT_005fff94 * 0.2);
    local_294 = (int)ROUND(_DAT_005fff94 * 0.2);
    local_290 = (int)ROUND(_DAT_005fff94 * 0.0);
    engine_special_cpp_FUN_00580173(*(SProjectedVertex **)DAT_00612560,(CVector3i *)&local_298);
    local_1a8 = -local_1a8;
    local_dc = (int)ROUND(local_1a8 * _DAT_005fff94);
    local_d8 = (int)ROUND(local_1a4 * _DAT_005fff94);
    local_d4 = (int)ROUND(local_1a0 * _DAT_005fff94);
    engine_special_cpp_FUN_00580173
              ((SProjectedVertex *)(*(int *)DAT_00612560 + 0x30),(CVector3i *)&local_dc);
    local_1a4 = -local_1a4;
    local_b8 = (int)ROUND(local_1a8 * _DAT_005fff94);
    local_b4 = (int)ROUND(local_1a4 * _DAT_005fff94);
    local_b0 = (int)ROUND(local_1a0 * _DAT_005fff94);
    engine_special_cpp_FUN_00580173
              ((SProjectedVertex *)(*(int *)DAT_00612560 + 0x60),(CVector3i *)&local_b8);
    local_1a8 = -local_1a8;
    local_94 = (int)ROUND(local_1a8 * _DAT_005fff94);
    local_90 = (int)ROUND(local_1a4 * _DAT_005fff94);
    local_8c = (int)ROUND(local_1a0 * _DAT_005fff94);
    engine_special_cpp_FUN_00580173
              ((SProjectedVertex *)(*(int *)DAT_00612560 + 0x90),(CVector3i *)&local_94);
    pCVar5 = DAT_00612560;
    local_374 = 4;
    local_364 = 0;
    local_368 = 0;
    local_36c = 0;
    local_370 = 0;
    local_360 = 0;
    local_33c = 3;
    local_35c = 0x80000;
    local_358 = 0x80000;
    local_350 = 0xf80000;
    local_34c = 0x80000;
    local_344 = 0xf80000;
    local_340 = 0xf80000;
    local_338 = 0x80000;
    local_334 = 0xf80000;
    local_354 = 1;
    local_348 = 2;
    *(uint *)(*(int *)DAT_00612560 + 0x20) = *(uint *)&this_ptr->field_0x2c;
    *(uint *)(*(int *)pCVar5 + 0x24) = *(uint *)&this_ptr->field_0x30;
    *(uint *)(*(int *)pCVar5 + 0x28) = *(uint *)&this_ptr->field_0x34;
    *(uint *)(*(int *)pCVar5 + 0x50) = *(uint *)&this_ptr->field_0x2c;
    *(uint *)(*(int *)pCVar5 + 0x54) = *(uint *)&this_ptr->field_0x30;
    *(uint *)(*(int *)pCVar5 + 0x58) = *(uint *)&this_ptr->field_0x34;
    *(uint *)(*(int *)pCVar5 + 0x80) = *(uint *)&this_ptr->field_0x2c;
    *(uint *)(*(int *)pCVar5 + 0x84) = *(uint *)&this_ptr->field_0x30;
    *(uint *)(*(int *)pCVar5 + 0x88) = *(uint *)&this_ptr->field_0x34;
    *(uint *)(*(int *)pCVar5 + 0xb0) = *(uint *)&this_ptr->field_0x2c;
    *(uint *)(*(int *)pCVar5 + 0xb4) = *(uint *)&this_ptr->field_0x30;
    *(uint *)(*(int *)pCVar5 + 0xb8) = *(uint *)&this_ptr->field_0x34;
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00483dd0(pCVar5,1);
    local_14 = (float)core_actor_cpp_FUN_0040cc00(0x47000000,0x471fff00);
    fVar12 = (float10)local_14 * (float10)local_394;
    round();
    local_18 = (int)ROUND(fVar12);
    engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_00483de0(DAT_00612560,local_18);
    engine_drender_cpp_CDemonRenderer_renderBlendedPoly_FUN_00483120(DAT_00612560,local_378);
    engine_matrix_c_pop_FUN_004839a0();
  }
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00483dd0(DAT_00612560,0);
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_00483de0(DAT_00612560,0xffff);
  return;
}
