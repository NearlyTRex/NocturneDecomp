// Name: core_fire.cpp_CLaserBeam_render_FUN_0049b1d0
// Address: 0049b1d0
// Address Range: [[0049b1d0, 0049c613]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CLaserBeam_render_FUN_0049b1d0(CLaserBeam *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_CLaserBeam_render_FUN_0049b1d0(CLaserBeam *this_ptr)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  CDemonRenderer *pCVar5;
  uint uVar6;
  int iVar7;
  CDemonRenderer *this_ptr_00;
  SRenderVertex *pSVar8;
  SRenderVertex *pSVar9;
  byte bVar10;
  float10 fVar11;
  float10 fVar12;
  int aiStackY_1274 [6];
  float afStackY_125c [33];
  int aiStackY_11d8 [3];
  float afStackY_11cc [900];
  CVector3f *pCVar13;
  float local_394;
  float local_390;
  float local_380;
  byte local_378 [76];
  int local_32c;
  int local_328;
  int local_324;
  int local_320;
  int local_31c;
  int local_318;
  int local_314;
  int local_310;
  int local_30c;
  int local_308;
  int local_304;
  uint local_300;
  int local_2fc;
  int local_2f8;
  uint local_2f4;
  uint local_2f0;
  int local_2ec;
  SMRGLHeaderPrimitive local_2e8;
  uint local_2d0;
  uint local_2cc;
  uint local_2c8;
  uint local_2c4;
  CMatrix3x3f local_2c0;
  CVector3i local_298;
  float local_28c;
  int aiStack_288 [2];
  CVector3i local_280;
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
  CVector3i local_238;
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
  CVector3f local_1f0;
  float local_1e4;
  float local_1e0 [4];
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
  float local_198 [5];
  float local_184;
  float local_180;
  float local_17c;
  CVector3f local_178;
  float local_16c;
  float local_168 [4];
  float local_158;
  CVector3f local_154;
  float local_148;
  CVector3i local_13c;
  float local_130;
  float afStack_12c [2];
  CVector3f local_124;
  float local_118;
  float local_114;
  float local_110;
  CVector3f local_10c;
  float local_100;
  float local_fc [2];
  CVector3i local_f4;
  CVector3f local_e8;
  CVector3i local_dc;
  CVector3i local_d0;
  float local_c4;
  float local_c0;
  float local_bc;
  CVector3i local_b8;
  float local_ac;
  float afStack_a8 [2];
  CVector3i local_a0;
  CVector3i local_94 [2];
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
  
  bVar10 = 0;
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046e5e0
            (DAT_005f2afc,(SMRGLTextureBasic *)&DAT_005fcab4);
  local_1fc = (this_ptr->hit_position).x - (this_ptr->origin).x;
  local_1f8 = (this_ptr->hit_position).y - (this_ptr->origin).y;
  local_1f4 = (this_ptr->hit_position).z - (this_ptr->origin).z;
  local_19c = local_1fc;
  local_198[(uint)bVar10 * -2] = local_21c[(uint)bVar10 * -2 + 9];
  local_198[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
       local_21c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 10];
  core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_00576250(local_1bc + 8);
  fVar2 = SQRT(local_198[1] * local_198[1] + local_19c * local_19c + local_198[0] * local_198[0]);
  pCVar13 = &local_e8;
  local_e8.x = local_148;
  *(float *)((int)&local_e8 + (uint)bVar10 * -8 + 4) = local_168[(uint)bVar10 * -2 + 9];
  *(float *)((int)&local_e8 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
       local_168[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 10];
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045b550(&local_2c0,pCVar13);
  local_380 = this_ptr->beam_width;
  local_394 = this_ptr->reticle_intensity;
  local_390 = 0.0;
  engine_matrix_c_FUN_0046d1c0(DAT_005f2afc);
  local_168[2] = local_130;
  local_168[(uint)bVar10 * -2 + 3] = afStack_12c[(uint)bVar10 * -2];
  local_168[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4] =
       afStack_12c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
  local_1e4 = local_168[2] - (this_ptr->origin).x;
  local_1e0[0] = local_168[3] - (this_ptr->origin).y;
  local_1e0[1] = local_158 - (this_ptr->origin).z;
  local_250 = local_1e4;
  local_270[(uint)bVar10 * -2 + 9] = local_1e0[(uint)bVar10 * -2];
  local_270[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 10] =
       local_1e0[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
  if (local_1e0 + 2 != local_270 + 8) {
    local_1e0[2] = local_250;
    local_1e0[3] = local_24c;
    local_1d0 = local_248;
  }
  local_244 = (this_ptr->hit_position).x - (this_ptr->origin).x;
  local_240 = (this_ptr->hit_position).y - (this_ptr->origin).y;
  local_23c = (this_ptr->hit_position).z - (this_ptr->origin).z;
  local_16c = local_244;
  local_168[(uint)bVar10 * -2] = local_270[(uint)bVar10 * -2 + 0xc];
  local_168[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
       local_270[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0xd];
  if (&local_1cc != &local_16c) {
    local_1cc = local_16c;
    local_1c8 = local_168[0];
    local_1c4 = local_168[1];
  }
  fVar1 = local_1d0 * local_1c4 + local_1e0[2] * local_1cc + local_1e0[3] * local_1c8;
  if (0.0 < fVar1) {
    if (this_ptr->cone_angle <= 0.0) {
      engine_matrix_c_FUN_0046d1c0(DAT_005f2afc);
      local_270[2] = local_208;
      local_270[(uint)bVar10 * -2 + 3] = local_21c[(uint)bVar10 * -2 + 6];
      local_270[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4] =
           local_21c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 7];
      local_270[2] = local_270[2] - (this_ptr->origin).x;
      local_270[3] = local_270[3] - (this_ptr->origin).y;
      local_260 = local_260 - (this_ptr->origin).z;
      core_dirmat_cpp_FUN_0045b870(&local_2c0,local_270 + 2);
      local_1bc[2] = local_ac;
      local_1bc[(uint)bVar10 * -2 + 3] = afStack_a8[(uint)bVar10 * -2];
      local_1bc[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4] =
           afStack_a8[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
      if (local_270 + 2 != local_1bc + 2) {
        local_270[2] = local_1bc[2];
        local_270[3] = local_1bc[3];
        local_260 = local_1ac;
      }
      local_60 = local_270[3] * local_270[3];
      local_5c = ((local_260 * (float)_DAT_005c0600) / 448.0) * (float)_DAT_005c0608;
      local_58 = local_270[2] * local_270[2] + local_60;
      local_54 = local_5c * local_5c;
      if (local_58 < local_54) {
        local_390 = 1.0 - local_58 / local_54;
      }
    }
    else {
      fVar11 = (float10)fcos((float10)this_ptr->cone_angle);
      local_4c = fVar1 / (SQRT(local_1c4 * local_1c4 + local_1cc * local_1cc + local_1c8 * local_1c8
                              ) * SQRT(local_1d0 * local_1d0 +
                                       local_1e0[2] * local_1e0[2] + local_1e0[3] * local_1e0[3]));
      fVar1 = (float)fVar11;
      if (fVar1 < local_4c) {
        local_390 = (local_4c - fVar1) / (1.0 - fVar1);
      }
      fVar11 = (float10)fptan((float10)this_ptr->cone_angle);
      local_48 = (float)fVar11;
    }
  }
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0046d460(DAT_005f2afc,0);
  if ((0.0 < local_390) && (g_CGamePtr->halo_mode != 0)) {
    fVar1 = this_ptr->beam_width;
    fVar3 = 1.0 - local_390 * (float)_DAT_005c0608;
    local_380 = local_380 * fVar3;
    local_394 = fVar3 * local_394;
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0(DAT_005f2afc,1);
    local_20 = 0;
    do {
      local_18 = local_20;
      fVar3 = (float)local_20 * _DAT_005c0610 * fVar2;
      fVar4 = local_48;
      if (this_ptr->cone_angle <= 0.0) {
        fVar4 = (float)_DAT_005c0600 / 448.0;
      }
      local_28 = fVar4 * fVar3;
      local_1c0 = local_2c0.m[0].z * fVar3;
      local_1bc[0] = local_2c0.m[1].z * fVar3;
      local_1bc[1] = local_2c0.m[2].z * fVar3;
      local_184 = local_2c0.m[0].z * fVar3;
      local_198[(uint)bVar10 * -2 + 6] = local_1bc[(uint)bVar10 * -2];
      local_198[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 7] =
           local_1bc[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
      local_21c[2] = (this_ptr->origin).x + local_184;
      local_21c[3] = (this_ptr->origin).y + local_180;
      local_20c = (this_ptr->origin).z + local_17c;
      local_154.x = local_21c[2];
      local_168[(uint)bVar10 * -2 + 6] = local_21c[(uint)bVar10 * -2 + 3];
      local_168[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 7] =
           local_21c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4];
      if (&local_178 != (CVector3f *)(local_168 + 5)) {
        local_178.x = local_154.x;
        local_178.y = local_154.y;
        local_178.z = local_154.z;
      }
      engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90
                (DAT_005f2afc,&local_178);
      engine_matrix_c_FUN_0046d250(DAT_005f2afc);
      iVar7 = local_20;
      pCVar13 = (CVector3f *)0x0;
      local_1f0.x = local_28c;
      *(int *)((int)&local_1f0 + (uint)bVar10 * -8 + 4) = aiStack_288[(uint)bVar10 * -2];
      *(int *)((int)&local_1f0 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
           aiStack_288[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
      local_18 = iVar7;
      local_1f0.z = (float)iVar7 + local_1f0.z;
      engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30
                (DAT_005f2afc,&local_1f0,pCVar13);
      local_bc = 0.0;
      local_c4 = local_28;
      local_c0 = local_28;
      local_13c.x = (int)ROUND(local_28 * _DAT_005df8e4);
      local_13c.y = (int)ROUND(local_28 * _DAT_005df8e4);
      local_13c.z = (int)ROUND(_DAT_005df8e4 * 0.0);
      engine_special_cpp_FUN_005632a3(&DAT_005f2afc->vertex_buffer_ptr->projected_vertex,&local_13c)
      ;
      local_c4 = -local_c4;
      local_d0.x = (int)ROUND(local_c4 * _DAT_005df8e4);
      local_d0.y = (int)ROUND(local_c0 * _DAT_005df8e4);
      local_d0.z = (int)ROUND(local_bc * _DAT_005df8e4);
      engine_special_cpp_FUN_005632a3
                (&DAT_005f2afc->vertex_buffer_ptr[1].projected_vertex,&local_d0);
      local_c0 = -local_c0;
      local_a0.x = (int)ROUND(local_c4 * _DAT_005df8e4);
      local_a0.y = (int)ROUND(local_c0 * _DAT_005df8e4);
      local_a0.z = (int)ROUND(local_bc * _DAT_005df8e4);
      engine_special_cpp_FUN_005632a3
                (&DAT_005f2afc->vertex_buffer_ptr[2].projected_vertex,&local_a0);
      local_c4 = -local_c4;
      local_f4.x = (int)ROUND(local_c4 * _DAT_005df8e4);
      local_f4.y = (int)ROUND(local_c0 * _DAT_005df8e4);
      local_f4.z = (int)ROUND(local_bc * _DAT_005df8e4);
      engine_special_cpp_FUN_005632a3
                (&DAT_005f2afc->vertex_buffer_ptr[3].projected_vertex,&local_f4);
      engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046e5e0
                (DAT_005f2afc,(SMRGLTextureBasic *)&DAT_005fcafc);
      local_2e8.base.count = 4;
      local_2e8.surface_normal.D.i = 0;
      local_2e8.surface_normal.C.i = 0;
      local_2e8.surface_normal.B.i = 0;
      local_2e8.surface_normal.A.i = 0;
      local_2d0 = 0;
      fVar11 = (float10)(local_390 * fVar1) * (float10)_DAT_005c0618;
      pSVar8 = DAT_005f2afc->vertex_buffer_ptr;
      round();
      local_74 = (int)ROUND(fVar11);
      pSVar8->a = local_74;
      this_ptr_00->vertex_buffer_ptr->r = (this_ptr->color).r;
      this_ptr_00->vertex_buffer_ptr->g = (this_ptr->color).g;
      this_ptr_00->vertex_buffer_ptr->b = (this_ptr->color).b;
      local_2cc = 1;
      this_ptr_00->vertex_buffer_ptr[1].a = local_74;
      this_ptr_00->vertex_buffer_ptr[1].r = (this_ptr->color).r;
      this_ptr_00->vertex_buffer_ptr[1].g = (this_ptr->color).g;
      this_ptr_00->vertex_buffer_ptr[1].b = (this_ptr->color).b;
      local_2c8 = 2;
      this_ptr_00->vertex_buffer_ptr[2].a = local_74;
      this_ptr_00->vertex_buffer_ptr[2].r = (this_ptr->color).r;
      this_ptr_00->vertex_buffer_ptr[2].g = (this_ptr->color).g;
      this_ptr_00->vertex_buffer_ptr[2].b = (this_ptr->color).b;
      local_2c4 = 3;
      this_ptr_00->vertex_buffer_ptr[3].a = local_74;
      this_ptr_00->vertex_buffer_ptr[3].r = (this_ptr->color).r;
      this_ptr_00->vertex_buffer_ptr[3].g = (this_ptr->color).g;
      this_ptr_00->vertex_buffer_ptr[3].b = (this_ptr->color).b;
      this_ptr_00->vertex_buffer_ptr->u = 0xf80000;
      this_ptr_00->vertex_buffer_ptr->v = 0xf80000;
      this_ptr_00->vertex_buffer_ptr[1].u = 0x80000;
      this_ptr_00->vertex_buffer_ptr[1].v = 0xf80000;
      this_ptr_00->vertex_buffer_ptr[2].u = 0x80000;
      this_ptr_00->vertex_buffer_ptr[2].v = 0x80000;
      this_ptr_00->vertex_buffer_ptr[3].u = 0xf80000;
      this_ptr_00->vertex_buffer_ptr[3].v = 0x80000;
      engine_drender_cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_0046c510(this_ptr_00,&local_2e8)
      ;
      engine_matrix_c_pop_FUN_0046d080();
      local_20 = local_20 + 1;
    } while (local_20 < 0x19);
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0(DAT_005f2afc,0);
  }
  if ((0.0 < local_380) && (ABS(this_ptr->halo_spread) != 0.0)) {
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046e5e0
              (DAT_005f2afc,(SMRGLTextureBasic *)&DAT_005fcacc);
    engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90
              (DAT_005f2afc,&this_ptr->origin);
    engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30
              (DAT_005f2afc,&local_e8,(CVector3f *)0x0);
    local_50 = this_ptr->halo_spread;
    local_24 = 1.12104e-44;
    fVar1 = this_ptr->cone_angle;
    if (0.0 < fVar1) {
      fVar11 = (float10)fptan((float10)fVar1);
      local_24 = 2.24208e-44;
      local_50 = (float)(fVar11 * (float10)fVar2);
    }
    local_40 = (uint)(0.0 < fVar1);
    local_3c = (float)core_fire_cpp_computeScreenSpaceSize_FUN_0049b0e0(0,this_ptr->halo_spread);
    local_14 = local_3c;
    local_38 = (float)core_fire_cpp_computeScreenSpaceSize_FUN_0049b0e0(fVar2,local_50);
    local_1c = 0;
    local_14 = local_38;
    if (-1 < (int)local_24) {
      local_44 = (fVar2 * _DAT_005c0620) / _DAT_005c0624;
      local_30 = 0x100;
      do {
        pCVar5 = DAT_005f2afc;
        local_18 = local_1c;
        local_14 = local_24;
        fVar11 = ((float10)local_1c / (float10)(int)local_24) * (float10)_DAT_005c0608 *
                 (float10)_DAT_005c0628;
        fVar12 = (float10)fsin(fVar11);
        fVar11 = (float10)fcos(fVar11);
        pSVar8 = DAT_005f2afc->vertex_buffer_ptr;
        pSVar9 = DAT_005f2afc->vertex_buffer_ptr + 3;
        for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
          (pSVar9->projected_vertex).transformed_x = (pSVar8->projected_vertex).transformed_x;
          pSVar8 = (SRenderVertex *)((int)pSVar8 + ((uint)bVar10 * -2 + 1) * 4);
          pSVar9 = (SRenderVertex *)((int)pSVar9 + ((uint)bVar10 * -2 + 1) * 4);
        }
        pSVar8 = pCVar5->vertex_buffer_ptr;
        local_68 = (float)fVar12;
        pSVar9 = pSVar8 + 1;
        pSVar8 = pSVar8 + 2;
        for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
          (pSVar8->projected_vertex).transformed_x = (pSVar9->projected_vertex).transformed_x;
          pSVar9 = (SRenderVertex *)((int)pSVar9 + ((uint)bVar10 * -2 + 1) * 4);
          pSVar8 = (SRenderVertex *)((int)pSVar8 + ((uint)bVar10 * -2 + 1) * 4);
        }
        local_70 = (float)fVar11;
        local_224 = 0.0;
        local_228 = (float)(fVar12 * (float10)local_3c);
        local_22c = (float)(fVar11 * (float10)local_3c);
        local_280.x = (int)ROUND(local_22c * _DAT_005df8e4);
        local_280.y = (int)ROUND(local_228 * _DAT_005df8e4);
        local_280.z = (int)ROUND(_DAT_005df8e4 * 0.0);
        engine_special_cpp_FUN_005632a3(&pCVar5->vertex_buffer_ptr->projected_vertex,&local_280);
        local_22c = local_70 * local_38;
        local_228 = local_68 * local_38;
        local_224 = fVar2 + (float)_DAT_005c0640;
        local_238.x = (int)ROUND(local_22c * _DAT_005df8e4);
        local_238.y = (int)ROUND(local_228 * _DAT_005df8e4);
        local_238.z = (int)ROUND(local_224 * _DAT_005df8e4);
        engine_special_cpp_FUN_005632a3
                  (&DAT_005f2afc->vertex_buffer_ptr[1].projected_vertex,&local_238);
        iVar7 = local_1c;
        if (local_1c != 0) {
          fVar11 = (float10)local_44;
          local_2f4 = round();
          pCVar5 = DAT_005f2afc;
          local_32c = 4;
          local_31c = 0;
          local_320 = 0;
          local_324 = 0;
          local_328 = 0;
          local_318 = 0;
          local_30c = 1;
          local_300 = 2;
          local_34 = (int)ROUND(fVar11);
          if (this_ptr->cone_angle <= 0.0) {
            local_314 = 0;
            local_304 = ((iVar7 << 8) / (int)local_24 + _DAT_01c743f8) * 0x10000;
            local_2ec = (local_30 / (int)local_24 + _DAT_01c743f8) * 0x10000;
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
          DAT_005f2afc->vertex_buffer_ptr->r = (this_ptr->color).r;
          pCVar5->vertex_buffer_ptr->g = (this_ptr->color).g;
          pCVar5->vertex_buffer_ptr->b = (this_ptr->color).b;
          pCVar5->vertex_buffer_ptr[1].r = (this_ptr->color).r;
          pCVar5->vertex_buffer_ptr[1].g = (this_ptr->color).g;
          pCVar5->vertex_buffer_ptr[1].b = (this_ptr->color).b;
          pCVar5->vertex_buffer_ptr[2].r = (this_ptr->color).r;
          pCVar5->vertex_buffer_ptr[2].g = (this_ptr->color).g;
          pCVar5->vertex_buffer_ptr[2].b = (this_ptr->color).b;
          pCVar5->vertex_buffer_ptr[3].r = (this_ptr->color).r;
          pCVar5->vertex_buffer_ptr[3].g = (this_ptr->color).g;
          pCVar5->vertex_buffer_ptr[3].b = (this_ptr->color).b;
          local_310 = local_304;
          local_308 = local_2fc;
          local_2f8 = local_2ec;
          engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0(pCVar5,1);
          uVar6 = local_40;
          fVar11 = (float10)local_380 * (float10)_DAT_005c0630;
          round();
          pCVar5 = DAT_005f2afc;
          local_2c = (int)ROUND(fVar11);
          if (uVar6 == 0) {
            engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0(DAT_005f2afc,local_2c);
            engine_drender_cpp_CDemonRenderer_renderBlendedPoly_FUN_0046c800
                      (DAT_005f2afc,(SMRGLPrimitivePoly *)(local_378 + 0x48));
          }
          else {
            DAT_005f2afc->vertex_buffer_ptr->a = local_2c;
            pCVar5->vertex_buffer_ptr[1].a = 0;
            pCVar5->vertex_buffer_ptr[2].a = 0;
            pCVar5->vertex_buffer_ptr[3].a = local_2c;
            engine_drender_cpp_CDemonRenderer_renderVertexAlphaPoly_FUN_0046c5e0
                      (pCVar5,(SMRGLPrimitivePoly *)(local_378 + 0x48));
          }
        }
        local_30 = local_30 + 0x100;
        local_1c = local_1c + 1;
      } while (local_1c <= (int)local_24);
    }
    engine_matrix_c_pop_FUN_0046d080();
  }
  if (0.0 < local_394) {
    fVar2 = 1.0 / fVar2;
    local_220 = local_19c * fVar2;
    local_21c[0] = local_198[0] * fVar2;
    local_21c[1] = local_198[1] * fVar2;
    local_118 = local_19c * fVar2;
    afStack_12c[(uint)bVar10 * -2 + 6] = local_21c[(uint)bVar10 * -2];
    afStack_12c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 7] =
         local_21c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
    local_25c = local_118 * _DAT_005c0638;
    local_258 = local_114 * _DAT_005c0638;
    local_254 = local_110 * _DAT_005c0638;
    local_274 = local_118 * _DAT_005c0638;
    local_270[(uint)bVar10 * -2] = local_270[(uint)bVar10 * -2 + 6];
    local_270[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
         local_270[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 7];
    local_100 = (this_ptr->hit_position).x - local_274;
    local_fc[0] = (this_ptr->hit_position).y - local_270[0];
    local_fc[1] = (this_ptr->hit_position).z - local_270[1];
    local_10c.x = local_100;
    *(float *)((int)&local_10c + (uint)bVar10 * -8 + 4) = local_fc[(uint)bVar10 * -2];
    *(float *)((int)&local_10c + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
         local_fc[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
    core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_00576250(&this_ptr->reflection_normal);
    local_124.x = local_198[2];
    afStack_12c[(uint)bVar10 * -2 + 3] = local_198[(uint)bVar10 * -2 + 3];
    afStack_12c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4] =
         local_198[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4];
    if (&local_e8 != (CVector3f *)(afStack_12c + 2)) {
      local_e8.x = local_124.x;
      local_e8.y = local_124.y;
      local_e8.z = local_124.z;
    }
    engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90
              (DAT_005f2afc,&local_10c);
    engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30
              (DAT_005f2afc,&local_e8,(CVector3f *)0x0);
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046e5e0
              (DAT_005f2afc,(SMRGLTextureBasic *)&DAT_005fcae4);
    local_1a8 = 0.4;
    local_1a0 = 0.0;
    local_1a4 = 0.4;
    local_298.x = (int)ROUND(_DAT_005df8e4 * 0.4);
    local_298.y = (int)ROUND(_DAT_005df8e4 * 0.4);
    local_298.z = (int)ROUND(_DAT_005df8e4 * 0.0);
    engine_special_cpp_FUN_005632a3(&DAT_005f2afc->vertex_buffer_ptr->projected_vertex,&local_298);
    local_1a8 = -local_1a8;
    local_dc.x = (int)ROUND(local_1a8 * _DAT_005df8e4);
    local_dc.y = (int)ROUND(local_1a4 * _DAT_005df8e4);
    local_dc.z = (int)ROUND(local_1a0 * _DAT_005df8e4);
    engine_special_cpp_FUN_005632a3(&DAT_005f2afc->vertex_buffer_ptr[1].projected_vertex,&local_dc);
    local_1a4 = -local_1a4;
    local_b8.x = (int)ROUND(local_1a8 * _DAT_005df8e4);
    local_b8.y = (int)ROUND(local_1a4 * _DAT_005df8e4);
    local_b8.z = (int)ROUND(local_1a0 * _DAT_005df8e4);
    engine_special_cpp_FUN_005632a3(&DAT_005f2afc->vertex_buffer_ptr[2].projected_vertex,&local_b8);
    local_1a8 = -local_1a8;
    local_94[0].x = (int)ROUND(local_1a8 * _DAT_005df8e4);
    local_94[0].y = (int)ROUND(local_1a4 * _DAT_005df8e4);
    local_94[0].z = (int)ROUND(local_1a0 * _DAT_005df8e4);
    engine_special_cpp_FUN_005632a3(&DAT_005f2afc->vertex_buffer_ptr[3].projected_vertex,local_94);
    pCVar5 = DAT_005f2afc;
    local_378._4_4_ = 4;
    local_378._20_4_ = 0;
    local_378._16_4_ = 0;
    local_378._12_4_ = 0;
    local_378._8_4_ = 0;
    local_378._24_4_ = 0;
    local_378._60_4_ = 3;
    local_378._28_4_ = 0;
    local_378._32_4_ = 0;
    local_378._40_4_ = 0x1000000;
    local_378._52_4_ = 0x1000000;
    local_378._56_4_ = 0x1000000;
    local_378._68_4_ = 0x1000000;
    local_378._36_4_ = 1;
    local_378._48_4_ = 2;
    local_378._44_4_ = 0;
    local_378._64_4_ = 0;
    DAT_005f2afc->vertex_buffer_ptr->r = (this_ptr->color).r;
    pCVar5->vertex_buffer_ptr->g = (this_ptr->color).g;
    pCVar5->vertex_buffer_ptr->b = (this_ptr->color).b;
    pCVar5->vertex_buffer_ptr[1].r = (this_ptr->color).r;
    pCVar5->vertex_buffer_ptr[1].g = (this_ptr->color).g;
    pCVar5->vertex_buffer_ptr[1].b = (this_ptr->color).b;
    pCVar5->vertex_buffer_ptr[2].r = (this_ptr->color).r;
    pCVar5->vertex_buffer_ptr[2].g = (this_ptr->color).g;
    pCVar5->vertex_buffer_ptr[2].b = (this_ptr->color).b;
    pCVar5->vertex_buffer_ptr[3].r = (this_ptr->color).r;
    pCVar5->vertex_buffer_ptr[3].g = (this_ptr->color).g;
    pCVar5->vertex_buffer_ptr[3].b = (this_ptr->color).b;
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0(pCVar5,1);
    local_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(32768.0,40959.0);
    fVar11 = (float10)local_14 * (float10)local_394;
    round();
    local_18 = (int)ROUND(fVar11);
    engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0(DAT_005f2afc,local_18);
    engine_drender_cpp_CDemonRenderer_renderBlendedPoly_FUN_0046c800
              (DAT_005f2afc,(SMRGLPrimitivePoly *)local_378);
    engine_matrix_c_pop_FUN_0046d080();
  }
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0(DAT_005f2afc,0);
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0(DAT_005f2afc,0xffff);
  return;
}
