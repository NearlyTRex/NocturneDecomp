// Name: core_fire.cpp_CLaserBeam_render_FUN_004c25c0
// Address: 004c25c0
// Address Range: [[004c25c0, 004c2d4b] [004c2d69, 004c304f] [004c3053, 004c3865] [03fc55e4, 03fc5641]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CLaserBeam_render_FUN_004c25c0(CLaserBeam *this_ptr)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */

void __cdecl core_fire_cpp_CLaserBeam_render_FUN_004c25c0(CLaserBeam *this_ptr)

{
  float fVar3;
  CDemonRenderer *pCVar4;
  float *pfVar4;
  float fVar5;
  float fVar6;
  CVector3f *pCVar7;
  CVector3f *pCVar5;
  float fVar8;
  int iVar9;
  int iVar6;
  SRenderVertex *pSVar7;
  SRenderVertex *pSVar8;
  SRenderVertex *pSVar10;
  byte bVar9;
  float10 fVar10;
  float10 fVar12;
  float10 fVar11;
  float local_2f4;
  float local_2e8;
  float local_2e0;
  SMRGLPrimitiveQuad local_2d8;
  SMRGLPrimitiveQuad local_290;
  SMRGLPrimitiveQuadIndex local_248;
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
  int local_74;
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
  int local_2c;
  float local_28;
  float local_24;
  int local_20;
  int local_1c;
  float local_18;
  float fVar1;
  float depth;
  float fVar2;
  CDemonRenderer *pCVar3;
  
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
  pfVar4 = &engine_drender_cpp_CDemonRenderer_getCameraOriginScaled_FUN_0048c780
                      (g_CDemonRendererPtr2,&local_f0)->x;
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
  fVar8 = local_118 * local_1d8 + local_120 * local_1e0 + local_11c * local_1dc;
  if (0.0 < fVar8) {
    if (this_ptr->cone_angle <= 0.0) {
      engine_drender_cpp_CDemonRenderer_getCameraOriginScaled_FUN_0048c780
                (g_CDemonRendererPtr2,&local_1d4);
      local_1d4.x = local_1d4.x - (this_ptr->origin).x;
      local_1d4.y = local_1d4.y - (this_ptr->origin).y;
      local_1d4.z = local_1d4.z - (this_ptr->origin).z;
      pCVar7 = core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
                         (&local_220,&local_fc,&local_1d4);
      if (&local_1d4 != pCVar7) {
        local_1d4.x = pCVar7->x;
        local_1d4.y = pCVar7->y;
        local_1d4.z = pCVar7->z;
      }
      fVar3 = ((local_1d4.z * (float)18) / 448.0) * (float)2;
      fVar8 = local_1d4.x * local_1d4.x + local_1d4.y * local_1d4.y;
      fVar3 = fVar3 * fVar3;
      if (fVar8 < fVar3) {
        local_2e8 = 1.0 - fVar8 / fVar3;
      }
    }
    else {
      fVar10 = (float10)fcos((float10)this_ptr->cone_angle);
      fVar8 = fVar8 / (SQRT(local_1d8 * local_1d8 + local_1e0 * local_1e0 + local_1dc * local_1dc) *
                      SQRT(local_118 * local_118 + local_120 * local_120 + local_11c * local_11c));
      fVar1 = (float)fVar10;
      if (fVar1 < fVar8) {
        local_2e8 = (fVar8 - fVar1) / (1.0 - fVar1);
      }
      fVar12 = (float10)fptan((float10)this_ptr->cone_angle);
      local_44 = (float)fVar12;
    }
  }
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0048ca00(g_CDemonRendererPtr2,0);
  if ((0.0 < local_2e8) && (g_CGamePtr->halo_mode != 0)) {
    fVar8 = this_ptr->beam_width;
    fVar2 = 1.0 - local_2e8 * (float)2;
    local_2e0 = local_2e0 * fVar2;
    local_2f4 = fVar2 * local_2f4;
    iVar6 = 0;
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr2,1);
    do {
      fVar3 = (float)iVar6 * 0.04f * depth;
      fVar5 = local_44;
      if (this_ptr->cone_angle <= 0.0) {
        fVar5 = (float)18 / 448.0;
      }
      fVar5 = fVar5 * fVar3;
      local_150.x = (this_ptr->origin).x + local_220.m[0].z * fVar3;
      local_150.y = (this_ptr->origin).y + local_220.m[1].z * fVar3;
      local_150.z = (this_ptr->origin).z + local_220.m[2].z * fVar3;
      if (&local_168 != &local_150) {
        local_168.x = local_150.x;
        local_168.y = local_150.y;
        local_168.z = local_150.z;
      }
      engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
                (g_CDemonRendererPtr2,&local_168);
      engine_drender_cpp_CDemonRenderer_getCameraRotationAsRadians_FUN_0048c800
                (g_CDemonRendererPtr2,(float *)&local_1f8);
      local_1f8.z = (int)((float)iVar6 + (float)local_1f8.z);
      engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
                (g_CDemonRendererPtr2,&local_1f8,(CVector3i *)0x0);
      local_180.x = (int)ROUND(fVar5 * 256.0f);
      local_180.y = (int)ROUND(fVar5 * 256.0f);
      local_180.z = (int)ROUND(256.0f * 0.0);
      wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                (&g_CDemonRendererPtr2->vertex_buffer_ptr->projected_vertex,&local_180);
      local_e4 = -fVar5;
      local_c0.x = (int)ROUND(local_e4 * 256.0f);
      local_c0.y = (int)ROUND(fVar5 * 256.0f);
      local_c0.z = (int)ROUND(256.0f * 0.0);
      wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                (&g_CDemonRendererPtr2->vertex_buffer_ptr[1].projected_vertex,&local_c0);
      local_e0 = -fVar5;
      local_1bc.x = (int)ROUND(local_e4 * 256.0f);
      local_1bc.y = (int)ROUND(local_e0 * 256.0f);
      local_1bc.z = (int)ROUND(256.0f * 0.0);
      wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                (&g_CDemonRendererPtr2->vertex_buffer_ptr[2].projected_vertex,&local_1bc);
      local_e4 = -local_e4;
      local_174.x = (int)ROUND(local_e4 * 256.0f);
      local_174.y = (int)ROUND(local_e0 * 256.0f);
      local_174.z = (int)ROUND(256.0f * 0.0);
      wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                (&g_CDemonRendererPtr2->vertex_buffer_ptr[3].projected_vertex,&local_174);
      engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
                (g_CDemonRendererPtr2,&g_FireEffectHeadliteTexture);
      pCVar3 = g_CDemonRendererPtr2;
      local_248.base.base.count = 4;
      local_248.base.surface_normal.D = 0;
      local_248.base.surface_normal.C = 0;
      local_248.base.surface_normal.B = 0;
      local_248.base.surface_normal.A = 0;
      local_248.vertices[0] = 0;
      iVar9 = (int)ROUND(ROUND(local_2e8 * fVar8 * (float)8192));
      g_CDemonRendererPtr2->vertex_buffer_ptr->a = iVar9;
      pCVar3->vertex_buffer_ptr->r = (this_ptr->color).r;
      pCVar3->vertex_buffer_ptr->g = (this_ptr->color).g;
      pCVar3->vertex_buffer_ptr->b = (this_ptr->color).b;
      local_248.vertices[1] = 1;
      pCVar3->vertex_buffer_ptr[1].a = iVar9;
      pCVar3->vertex_buffer_ptr[1].r = (this_ptr->color).r;
      pCVar3->vertex_buffer_ptr[1].g = (this_ptr->color).g;
      pCVar3->vertex_buffer_ptr[1].b = (this_ptr->color).b;
      local_248.vertices[2] = 2;
      pCVar3->vertex_buffer_ptr[2].a = iVar9;
      pCVar3->vertex_buffer_ptr[2].r = (this_ptr->color).r;
      pCVar3->vertex_buffer_ptr[2].g = (this_ptr->color).g;
      pCVar3->vertex_buffer_ptr[2].b = (this_ptr->color).b;
      local_248.vertices[3] = 3;
      pCVar3->vertex_buffer_ptr[3].a = iVar9;
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
      engine_drender_cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0(pCVar3,&local_248.base);
      iVar6 = iVar6 + 1;
      engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0048c640(g_CDemonRendererPtr2);
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
    fVar8 = this_ptr->cone_angle;
    local_54 = this_ptr->halo_spread;
    local_24 = 1.12104e-44;
    if (0.0 < fVar8) {
      fVar12 = (float10)fptan((float10)fVar8);
      local_24 = 2.24208e-44;
      local_54 = (float)(fVar12 * (float10)depth);
    }
    fVar5 = core_fire_cpp_computeScreenSpaceSize_FUN_004c24d0(0.0,this_ptr->halo_spread);
    fVar6 = core_fire_cpp_computeScreenSpaceSize_FUN_004c24d0(depth,local_54);
    local_20 = 0;
    fVar3 = (depth * 16777220.0f) / 30.0f;
    local_30 = 0x100;
    do {
      pCVar4 = g_CDemonRendererPtr2;
      fVar12 = ((float10)local_20 / (float10)(int)local_24) * (float10)2 *
               (float10)3.1415926535000001;
      fVar11 = (float10)fsin(fVar12);
      fVar12 = (float10)fcos(fVar12);
      pSVar10 = g_CDemonRendererPtr2->vertex_buffer_ptr;
      pSVar10[3].projected_vertex.transformed_x = (pSVar10->projected_vertex).transformed_x;
      pSVar10[3].projected_vertex.transformed_y = (pSVar10->projected_vertex).transformed_y;
      pSVar10[3].projected_vertex.transformed_z = (pSVar10->projected_vertex).transformed_z;
      pSVar10[3].projected_vertex.inv_z = (pSVar10->projected_vertex).inv_z;
      pSVar10[3].projected_vertex.screen_x = (pSVar10->projected_vertex).screen_x;
      pSVar10[3].projected_vertex.screen_y = (pSVar10->projected_vertex).screen_y;
      pSVar10[3].u = pSVar10->u;
      pSVar10[3].v = pSVar10->v;
      pSVar10[3].r = pSVar10->r;
      pSVar10[3].g = pSVar10->g;
      pSVar10[3].b = pSVar10->b;
      pSVar10[3].a = pSVar10->a;
      pSVar10 = pCVar4->vertex_buffer_ptr;
      pSVar8 = pSVar10 + 1;
      pSVar10 = pSVar10 + 2;
      for (iVar9 = 0xc; iVar9 != 0; iVar9 = iVar9 + -1) {
        pSVar8 = (SRenderVertex *)((int)pSVar8 + (uint)bVar9 * -8 + 4);
        (pSVar10->projected_vertex).transformed_x = (pSVar8->projected_vertex).transformed_x;
        pSVar8 = pSVar8;
        pSVar10 = (SRenderVertex *)((int)pSVar10 + ((uint)bVar9 * -2 + 1) * 4);
      }
      local_a8.x = (int)ROUND((float)(fVar12 * (float10)fVar5) * 256.0f);
      local_a8.y = (int)ROUND((float)(fVar11 * (float10)fVar5) * 256.0f);
      local_a8.z = (int)ROUND(256.0f * 0.0);
      wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                (&pCVar4->vertex_buffer_ptr->projected_vertex,&local_a8);
      local_108.x = (int)ROUND((float)fVar12 * fVar6 * 256.0f);
      local_108.y = (int)ROUND((float)fVar11 * fVar6 * 256.0f);
      local_108.z = (int)ROUND((depth + (float)-0.10000000000000001) * 256.0f);
      wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                (&g_CDemonRendererPtr2->vertex_buffer_ptr[1].projected_vertex,&local_108);
      pCVar4 = g_CDemonRendererPtr2;
      if (local_20 != 0) {
        local_2d8.base.base.count = 4;
        local_2d8.base.surface_normal.D = 0;
        local_2d8.base.surface_normal.C = 0;
        local_2d8.base.surface_normal.B = 0;
        local_2d8.base.surface_normal.A = 0;
        local_2d8.vertices[0].vertex_index = 0;
        local_2d8.vertices[3].vertex_index = 3;
        local_2d8.vertices[1].vertex_index = 1;
        local_2d8.vertices[2].vertex_index = 2;
        local_2d8.vertices[2].texture_u = (int)ROUND(ROUND(fVar3));
        if (this_ptr->cone_angle <= 0.0) {
          local_2d8.vertices[1].texture_v =
               ((local_20 << 8) / (int)local_24 + g_TextureAnimCounter1) * 0x10000;
          local_2d8.vertices[3].texture_u = 0;
          local_2d8.vertices[3].texture_v =
               (local_30 / (int)local_24 + g_TextureAnimCounter1) * 0x10000;
          local_2d8.vertices[0].texture_u = 0;
        }
        else {
          local_2d8.vertices[1].texture_v = 0x800000;
          local_2d8.vertices[2].texture_u = 0x800000;
          local_2d8.vertices[3].texture_u = 0x800000;
          local_2d8.vertices[3].texture_v = 0x800000;
          local_2d8.vertices[0].texture_u = 0x800000;
        }
        g_CDemonRendererPtr2->vertex_buffer_ptr->r = (this_ptr->color).r;
        pCVar4->vertex_buffer_ptr->g = (this_ptr->color).g;
        pCVar4->vertex_buffer_ptr->b = (this_ptr->color).b;
        pCVar4->vertex_buffer_ptr[1].r = (this_ptr->color).r;
        pCVar4->vertex_buffer_ptr[1].g = (this_ptr->color).g;
        pCVar4->vertex_buffer_ptr[1].b = (this_ptr->color).b;
        pCVar4->vertex_buffer_ptr[2].r = (this_ptr->color).r;
        pCVar4->vertex_buffer_ptr[2].g = (this_ptr->color).g;
        pCVar4->vertex_buffer_ptr[2].b = (this_ptr->color).b;
        pCVar4->vertex_buffer_ptr[3].r = (this_ptr->color).r;
        pCVar4->vertex_buffer_ptr[3].g = (this_ptr->color).g;
        pCVar4->vertex_buffer_ptr[3].b = (this_ptr->color).b;
        local_2d8.vertices[0].texture_v = local_2d8.vertices[1].texture_v;
        local_2d8.vertices[1].texture_u = local_2d8.vertices[2].texture_u;
        local_2d8.vertices[2].texture_v = local_2d8.vertices[3].texture_v;
        engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(pCVar4,1);
        pCVar4 = g_CDemonRendererPtr2;
        iVar9 = (int)ROUND(ROUND(local_2e0 * (float)32767.5));
        if (0.0 < fVar8) {
          g_CDemonRendererPtr2->vertex_buffer_ptr->a = iVar9;
          pCVar4->vertex_buffer_ptr[1].a = 0;
          pCVar4->vertex_buffer_ptr[2].a = 0;
          pCVar4->vertex_buffer_ptr[3].a = iVar9;
          engine_drender_cpp_CDemonRenderer_renderMaximumQualityVariant_FUN_0048bba0
                    (pCVar4,&local_2d8.base);
        }
        else {
          engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60(g_CDemonRendererPtr2,iVar9);
          engine_drender_cpp_CDemonRenderer_renderEnhancedQualityVariant_FUN_0048bdc0
                    (g_CDemonRendererPtr2,&local_2d8.base);
        }
      }
      local_30 = local_30 + 0x100;
      local_20 = local_20 + 1;
    } while (local_20 <= (int)local_24);
    engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0048c640(g_CDemonRendererPtr2);
  }
  if (0.0 < local_2f4) {
    fVar8 = 1.0 / depth;
    local_138 = local_1a4.x * fVar8;
    local_134 = local_1a4.y * fVar8;
    local_130 = local_1a4.z * fVar8;
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
    local_198.x = (int)ROUND(256.0f * 0.2);
    local_198.y = (int)ROUND(256.0f * 0.2);
    local_198.z = (int)ROUND(256.0f * 0.0);
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr2->vertex_buffer_ptr->projected_vertex,&local_198);
    local_d8.x = (int)ROUND(256.0f * -0.2);
    local_d8.y = (int)ROUND(256.0f * 0.2);
    local_d8.z = (int)ROUND(256.0f * 0.0);
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr2->vertex_buffer_ptr[1].projected_vertex,&local_d8);
    local_1ec.x = (int)ROUND(256.0f * -0.2);
    local_1ec.y = (int)ROUND(256.0f * -0.2);
    local_1ec.z = (int)ROUND(256.0f * 0.0);
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr2->vertex_buffer_ptr[2].projected_vertex,&local_1ec);
    local_1c8.x = (int)ROUND(256.0f * 0.2);
    local_1c8.y = (int)ROUND(256.0f * -0.2);
    local_1c8.z = (int)ROUND(256.0f * 0.0);
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr2->vertex_buffer_ptr[3].projected_vertex,&local_1c8);
    pCVar4 = g_CDemonRendererPtr2;
    local_290.base.base.count = 4;
    local_290.base.surface_normal.D = 0;
    local_290.base.surface_normal.C = 0;
    local_290.base.surface_normal.B = 0;
    local_290.base.surface_normal.A = 0;
    local_290.vertices[0].vertex_index = 0;
    local_290.vertices[3].vertex_index = 3;
    local_290.vertices[0].texture_u = 0x80000;
    local_290.vertices[0].texture_v = 0x80000;
    local_290.vertices[1].texture_u = 0xf80000;
    local_290.vertices[1].texture_v = 0x80000;
    local_290.vertices[2].texture_u = 0xf80000;
    local_290.vertices[2].texture_v = 0xf80000;
    local_290.vertices[3].texture_u = 0x80000;
    local_290.vertices[3].texture_v = 0xf80000;
    local_290.vertices[1].vertex_index = 1;
    local_290.vertices[2].vertex_index = 2;
    g_CDemonRendererPtr2->vertex_buffer_ptr->r = (this_ptr->color).r;
    pCVar4->vertex_buffer_ptr->g = (this_ptr->color).g;
    pCVar4->vertex_buffer_ptr->b = (this_ptr->color).b;
    pCVar4->vertex_buffer_ptr[1].r = (this_ptr->color).r;
    pCVar4->vertex_buffer_ptr[1].g = (this_ptr->color).g;
    pCVar4->vertex_buffer_ptr[1].b = (this_ptr->color).b;
    pCVar4->vertex_buffer_ptr[2].r = (this_ptr->color).r;
    pCVar4->vertex_buffer_ptr[2].g = (this_ptr->color).g;
    pCVar4->vertex_buffer_ptr[2].b = (this_ptr->color).b;
    pCVar4->vertex_buffer_ptr[3].r = (this_ptr->color).r;
    pCVar4->vertex_buffer_ptr[3].g = (this_ptr->color).g;
    pCVar4->vertex_buffer_ptr[3].b = (this_ptr->color).b;
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(pCVar4,1);
    fVar8 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc10(32768.0,40959.0);
    engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60
              (g_CDemonRendererPtr2,(int)ROUND(ROUND(fVar8 * local_2f4)));
    engine_drender_cpp_CDemonRenderer_renderEnhancedQualityVariant_FUN_0048bdc0
              (g_CDemonRendererPtr2,&local_290.base);
    engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0048c640(g_CDemonRendererPtr2);
  }
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr2,0);
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60(g_CDemonRendererPtr2,0xffff);
  return;
}
