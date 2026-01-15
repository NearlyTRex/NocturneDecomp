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
  int extraout_EAX;
  CVector3f *pCVar6;
  CDemonRenderer *this_ptr_00;
  int extraout_EDX;
  int iVar7;
  SRenderVertex *pSVar8;
  SRenderVertex *pSVar9;
  byte bVar10;
  float10 fVar11;
  float10 fVar12;
  double dVar13;
  float local_2f0;
  float local_2e4;
  SMRGLHeaderPrimitive local_2dc;
  uint local_2c4;
  uint local_2c0;
  uint local_2bc;
  int local_2b8;
  uint local_2b4;
  float local_2b0;
  int local_2ac;
  uint local_2a8;
  float local_2a4;
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
  CMatrix3x3f CStack_21c;
  CVector3i CStack_1f4;
  CVector3i local_1e8;
  float local_1dc;
  float local_1d8;
  float local_1d4;
  CVector3f local_1d0;
  CVector3i local_1c4;
  CVector3i local_1b8;
  float local_1ac;
  float local_1a8;
  float local_1a4;
  CVector3f local_1a0;
  CVector3i local_194;
  float local_188;
  float local_184;
  float local_180;
  CVector3i local_17c;
  CVector3i local_170;
  CVector3f local_164;
  CVector3f CStack_158;
  CVector3f local_14c;
  float local_140;
  float local_13c;
  float local_138;
  float local_134;
  float local_130;
  float local_12c;
  CVector3f local_128;
  float local_11c;
  float local_118;
  float local_114;
  float local_110;
  float local_10c;
  float local_108;
  CVector3i local_104;
  CVector3f CStack_f8;
  float afStack_ec [3];
  float local_e0;
  float local_dc;
  float local_d8;
  CVector3i local_d4;
  float local_c8;
  float local_c4;
  float local_c0;
  CVector3i local_bc;
  float local_b0;
  float local_ac;
  float local_a8;
  CVector3i local_a4;
  CVector3f local_98;
  float local_8c;
  float local_88;
  float fStack_84;
  float local_74;
  float local_68;
  float fStack_64;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  uint local_3c;
  float local_38;
  float local_34;
  float local_30;
  int local_2c;
  float local_24;
  float local_20;
  int local_1c;
  int local_18;
  float fStack_14;
  
  bVar10 = 0;
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
            (g_CDemonRendererPtr,&g_FireEffectLaserTexture);
  local_1a0.x = *(float *)(this_ptr->field0_0x0 + 0xc) - *(float *)this_ptr->field0_0x0;
  local_1a0.y = *(float *)(this_ptr->field0_0x0 + 0x10) - *(float *)(this_ptr->field0_0x0 + 4);
  local_1a0.z = *(float *)(this_ptr->field0_0x0 + 0x14) - *(float *)(this_ptr->field0_0x0 + 8);
  core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&local_98,&local_1a0);
  fVar2 = SQRT(local_1a0.z * local_1a0.z + local_1a0.x * local_1a0.x + local_1a0.y * local_1a0.y);
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30(&CStack_21c,&local_98);
  local_2dc.base.type = *(int *)(this_ptr->field0_0x0 + 0x18);
  local_2f0 = *(float *)(this_ptr->field0_0x0 + 0x1c);
  local_2e4 = 0.0;
  pfVar5 = engine_drender_cpp_CDemonRenderer_getCameraOriginScaled_FUN_0048c780
                     (g_CDemonRendererPtr,afStack_ec);
  local_140 = *pfVar5 - *(float *)this_ptr->field0_0x0;
  local_13c = pfVar5[1] - *(float *)(this_ptr->field0_0x0 + 4);
  local_138 = pfVar5[2] - *(float *)(this_ptr->field0_0x0 + 8);
  if (&local_11c != &local_140) {
    local_11c = local_140;
    local_118 = local_13c;
    local_114 = local_138;
  }
  local_188 = *(float *)(this_ptr->field0_0x0 + 0xc) - *(float *)this_ptr->field0_0x0;
  local_184 = *(float *)(this_ptr->field0_0x0 + 0x10) - *(float *)(this_ptr->field0_0x0 + 4);
  local_180 = *(float *)(this_ptr->field0_0x0 + 0x14) - *(float *)(this_ptr->field0_0x0 + 8);
  if (&local_1dc != &local_188) {
    local_1dc = local_188;
    local_1d8 = local_184;
    local_1d4 = local_180;
  }
  fVar1 = local_114 * local_1d4 + local_11c * local_1dc + local_118 * local_1d8;
  if (0.0 < fVar1) {
    if (*(float *)(this_ptr->field0_0x0 + 0x3c) <= 0.0) {
      engine_drender_cpp_CDemonRenderer_getCameraOriginScaled_FUN_0048c780
                (g_CDemonRendererPtr,&local_1d0.x);
      local_1d0.x = local_1d0.x - *(float *)this_ptr->field0_0x0;
      local_1d0.y = local_1d0.y - *(float *)(this_ptr->field0_0x0 + 4);
      local_1d0.z = local_1d0.z - *(float *)(this_ptr->field0_0x0 + 8);
      pCVar6 = core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
                         (&CStack_21c,&CStack_f8,&local_1d0);
      if (&local_1d0 != pCVar6) {
        local_1d0.x = pCVar6->x;
        local_1d0.y = pCVar6->y;
        local_1d0.z = pCVar6->z;
      }
      local_5c = local_1d0.y * local_1d0.y;
      local_54 = ((local_1d0.z * (float)18) / 448.0) * (float)2;
      local_4c = local_1d0.x * local_1d0.x + local_5c;
      local_58 = local_54 * local_54;
      if (local_4c < local_58) {
        local_2e4 = 1.0 - local_4c / local_58;
      }
    }
    else {
      fVar11 = (float10)fcos((float10)*(float *)(this_ptr->field0_0x0 + 0x3c));
      local_48 = fVar1 / (SQRT(local_1d4 * local_1d4 + local_1dc * local_1dc + local_1d8 * local_1d8
                              ) * SQRT(local_114 * local_114 +
                                       local_11c * local_11c + local_118 * local_118));
      fVar1 = (float)fVar11;
      if (fVar1 < local_48) {
        local_2e4 = (local_48 - fVar1) / (1.0 - fVar1);
      }
      fVar11 = (float10)fptan((float10)*(float *)(this_ptr->field0_0x0 + 0x3c));
      local_40 = (float)fVar11;
    }
  }
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0048ca00(g_CDemonRendererPtr,0);
  if ((0.0 < local_2e4) && (g_CGamePtr->halo_mode != 0)) {
    fVar1 = *(float *)(this_ptr->field0_0x0 + 0x18);
    fVar3 = 1.0 - local_2e4 * (float)2;
    local_2dc.base.type = (int)((float)local_2dc.base.type * fVar3);
    local_2f0 = fVar3 * local_2f0;
    iVar7 = 0;
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr,1);
    do {
      local_2dc.base.count = (int)((float)iVar7 * 0.04f * fVar2);
      local_24 = local_40;
      if (*(float *)(this_ptr->field0_0x0 + 0x3c) <= 0.0) {
        local_24 = (float)18 / 448.0;
      }
      local_24 = local_24 * (float)local_2dc.base.count;
      local_1ac = CStack_21c.m[0].z * (float)local_2dc.base.count;
      local_1a8 = CStack_21c.m[1].z * (float)local_2dc.base.count;
      local_1a4 = CStack_21c.m[2].z * (float)local_2dc.base.count;
      local_8c = CStack_21c.m[0].z;
      local_88 = CStack_21c.m[1].z;
      fStack_84 = CStack_21c.m[2].z;
      local_14c.x = *(float *)this_ptr->field0_0x0 + local_1ac;
      local_14c.y = *(float *)(this_ptr->field0_0x0 + 4) + local_1a8;
      local_14c.z = *(float *)(this_ptr->field0_0x0 + 8) + local_1a4;
      if (&local_164 != &local_14c) {
        local_164.x = local_14c.x;
        local_164.y = local_14c.y;
        local_164.z = local_14c.z;
      }
      local_18 = iVar7;
      engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
                (g_CDemonRendererPtr,&local_164);
      engine_drender_cpp_CDemonRenderer_getCameraRotationAsRadians_FUN_0048c800
                (g_CDemonRendererPtr,(float *)&CStack_1f4);
      CStack_1f4.z = (int)((float)iVar7 + (float)CStack_1f4.z);
      local_18 = iVar7;
      engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
                (g_CDemonRendererPtr,&CStack_1f4,(CVector3i *)0x0);
      local_e0 = local_24;
      local_dc = local_24;
      local_d8 = 0.0;
      local_17c.x = (int)ROUND(local_24 * 256f);
      local_17c.y = (int)ROUND(local_24 * 256f);
      local_17c.z = (int)ROUND(256f * 0.0);
      wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                (&g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex,&local_17c);
      local_e0 = -local_e0;
      local_bc.x = (int)ROUND(local_e0 * 256f);
      local_bc.y = (int)ROUND(local_dc * 256f);
      local_bc.z = (int)ROUND(local_d8 * 256f);
      wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                (&g_CDemonRendererPtr->vertex_buffer_ptr[1].projected_vertex,&local_bc);
      local_dc = -local_dc;
      local_1b8.x = (int)ROUND(local_e0 * 256f);
      local_1b8.y = (int)ROUND(local_dc * 256f);
      local_1b8.z = (int)ROUND(local_d8 * 256f);
      wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                (&g_CDemonRendererPtr->vertex_buffer_ptr[2].projected_vertex,&local_1b8);
      local_e0 = -local_e0;
      local_170.x = (int)ROUND(local_e0 * 256f);
      local_170.y = (int)ROUND(local_dc * 256f);
      local_170.z = (int)ROUND(local_d8 * 256f);
      wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                (&g_CDemonRendererPtr->vertex_buffer_ptr[3].projected_vertex,&local_170);
      engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
                (g_CDemonRendererPtr,&g_FireEffectHeadliteTexture);
      local_248.surface_normal.A = 4;
      local_230 = 0;
      local_248.surface_normal.D = 0;
      local_248.surface_normal.C = 0;
      local_248.surface_normal.B = 0;
      local_22c = 0;
      dVar13 = crt_math_c_round_FUN_005fe6b0((double)(local_2e4 * fVar1 * (float)8192));
      local_74 = (float)(int)ROUND(dVar13);
      this_ptr_00->vertex_buffer_ptr->w_recip = local_74;
      this_ptr_00->vertex_buffer_ptr->light = *(float *)(this_ptr->field0_0x0 + 0x2c);
      this_ptr_00->vertex_buffer_ptr->color = *(int *)(this_ptr->field0_0x0 + 0x30);
      this_ptr_00->vertex_buffer_ptr->fog = *(float *)(this_ptr->field0_0x0 + 0x34);
      local_22c = 1;
      this_ptr_00->vertex_buffer_ptr[1].w_recip = local_74;
      this_ptr_00->vertex_buffer_ptr[1].light = *(float *)(this_ptr->field0_0x0 + 0x2c);
      this_ptr_00->vertex_buffer_ptr[1].color = *(int *)(this_ptr->field0_0x0 + 0x30);
      this_ptr_00->vertex_buffer_ptr[1].fog = *(float *)(this_ptr->field0_0x0 + 0x34);
      local_228 = 2;
      this_ptr_00->vertex_buffer_ptr[2].w_recip = local_74;
      this_ptr_00->vertex_buffer_ptr[2].light = *(float *)(this_ptr->field0_0x0 + 0x2c);
      this_ptr_00->vertex_buffer_ptr[2].color = *(int *)(this_ptr->field0_0x0 + 0x30);
      this_ptr_00->vertex_buffer_ptr[2].fog = *(float *)(this_ptr->field0_0x0 + 0x34);
      local_224 = 3;
      this_ptr_00->vertex_buffer_ptr[3].w_recip = local_74;
      this_ptr_00->vertex_buffer_ptr[3].light = *(float *)(this_ptr->field0_0x0 + 0x2c);
      this_ptr_00->vertex_buffer_ptr[3].color = *(int *)(this_ptr->field0_0x0 + 0x30);
      this_ptr_00->vertex_buffer_ptr[3].fog = *(float *)(this_ptr->field0_0x0 + 0x34);
      this_ptr_00->vertex_buffer_ptr->u = 2.2775203e-38;
      this_ptr_00->vertex_buffer_ptr->v = 2.2775203e-38;
      this_ptr_00->vertex_buffer_ptr[1].u = 7.34684e-40;
      this_ptr_00->vertex_buffer_ptr[1].v = 2.2775203e-38;
      this_ptr_00->vertex_buffer_ptr[2].u = 7.34684e-40;
      this_ptr_00->vertex_buffer_ptr[2].v = 7.34684e-40;
      this_ptr_00->vertex_buffer_ptr[3].u = 2.2775203e-38;
      this_ptr_00->vertex_buffer_ptr[3].v = 7.34684e-40;
      engine_drender_cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0(this_ptr_00,&local_248);
      iVar7 = iVar7 + 1;
      engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
    } while (iVar7 < 0x19);
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr,0);
  }
  if (0.0 < (float)local_2dc.base.type) {
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
              (g_CDemonRendererPtr,&g_FireEffectBeamFuzzTexture);
    engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
              (g_CDemonRendererPtr,(CVector3f *)this_ptr);
    engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
              (g_CDemonRendererPtr,(CVector3i *)&local_98,(CVector3i *)0x0);
    fVar1 = *(float *)(this_ptr->field0_0x0 + 0x3c);
    local_50 = *(float *)(this_ptr->field0_0x0 + 0x38);
    local_20 = 1.12104e-44;
    if (0.0 < fVar1) {
      fVar11 = (float10)fptan((float10)fVar1);
      local_20 = 2.24208e-44;
      local_50 = (float)(fVar11 * (float10)fVar2);
    }
    local_3c = (uint)(0.0 < fVar1);
    local_38 = (float)core_fire_cpp_FUN_004c24d0();
    fStack_14 = local_38;
    local_34 = (float)core_fire_cpp_FUN_004c24d0();
    local_1c = 0;
    fStack_14 = local_34;
    if (-1 < (int)local_20) {
      local_44 = (fVar2 * 16777220f) / 30f;
      local_2c = 0x100;
      do {
        pCVar4 = g_CDemonRendererPtr;
        local_18 = local_1c;
        fStack_14 = local_20;
        fVar11 = ((float10)local_1c / (float10)(int)local_20) * (float10)2 *
                 (float10)3.1415926535000001;
        fVar12 = (float10)fsin(fVar11);
        fVar11 = (float10)fcos(fVar11);
        pSVar8 = g_CDemonRendererPtr->vertex_buffer_ptr;
        pSVar9 = g_CDemonRendererPtr->vertex_buffer_ptr + 3;
        for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
          (pSVar9->projected_vertex).transformed_x = (pSVar8->projected_vertex).transformed_x;
          pSVar8 = (SRenderVertex *)((int)pSVar8 + ((uint)bVar10 * -2 + 1) * 4);
          pSVar9 = (SRenderVertex *)((int)pSVar9 + ((uint)bVar10 * -2 + 1) * 4);
        }
        local_68 = (float)fVar12;
        pSVar8 = pCVar4->vertex_buffer_ptr;
        fStack_64 = (float)fVar11;
        pSVar9 = pSVar8 + 1;
        pSVar8 = pSVar8 + 2;
        for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
          (pSVar8->projected_vertex).transformed_x = (pSVar9->projected_vertex).transformed_x;
          pSVar9 = (SRenderVertex *)((int)pSVar9 + ((uint)bVar10 * -2 + 1) * 4);
          pSVar8 = (SRenderVertex *)((int)pSVar8 + ((uint)bVar10 * -2 + 1) * 4);
        }
        local_c0 = 0.0;
        local_c4 = (float)(fVar12 * (float10)local_38);
        local_c8 = (float)(fVar11 * (float10)local_38);
        local_a4.x = (int)ROUND(local_c8 * 256f);
        local_a4.y = (int)ROUND(local_c4 * 256f);
        local_a4.z = (int)ROUND(256f * 0.0);
        wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                  (&pCVar4->vertex_buffer_ptr->projected_vertex,&local_a4);
        local_c8 = fStack_64 * local_34;
        local_c4 = local_68 * local_34;
        local_c0 = fVar2 + (float)-0.10000000000000001;
        local_104.x = (int)ROUND(local_c8 * 256f);
        local_104.y = (int)ROUND(local_c4 * 256f);
        local_104.z = (int)ROUND(local_c0 * 256f);
        wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                  (&g_CDemonRendererPtr->vertex_buffer_ptr[1].projected_vertex,&local_104);
        if (local_1c != 0) {
          dVar13 = crt_math_c_round_FUN_005fe6b0((double)local_44);
          pCVar4 = g_CDemonRendererPtr;
          local_2c4 = 0;
          local_2dc.surface_normal.D = 0;
          local_2dc.surface_normal.C = 0;
          local_2dc.surface_normal.B = 0;
          local_2c0 = 0;
          local_29c = 3;
          local_2b4 = 1;
          local_2a8 = 2;
          local_34 = (float)(int)ROUND(dVar13);
          if (*(float *)(extraout_EAX + 0x3c) <= 0.0) {
            local_2ac = ((extraout_EDX << 8) / (int)local_24 + DAT_02d13564) * 0x10000;
            local_298 = 0;
            local_294 = ((int)local_30 / (int)local_24 + DAT_02d13564) * 0x10000;
            local_2bc = 0;
            local_2a4 = local_34;
          }
          else {
            local_2ac = 0x800000;
            local_2a4 = 1.1754944e-38;
            local_298 = 0x800000;
            local_294 = 0x800000;
            local_2bc = 0x800000;
          }
          g_CDemonRendererPtr->vertex_buffer_ptr->light = *(float *)(this_ptr->field0_0x0 + 0x2c);
          pCVar4->vertex_buffer_ptr->color = *(int *)(this_ptr->field0_0x0 + 0x30);
          pCVar4->vertex_buffer_ptr->fog = *(float *)(this_ptr->field0_0x0 + 0x34);
          pCVar4->vertex_buffer_ptr[1].light = *(float *)(this_ptr->field0_0x0 + 0x2c);
          pCVar4->vertex_buffer_ptr[1].color = *(int *)(this_ptr->field0_0x0 + 0x30);
          pCVar4->vertex_buffer_ptr[1].fog = *(float *)(this_ptr->field0_0x0 + 0x34);
          pCVar4->vertex_buffer_ptr[2].light = *(float *)(this_ptr->field0_0x0 + 0x2c);
          pCVar4->vertex_buffer_ptr[2].color = *(int *)(this_ptr->field0_0x0 + 0x30);
          pCVar4->vertex_buffer_ptr[2].fog = *(float *)(this_ptr->field0_0x0 + 0x34);
          pCVar4->vertex_buffer_ptr[3].light = *(float *)(this_ptr->field0_0x0 + 0x2c);
          pCVar4->vertex_buffer_ptr[3].color = *(int *)(this_ptr->field0_0x0 + 0x30);
          pCVar4->vertex_buffer_ptr[3].fog = *(float *)(this_ptr->field0_0x0 + 0x34);
          local_2b8 = local_2ac;
          local_2b0 = local_2a4;
          local_2a0 = local_294;
          engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(pCVar4,1);
          fVar1 = local_40;
          dVar13 = crt_math_c_round_FUN_005fe6b0((double)((float)32767.5 * 448.0));
          pCVar4 = g_CDemonRendererPtr;
          local_30 = (float)(int)ROUND(dVar13);
          if (fVar1 == 0.0) {
            engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60
                      (g_CDemonRendererPtr,(int)local_30);
            engine_drender_cpp_CDemonRenderer_renderEnhancedQualityVariant_FUN_0048bdc0
                      (g_CDemonRendererPtr,&local_2dc);
          }
          else {
            g_CDemonRendererPtr->vertex_buffer_ptr->w_recip = local_30;
            pCVar4->vertex_buffer_ptr[1].w_recip = 0.0;
            pCVar4->vertex_buffer_ptr[2].w_recip = 0.0;
            pCVar4->vertex_buffer_ptr[3].w_recip = local_30;
            engine_drender_cpp_CDemonRenderer_renderMaximumQualityVariant_FUN_0048bba0
                      (pCVar4,&local_2dc);
          }
        }
        local_2c = local_2c + 0x100;
        local_1c = local_1c + 1;
      } while (local_1c <= (int)local_20);
    }
    engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
  }
  if (0.0 < local_2f0) {
    local_12c = 1.0 / fVar2;
    local_134 = local_1a0.x * local_12c;
    local_130 = local_1a0.y * local_12c;
    local_12c = local_1a0.z * local_12c;
    local_110 = local_134 * 0.1f;
    local_10c = local_130 * 0.1f;
    local_108 = local_12c * 0.1f;
    local_128.x = *(float *)(this_ptr->field0_0x0 + 0xc) - local_110;
    local_128.y = *(float *)(this_ptr->field0_0x0 + 0x10) - local_10c;
    local_128.z = *(float *)(this_ptr->field0_0x0 + 0x14) - local_108;
    pCVar6 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                       (&CStack_158,(CVector3f *)(this_ptr->field0_0x0 + 0x20));
    if (&local_98 != pCVar6) {
      local_98.x = pCVar6->x;
      local_98.y = pCVar6->y;
      local_98.z = pCVar6->z;
    }
    engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
              (g_CDemonRendererPtr,&local_128);
    engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
              (g_CDemonRendererPtr,(CVector3i *)&local_98,(CVector3i *)0x0);
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
              (g_CDemonRendererPtr,&g_FireEffectReticle);
    local_b0 = 0.2;
    local_a8 = 0.0;
    local_ac = 0.2;
    local_194.x = (int)ROUND(256f * 0.2);
    local_194.y = (int)ROUND(256f * 0.2);
    local_194.z = (int)ROUND(256f * 0.0);
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex,&local_194);
    local_b0 = -local_b0;
    local_d4.x = (int)ROUND(local_b0 * 256f);
    local_d4.y = (int)ROUND(local_ac * 256f);
    local_d4.z = (int)ROUND(local_a8 * 256f);
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr->vertex_buffer_ptr[1].projected_vertex,&local_d4);
    local_ac = -local_ac;
    local_1e8.x = (int)ROUND(local_b0 * 256f);
    local_1e8.y = (int)ROUND(local_ac * 256f);
    local_1e8.z = (int)ROUND(local_a8 * 256f);
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr->vertex_buffer_ptr[2].projected_vertex,&local_1e8);
    local_b0 = -local_b0;
    local_1c4.x = (int)ROUND(local_b0 * 256f);
    local_1c4.y = (int)ROUND(local_ac * 256f);
    local_1c4.z = (int)ROUND(local_a8 * 256f);
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr->vertex_buffer_ptr[3].projected_vertex,&local_1c4);
    pCVar4 = g_CDemonRendererPtr;
    local_290.surface_normal.A = 4;
    local_278 = 0;
    local_290.surface_normal.D = 0;
    local_290.surface_normal.C = 0;
    local_290.surface_normal.B = 0;
    local_274 = 0;
    local_250 = 3;
    local_270 = 0x80000;
    local_26c = 0x80000;
    local_264 = 0xf80000;
    local_260 = 0x80000;
    local_258 = 0xf80000;
    local_254 = 0xf80000;
    local_24c = 0x80000;
    local_248.base.type = 0xf80000;
    local_268 = 1;
    local_25c = 2;
    g_CDemonRendererPtr->vertex_buffer_ptr->light = *(float *)(this_ptr->field0_0x0 + 0x2c);
    pCVar4->vertex_buffer_ptr->color = *(int *)(this_ptr->field0_0x0 + 0x30);
    pCVar4->vertex_buffer_ptr->fog = *(float *)(this_ptr->field0_0x0 + 0x34);
    pCVar4->vertex_buffer_ptr[1].light = *(float *)(this_ptr->field0_0x0 + 0x2c);
    pCVar4->vertex_buffer_ptr[1].color = *(int *)(this_ptr->field0_0x0 + 0x30);
    pCVar4->vertex_buffer_ptr[1].fog = *(float *)(this_ptr->field0_0x0 + 0x34);
    pCVar4->vertex_buffer_ptr[2].light = *(float *)(this_ptr->field0_0x0 + 0x2c);
    pCVar4->vertex_buffer_ptr[2].color = *(int *)(this_ptr->field0_0x0 + 0x30);
    pCVar4->vertex_buffer_ptr[2].fog = *(float *)(this_ptr->field0_0x0 + 0x34);
    pCVar4->vertex_buffer_ptr[3].light = *(float *)(this_ptr->field0_0x0 + 0x2c);
    pCVar4->vertex_buffer_ptr[3].color = *(int *)(this_ptr->field0_0x0 + 0x30);
    pCVar4->vertex_buffer_ptr[3].fog = *(float *)(this_ptr->field0_0x0 + 0x34);
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(pCVar4,1);
    fStack_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(32768.0,40959.0);
    dVar13 = crt_math_c_round_FUN_005fe6b0((double)(fStack_14 * local_2f0));
    local_1c = (int)ROUND(dVar13);
    engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60(g_CDemonRendererPtr,local_1c);
    engine_drender_cpp_CDemonRenderer_renderEnhancedQualityVariant_FUN_0048bdc0
              (g_CDemonRendererPtr,&local_290);
    engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
  }
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr,0);
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60(g_CDemonRendererPtr,0xffff);
  return;
}
