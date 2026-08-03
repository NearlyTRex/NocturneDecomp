// Name: core_fire.cpp_CLaserBeam_render_FUN_00485a90
// Address: 00485a90
// Address Range: [[00485a90, 00486d3d]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CLaserBeam_render_FUN_00485a90(CLaserBeam *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_CLaserBeam_render_FUN_00485a90(CLaserBeam *this_ptr)

{
  float fVar1;
  float depth;
  float fVar2;
  CDemonRenderer *pCVar3;
  CVector3f *pCVar4;
  int iVar5;
  SRenderVertex *pSVar6;
  SRenderVertex *pSVar7;
  byte bVar8;
  float10 fVar9;
  float10 fVar10;
  double dVar11;
  float local_2f4;
  float local_2e8;
  byte local_2e0 [84];
  int local_28c;
  int local_288;
  int local_284;
  int local_280;
  int local_27c;
  int local_278;
  int local_274;
  int local_270;
  int local_26c;
  uint local_268;
  uint local_264;
  uint local_260;
  uint local_25c;
  uint local_258;
  uint local_254;
  uint local_250;
  SMRGLHeaderPrimitive local_24c;
  uint local_234;
  uint local_230;
  uint local_22c;
  uint local_228;
  CMatrix3x3f local_220;
  CVector3f local_1f8;
  CVector3i local_1ec;
  float local_1e0;
  float local_1dc;
  float local_1d8;
  CVector3f local_1d4;
  CVector3i local_1c8;
  CVector3i local_1bc;
  float local_1b0;
  float local_1ac;
  float local_1a8;
  CVector3f local_1a4;
  CVector3i local_198;
  float local_18c;
  float local_188;
  float local_184;
  CVector3i local_180;
  CVector3i local_174;
  CVector3f local_168;
  CVector3f local_15c;
  CVector3f local_150;
  float local_144;
  float local_140;
  float local_13c;
  float local_138;
  float local_134;
  float local_130;
  CVector3f local_12c;
  float local_120;
  float local_11c;
  float local_118;
  float local_114;
  float local_110;
  float local_10c;
  CVector3i local_108;
  CVector3f local_fc;
  CVector3f local_f0;
  float local_e4;
  float local_e0;
  float local_dc;
  CVector3i local_d8;
  float local_cc;
  float local_c8;
  float local_c4;
  CVector3i local_c0;
  float local_b4;
  float local_b0;
  float local_ac;
  CVector3i local_a8;
  CVector3f local_9c;
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
  
  bVar8 = 0;
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00461eb0
            (DAT_005ae704,(SMRGLTextureBasic *)&DAT_005b852c);
  local_1a4.x = (this_ptr->hit_position).x - (this_ptr->origin).x;
  local_1a4.y = (this_ptr->hit_position).y - (this_ptr->origin).y;
  local_1a4.z = (this_ptr->hit_position).z - (this_ptr->origin).z;
  core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0(&local_9c,&local_1a4);
  depth = SQRT(local_1a4.z * local_1a4.z + local_1a4.x * local_1a4.x + local_1a4.y * local_1a4.y);
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0(&local_220,&local_9c);
  local_2e0._0_4_ = this_ptr->beam_width;
  local_2f4 = this_ptr->reticle_intensity;
  local_2e8 = 0.0;
  pCVar4 = engine_drender_cpp_CDemonRenderer_getCameraOriginWorld_FUN_00460d30
                     (DAT_005ae704,&local_f0);
  local_144 = pCVar4->x - (this_ptr->origin).x;
  local_140 = pCVar4->y - (this_ptr->origin).y;
  local_13c = pCVar4->z - (this_ptr->origin).z;
  if (&local_120 != &local_144) {
    local_120 = local_144;
    local_11c = local_140;
    local_118 = local_13c;
  }
  local_18c = (this_ptr->hit_position).x - (this_ptr->origin).x;
  local_188 = (this_ptr->hit_position).y - (this_ptr->origin).y;
  local_184 = (this_ptr->hit_position).z - (this_ptr->origin).z;
  if (&local_1e0 != &local_18c) {
    local_1e0 = local_18c;
    local_1dc = local_188;
    local_1d8 = local_184;
  }
  fVar1 = local_118 * local_1d8 + local_120 * local_1e0 + local_11c * local_1dc;
  if (0.0 < fVar1) {
    if (this_ptr->cone_angle <= 0.0) {
      engine_drender_cpp_CDemonRenderer_getCameraOriginWorld_FUN_00460d30(DAT_005ae704,&local_1d4);
      local_1d4.x = local_1d4.x - (this_ptr->origin).x;
      local_1d4.y = local_1d4.y - (this_ptr->origin).y;
      local_1d4.z = local_1d4.z - (this_ptr->origin).z;
      pCVar4 = core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_0044daa0
                         (&local_220,&local_fc,&local_1d4);
      if (&local_1d4 != pCVar4) {
        local_1d4.x = pCVar4->x;
        local_1d4.y = pCVar4->y;
        local_1d4.z = pCVar4->z;
      }
      local_60 = local_1d4.y * local_1d4.y;
      local_58 = ((local_1d4.z * (float)18) / 448.0) * (float)2;
      local_50 = local_1d4.x * local_1d4.x + local_60;
      local_5c = local_58 * local_58;
      if (local_50 < local_5c) {
        local_2e8 = 1.0 - local_50 / local_5c;
      }
    }
    else {
      fVar9 = (float10)fcos((float10)this_ptr->cone_angle);
      local_4c = fVar1 / (SQRT(local_1d8 * local_1d8 + local_1e0 * local_1e0 + local_1dc * local_1dc
                              ) * SQRT(local_118 * local_118 +
                                       local_120 * local_120 + local_11c * local_11c));
      fVar1 = (float)fVar9;
      if (fVar1 < local_4c) {
        local_2e8 = (local_4c - fVar1) / (1.0 - fVar1);
      }
      fVar9 = (float10)fptan((float10)this_ptr->cone_angle);
      local_44 = (float)fVar9;
    }
  }
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_00460fb0(DAT_005ae704,0);
  if ((0.0 < local_2e8) && (g_CGame_PTR_005b9354->halo_mode != 0)) {
    fVar1 = this_ptr->beam_width;
    fVar2 = 1.0 - local_2e8 * (float)2;
    local_2e0._0_4_ = (float)local_2e0._0_4_ * fVar2;
    local_2f4 = fVar2 * local_2f4;
    iVar5 = 0;
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00461000(DAT_005ae704,1);
    do {
      local_2e0._4_4_ = (float)iVar5 * 5.0679227589555217e-315._0_4_ * depth;
      local_28 = local_44;
      if (this_ptr->cone_angle <= 0.0) {
        local_28 = (float)18 / 448.0;
      }
      local_28 = local_28 * (float)local_2e0._4_4_;
      local_1b0 = local_220.m[0].z * (float)local_2e0._4_4_;
      local_1ac = local_220.m[1].z * (float)local_2e0._4_4_;
      local_1a8 = local_220.m[2].z * (float)local_2e0._4_4_;
      local_90 = local_220.m[0].z;
      local_8c = local_220.m[1].z;
      local_88 = local_220.m[2].z;
      local_150.x = (this_ptr->origin).x + local_1b0;
      local_150.y = (this_ptr->origin).y + local_1ac;
      local_150.z = (this_ptr->origin).z + local_1a8;
      if (&local_168 != &local_150) {
        local_168.x = local_150.x;
        local_168.y = local_150.y;
        local_168.z = local_150.z;
      }
      local_1c = iVar5;
      engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00
                (DAT_005ae704,&local_168);
      engine_drender_cpp_CDemonRenderer_getCameraRotationRadians_FUN_00460db0
                (DAT_005ae704,&local_1f8);
      local_1f8.z = (float)iVar5 + local_1f8.z;
      local_1c = iVar5;
      engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0
                (DAT_005ae704,&local_1f8,(CVector3f *)0x0);
      local_e4 = local_28;
      local_e0 = local_28;
      local_dc = 0.0;
      local_180.x = (int)ROUND(local_28 * 256.0f);
      local_180.y = (int)ROUND(local_28 * 256.0f);
      local_180.z = (int)ROUND(256.0f * 0.0);
      engine_special_cpp_transformAndProjectPoint_FUN_0053075c
                (&DAT_005ae704->vertex_buffer_ptr->projected_vertex,&local_180);
      local_e4 = -local_e4;
      local_c0.x = (int)ROUND(local_e4 * 256.0f);
      local_c0.y = (int)ROUND(local_e0 * 256.0f);
      local_c0.z = (int)ROUND(local_dc * 256.0f);
      engine_special_cpp_transformAndProjectPoint_FUN_0053075c
                (&DAT_005ae704->vertex_buffer_ptr[1].projected_vertex,&local_c0);
      local_e0 = -local_e0;
      local_1bc.x = (int)ROUND(local_e4 * 256.0f);
      local_1bc.y = (int)ROUND(local_e0 * 256.0f);
      local_1bc.z = (int)ROUND(local_dc * 256.0f);
      engine_special_cpp_transformAndProjectPoint_FUN_0053075c
                (&DAT_005ae704->vertex_buffer_ptr[2].projected_vertex,&local_1bc);
      local_e4 = -local_e4;
      local_174.x = (int)ROUND(local_e4 * 256.0f);
      local_174.y = (int)ROUND(local_e0 * 256.0f);
      local_174.z = (int)ROUND(local_dc * 256.0f);
      engine_special_cpp_transformAndProjectPoint_FUN_0053075c
                (&DAT_005ae704->vertex_buffer_ptr[3].projected_vertex,&local_174);
      engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00461eb0
                (DAT_005ae704,(SMRGLTextureBasic *)&DAT_005b8574);
      pCVar3 = DAT_005ae704;
      local_24c.surface_normal.A.i = 4;
      local_234 = 0;
      local_24c.surface_normal.D.i = 0;
      local_24c.surface_normal.C.i = 0;
      local_24c.surface_normal.B.i = 0;
      local_230 = 0;
      dVar11 = round((double)(local_2e8 * fVar1 * (float)8192));
      iStack_78 = (int)ROUND(dVar11);
      pCVar3->vertex_buffer_ptr->a = iStack_78;
      pCVar3->vertex_buffer_ptr->r = (this_ptr->color).r;
      pCVar3->vertex_buffer_ptr->g = (this_ptr->color).g;
      pCVar3->vertex_buffer_ptr->b = (this_ptr->color).b;
      local_230 = 1;
      pCVar3->vertex_buffer_ptr[1].a = iStack_78;
      pCVar3->vertex_buffer_ptr[1].r = (this_ptr->color).r;
      pCVar3->vertex_buffer_ptr[1].g = (this_ptr->color).g;
      pCVar3->vertex_buffer_ptr[1].b = (this_ptr->color).b;
      local_22c = 2;
      pCVar3->vertex_buffer_ptr[2].a = iStack_78;
      pCVar3->vertex_buffer_ptr[2].r = (this_ptr->color).r;
      pCVar3->vertex_buffer_ptr[2].g = (this_ptr->color).g;
      pCVar3->vertex_buffer_ptr[2].b = (this_ptr->color).b;
      local_228 = 3;
      pCVar3->vertex_buffer_ptr[3].a = iStack_78;
      pCVar3->vertex_buffer_ptr[3].r = (this_ptr->color).r;
      pCVar3->vertex_buffer_ptr[3].g = (this_ptr->color).g;
      pCVar3->vertex_buffer_ptr[3].b = (this_ptr->color).b;
      pCVar3->vertex_buffer_ptr->u = 0xf80000;
      pCVar3->vertex_buffer_ptr->v = 0xf80000;
      pCVar3->vertex_buffer_ptr[1].u = 0x80000;
      pCVar3->vertex_buffer_ptr[1].v = 0xf80000;
      pCVar3->vertex_buffer_ptr[2].u = 0x80000;
      pCVar3->vertex_buffer_ptr[2].v = 0x80000;
      pCVar3->vertex_buffer_ptr[3].u = 0xf80000;
      pCVar3->vertex_buffer_ptr[3].v = 0x80000;
      engine_drender_cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_00460080(pCVar3,&local_24c);
      iVar5 = iVar5 + 1;
      engine_drender_cpp_CDemonRenderer_matrixPop_FUN_00460bf0();
    } while (iVar5 < 0x19);
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00461000(DAT_005ae704,0);
  }
  if (0.0 < (float)local_2e0._0_4_) {
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00461eb0
              (DAT_005ae704,(SMRGLTextureBasic *)&DAT_005b8544);
    engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00
              (DAT_005ae704,&this_ptr->origin);
    engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0
              (DAT_005ae704,&local_9c,(CVector3f *)0x0);
    fVar1 = this_ptr->cone_angle;
    local_54 = this_ptr->halo_spread;
    local_24 = 1.12104e-44;
    if (0.0 < fVar1) {
      fVar9 = (float10)fptan((float10)fVar1);
      local_24 = 2.24208e-44;
      local_54 = (float)(fVar9 * (float10)depth);
    }
    local_40 = (uint)(0.0 < fVar1);
    local_3c = core_fire_cpp_computeScreenSpaceSize_FUN_004859a0(0.0,this_ptr->halo_spread);
    local_18 = local_3c;
    local_38 = core_fire_cpp_computeScreenSpaceSize_FUN_004859a0(depth,local_54);
    local_20 = 0;
    local_18 = local_38;
    if (-1 < (int)local_24) {
      local_48 = (depth * 16777220.0f) / 30.0f;
      local_30 = 0x100;
      do {
        pCVar3 = DAT_005ae704;
        local_1c = local_20;
        local_18 = local_24;
        fVar9 = ((float10)local_20 / (float10)(int)local_24) * (float10)2 *
                (float10)3.1415926535000001;
        fVar10 = (float10)fsin(fVar9);
        fVar9 = (float10)fcos(fVar9);
        pSVar6 = DAT_005ae704->vertex_buffer_ptr;
        pSVar7 = DAT_005ae704->vertex_buffer_ptr + 3;
        for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
          (pSVar7->projected_vertex).transformed_x = (pSVar6->projected_vertex).transformed_x;
          pSVar6 = (SRenderVertex *)((int)pSVar6 + ((uint)bVar8 * -2 + 1) * 4);
          pSVar7 = (SRenderVertex *)((int)pSVar7 + ((uint)bVar8 * -2 + 1) * 4);
        }
        local_6c = (float)fVar10;
        pSVar6 = pCVar3->vertex_buffer_ptr;
        local_68 = (float)fVar9;
        pSVar7 = pSVar6 + 1;
        pSVar6 = pSVar6 + 2;
        for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
          (pSVar6->projected_vertex).transformed_x = (pSVar7->projected_vertex).transformed_x;
          pSVar7 = (SRenderVertex *)((int)pSVar7 + ((uint)bVar8 * -2 + 1) * 4);
          pSVar6 = (SRenderVertex *)((int)pSVar6 + ((uint)bVar8 * -2 + 1) * 4);
        }
        local_c4 = 0.0;
        local_c8 = (float)(fVar10 * (float10)local_3c);
        local_cc = (float)(fVar9 * (float10)local_3c);
        local_a8.x = (int)ROUND(local_cc * 256.0f);
        local_a8.y = (int)ROUND(local_c8 * 256.0f);
        local_a8.z = (int)ROUND(256.0f * 0.0);
        engine_special_cpp_transformAndProjectPoint_FUN_0053075c
                  (&pCVar3->vertex_buffer_ptr->projected_vertex,&local_a8);
        local_cc = local_68 * local_38;
        local_c8 = local_6c * local_38;
        local_c4 = depth + (float)-0.10000000000000001;
        local_108.x = (int)ROUND(local_cc * 256.0f);
        local_108.y = (int)ROUND(local_c8 * 256.0f);
        local_108.z = (int)ROUND(local_c4 * 256.0f);
        engine_special_cpp_transformAndProjectPoint_FUN_0053075c
                  (&DAT_005ae704->vertex_buffer_ptr[1].projected_vertex,&local_108);
        iVar5 = local_20;
        if (local_20 != 0) {
          dVar11 = round((double)local_48);
          pCVar3 = DAT_005ae704;
          local_2e0._8_4_ = 4;
          local_2e0._24_4_ = 0;
          local_2e0._20_4_ = 0;
          local_2e0._16_4_ = 0;
          local_2e0._12_4_ = 0;
          local_2e0._28_4_ = 0;
          local_2e0._64_4_ = 3;
          local_2e0._40_4_ = 1;
          local_2e0._52_4_ = 2;
          local_38 = (float)(int)ROUND(dVar11);
          if (this_ptr->cone_angle <= 0.0) {
            local_2e0._48_4_ = ((iVar5 << 8) / (int)local_28 + _DAT_01c094b8) * 0x10000;
            local_2e0._68_4_ = 0;
            local_2e0._72_4_ = (local_34 / (int)local_28 + _DAT_01c094b8) * 0x10000;
            local_2e0._32_4_ = 0;
            local_2e0._56_4_ = local_38;
          }
          else {
            local_2e0._48_4_ = 0x800000;
            local_2e0._56_4_ = 1.1754944e-38;
            local_2e0._68_4_ = 0x800000;
            local_2e0._72_4_ = 0x800000;
            local_2e0._32_4_ = 0x800000;
          }
          DAT_005ae704->vertex_buffer_ptr->r = (this_ptr->color).r;
          pCVar3->vertex_buffer_ptr->g = (this_ptr->color).g;
          pCVar3->vertex_buffer_ptr->b = (this_ptr->color).b;
          pCVar3->vertex_buffer_ptr[1].r = (this_ptr->color).r;
          pCVar3->vertex_buffer_ptr[1].g = (this_ptr->color).g;
          pCVar3->vertex_buffer_ptr[1].b = (this_ptr->color).b;
          pCVar3->vertex_buffer_ptr[2].r = (this_ptr->color).r;
          pCVar3->vertex_buffer_ptr[2].g = (this_ptr->color).g;
          pCVar3->vertex_buffer_ptr[2].b = (this_ptr->color).b;
          pCVar3->vertex_buffer_ptr[3].r = (this_ptr->color).r;
          pCVar3->vertex_buffer_ptr[3].g = (this_ptr->color).g;
          pCVar3->vertex_buffer_ptr[3].b = (this_ptr->color).b;
          local_2e0._36_4_ = local_2e0._48_4_;
          local_2e0._44_4_ = local_2e0._56_4_;
          local_2e0._60_4_ = local_2e0._72_4_;
          engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00461000(pCVar3,1);
          fVar1 = local_44;
          dVar11 = round((double)((float)32767.5 * 448.0));
          pCVar3 = DAT_005ae704;
          local_34 = (int)ROUND(dVar11);
          if (fVar1 == 0.0) {
            engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_00461010(DAT_005ae704,local_34);
            engine_drender_cpp_CDemonRenderer_renderBlendedPoly_FUN_00460370
                      (DAT_005ae704,(SMRGLPrimitivePoly *)local_2e0);
          }
          else {
            DAT_005ae704->vertex_buffer_ptr->a = local_34;
            pCVar3->vertex_buffer_ptr[1].a = 0;
            pCVar3->vertex_buffer_ptr[2].a = 0;
            pCVar3->vertex_buffer_ptr[3].a = local_34;
            engine_drender_cpp_CDemonRenderer_renderVertexAlphaPoly_FUN_00460150
                      (pCVar3,(SMRGLPrimitivePoly *)local_2e0);
          }
        }
        local_30 = local_30 + 0x100;
        local_20 = local_20 + 1;
      } while (local_20 <= (int)local_24);
    }
    engine_drender_cpp_CDemonRenderer_matrixPop_FUN_00460bf0();
  }
  if (0.0 < local_2f4) {
    local_130 = 1.0 / depth;
    local_138 = local_1a4.x * local_130;
    local_134 = local_1a4.y * local_130;
    local_130 = local_1a4.z * local_130;
    local_114 = local_138 * 5.122630465115234e-315._0_4_;
    local_110 = local_134 * 5.122630465115234e-315._0_4_;
    local_10c = local_130 * 5.122630465115234e-315._0_4_;
    local_12c.x = (this_ptr->hit_position).x - local_114;
    local_12c.y = (this_ptr->hit_position).y - local_110;
    local_12c.z = (this_ptr->hit_position).z - local_10c;
    pCVar4 = core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0
                       (&local_15c,&this_ptr->reflection_normal);
    if (&local_9c != pCVar4) {
      local_9c.x = pCVar4->x;
      local_9c.y = pCVar4->y;
      local_9c.z = pCVar4->z;
    }
    engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00
              (DAT_005ae704,&local_12c);
    engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0
              (DAT_005ae704,&local_9c,(CVector3f *)0x0);
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00461eb0
              (DAT_005ae704,(SMRGLTextureBasic *)&DAT_005b855c);
    local_b4 = 0.2;
    local_ac = 0.0;
    local_b0 = 0.2;
    local_198.x = (int)ROUND(256.0f * 0.2);
    local_198.y = (int)ROUND(256.0f * 0.2);
    local_198.z = (int)ROUND(256.0f * 0.0);
    engine_special_cpp_transformAndProjectPoint_FUN_0053075c
              (&DAT_005ae704->vertex_buffer_ptr->projected_vertex,&local_198);
    local_b4 = -local_b4;
    local_d8.x = (int)ROUND(local_b4 * 256.0f);
    local_d8.y = (int)ROUND(local_b0 * 256.0f);
    local_d8.z = (int)ROUND(local_ac * 256.0f);
    engine_special_cpp_transformAndProjectPoint_FUN_0053075c
              (&DAT_005ae704->vertex_buffer_ptr[1].projected_vertex,&local_d8);
    local_b0 = -local_b0;
    local_1ec.x = (int)ROUND(local_b4 * 256.0f);
    local_1ec.y = (int)ROUND(local_b0 * 256.0f);
    local_1ec.z = (int)ROUND(local_ac * 256.0f);
    engine_special_cpp_transformAndProjectPoint_FUN_0053075c
              (&DAT_005ae704->vertex_buffer_ptr[2].projected_vertex,&local_1ec);
    local_b4 = -local_b4;
    local_1c8.x = (int)ROUND(local_b4 * 256.0f);
    local_1c8.y = (int)ROUND(local_b0 * 256.0f);
    local_1c8.z = (int)ROUND(local_ac * 256.0f);
    engine_special_cpp_transformAndProjectPoint_FUN_0053075c
              (&DAT_005ae704->vertex_buffer_ptr[3].projected_vertex,&local_1c8);
    pCVar3 = DAT_005ae704;
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
    local_24c.base.type = 0xf80000;
    local_26c = 1;
    local_260 = 2;
    DAT_005ae704->vertex_buffer_ptr->r = (this_ptr->color).r;
    pCVar3->vertex_buffer_ptr->g = (this_ptr->color).g;
    pCVar3->vertex_buffer_ptr->b = (this_ptr->color).b;
    pCVar3->vertex_buffer_ptr[1].r = (this_ptr->color).r;
    pCVar3->vertex_buffer_ptr[1].g = (this_ptr->color).g;
    pCVar3->vertex_buffer_ptr[1].b = (this_ptr->color).b;
    pCVar3->vertex_buffer_ptr[2].r = (this_ptr->color).r;
    pCVar3->vertex_buffer_ptr[2].g = (this_ptr->color).g;
    pCVar3->vertex_buffer_ptr[2].b = (this_ptr->color).b;
    pCVar3->vertex_buffer_ptr[3].r = (this_ptr->color).r;
    pCVar3->vertex_buffer_ptr[3].g = (this_ptr->color).g;
    pCVar3->vertex_buffer_ptr[3].b = (this_ptr->color).b;
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00461000(pCVar3,1);
    local_18 = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(32768.0,40959.0);
    dVar11 = round((double)(local_18 * local_2f4));
    local_20 = (int)ROUND(dVar11);
    engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_00461010(DAT_005ae704,local_20);
    engine_drender_cpp_CDemonRenderer_renderBlendedPoly_FUN_00460370
              (DAT_005ae704,(SMRGLPrimitivePoly *)(local_2e0 + 0x4c));
    engine_drender_cpp_CDemonRenderer_matrixPop_FUN_00460bf0();
  }
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00461000(DAT_005ae704,0);
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_00461010(DAT_005ae704,0xffff);
  return;
}
