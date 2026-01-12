// Name: core_fire.cpp_CLaserBeam_render_FUN_004c25c0
// Address: 004c25c0
// Address Range: [[004c25c0, 004c2d4b] [004c2d69, 004c304f] [004c3053, 004c3865]]
// Convention: __cdecl
// Signature: void core_fire.cpp_CLaserBeam_render_FUN_004c25c0(CLaserBeam * this_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_CLaserBeam_render_FUN_004c25c0(CLaserBeam *this_ptr)

{
  float fVar1;
  CDemonRenderer *pCVar2;
  int iVar3;
  float *pfVar4;
  int extraout_EAX;
  CVector3f *pCVar5;
  float fVar6;
  int iVar7;
  CDemonRenderer *this_ptr_00;
  int extraout_EDX;
  BADSPACEBASE *in_ESP;
  float fVar8;
  SRenderVertex *pSVar9;
  SRenderVertex *pSVar10;
  byte bVar11;
  float10 fVar12;
  float10 fVar13;
  double dVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float local_2d4;
  float local_2d0;
  byte local_2cc [8];
  int local_2c4;
  float local_2c0;
  int local_2bc;
  int local_2b8;
  uint local_2b4;
  uint local_2b0;
  int local_2ac;
  uint local_2a8;
  int local_2a4;
  int local_2a0;
  uint local_29c;
  int local_298;
  int local_294;
  uint local_290;
  uint local_28c;
  int local_288;
  uint local_260;
  byte local_25c [24];
  uint local_244;
  uint local_240;
  uint local_23c;
  uint local_238;
  uint local_234;
  uint local_230;
  uint local_22c;
  uint local_228;
  uint local_224;
  uint local_220;
  CMatrix3x3f CStack_21c;
  float local_1f8;
  float fStack_1f4;
  CVector3i local_1f0;
  float local_1dc;
  float local_1d8;
  float local_1d4;
  byte local_1d0 [8];
  CVector3i local_1c8;
  CVector3i local_1b8;
  float local_1a8;
  float local_1a4;
  CVector3f local_1a0;
  float local_194;
  float local_190;
  float local_188;
  float local_184;
  float local_180;
  CVector3i local_17c;
  CVector3i local_170;
  CVector3f local_160;
  byte local_150 [12];
  float local_144;
  CVector3f local_140;
  float local_12c;
  float local_128;
  float local_124;
  float local_120;
  CVector3f local_11c;
  float local_108;
  float local_104;
  float local_100;
  byte local_fc [8];
  int iStack_f4;
  float afStack_ec [3];
  float local_e0;
  float local_dc;
  float local_d8;
  float local_c4;
  float local_c0;
  byte local_bc [8];
  int local_b4;
  int local_b0;
  byte local_a0 [12];
  float local_94;
  float local_90;
  byte local_8c [8];
  float fStack_84;
  float fStack_80;
  float local_74;
  float fStack_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_4c;
  float local_48;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  int local_30;
  float local_2c;
  int local_28;
  float local_24;
  float local_20;
  int local_1c;
  float local_18;
  float fStack_14;
  
  bVar11 = 0;
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
            (g_CDemonRendererPtr,&g_FireEffectLaserTexture);
  local_1a0.x = *(float *)(this_ptr->field0_0x0 + 0xc) - *(float *)this_ptr->field0_0x0;
  local_1a0.y = *(float *)(this_ptr->field0_0x0 + 0x10) - *(float *)(this_ptr->field0_0x0 + 4);
  local_1a0.z = *(float *)(this_ptr->field0_0x0 + 0x14) - *(float *)(this_ptr->field0_0x0 + 8);
  core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
            ((CVector3f *)(local_a0 + 8),&local_1a0);
  fVar16 = SQRT(local_1a0.z * local_1a0.z + local_1a0.x * local_1a0.x + local_1a0.y * local_1a0.y);
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
            (&CStack_21c,(CVector3f *)(local_a0 + 8));
  fVar6 = *(float *)(this_ptr->field0_0x0 + 0x18);
  fVar17 = 0.0;
  pfVar4 = engine_drender_cpp_CDemonRenderer_getCameraOriginScaled_FUN_0048c780
                     (g_CDemonRendererPtr,afStack_ec);
  local_140.x = *pfVar4 - *(float *)this_ptr->field0_0x0;
  local_140.y = pfVar4[1] - *(float *)(this_ptr->field0_0x0 + 4);
  local_140.z = pfVar4[2] - *(float *)(this_ptr->field0_0x0 + 8);
  if (&local_11c != &local_140) {
    local_11c.x = local_140.x;
    local_11c.y = local_140.y;
    local_11c.z = local_140.z;
  }
  local_188 = *(float *)(this_ptr->field0_0x0 + 0xc) - *(float *)this_ptr->field0_0x0;
  local_184 = *(float *)(this_ptr->field0_0x0 + 0x10) - *(float *)(this_ptr->field0_0x0 + 4);
  local_180 = *(float *)(this_ptr->field0_0x0 + 0x14) - *(float *)(this_ptr->field0_0x0 + 8);
  if (&local_1dc != &local_188) {
    local_1dc = local_188;
    local_1d8 = local_184;
    local_1d4 = local_180;
  }
  fVar15 = local_11c.z * local_1d4 + local_11c.x * local_1dc + local_11c.y * local_1d8;
  fVar18 = 448.0;
  if (0.0 < fVar15) {
    if (*(float *)(this_ptr->field0_0x0 + 0x3c) <= 0.0) {
      engine_drender_cpp_CDemonRenderer_getCameraOriginScaled_FUN_0048c780
                (g_CDemonRendererPtr,(float *)local_1d0);
      local_1d0._0_4_ = (float)local_1d0._0_4_ - *(float *)this_ptr->field0_0x0;
      local_1d0._4_4_ = (float)local_1d0._4_4_ - *(float *)(this_ptr->field0_0x0 + 4);
      local_1c8.x = (int)((float)local_1c8.x - *(float *)(this_ptr->field0_0x0 + 8));
      pCVar5 = core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
                         (&CStack_21c,(CVector3f *)(local_fc + 4),(CVector3f *)local_1d0);
      if ((CVector3f *)(local_1d0 + 4) != pCVar5) {
        local_1d0._0_4_ = pCVar5->x;
        local_1d0._4_4_ = pCVar5->y;
        local_1c8.x = (int)pCVar5->z;
      }
      local_5c = (float)local_1d0._4_4_ * (float)local_1d0._4_4_;
      local_54 = (((float)local_1c8.x * (float)18) / fVar18) * (float)2;
      local_4c = (float)local_1d0._0_4_ * (float)local_1d0._0_4_ + local_5c;
      local_58 = local_54 * local_54;
      if (local_4c < local_58) {
        fVar17 = 1.0 - local_4c / local_58;
      }
    }
    else {
      fVar12 = (float10)fcos((float10)*(float *)(this_ptr->field0_0x0 + 0x3c));
      local_48 = fVar15 / (SQRT(local_1d4 * local_1d4 +
                                local_1dc * local_1dc + local_1d8 * local_1d8) *
                          SQRT(local_11c.z * local_11c.z +
                               local_11c.x * local_11c.x + local_11c.y * local_11c.y));
      fVar1 = (float)fVar12;
      if (fVar1 < local_48) {
        fVar17 = (local_48 - fVar1) / (1.0 - fVar1);
      }
      fVar12 = (float10)fptan((float10)*(float *)(this_ptr->field0_0x0 + 0x3c));
      local_40 = (float)fVar12;
    }
  }
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0048ca00(g_CDemonRendererPtr,0);
  if ((0.0 < fVar17) && (g_CGamePtr->halo_mode != 0)) {
    fVar1 = fVar17 * (float)2;
    fVar17 = fVar17 * *(float *)(this_ptr->field0_0x0 + 0x18);
    fVar8 = 0.0;
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr,1);
    do {
      local_2d4 = (float)(int)fVar8 * 0.04f * fVar17;
      local_20 = local_3c;
      if (*(float *)(this_ptr->field0_0x0 + 0x3c) <= 0.0) {
        local_20 = (float)18 / (fVar6 * (1.0 - fVar1));
      }
      local_20 = local_20 * local_2d4;
      local_1a8 = CStack_21c.m[1].x * local_2d4;
      local_1a4 = CStack_21c.m[2].x * local_2d4;
      local_1a0.x = local_1f8 * local_2d4;
      local_8c._4_4_ = CStack_21c.m[1].x;
      fStack_84 = CStack_21c.m[2].x;
      fStack_80 = local_1f8;
      local_150._8_4_ = *(float *)this_ptr->field0_0x0 + local_1a8;
      local_144 = *(float *)(this_ptr->field0_0x0 + 4) + local_1a4;
      local_140.x = *(float *)(this_ptr->field0_0x0 + 8) + local_1a0.x;
      if (&local_160 != (CVector3f *)(local_150 + 8)) {
        local_160.x = (float)local_150._8_4_;
        local_160.y = local_144;
        local_160.z = local_140.x;
      }
      fStack_14 = fVar8;
      engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
                (g_CDemonRendererPtr,&local_160);
      engine_drender_cpp_CDemonRenderer_getCameraRotationAsRadians_FUN_0048c800
                (g_CDemonRendererPtr,&fStack_1f4);
      local_1f0.y = (int)((float)(int)fVar8 + (float)local_1f0.y);
      local_18 = fVar8;
      engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
                (g_CDemonRendererPtr,&local_1f0,(CVector3i *)0x0);
      local_e0 = local_24;
      local_dc = local_24;
      local_d8 = 0.0;
      local_17c.x = (int)ROUND(local_24 * 256f);
      local_17c.y = (int)ROUND(local_24 * 256f);
      local_17c.z = (int)ROUND(256f * 0.0);
      wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                (&g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex,&local_17c);
      local_e0 = -local_e0;
      local_bc._0_4_ = (uint)ROUND(local_e0 * 256f);
      local_bc._4_4_ = (uint)ROUND(local_dc * 256f);
      local_b4 = (int)ROUND(local_d8 * 256f);
      wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                (&g_CDemonRendererPtr->vertex_buffer_ptr[1].projected_vertex,(CVector3i *)local_bc);
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
      local_240 = 4;
      local_230 = 0;
      local_234 = 0;
      local_238 = 0;
      local_23c = 0;
      local_22c = 0;
      dVar14 = crt_math_c_round_FUN_005fe6b0((double)(fVar17 * (float)8192));
      local_74 = (float)(int)ROUND(dVar14);
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
      engine_drender_cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0
                (this_ptr_00,(SMRGLHeaderPrimitive *)(local_25c + 0x14));
      fVar8 = (float)((int)fVar8 + 1);
      engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
    } while ((int)fVar8 < 0x19);
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr,0);
  }
  if (0.0 < local_2d4) {
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
              (g_CDemonRendererPtr,&g_FireEffectBeamFuzzTexture);
    engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
              (g_CDemonRendererPtr,(CVector3f *)this_ptr);
    engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
              (g_CDemonRendererPtr,(CVector3i *)local_a0,(CVector3i *)0x0);
    fVar6 = *(float *)(this_ptr->field0_0x0 + 0x3c);
    local_54 = *(float *)(this_ptr->field0_0x0 + 0x38);
    local_24 = 1.12104e-44;
    if (0.0 < fVar6) {
      fVar12 = (float10)fptan((float10)fVar6);
      local_24 = 2.24208e-44;
      local_54 = (float)(fVar12 * (float10)fVar15);
    }
    local_40 = (float)(uint)(0.0 < fVar6);
    local_38 = (float)core_fire_cpp_FUN_004c24d0();
    fStack_14 = local_38;
    local_30 = core_fire_cpp_FUN_004c24d0();
    local_18 = 0.0;
    if (-1 < local_1c) {
      local_40 = (fVar17 * 16777220f) / 30f;
      local_28 = 0x100;
      do {
        iVar3 = local_1c;
        pCVar2 = g_CDemonRendererPtr;
        fStack_14 = local_18;
        fVar12 = ((float10)(int)local_18 / (float10)local_1c) * (float10)2 *
                 (float10)3.1415926535000001;
        fVar13 = (float10)fsin(fVar12);
        fVar12 = (float10)fcos(fVar12);
        pSVar9 = g_CDemonRendererPtr->vertex_buffer_ptr;
        pSVar10 = g_CDemonRendererPtr->vertex_buffer_ptr + 3;
        for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
          (pSVar10->projected_vertex).transformed_x = (pSVar9->projected_vertex).transformed_x;
          pSVar9 = (SRenderVertex *)((int)pSVar9 + ((uint)bVar11 * -2 + 1) * 4);
          pSVar10 = (SRenderVertex *)((int)pSVar10 + ((uint)bVar11 * -2 + 1) * 4);
        }
        fStack_64 = (float)fVar13;
        pSVar9 = pCVar2->vertex_buffer_ptr;
        local_60 = (float)fVar12;
        pSVar10 = pSVar9 + 1;
        pSVar9 = pSVar9 + 2;
        for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
          (pSVar9->projected_vertex).transformed_x = (pSVar10->projected_vertex).transformed_x;
          pSVar10 = (SRenderVertex *)((int)pSVar10 + ((uint)bVar11 * -2 + 1) * 4);
          pSVar9 = (SRenderVertex *)((int)pSVar9 + ((uint)bVar11 * -2 + 1) * 4);
        }
        local_bc._0_4_ = 0;
        local_c0 = (float)(fVar13 * (float10)local_34);
        local_c4 = (float)(fVar12 * (float10)local_34);
        local_a0._0_4_ = (uint)ROUND(local_c4 * 256f);
        local_a0._4_4_ = (uint)ROUND(local_c0 * 256f);
        local_a0._8_4_ = (uint)ROUND(256f * 0.0);
        wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                  (&pCVar2->vertex_buffer_ptr->projected_vertex,(CVector3i *)local_a0);
        local_c0 = local_5c * local_2c;
        local_bc._0_4_ = local_60 * local_2c;
        local_bc._4_4_ = fVar18 + (float)-0.10000000000000001;
        local_fc._0_4_ = (uint)ROUND(local_c0 * 256f);
        local_fc._4_4_ = (uint)ROUND((float)local_bc._0_4_ * 256f);
        iStack_f4 = (int)ROUND((float)local_bc._4_4_ * 256f);
        wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                  (&g_CDemonRendererPtr->vertex_buffer_ptr[1].projected_vertex,(CVector3i *)local_fc
                  );
        if (iVar3 != 0) {
          dVar14 = crt_math_c_round_FUN_005fe6b0((double)local_38);
          pCVar2 = g_CDemonRendererPtr;
          local_2b8 = 0;
          local_2bc = 0;
          local_2c0 = 0.0;
          local_2c4 = 0;
          local_2b4 = 0;
          local_290 = 3;
          local_2a8 = 1;
          local_29c = 2;
          local_28 = (int)ROUND(dVar14);
          if (*(float *)(extraout_EAX + 0x3c) <= 0.0) {
            local_2a0 = ((extraout_EDX << 8) / (int)local_18 + DAT_02d13564) * 0x10000;
            local_28c = 0;
            local_288 = ((int)local_24 / (int)local_18 + DAT_02d13564) * 0x10000;
            local_2b0 = 0;
            local_298 = local_28;
          }
          else {
            local_2a0 = 0x800000;
            local_298 = 0x800000;
            local_28c = 0x800000;
            local_288 = 0x800000;
            local_2b0 = 0x800000;
          }
          g_CDemonRendererPtr->vertex_buffer_ptr->light = *(float *)(this_ptr->field0_0x0 + 0x2c);
          pCVar2->vertex_buffer_ptr->color = *(int *)(this_ptr->field0_0x0 + 0x30);
          pCVar2->vertex_buffer_ptr->fog = *(float *)(this_ptr->field0_0x0 + 0x34);
          pCVar2->vertex_buffer_ptr[1].light = *(float *)(this_ptr->field0_0x0 + 0x2c);
          pCVar2->vertex_buffer_ptr[1].color = *(int *)(this_ptr->field0_0x0 + 0x30);
          pCVar2->vertex_buffer_ptr[1].fog = *(float *)(this_ptr->field0_0x0 + 0x34);
          pCVar2->vertex_buffer_ptr[2].light = *(float *)(this_ptr->field0_0x0 + 0x2c);
          pCVar2->vertex_buffer_ptr[2].color = *(int *)(this_ptr->field0_0x0 + 0x30);
          pCVar2->vertex_buffer_ptr[2].fog = *(float *)(this_ptr->field0_0x0 + 0x34);
          pCVar2->vertex_buffer_ptr[3].light = *(float *)(this_ptr->field0_0x0 + 0x2c);
          pCVar2->vertex_buffer_ptr[3].color = *(int *)(this_ptr->field0_0x0 + 0x30);
          pCVar2->vertex_buffer_ptr[3].fog = *(float *)(this_ptr->field0_0x0 + 0x34);
          local_2ac = local_2a0;
          local_2a4 = local_298;
          local_294 = local_288;
          engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(pCVar2,1);
          iVar3 = local_30;
          dVar14 = crt_math_c_round_FUN_005fe6b0((double)(local_2d0 * (float)32767.5));
          pCVar2 = g_CDemonRendererPtr;
          local_20 = (float)(int)ROUND(dVar14);
          if (iVar3 == 0) {
            engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60
                      (g_CDemonRendererPtr,(int)local_20);
            engine_drender_cpp_CDemonRenderer_renderEnhancedQualityVariant_FUN_0048bdc0
                      (g_CDemonRendererPtr,(SMRGLHeaderPrimitive *)(local_2cc + 4));
          }
          else {
            g_CDemonRendererPtr->vertex_buffer_ptr->w_recip = local_20;
            pCVar2->vertex_buffer_ptr[1].w_recip = 0.0;
            pCVar2->vertex_buffer_ptr[2].w_recip = 0.0;
            pCVar2->vertex_buffer_ptr[3].w_recip = local_20;
            engine_drender_cpp_CDemonRenderer_renderMaximumQualityVariant_FUN_0048bba0
                      (pCVar2,(SMRGLHeaderPrimitive *)local_2cc);
          }
        }
        local_28 = local_28 + 0x100;
        local_18 = (float)((int)local_18 + 1);
      } while ((int)local_18 <= local_1c);
    }
    engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
  }
  if (0.0 < fVar16) {
    local_124 = 1.0 / fVar18;
    local_12c = local_1a0.z * local_124;
    local_128 = local_194 * local_124;
    local_124 = local_190 * local_124;
    local_108 = local_12c * 0.1f;
    local_104 = local_128 * 0.1f;
    local_100 = local_124 * 0.1f;
    local_120 = *(float *)(this_ptr->field0_0x0 + 0xc) - local_108;
    local_11c.x = *(float *)(this_ptr->field0_0x0 + 0x10) - local_104;
    local_11c.y = *(float *)(this_ptr->field0_0x0 + 0x14) - local_100;
    pCVar5 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                       ((CVector3f *)local_150,(CVector3f *)(this_ptr->field0_0x0 + 0x20));
    if ((CVector3f *)local_8c != pCVar5) {
      local_8c._0_4_ = pCVar5->x;
      local_8c._4_4_ = pCVar5->y;
      fStack_84 = pCVar5->z;
    }
    engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
              (g_CDemonRendererPtr,&local_11c);
    engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
              (g_CDemonRendererPtr,(CVector3i *)(local_8c + 4),(CVector3i *)0x0);
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
              (g_CDemonRendererPtr,&g_FireEffectReticle);
    local_a0._8_4_ = 0x3e4ccccd;
    local_90 = 0.0;
    local_94 = 0.2;
    local_17c.x = (int)ROUND(256f * 0.2);
    local_17c.y = (int)ROUND(256f * 0.2);
    local_17c.z = (int)ROUND(256f * 0.0);
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex,&local_17c);
    local_94 = -local_94;
    local_bc._4_4_ = (uint)ROUND(local_94 * 256f);
    local_b4 = (int)ROUND(local_90 * 256f);
    local_b0 = (int)ROUND((float)local_8c._0_4_ * 256f);
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr->vertex_buffer_ptr[1].projected_vertex,
               (CVector3i *)(local_bc + 4));
    local_8c._0_4_ = -(float)local_8c._0_4_;
    local_1c8.x = (int)ROUND(local_90 * 256f);
    local_1c8.y = (int)ROUND((float)local_8c._0_4_ * 256f);
    local_1c8.z = (int)ROUND((float)local_8c._4_4_ * 256f);
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr->vertex_buffer_ptr[2].projected_vertex,&local_1c8);
    local_8c._0_4_ = -(float)local_8c._0_4_;
    local_1a0.x = (float)(int)ROUND((float)local_8c._0_4_ * 256f);
    local_1a0.y = (float)(int)ROUND((float)local_8c._4_4_ * 256f);
    local_1a0.z = (float)(int)ROUND(fStack_84 * 256f);
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr->vertex_buffer_ptr[3].projected_vertex,(CVector3i *)&local_1a0);
    pCVar2 = g_CDemonRendererPtr;
    local_260 = 4;
    local_25c._12_4_ = 0;
    local_25c._8_4_ = 0;
    local_25c._4_4_ = 0;
    local_25c._0_4_ = 0;
    local_25c._16_4_ = 0;
    local_228 = 3;
    local_25c._20_4_ = 0x80000;
    local_244 = 0x80000;
    local_23c = 0xf80000;
    local_238 = 0x80000;
    local_230 = 0xf80000;
    local_22c = 0xf80000;
    local_224 = 0x80000;
    local_220 = 0xf80000;
    local_240 = 1;
    local_234 = 2;
    g_CDemonRendererPtr->vertex_buffer_ptr->light = *(float *)(this_ptr->field0_0x0 + 0x2c);
    pCVar2->vertex_buffer_ptr->color = *(int *)(this_ptr->field0_0x0 + 0x30);
    pCVar2->vertex_buffer_ptr->fog = *(float *)(this_ptr->field0_0x0 + 0x34);
    pCVar2->vertex_buffer_ptr[1].light = *(float *)(this_ptr->field0_0x0 + 0x2c);
    pCVar2->vertex_buffer_ptr[1].color = *(int *)(this_ptr->field0_0x0 + 0x30);
    pCVar2->vertex_buffer_ptr[1].fog = *(float *)(this_ptr->field0_0x0 + 0x34);
    pCVar2->vertex_buffer_ptr[2].light = *(float *)(this_ptr->field0_0x0 + 0x2c);
    pCVar2->vertex_buffer_ptr[2].color = *(int *)(this_ptr->field0_0x0 + 0x30);
    pCVar2->vertex_buffer_ptr[2].fog = *(float *)(this_ptr->field0_0x0 + 0x34);
    pCVar2->vertex_buffer_ptr[3].light = *(float *)(this_ptr->field0_0x0 + 0x2c);
    pCVar2->vertex_buffer_ptr[3].color = *(int *)(this_ptr->field0_0x0 + 0x30);
    pCVar2->vertex_buffer_ptr[3].fog = *(float *)(this_ptr->field0_0x0 + 0x34);
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(pCVar2,1);
    fVar6 = core_actor_cpp_getRandomFloat_FUN_0040cc10(32768.0,40959.0);
    dVar14 = crt_math_c_round_FUN_005fe6b0((double)(fVar6 * local_2c0));
    engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60
              (g_CDemonRendererPtr,(int)ROUND(dVar14));
    engine_drender_cpp_CDemonRenderer_renderEnhancedQualityVariant_FUN_0048bdc0
              (g_CDemonRendererPtr,(SMRGLHeaderPrimitive *)local_25c);
    engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
  }
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr,0);
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60(g_CDemonRendererPtr,0xffff);
  return;
}
