// Name: core_fire.cpp_CLaserBeam_render_FUN_004c25c0
// Address: 004c25c0
// Address Range: [[004c25c0, 004c2d4b] [004c2d69, 004c304f] [004c3053, 004c3865]]
// Convention: __cdecl
// Signature: void core_fire.cpp_CLaserBeam_render_FUN_004c25c0(CLaserBeam * this_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_CLaserBeam_render_FUN_004c25c0(CLaserBeam *this_ptr)

{
  float fVar1;
  float fVar2;
  float fVar3;
  CDemonRenderer *pCVar4;
  float *pfVar5;
  CVector3f *pCVar6;
  int iVar7;
  SRenderVertex *pSVar8;
  SRenderVertex *pSVar9;
  byte bVar10;
  float10 fVar11;
  float10 fVar12;
  double dVar13;
  float local_2f4;
  float local_2e8;
  SMRGLHeaderPrimitive local_2e0;
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
  SMRGLHeaderPrimitive local_294;
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
  SMRGLHeaderPrimitive local_24c;
  uint local_234;
  uint local_230;
  uint local_22c;
  uint local_228;
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
  float fStack_78;
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
  float local_34;
  int local_30;
  float local_28;
  float local_24;
  int local_20;
  int local_1c;
  float local_18;
  
  bVar10 = 0;
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
            (g_CDemonRendererPtr2,&g_FireEffectLaserTexture);
  local_1a4.x = *(float *)(this_ptr->unk + 0xc) - *(float *)this_ptr->unk;
  local_1a4.y = *(float *)(this_ptr->unk + 0x10) - *(float *)(this_ptr->unk + 4);
  local_1a4.z = *(float *)(this_ptr->unk + 0x14) - *(float *)(this_ptr->unk + 8);
  core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&local_9c,&local_1a4);
  fVar2 = SQRT(local_1a4.z * local_1a4.z + local_1a4.x * local_1a4.x + local_1a4.y * local_1a4.y);
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30(&local_220,&local_9c);
  local_2e0.base.type = *(int *)(this_ptr->unk + 0x18);
  local_2f4 = *(float *)(this_ptr->unk + 0x1c);
  local_2e8 = 0.0;
  pfVar5 = engine_drender_cpp_CDemonRenderer_getCameraOriginScaled_FUN_0048c780
                     (g_CDemonRendererPtr2,local_f0);
  local_144 = *pfVar5 - *(float *)this_ptr->unk;
  local_140 = pfVar5[1] - *(float *)(this_ptr->unk + 4);
  local_13c = pfVar5[2] - *(float *)(this_ptr->unk + 8);
  if (&local_120 != &local_144) {
    local_120 = local_144;
    local_11c = local_140;
    local_118 = local_13c;
  }
  local_18c = *(float *)(this_ptr->unk + 0xc) - *(float *)this_ptr->unk;
  local_188 = *(float *)(this_ptr->unk + 0x10) - *(float *)(this_ptr->unk + 4);
  local_184 = *(float *)(this_ptr->unk + 0x14) - *(float *)(this_ptr->unk + 8);
  if (&local_1e0 != &local_18c) {
    local_1e0 = local_18c;
    local_1dc = local_188;
    local_1d8 = local_184;
  }
  fVar1 = local_118 * local_1d8 + local_120 * local_1e0 + local_11c * local_1dc;
  if (0.0 < fVar1) {
    if (*(float *)(this_ptr->unk + 0x3c) <= 0.0) {
      engine_drender_cpp_CDemonRenderer_getCameraOriginScaled_FUN_0048c780
                (g_CDemonRendererPtr2,&local_1d4.x);
      local_1d4.x = local_1d4.x - *(float *)this_ptr->unk;
      local_1d4.y = local_1d4.y - *(float *)(this_ptr->unk + 4);
      local_1d4.z = local_1d4.z - *(float *)(this_ptr->unk + 8);
      pCVar6 = core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
                         (&local_220,&local_fc,&local_1d4);
      if (&local_1d4 != pCVar6) {
        local_1d4.x = pCVar6->x;
        local_1d4.y = pCVar6->y;
        local_1d4.z = pCVar6->z;
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
      fVar11 = (float10)fcos((float10)*(float *)(this_ptr->unk + 0x3c));
      local_4c = fVar1 / (SQRT(local_1d8 * local_1d8 + local_1e0 * local_1e0 + local_1dc * local_1dc
                              ) * SQRT(local_118 * local_118 +
                                       local_120 * local_120 + local_11c * local_11c));
      fVar1 = (float)fVar11;
      if (fVar1 < local_4c) {
        local_2e8 = (local_4c - fVar1) / (1.0 - fVar1);
      }
      fVar11 = (float10)fptan((float10)*(float *)(this_ptr->unk + 0x3c));
      local_44 = (float)fVar11;
    }
  }
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0048ca00(g_CDemonRendererPtr2,0);
  if ((0.0 < local_2e8) && (g_CGamePtr->halo_mode != 0)) {
    fVar1 = *(float *)(this_ptr->unk + 0x18);
    fVar3 = 1.0 - local_2e8 * (float)2;
    local_2e0.base.type = (int)((float)local_2e0.base.type * fVar3);
    local_2f4 = fVar3 * local_2f4;
    iVar7 = 0;
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr2,1);
    do {
      local_2e0.base.count = (int)((float)iVar7 * 0.04f * fVar2);
      local_28 = local_44;
      if (*(float *)(this_ptr->unk + 0x3c) <= 0.0) {
        local_28 = (float)18 / 448.0;
      }
      local_28 = local_28 * (float)local_2e0.base.count;
      local_1b0 = local_220.m[0].z * (float)local_2e0.base.count;
      local_1ac = local_220.m[1].z * (float)local_2e0.base.count;
      local_1a8 = local_220.m[2].z * (float)local_2e0.base.count;
      local_90 = local_220.m[0].z;
      local_8c = local_220.m[1].z;
      local_88 = local_220.m[2].z;
      local_150.x = *(float *)this_ptr->unk + local_1b0;
      local_150.y = *(float *)(this_ptr->unk + 4) + local_1ac;
      local_150.z = *(float *)(this_ptr->unk + 8) + local_1a8;
      if (&local_168 != &local_150) {
        local_168.x = local_150.x;
        local_168.y = local_150.y;
        local_168.z = local_150.z;
      }
      local_1c = iVar7;
      engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
                (g_CDemonRendererPtr2,&local_168);
      engine_drender_cpp_CDemonRenderer_getCameraRotationAsRadians_FUN_0048c800
                (g_CDemonRendererPtr2,(float *)&local_1f8);
      local_1f8.z = (int)((float)iVar7 + (float)local_1f8.z);
      local_1c = iVar7;
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
      pCVar4 = g_CDemonRendererPtr2;
      local_24c.surface_normal.A = 4;
      local_234 = 0;
      local_24c.surface_normal.D = 0;
      local_24c.surface_normal.C = 0;
      local_24c.surface_normal.B = 0;
      local_230 = 0;
      dVar13 = crt_math_c_round_FUN_005fe6b0((double)(local_2e8 * fVar1 * (float)8192));
      fStack_78 = (float)(int)ROUND(dVar13);
      pCVar4->vertex_buffer_ptr->w_recip = fStack_78;
      pCVar4->vertex_buffer_ptr->light = *(float *)(this_ptr->unk + 0x2c);
      pCVar4->vertex_buffer_ptr->color = *(int *)(this_ptr->unk + 0x30);
      pCVar4->vertex_buffer_ptr->fog = *(float *)(this_ptr->unk + 0x34);
      local_230 = 1;
      pCVar4->vertex_buffer_ptr[1].w_recip = fStack_78;
      pCVar4->vertex_buffer_ptr[1].light = *(float *)(this_ptr->unk + 0x2c);
      pCVar4->vertex_buffer_ptr[1].color = *(int *)(this_ptr->unk + 0x30);
      pCVar4->vertex_buffer_ptr[1].fog = *(float *)(this_ptr->unk + 0x34);
      local_22c = 2;
      pCVar4->vertex_buffer_ptr[2].w_recip = fStack_78;
      pCVar4->vertex_buffer_ptr[2].light = *(float *)(this_ptr->unk + 0x2c);
      pCVar4->vertex_buffer_ptr[2].color = *(int *)(this_ptr->unk + 0x30);
      pCVar4->vertex_buffer_ptr[2].fog = *(float *)(this_ptr->unk + 0x34);
      local_228 = 3;
      pCVar4->vertex_buffer_ptr[3].w_recip = fStack_78;
      pCVar4->vertex_buffer_ptr[3].light = *(float *)(this_ptr->unk + 0x2c);
      pCVar4->vertex_buffer_ptr[3].color = *(int *)(this_ptr->unk + 0x30);
      pCVar4->vertex_buffer_ptr[3].fog = *(float *)(this_ptr->unk + 0x34);
      pCVar4->vertex_buffer_ptr->u = 2.2775203e-38;
      pCVar4->vertex_buffer_ptr->v = 2.2775203e-38;
      pCVar4->vertex_buffer_ptr[1].u = 7.34684e-40;
      pCVar4->vertex_buffer_ptr[1].v = 2.2775203e-38;
      pCVar4->vertex_buffer_ptr[2].u = 7.34684e-40;
      pCVar4->vertex_buffer_ptr[2].v = 7.34684e-40;
      pCVar4->vertex_buffer_ptr[3].u = 2.2775203e-38;
      pCVar4->vertex_buffer_ptr[3].v = 7.34684e-40;
      engine_drender_cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0(pCVar4,&local_24c);
      iVar7 = iVar7 + 1;
      engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
    } while (iVar7 < 0x19);
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr2,0);
  }
  if (0.0 < (float)local_2e0.base.type) {
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
              (g_CDemonRendererPtr2,&g_FireEffectBeamFuzzTexture);
    engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
              (g_CDemonRendererPtr2,(CVector3f *)this_ptr);
    engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
              (g_CDemonRendererPtr2,(CVector3i *)&local_9c,(CVector3i *)0x0);
    fVar1 = *(float *)(this_ptr->unk + 0x3c);
    local_54 = *(float *)(this_ptr->unk + 0x38);
    local_24 = 1.12104e-44;
    if (0.0 < fVar1) {
      fVar11 = (float10)fptan((float10)fVar1);
      local_24 = 2.24208e-44;
      local_54 = (float)(fVar11 * (float10)fVar2);
    }
    local_40 = (uint)(0.0 < fVar1);
    local_3c = (float)core_fire_cpp_FUN_004c24d0();
    local_18 = local_3c;
    local_38 = (float)core_fire_cpp_FUN_004c24d0();
    local_20 = 0;
    local_18 = local_38;
    if (-1 < (int)local_24) {
      local_48 = (fVar2 * 16777220.0f) / 30.0f;
      local_30 = 0x100;
      do {
        pCVar4 = g_CDemonRendererPtr2;
        local_1c = local_20;
        local_18 = local_24;
        fVar11 = ((float10)local_20 / (float10)(int)local_24) * (float10)2 *
                 (float10)3.1415926535000001;
        fVar12 = (float10)fsin(fVar11);
        fVar11 = (float10)fcos(fVar11);
        pSVar8 = g_CDemonRendererPtr2->vertex_buffer_ptr;
        pSVar9 = g_CDemonRendererPtr2->vertex_buffer_ptr + 3;
        for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
          (pSVar9->projected_vertex).transformed_x = (pSVar8->projected_vertex).transformed_x;
          pSVar8 = (SRenderVertex *)((int)pSVar8 + ((uint)bVar10 * -2 + 1) * 4);
          pSVar9 = (SRenderVertex *)((int)pSVar9 + ((uint)bVar10 * -2 + 1) * 4);
        }
        local_6c = (float)fVar12;
        pSVar8 = pCVar4->vertex_buffer_ptr;
        local_68 = (float)fVar11;
        pSVar9 = pSVar8 + 1;
        pSVar8 = pSVar8 + 2;
        for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
          (pSVar8->projected_vertex).transformed_x = (pSVar9->projected_vertex).transformed_x;
          pSVar9 = (SRenderVertex *)((int)pSVar9 + ((uint)bVar10 * -2 + 1) * 4);
          pSVar8 = (SRenderVertex *)((int)pSVar8 + ((uint)bVar10 * -2 + 1) * 4);
        }
        local_c4 = 0.0;
        local_c8 = (float)(fVar12 * (float10)local_3c);
        local_cc = (float)(fVar11 * (float10)local_3c);
        local_a8.x = (int)ROUND(local_cc * 256.0f);
        local_a8.y = (int)ROUND(local_c8 * 256.0f);
        local_a8.z = (int)ROUND(256.0f * 0.0);
        wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                  (&pCVar4->vertex_buffer_ptr->projected_vertex,&local_a8);
        local_cc = local_68 * local_38;
        local_c8 = local_6c * local_38;
        local_c4 = fVar2 + (float)-0.10000000000000001;
        local_108.x = (int)ROUND(local_cc * 256.0f);
        local_108.y = (int)ROUND(local_c8 * 256.0f);
        local_108.z = (int)ROUND(local_c4 * 256.0f);
        wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                  (&g_CDemonRendererPtr2->vertex_buffer_ptr[1].projected_vertex,&local_108);
        iVar7 = local_20;
        if (local_20 != 0) {
          dVar13 = crt_math_c_round_FUN_005fe6b0((double)local_48);
          pCVar4 = g_CDemonRendererPtr2;
          local_2e0.surface_normal.A = 4;
          local_2c8 = 0;
          local_2e0.surface_normal.D = 0;
          local_2e0.surface_normal.C = 0;
          local_2e0.surface_normal.B = 0;
          local_2c4 = 0;
          local_2a0 = 3;
          local_2b8 = 1;
          local_2ac = 2;
          local_38 = (float)(int)ROUND(dVar13);
          if (*(float *)(this_ptr->unk + 0x3c) <= 0.0) {
            local_2b0 = ((iVar7 << 8) / (int)local_28 + DAT_02d13564) * 0x10000;
            local_29c = 0;
            local_298 = ((int)local_34 / (int)local_28 + DAT_02d13564) * 0x10000;
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
          g_CDemonRendererPtr2->vertex_buffer_ptr->light = *(float *)(this_ptr->unk + 0x2c);
          pCVar4->vertex_buffer_ptr->color = *(int *)(this_ptr->unk + 0x30);
          pCVar4->vertex_buffer_ptr->fog = *(float *)(this_ptr->unk + 0x34);
          pCVar4->vertex_buffer_ptr[1].light = *(float *)(this_ptr->unk + 0x2c);
          pCVar4->vertex_buffer_ptr[1].color = *(int *)(this_ptr->unk + 0x30);
          pCVar4->vertex_buffer_ptr[1].fog = *(float *)(this_ptr->unk + 0x34);
          pCVar4->vertex_buffer_ptr[2].light = *(float *)(this_ptr->unk + 0x2c);
          pCVar4->vertex_buffer_ptr[2].color = *(int *)(this_ptr->unk + 0x30);
          pCVar4->vertex_buffer_ptr[2].fog = *(float *)(this_ptr->unk + 0x34);
          pCVar4->vertex_buffer_ptr[3].light = *(float *)(this_ptr->unk + 0x2c);
          pCVar4->vertex_buffer_ptr[3].color = *(int *)(this_ptr->unk + 0x30);
          pCVar4->vertex_buffer_ptr[3].fog = *(float *)(this_ptr->unk + 0x34);
          local_2bc = local_2b0;
          local_2b4 = local_2a8;
          local_2a4 = local_298;
          engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(pCVar4,1);
          fVar1 = local_44;
          dVar13 = crt_math_c_round_FUN_005fe6b0((double)((float)32767.5 * 448.0));
          pCVar4 = g_CDemonRendererPtr2;
          local_34 = (float)(int)ROUND(dVar13);
          if (fVar1 == 0.0) {
            engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60
                      (g_CDemonRendererPtr2,(int)local_34);
            engine_drender_cpp_CDemonRenderer_renderEnhancedQualityVariant_FUN_0048bdc0
                      (g_CDemonRendererPtr2,&local_2e0);
          }
          else {
            g_CDemonRendererPtr2->vertex_buffer_ptr->w_recip = local_34;
            pCVar4->vertex_buffer_ptr[1].w_recip = 0.0;
            pCVar4->vertex_buffer_ptr[2].w_recip = 0.0;
            pCVar4->vertex_buffer_ptr[3].w_recip = local_34;
            engine_drender_cpp_CDemonRenderer_renderMaximumQualityVariant_FUN_0048bba0
                      (pCVar4,&local_2e0);
          }
        }
        local_30 = local_30 + 0x100;
        local_20 = local_20 + 1;
      } while (local_20 <= (int)local_24);
    }
    engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
  }
  if (0.0 < local_2f4) {
    local_130 = 1.0 / fVar2;
    local_138 = local_1a4.x * local_130;
    local_134 = local_1a4.y * local_130;
    local_130 = local_1a4.z * local_130;
    local_114 = local_138 * 0.1f;
    local_110 = local_134 * 0.1f;
    local_10c = local_130 * 0.1f;
    local_12c.x = *(float *)(this_ptr->unk + 0xc) - local_114;
    local_12c.y = *(float *)(this_ptr->unk + 0x10) - local_110;
    local_12c.z = *(float *)(this_ptr->unk + 0x14) - local_10c;
    pCVar6 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                       (&local_15c,(CVector3f *)(this_ptr->unk + 0x20));
    if (&local_9c != pCVar6) {
      local_9c.x = pCVar6->x;
      local_9c.y = pCVar6->y;
      local_9c.z = pCVar6->z;
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
    pCVar4 = g_CDemonRendererPtr2;
    local_294.surface_normal.A = 4;
    local_27c = 0;
    local_294.surface_normal.D = 0;
    local_294.surface_normal.C = 0;
    local_294.surface_normal.B = 0;
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
    g_CDemonRendererPtr2->vertex_buffer_ptr->light = *(float *)(this_ptr->unk + 0x2c);
    pCVar4->vertex_buffer_ptr->color = *(int *)(this_ptr->unk + 0x30);
    pCVar4->vertex_buffer_ptr->fog = *(float *)(this_ptr->unk + 0x34);
    pCVar4->vertex_buffer_ptr[1].light = *(float *)(this_ptr->unk + 0x2c);
    pCVar4->vertex_buffer_ptr[1].color = *(int *)(this_ptr->unk + 0x30);
    pCVar4->vertex_buffer_ptr[1].fog = *(float *)(this_ptr->unk + 0x34);
    pCVar4->vertex_buffer_ptr[2].light = *(float *)(this_ptr->unk + 0x2c);
    pCVar4->vertex_buffer_ptr[2].color = *(int *)(this_ptr->unk + 0x30);
    pCVar4->vertex_buffer_ptr[2].fog = *(float *)(this_ptr->unk + 0x34);
    pCVar4->vertex_buffer_ptr[3].light = *(float *)(this_ptr->unk + 0x2c);
    pCVar4->vertex_buffer_ptr[3].color = *(int *)(this_ptr->unk + 0x30);
    pCVar4->vertex_buffer_ptr[3].fog = *(float *)(this_ptr->unk + 0x34);
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(pCVar4,1);
    local_18 = core_actor_cpp_getRandomFloat_FUN_0040cc10(32768.0,40959.0);
    dVar13 = crt_math_c_round_FUN_005fe6b0((double)(local_18 * local_2f4));
    local_20 = (int)ROUND(dVar13);
    engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60(g_CDemonRendererPtr2,local_20);
    engine_drender_cpp_CDemonRenderer_renderEnhancedQualityVariant_FUN_0048bdc0
              (g_CDemonRendererPtr2,&local_294);
    engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
  }
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr2,0);
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60(g_CDemonRendererPtr2,0xffff);
  return;
}
