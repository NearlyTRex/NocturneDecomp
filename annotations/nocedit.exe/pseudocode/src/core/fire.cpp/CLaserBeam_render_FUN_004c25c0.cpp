// Name: core_fire.cpp_CLaserBeam_render_FUN_004c25c0
// Address: 004c25c0
// Address Range: [[004c25c0, 004c2d4b] [004c2d69, 004c304f] [004c3053, 004c3865]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CLaserBeam_render_FUN_004c25c0(CLaserBeam *this_ptr)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */

void __cdecl core_fire_cpp_CLaserBeam_render_FUN_004c25c0(CLaserBeam *this_ptr)

{
  float fVar1;
  float depth;
  float fVar2;
  CDemonRenderer *pCVar3;
  float *pfVar4;
  CVector3f *pCVar5;
  int iVar6;
  SRenderVertex *pSVar7;
  SRenderVertex *pSVar8;
  byte bVar9;
  float10 fVar10;
  float10 fVar11;
  float local_2f4;
  float local_2e8;
  float local_2e0;
  SMRGLHeaderPrimitive local_2d8;
  uint local_2c0;
  uint local_2bc;
  int local_2b8;
  uint local_2b4;
  int local_2b0;
  int local_2ac;
  uint local_2a8;
  int local_2a4;
  int local_2a0;
  uint local_29c;
  uint local_298;
  int local_294;
  SMRGLHeaderPrimitive local_290;
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
  uint local_24c;
  SMRGLHeaderPrimitive local_248;
  uint local_230;
  uint local_22c;
  uint local_228;
  uint local_224;
  CMatrix3x3f local_220;
  CVector3i local_1f8;
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
  float local_f0 [3];
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
  float local_74;
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
  float local_2c;
  float local_28;
  float local_24;
  int local_20;
  int local_1c;
  float local_18;
  
  bVar9 = 0;
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
            (g_CDemonRendererPtr2,&g_FireEffectLaserTexture);
  local_1a4.x = (this_ptr->hit_position).x - (this_ptr->origin).x;
  local_1a4.y = (this_ptr->hit_position).y - (this_ptr->origin).y;
  local_1a4.z = (this_ptr->hit_position).z - (this_ptr->origin).z;
  core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&local_9c,&local_1a4);
  depth = SQRT(local_1a4.z * local_1a4.z + local_1a4.x * local_1a4.x + local_1a4.y * local_1a4.y);
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30(&local_220,&local_9c);
  local_2e0 = this_ptr->beam_width;
  local_2f4 = this_ptr->reticle_intensity;
  local_2e8 = 0.0;
  pfVar4 = engine_drender_cpp_CDemonRenderer_getCameraOriginScaled_FUN_0048c780
                     (g_CDemonRendererPtr2,local_f0);
  local_144 = *pfVar4 - (this_ptr->origin).x;
  local_140 = pfVar4[1] - (this_ptr->origin).y;
  local_13c = pfVar4[2] - (this_ptr->origin).z;
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
      engine_drender_cpp_CDemonRenderer_getCameraOriginScaled_FUN_0048c780
                (g_CDemonRendererPtr2,&local_1d4.x);
      local_1d4.x = local_1d4.x - (this_ptr->origin).x;
      local_1d4.y = local_1d4.y - (this_ptr->origin).y;
      local_1d4.z = local_1d4.z - (this_ptr->origin).z;
      pCVar5 = core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
                         (&local_220,&local_fc,&local_1d4);
      if (&local_1d4 != pCVar5) {
        local_1d4.x = pCVar5->x;
        local_1d4.y = pCVar5->y;
        local_1d4.z = pCVar5->z;
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
      fVar10 = (float10)fcos((float10)this_ptr->cone_angle);
      local_4c = fVar1 / (SQRT(local_1d8 * local_1d8 + local_1e0 * local_1e0 + local_1dc * local_1dc
                              ) * SQRT(local_118 * local_118 +
                                       local_120 * local_120 + local_11c * local_11c));
      fVar1 = (float)fVar10;
      if (fVar1 < local_4c) {
        local_2e8 = (local_4c - fVar1) / (1.0 - fVar1);
      }
      fVar10 = (float10)fptan((float10)this_ptr->cone_angle);
      local_44 = (float)fVar10;
    }
  }
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0048ca00(g_CDemonRendererPtr2,0);
  if ((0.0 < local_2e8) && (g_CGamePtr->halo_mode != 0)) {
    fVar1 = this_ptr->beam_width;
    fVar2 = 1.0 - local_2e8 * (float)2;
    local_2e0 = local_2e0 * fVar2;
    local_2f4 = fVar2 * local_2f4;
    iVar6 = 0;
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr2,1);
    do {
      local_1a8 = (float)iVar6 * 0.04f * depth;
      local_28 = local_44;
      if (this_ptr->cone_angle <= 0.0) {
        local_28 = (float)18 / 448.0;
      }
      local_28 = local_28 * local_1a8;
      local_1b0 = local_220.m[0].z * local_1a8;
      local_1ac = local_220.m[1].z * local_1a8;
      local_1a8 = local_220.m[2].z * local_1a8;
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
      local_1c = iVar6;
      engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
                (g_CDemonRendererPtr2,&local_168);
      engine_drender_cpp_CDemonRenderer_getCameraRotationAsRadians_FUN_0048c800
                (g_CDemonRendererPtr2,(float *)&local_1f8);
      local_1f8.z = (int)((float)iVar6 + (float)local_1f8.z);
      local_1c = iVar6;
      engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
                (g_CDemonRendererPtr2,&local_1f8,(CVector3i *)0x0);
      local_e4 = local_28;
      local_e0 = local_28;
      local_dc = 0.0;
      local_180.x = (int)ROUND(local_28 * 256.0f);
      local_180.y = (int)ROUND(local_28 * 256.0f);
      local_180.z = (int)ROUND(256.0f * 0.0);
      wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                (&g_CDemonRendererPtr2->vertex_buffer_ptr->projected_vertex,&local_180);
      local_e4 = -local_e4;
      local_c0.x = (int)ROUND(local_e4 * 256.0f);
      local_c0.y = (int)ROUND(local_e0 * 256.0f);
      local_c0.z = (int)ROUND(local_dc * 256.0f);
      wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                (&g_CDemonRendererPtr2->vertex_buffer_ptr[1].projected_vertex,&local_c0);
      local_e0 = -local_e0;
      local_1bc.x = (int)ROUND(local_e4 * 256.0f);
      local_1bc.y = (int)ROUND(local_e0 * 256.0f);
      local_1bc.z = (int)ROUND(local_dc * 256.0f);
      wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                (&g_CDemonRendererPtr2->vertex_buffer_ptr[2].projected_vertex,&local_1bc);
      local_e4 = -local_e4;
      local_174.x = (int)ROUND(local_e4 * 256.0f);
      local_174.y = (int)ROUND(local_e0 * 256.0f);
      local_174.z = (int)ROUND(local_dc * 256.0f);
      wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                (&g_CDemonRendererPtr2->vertex_buffer_ptr[3].projected_vertex,&local_174);
      engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
                (g_CDemonRendererPtr2,&g_FireEffectHeadliteTexture);
      pCVar3 = g_CDemonRendererPtr2;
      local_248.base.count = 4;
      local_248.surface_normal.D = 0;
      local_248.surface_normal.C = 0;
      local_248.surface_normal.B = 0;
      local_248.surface_normal.A = 0;
      local_230 = 0;
      local_74 = (float)(int)ROUND(ROUND(local_2e8 * fVar1 * (float)8192));
      g_CDemonRendererPtr2->vertex_buffer_ptr->w_recip = local_74;
      pCVar3->vertex_buffer_ptr->light = (this_ptr->color).r;
      pCVar3->vertex_buffer_ptr->color = (this_ptr->color).g;
      pCVar3->vertex_buffer_ptr->fog = (this_ptr->color).b;
      local_22c = 1;
      pCVar3->vertex_buffer_ptr[1].w_recip = local_74;
      pCVar3->vertex_buffer_ptr[1].light = (this_ptr->color).r;
      pCVar3->vertex_buffer_ptr[1].color = (this_ptr->color).g;
      pCVar3->vertex_buffer_ptr[1].fog = (this_ptr->color).b;
      local_228 = 2;
      pCVar3->vertex_buffer_ptr[2].w_recip = local_74;
      pCVar3->vertex_buffer_ptr[2].light = (this_ptr->color).r;
      pCVar3->vertex_buffer_ptr[2].color = (this_ptr->color).g;
      pCVar3->vertex_buffer_ptr[2].fog = (this_ptr->color).b;
      local_224 = 3;
      pCVar3->vertex_buffer_ptr[3].w_recip = local_74;
      pCVar3->vertex_buffer_ptr[3].light = (this_ptr->color).r;
      pCVar3->vertex_buffer_ptr[3].color = (this_ptr->color).g;
      pCVar3->vertex_buffer_ptr[3].fog = (this_ptr->color).b;
      pCVar3->vertex_buffer_ptr->u = 0xf80000;
      pCVar3->vertex_buffer_ptr->v = 0xf80000;
      pCVar3->vertex_buffer_ptr[1].u = 0x80000;
      pCVar3->vertex_buffer_ptr[1].v = 0xf80000;
      pCVar3->vertex_buffer_ptr[2].u = 0x80000;
      pCVar3->vertex_buffer_ptr[2].v = 0x80000;
      pCVar3->vertex_buffer_ptr[3].u = 0xf80000;
      pCVar3->vertex_buffer_ptr[3].v = 0x80000;
      engine_drender_cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0(pCVar3,&local_248);
      iVar6 = iVar6 + 1;
      engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
    } while (iVar6 < 0x19);
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr2,0);
  }
  if (0.0 < local_2e0) {
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
              (g_CDemonRendererPtr2,&g_FireEffectBeamFuzzTexture);
    engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
              (g_CDemonRendererPtr2,&this_ptr->origin);
    engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
              (g_CDemonRendererPtr2,(CVector3i *)&local_9c,(CVector3i *)0x0);
    fVar1 = this_ptr->cone_angle;
    local_54 = this_ptr->halo_spread;
    local_24 = 1.12104e-44;
    if (0.0 < fVar1) {
      fVar10 = (float10)fptan((float10)fVar1);
      local_24 = 2.24208e-44;
      local_54 = (float)(fVar10 * (float10)depth);
    }
    local_40 = (uint)(0.0 < fVar1);
    local_3c = core_fire_cpp_computeScreenSpaceSize_FUN_004c24d0(0.0,this_ptr->halo_spread);
    local_18 = local_3c;
    local_38 = core_fire_cpp_computeScreenSpaceSize_FUN_004c24d0(depth,local_54);
    local_20 = 0;
    local_18 = local_38;
    if (-1 < (int)local_24) {
      local_48 = (depth * 16777220.0f) / 30.0f;
      local_30 = 0x100;
      do {
        pCVar3 = g_CDemonRendererPtr2;
        local_1c = local_20;
        local_18 = local_24;
        fVar10 = ((float10)local_20 / (float10)(int)local_24) * (float10)2 *
                 (float10)3.1415926535000001;
        fVar11 = (float10)fsin(fVar10);
        fVar10 = (float10)fcos(fVar10);
        pSVar7 = g_CDemonRendererPtr2->vertex_buffer_ptr;
        pSVar8 = g_CDemonRendererPtr2->vertex_buffer_ptr + 3;
        for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
          (pSVar8->projected_vertex).transformed_x = (pSVar7->projected_vertex).transformed_x;
          pSVar7 = (SRenderVertex *)((int)pSVar7 + ((uint)bVar9 * -2 + 1) * 4);
          pSVar8 = (SRenderVertex *)((int)pSVar8 + ((uint)bVar9 * -2 + 1) * 4);
        }
        local_6c = (float)fVar11;
        pSVar7 = pCVar3->vertex_buffer_ptr;
        local_68 = (float)fVar10;
        pSVar8 = pSVar7 + 1;
        pSVar7 = pSVar7 + 2;
        for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
          (pSVar7->projected_vertex).transformed_x = (pSVar8->projected_vertex).transformed_x;
          pSVar8 = (SRenderVertex *)((int)pSVar8 + ((uint)bVar9 * -2 + 1) * 4);
          pSVar7 = (SRenderVertex *)((int)pSVar7 + ((uint)bVar9 * -2 + 1) * 4);
        }
        local_c4 = 0.0;
        local_c8 = (float)(fVar11 * (float10)local_3c);
        local_cc = (float)(fVar10 * (float10)local_3c);
        local_a8.x = (int)ROUND(local_cc * 256.0f);
        local_a8.y = (int)ROUND(local_c8 * 256.0f);
        local_a8.z = (int)ROUND(256.0f * 0.0);
        wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                  (&pCVar3->vertex_buffer_ptr->projected_vertex,&local_a8);
        local_cc = local_68 * local_38;
        local_c8 = local_6c * local_38;
        local_c4 = depth + (float)-0.10000000000000001;
        local_108.x = (int)ROUND(local_cc * 256.0f);
        local_108.y = (int)ROUND(local_c8 * 256.0f);
        local_108.z = (int)ROUND(local_c4 * 256.0f);
        wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                  (&g_CDemonRendererPtr2->vertex_buffer_ptr[1].projected_vertex,&local_108);
        pCVar3 = g_CDemonRendererPtr2;
        if (local_20 != 0) {
          local_2d8.base.count = 4;
          local_2d8.surface_normal.D = 0;
          local_2d8.surface_normal.C = 0;
          local_2d8.surface_normal.B = 0;
          local_2d8.surface_normal.A = 0;
          local_2c0 = 0;
          local_29c = 3;
          local_2b4 = 1;
          local_2a8 = 2;
          local_34 = (int)ROUND(ROUND(local_48));
          if (this_ptr->cone_angle <= 0.0) {
            local_2ac = ((local_20 << 8) / (int)local_24 + g_TextureAnimCounter1) * 0x10000;
            local_298 = 0;
            local_294 = (local_30 / (int)local_24 + g_TextureAnimCounter1) * 0x10000;
            local_2bc = 0;
            local_2a4 = local_34;
          }
          else {
            local_2ac = 0x800000;
            local_2a4 = 0x800000;
            local_298 = 0x800000;
            local_294 = 0x800000;
            local_2bc = 0x800000;
          }
          g_CDemonRendererPtr2->vertex_buffer_ptr->light = (this_ptr->color).r;
          pCVar3->vertex_buffer_ptr->color = (this_ptr->color).g;
          pCVar3->vertex_buffer_ptr->fog = (this_ptr->color).b;
          pCVar3->vertex_buffer_ptr[1].light = (this_ptr->color).r;
          pCVar3->vertex_buffer_ptr[1].color = (this_ptr->color).g;
          pCVar3->vertex_buffer_ptr[1].fog = (this_ptr->color).b;
          pCVar3->vertex_buffer_ptr[2].light = (this_ptr->color).r;
          pCVar3->vertex_buffer_ptr[2].color = (this_ptr->color).g;
          pCVar3->vertex_buffer_ptr[2].fog = (this_ptr->color).b;
          pCVar3->vertex_buffer_ptr[3].light = (this_ptr->color).r;
          pCVar3->vertex_buffer_ptr[3].color = (this_ptr->color).g;
          pCVar3->vertex_buffer_ptr[3].fog = (this_ptr->color).b;
          local_2b8 = local_2ac;
          local_2b0 = local_2a4;
          local_2a0 = local_294;
          engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(pCVar3,1);
          pCVar3 = g_CDemonRendererPtr2;
          local_2c = (float)(int)ROUND(ROUND(local_2e0 * (float)32767.5));
          if (local_40 == 0) {
            engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60
                      (g_CDemonRendererPtr2,(int)local_2c);
            engine_drender_cpp_CDemonRenderer_renderEnhancedQualityVariant_FUN_0048bdc0
                      (g_CDemonRendererPtr2,&local_2d8);
          }
          else {
            g_CDemonRendererPtr2->vertex_buffer_ptr->w_recip = local_2c;
            pCVar3->vertex_buffer_ptr[1].w_recip = 0.0;
            pCVar3->vertex_buffer_ptr[2].w_recip = 0.0;
            pCVar3->vertex_buffer_ptr[3].w_recip = local_2c;
            engine_drender_cpp_CDemonRenderer_renderMaximumQualityVariant_FUN_0048bba0
                      (pCVar3,&local_2d8);
          }
        }
        local_30 = local_30 + 0x100;
        local_20 = local_20 + 1;
      } while (local_20 <= (int)local_24);
    }
    engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
  }
  if (0.0 < local_2f4) {
    local_130 = 1.0 / depth;
    local_138 = local_1a4.x * local_130;
    local_134 = local_1a4.y * local_130;
    local_130 = local_1a4.z * local_130;
    local_114 = local_138 * 0.1f;
    local_110 = local_134 * 0.1f;
    local_10c = local_130 * 0.1f;
    local_12c.x = (this_ptr->hit_position).x - local_114;
    local_12c.y = (this_ptr->hit_position).y - local_110;
    local_12c.z = (this_ptr->hit_position).z - local_10c;
    pCVar5 = core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                       (&local_15c,&this_ptr->reflection_normal);
    if (&local_9c != pCVar5) {
      local_9c.x = pCVar5->x;
      local_9c.y = pCVar5->y;
      local_9c.z = pCVar5->z;
    }
    engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
              (g_CDemonRendererPtr2,&local_12c);
    engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
              (g_CDemonRendererPtr2,(CVector3i *)&local_9c,(CVector3i *)0x0);
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
              (g_CDemonRendererPtr2,&g_FireEffectReticle);
    local_b4 = 0.2;
    local_ac = 0.0;
    local_b0 = 0.2;
    local_198.x = (int)ROUND(256.0f * 0.2);
    local_198.y = (int)ROUND(256.0f * 0.2);
    local_198.z = (int)ROUND(256.0f * 0.0);
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr2->vertex_buffer_ptr->projected_vertex,&local_198);
    local_b4 = -local_b4;
    local_d8.x = (int)ROUND(local_b4 * 256.0f);
    local_d8.y = (int)ROUND(local_b0 * 256.0f);
    local_d8.z = (int)ROUND(local_ac * 256.0f);
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr2->vertex_buffer_ptr[1].projected_vertex,&local_d8);
    local_b0 = -local_b0;
    local_1ec.x = (int)ROUND(local_b4 * 256.0f);
    local_1ec.y = (int)ROUND(local_b0 * 256.0f);
    local_1ec.z = (int)ROUND(local_ac * 256.0f);
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr2->vertex_buffer_ptr[2].projected_vertex,&local_1ec);
    local_b4 = -local_b4;
    local_1c8.x = (int)ROUND(local_b4 * 256.0f);
    local_1c8.y = (int)ROUND(local_b0 * 256.0f);
    local_1c8.z = (int)ROUND(local_ac * 256.0f);
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr2->vertex_buffer_ptr[3].projected_vertex,&local_1c8);
    pCVar3 = g_CDemonRendererPtr2;
    local_290.base.count = 4;
    local_290.surface_normal.D = 0;
    local_290.surface_normal.C = 0;
    local_290.surface_normal.B = 0;
    local_290.surface_normal.A = 0;
    local_278 = 0;
    local_254 = 3;
    local_274 = 0x80000;
    local_270 = 0x80000;
    local_268 = 0xf80000;
    local_264 = 0x80000;
    local_25c = 0xf80000;
    local_258 = 0xf80000;
    local_250 = 0x80000;
    local_24c = 0xf80000;
    local_26c = 1;
    local_260 = 2;
    g_CDemonRendererPtr2->vertex_buffer_ptr->light = (this_ptr->color).r;
    pCVar3->vertex_buffer_ptr->color = (this_ptr->color).g;
    pCVar3->vertex_buffer_ptr->fog = (this_ptr->color).b;
    pCVar3->vertex_buffer_ptr[1].light = (this_ptr->color).r;
    pCVar3->vertex_buffer_ptr[1].color = (this_ptr->color).g;
    pCVar3->vertex_buffer_ptr[1].fog = (this_ptr->color).b;
    pCVar3->vertex_buffer_ptr[2].light = (this_ptr->color).r;
    pCVar3->vertex_buffer_ptr[2].color = (this_ptr->color).g;
    pCVar3->vertex_buffer_ptr[2].fog = (this_ptr->color).b;
    pCVar3->vertex_buffer_ptr[3].light = (this_ptr->color).r;
    pCVar3->vertex_buffer_ptr[3].color = (this_ptr->color).g;
    pCVar3->vertex_buffer_ptr[3].fog = (this_ptr->color).b;
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(pCVar3,1);
    local_18 = core_actor_cpp_getRandomFloat_FUN_0040cc10(32768.0,40959.0);
    local_1c = (int)ROUND(ROUND(local_18 * local_2f4));
    engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60(g_CDemonRendererPtr2,local_1c);
    engine_drender_cpp_CDemonRenderer_renderEnhancedQualityVariant_FUN_0048bdc0
              (g_CDemonRendererPtr2,&local_290);
    engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
  }
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr2,0);
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60(g_CDemonRendererPtr2,0xffff);
  return;
}
