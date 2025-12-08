// Name: core_fire.cpp_CLaserBeam_render_FUN_004c25c0
// Address: 004c25c0
// Address Range: [[004c25c0, 004c2d4b] [004c2d69, 004c304f] [004c3053, 004c3865]]
// Convention: __cdecl
// Signature: void core_fire.cpp_CLaserBeam_render_FUN_004c25c0(CLaserBeam * this_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_CLaserBeam_render_FUN_004c25c0(CLaserBeam *this_ptr)

{
  CDemonRenderer *pCVar1;
  char *pcVar2;
  float *pfVar3;
  int iVar4;
  int extraout_EAX;
  CVector3f *pCVar5;
  float fVar6;
  int iVar7;
  CDemonRenderer *this_ptr_00;
  int extraout_EDX;
  BADSPACEBASE *in_ESP;
  SRenderVertex *pSVar8;
  SRenderVertex *pSVar9;
  byte bVar10;
  float10 fVar11;
  float10 fVar12;
  double dVar13;
  float in_stack_00000008;
  float in_stack_00000010;
  int iStack00000018;
  int in_stack_00000020;
  int iStack00000024;
  float in_stack_fffffd34;
  ulonglong uVar14;
  float in_stack_fffffd50;
  float in_stack_fffffd54;
  float in_stack_fffffd58;
  float in_stack_fffffd5c;
  float local_298;
  float local_294;
  byte local_290 [8];
  int local_288;
  float local_284;
  int local_280;
  int local_27c;
  uint local_278;
  uint local_274;
  int local_270;
  uint local_26c;
  int local_268;
  int local_264;
  uint local_260;
  int local_25c;
  int local_258;
  uint local_254;
  uint local_250;
  int local_24c;
  uint local_224;
  byte local_220 [12];
  int iStack_214;
  int iStack_210;
  CMatrix3x3f local_20c;
  uint local_1e8;
  uint local_1e4;
  float local_1e0;
  float local_1d4;
  CVector3i local_1d0;
  float local_1c4;
  byte local_1c0 [8];
  float local_1b8;
  float local_1b4;
  CVector3f local_1a0;
  float local_190;
  byte local_18c [8];
  int local_184;
  int local_180;
  CVector3i local_17c [2];
  CVector3i local_164;
  float fStack_158;
  CVector3i CStack_154;
  byte local_148 [12];
  CVector3i local_13c;
  float local_130;
  float local_12c;
  float local_128;
  CVector3f local_114;
  float local_108;
  float local_f0;
  float fStack_ec;
  byte auStack_e8 [12];
  float local_dc;
  float local_cc;
  float local_c8;
  float local_c4;
  CVector3i local_c0;
  CLaserBeam *local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  byte local_98 [8];
  CVector3i local_90;
  float fStack_84;
  float fStack_80;
  CVector3i CStack_7c;
  float fStack_70;
  float local_6c;
  float local_68;
  CVector3i CStack_64;
  float local_58;
  float local_54;
  byte local_50 [8];
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_28;
  float local_24;
  float local_20;
  float local_18;
  
  bVar10 = 0;
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
            (g_CDemonRendererPtr,&g_FireEffectLaserTexture);
  local_1a0.x = *(float *)(this_ptr->field0_0x0 + 0xc) - *(float *)this_ptr->field0_0x0;
  local_1a0.y = *(float *)(this_ptr->field0_0x0 + 0x10) - *(float *)(this_ptr->field0_0x0 + 4);
  local_1a0.z = *(float *)(this_ptr->field0_0x0 + 0x14) - *(float *)(this_ptr->field0_0x0 + 8);
  core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
            ((CVector3f *)local_98,&local_1a0);
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
            ((CMatrix3x3f *)(local_220 + 8),(CVector3f *)(local_98 + 4));
  pfVar3 = engine_drender_cpp_CDemonRenderer_getCameraOriginScaled_FUN_0048c780
                     (g_CDemonRendererPtr,(float *)(auStack_e8 + 4));
  local_13c.z = (int)(*pfVar3 - *(float *)this_ptr->field0_0x0);
  local_130 = pfVar3[1] - *(float *)(this_ptr->field0_0x0 + 4);
  local_12c = pfVar3[2] - *(float *)(this_ptr->field0_0x0 + 8);
  if (&local_114.y != (float *)&local_13c.z) {
    local_114.y = (float)local_13c.z;
    local_114.z = local_130;
    local_108 = local_12c;
  }
  local_17c[0].x = (int)(*(float *)(this_ptr->field0_0x0 + 0xc) - *(float *)this_ptr->field0_0x0);
  local_17c[0].y =
       (int)(*(float *)(this_ptr->field0_0x0 + 0x10) - *(float *)(this_ptr->field0_0x0 + 4));
  local_17c[0].z =
       (int)(*(float *)(this_ptr->field0_0x0 + 0x14) - *(float *)(this_ptr->field0_0x0 + 8));
  if (&local_1d0 != local_17c) {
    local_1d0.x = local_17c[0].x;
    local_1d0.y = local_17c[0].y;
    local_1d0.z = local_17c[0].z;
  }
  fVar6 = local_108 * (float)local_1d0.z +
          local_114.y * (float)local_1d0.x + local_114.z * (float)local_1d0.y;
  if (0.0 < fVar6) {
    if (*(float *)(this_ptr->field0_0x0 + 0x3c) <= 0.0) {
      engine_drender_cpp_CDemonRenderer_getCameraOriginScaled_FUN_0048c780
                (g_CDemonRendererPtr,&local_1c4);
      local_1c0._0_4_ = (float)local_1c0._0_4_ - *(float *)this_ptr->field0_0x0;
      local_1c0._4_4_ = (float)local_1c0._4_4_ - *(float *)(this_ptr->field0_0x0 + 4);
      local_1b8 = local_1b8 - *(float *)(this_ptr->field0_0x0 + 8);
      pCVar5 = core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
                         (&local_20c,(CVector3f *)auStack_e8,(CVector3f *)local_1c0);
      if ((CVector3f *)(local_1c0 + 4) != pCVar5) {
        local_1c0._4_4_ = pCVar5->x;
        local_1b8 = pCVar5->y;
        local_1b4 = pCVar5->z;
      }
      local_48 = local_1b8 * local_1b8;
      local_40 = ((local_1b4 * (float)18) / in_stack_fffffd34) * (float)2
      ;
      local_38 = (float)local_1c0._4_4_ * (float)local_1c0._4_4_ + local_48;
      local_44 = local_40 * local_40;
    }
    else {
      fcos((float10)*(float *)(this_ptr->field0_0x0 + 0x3c));
      local_3c = fVar6 / (SQRT((float)local_1d0.z * (float)local_1d0.z +
                               (float)local_1d0.x * (float)local_1d0.x +
                               (float)local_1d0.y * (float)local_1d0.y) *
                         SQRT(local_108 * local_108 +
                              local_114.y * local_114.y + local_114.z * local_114.z));
      fVar11 = (float10)fptan((float10)*(float *)(this_ptr->field0_0x0 + 0x3c));
      local_34 = (float)fVar11;
    }
  }
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0048ca00(g_CDemonRendererPtr,0);
  if ((0.0 < in_stack_fffffd34) && (g_CGamePtr->halo_mode != 0)) {
    uVar14 = (ulonglong)(uint)(in_stack_fffffd34 * *(float *)(this_ptr->field0_0x0 + 0x18));
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr,1);
    pcVar2 = (char *)0x0;
    do {
      this_ptr = (CLaserBeam *)pcVar2;
      local_18c._4_4_ = (float)(int)this_ptr * 0.04f * (float)uVar14;
      local_190 = local_20c.m[1].z * (float)local_18c._4_4_;
      local_18c._0_4_ = local_20c.m[2].z * (float)local_18c._4_4_;
      local_18c._4_4_ = local_1e0 * (float)local_18c._4_4_;
      fStack_70 = local_20c.m[1].z;
      local_6c = local_20c.m[2].z;
      local_68 = local_1e0;
      local_130 = *(float *)this_ptr + local_190;
      local_12c = *(float *)((int)this_ptr + 4) + (float)local_18c._0_4_;
      local_128 = *(float *)((int)this_ptr + 8) + (float)local_18c._4_4_;
      if ((float *)local_148 != &local_130) {
        local_148._0_4_ = local_130;
        local_148._4_4_ = local_12c;
        local_148._8_4_ = local_128;
      }
      engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
                (g_CDemonRendererPtr,(CVector3f *)local_148);
      engine_drender_cpp_CDemonRenderer_getCameraRotationAsRadians_FUN_0048c800
                (g_CDemonRendererPtr,&local_1d4);
      local_1d0.z = (int)((float)(int)this_ptr + (float)local_1d0.z);
      engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
                (g_CDemonRendererPtr,&local_1d0,(CVector3i *)0x0);
      local_b0 = 0.0;
      local_164.z = (int)ROUND((float)this_ptr * 256f);
      fStack_158 = (float)(int)ROUND((float)this_ptr * 256f);
      CStack_154.x = (int)ROUND(256f * 0.0);
      local_c0.z = (int)this_ptr;
      local_b4 = this_ptr;
      wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                (&g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex,&CStack_154);
      local_b4 = (CLaserBeam *)-(float)local_b4;
      local_90.x = (int)ROUND((float)local_b4 * 256f);
      local_90.y = (int)ROUND(local_b0 * 256f);
      local_90.z = (int)ROUND(local_ac * 256f);
      wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                (&g_CDemonRendererPtr->vertex_buffer_ptr[1].projected_vertex,&local_90);
      local_ac = -local_ac;
      local_18c._4_4_ = (uint)ROUND(local_b0 * 256f);
      local_184 = (int)ROUND(local_ac * 256f);
      local_180 = (int)ROUND(local_a8 * 256f);
      wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                (&g_CDemonRendererPtr->vertex_buffer_ptr[2].projected_vertex,
                 (CVector3i *)(local_18c + 4));
      local_ac = -local_ac;
      local_13c.x = (int)ROUND(local_ac * 256f);
      local_13c.y = (int)ROUND(local_a8 * 256f);
      local_13c.z = (int)ROUND(local_a4 * 256f);
      wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                (&g_CDemonRendererPtr->vertex_buffer_ptr[3].projected_vertex,&local_13c);
      engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
                (g_CDemonRendererPtr,&g_FireEffectHeadliteTexture);
      local_20c.m[0].z = 5.60519e-45;
      local_20c.m[2].x = 0.0;
      local_20c.m[1].z = 0.0;
      local_20c.m[1].y = 0.0;
      local_20c.m[1].x = 0.0;
      local_20c.m[2].y = 0.0;
      dVar13 = crt_math_c_round_FUN_005fe6b0((double)(in_stack_fffffd58 * (float)8192));
      local_38 = (float)(int)ROUND(dVar13);
      this_ptr_00->vertex_buffer_ptr->w_recip = local_38;
      this_ptr_00->vertex_buffer_ptr->light = *(float *)((int)this_ptr + 0x2c);
      this_ptr_00->vertex_buffer_ptr->color = (int)*(float *)((int)this_ptr + 0x30);
      this_ptr_00->vertex_buffer_ptr->fog = *(float *)((int)this_ptr + 0x34);
      local_20c.m[2].y = 1.4013e-45;
      this_ptr_00->vertex_buffer_ptr[1].w_recip = local_38;
      this_ptr_00->vertex_buffer_ptr[1].light = *(float *)((int)this_ptr + 0x2c);
      this_ptr_00->vertex_buffer_ptr[1].color = (int)*(float *)((int)this_ptr + 0x30);
      this_ptr_00->vertex_buffer_ptr[1].fog = *(float *)((int)this_ptr + 0x34);
      local_20c.m[2].z = 2.8026e-45;
      this_ptr_00->vertex_buffer_ptr[2].w_recip = local_38;
      this_ptr_00->vertex_buffer_ptr[2].light = *(float *)((int)this_ptr + 0x2c);
      this_ptr_00->vertex_buffer_ptr[2].color = (int)*(float *)((int)this_ptr + 0x30);
      this_ptr_00->vertex_buffer_ptr[2].fog = *(float *)((int)this_ptr + 0x34);
      local_1e8 = 3;
      this_ptr_00->vertex_buffer_ptr[3].w_recip = local_38;
      this_ptr_00->vertex_buffer_ptr[3].light = *(float *)((int)this_ptr + 0x2c);
      this_ptr_00->vertex_buffer_ptr[3].color = (int)*(float *)((int)this_ptr + 0x30);
      this_ptr_00->vertex_buffer_ptr[3].fog = *(float *)((int)this_ptr + 0x34);
      this_ptr_00->vertex_buffer_ptr->u = 2.2775203e-38;
      this_ptr_00->vertex_buffer_ptr->v = 2.2775203e-38;
      this_ptr_00->vertex_buffer_ptr[1].u = 7.34684e-40;
      this_ptr_00->vertex_buffer_ptr[1].v = 2.2775203e-38;
      this_ptr_00->vertex_buffer_ptr[2].u = 7.34684e-40;
      this_ptr_00->vertex_buffer_ptr[2].v = 7.34684e-40;
      this_ptr_00->vertex_buffer_ptr[3].u = 2.2775203e-38;
      this_ptr_00->vertex_buffer_ptr[3].v = 7.34684e-40;
      engine_drender_cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0
                (this_ptr_00,(SMRGLHeaderPrimitive *)&local_20c);
      engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
      pcVar2 = (char *)((int)this_ptr + 1);
    } while ((int)this_ptr + 1 < 0x19);
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr,0);
  }
  if (0.0 < local_298) {
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
              (g_CDemonRendererPtr,&g_FireEffectBeamFuzzTexture);
    engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
              (g_CDemonRendererPtr,(CVector3f *)this_ptr);
    engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
              (g_CDemonRendererPtr,&CStack_64,(CVector3i *)0x0);
    local_18 = *(float *)(this_ptr->field0_0x0 + 0x38);
    iStack00000018 = 8;
    if (0.0 < *(float *)(this_ptr->field0_0x0 + 0x3c)) {
      fVar11 = (float10)fptan((float10)*(float *)(this_ptr->field0_0x0 + 0x3c));
      iStack00000018 = 0x10;
      local_18 = (float)(fVar11 * (float10)in_stack_fffffd50);
    }
    this_ptr = (CLaserBeam *)core_fire_cpp_FUN_004c24d0();
    iVar4 = core_fire_cpp_FUN_004c24d0();
    iStack00000024 = 0;
    if (-1 < in_stack_00000020) {
      do {
        pCVar1 = g_CDemonRendererPtr;
        fVar11 = ((float10)iStack00000024 / (float10)in_stack_00000020) * (float10)2 *
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
        local_28 = (float)fVar12;
        pSVar8 = pCVar1->vertex_buffer_ptr;
        local_24 = (float)fVar11;
        pSVar9 = pSVar8 + 1;
        pSVar8 = pSVar8 + 2;
        for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
          (pSVar8->projected_vertex).transformed_x = (pSVar9->projected_vertex).transformed_x;
          pSVar9 = (SRenderVertex *)((int)pSVar9 + ((uint)bVar10 * -2 + 1) * 4);
          pSVar8 = (SRenderVertex *)((int)pSVar8 + ((uint)bVar10 * -2 + 1) * 4);
        }
        fStack_80 = 0.0;
        fStack_84 = (float)(fVar12 * (float10)in_stack_00000008);
        local_90.z = (int)(float)(fVar11 * (float10)in_stack_00000008);
        CStack_64.x = (int)ROUND((float)local_90.z * 256f);
        CStack_64.y = (int)ROUND(fStack_84 * 256f);
        CStack_64.z = (int)ROUND(256f * 0.0);
        wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                  (&pCVar1->vertex_buffer_ptr->projected_vertex,&CStack_64);
        fStack_84 = local_20 * in_stack_00000010;
        fStack_80 = local_24 * in_stack_00000010;
        CStack_7c.x = (int)(in_stack_fffffd5c + (float)-0.10000000000000001);
        local_c0.x = (int)ROUND(fStack_84 * 256f);
        local_c0.y = (int)ROUND(fStack_80 * 256f);
        local_c0.z = (int)ROUND((float)CStack_7c.x * 256f);
        wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                  (&g_CDemonRendererPtr->vertex_buffer_ptr[1].projected_vertex,&local_c0);
        if (in_stack_00000020 != 0) {
          dVar13 = crt_math_c_round_FUN_005fe6b0((double)(float)this_ptr);
          pCVar1 = g_CDemonRendererPtr;
          local_27c = 0;
          local_280 = 0;
          local_284 = 0.0;
          local_288 = 0;
          local_278 = 0;
          local_254 = 3;
          local_26c = 1;
          local_260 = 2;
          local_25c = (int)ROUND(dVar13);
          if (*(float *)(extraout_EAX + 0x3c) <= 0.0) {
            local_264 = ((extraout_EDX << 8) / iStack00000024 + DAT_02d13564) * 0x10000;
            local_250 = 0;
            local_24c = (iStack00000018 / iStack00000024 + DAT_02d13564) * 0x10000;
            local_274 = 0;
          }
          else {
            local_264 = 0x800000;
            local_25c = 0x800000;
            local_250 = 0x800000;
            local_24c = 0x800000;
            local_274 = 0x800000;
          }
          g_CDemonRendererPtr->vertex_buffer_ptr->light = *(float *)(this_ptr->field0_0x0 + 0x2c);
          pCVar1->vertex_buffer_ptr->color = *(int *)(this_ptr->field0_0x0 + 0x30);
          pCVar1->vertex_buffer_ptr->fog = *(float *)(this_ptr->field0_0x0 + 0x34);
          pCVar1->vertex_buffer_ptr[1].light = *(float *)(this_ptr->field0_0x0 + 0x2c);
          pCVar1->vertex_buffer_ptr[1].color = *(int *)(this_ptr->field0_0x0 + 0x30);
          pCVar1->vertex_buffer_ptr[1].fog = *(float *)(this_ptr->field0_0x0 + 0x34);
          pCVar1->vertex_buffer_ptr[2].light = *(float *)(this_ptr->field0_0x0 + 0x2c);
          pCVar1->vertex_buffer_ptr[2].color = *(int *)(this_ptr->field0_0x0 + 0x30);
          pCVar1->vertex_buffer_ptr[2].fog = *(float *)(this_ptr->field0_0x0 + 0x34);
          pCVar1->vertex_buffer_ptr[3].light = *(float *)(this_ptr->field0_0x0 + 0x2c);
          pCVar1->vertex_buffer_ptr[3].color = *(int *)(this_ptr->field0_0x0 + 0x30);
          pCVar1->vertex_buffer_ptr[3].fog = *(float *)(this_ptr->field0_0x0 + 0x34);
          local_270 = local_264;
          local_268 = local_25c;
          local_258 = local_24c;
          engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(pCVar1,1);
          dVar13 = crt_math_c_round_FUN_005fe6b0((double)(local_294 * (float)32767.5));
          pCVar1 = g_CDemonRendererPtr;
          fVar6 = (float)(int)ROUND(dVar13);
          if (iVar4 == 0) {
            engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60
                      (g_CDemonRendererPtr,(int)fVar6);
            engine_drender_cpp_CDemonRenderer_renderEnhancedQualityVariant_FUN_0048bdc0
                      (g_CDemonRendererPtr,(SMRGLHeaderPrimitive *)(local_290 + 4));
          }
          else {
            g_CDemonRendererPtr->vertex_buffer_ptr->w_recip = fVar6;
            pCVar1->vertex_buffer_ptr[1].w_recip = 0.0;
            pCVar1->vertex_buffer_ptr[2].w_recip = 0.0;
            pCVar1->vertex_buffer_ptr[3].w_recip = fVar6;
            engine_drender_cpp_CDemonRenderer_renderMaximumQualityVariant_FUN_0048bba0
                      (pCVar1,(SMRGLHeaderPrimitive *)local_290);
          }
        }
        iStack00000024 = iStack00000024 + 1;
      } while (iStack00000024 <= in_stack_00000020);
    }
    engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
  }
  if (0.0 < in_stack_fffffd54) {
    auStack_e8._0_4_ = 1.0 / in_stack_fffffd5c;
    local_f0 = (float)local_164.z * (float)auStack_e8._0_4_;
    fStack_ec = fStack_158 * (float)auStack_e8._0_4_;
    auStack_e8._0_4_ = (float)CStack_154.x * (float)auStack_e8._0_4_;
    local_cc = local_f0 * 0.1f;
    local_c8 = fStack_ec * 0.1f;
    local_c4 = (float)auStack_e8._0_4_ * 0.1f;
    auStack_e8._4_4_ = *(float *)(this_ptr->field0_0x0 + 0xc) - local_cc;
    auStack_e8._8_4_ = *(float *)(this_ptr->field0_0x0 + 0x10) - local_c8;
    local_dc = *(float *)(this_ptr->field0_0x0 + 0x14) - local_c4;
    pCVar5 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                       (&local_114,(CVector3f *)(this_ptr->field0_0x0 + 0x20));
    if ((CVector3f *)local_50 != pCVar5) {
      local_50._0_4_ = pCVar5->x;
      local_50._4_4_ = pCVar5->y;
      local_48 = pCVar5->z;
    }
    engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
              (g_CDemonRendererPtr,(CVector3f *)(auStack_e8 + 8));
    engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
              (g_CDemonRendererPtr,(CVector3i *)(local_50 + 4),(CVector3i *)0x0);
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
              (g_CDemonRendererPtr,&g_FireEffectReticle);
    CStack_64.z = 0x3e4ccccd;
    local_54 = 0.0;
    local_58 = 0.2;
    local_148._8_4_ = (uint)ROUND(256f * 0.2);
    local_13c.x = (int)ROUND(256f * 0.2);
    local_13c.y = (int)ROUND(256f * 0.0);
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex,
               (CVector3i *)(local_148 + 8));
    local_58 = -local_58;
    CStack_7c.x = (int)ROUND(local_58 * 256f);
    CStack_7c.y = (int)ROUND(local_54 * 256f);
    CStack_7c.z = (int)ROUND((float)local_50._0_4_ * 256f);
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr->vertex_buffer_ptr[1].projected_vertex,&CStack_7c);
    local_50._0_4_ = -(float)local_50._0_4_;
    local_18c._0_4_ = (uint)ROUND(local_54 * 256f);
    local_18c._4_4_ = (uint)ROUND((float)local_50._0_4_ * 256f);
    local_184 = (int)ROUND((float)local_50._4_4_ * 256f);
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr->vertex_buffer_ptr[2].projected_vertex,(CVector3i *)local_18c);
    local_50._0_4_ = -(float)local_50._0_4_;
    local_164.x = (int)ROUND((float)local_50._0_4_ * 256f);
    local_164.y = (int)ROUND((float)local_50._4_4_ * 256f);
    local_164.z = (int)ROUND(local_48 * 256f);
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr->vertex_buffer_ptr[3].projected_vertex,&local_164);
    pCVar1 = g_CDemonRendererPtr;
    local_224 = 4;
    iStack_214 = 0;
    local_220._8_4_ = 0;
    local_220._4_4_ = 0;
    local_220._0_4_ = 0;
    iStack_210 = 0;
    local_20c.m[2].z = 4.2039e-45;
    local_20c.m[0].x = 7.34684e-40;
    local_20c.m[0].y = 7.34684e-40;
    local_20c.m[1].x = 2.2775203e-38;
    local_20c.m[1].y = 7.34684e-40;
    local_20c.m[2].x = 2.2775203e-38;
    local_20c.m[2].y = 2.2775203e-38;
    local_1e8 = 0x80000;
    local_1e4 = 0xf80000;
    local_20c.m[0].z = 1.4013e-45;
    local_20c.m[1].z = 2.8026e-45;
    g_CDemonRendererPtr->vertex_buffer_ptr->light = *(float *)(this_ptr->field0_0x0 + 0x2c);
    pCVar1->vertex_buffer_ptr->color = *(int *)(this_ptr->field0_0x0 + 0x30);
    pCVar1->vertex_buffer_ptr->fog = *(float *)(this_ptr->field0_0x0 + 0x34);
    pCVar1->vertex_buffer_ptr[1].light = *(float *)(this_ptr->field0_0x0 + 0x2c);
    pCVar1->vertex_buffer_ptr[1].color = *(int *)(this_ptr->field0_0x0 + 0x30);
    pCVar1->vertex_buffer_ptr[1].fog = *(float *)(this_ptr->field0_0x0 + 0x34);
    pCVar1->vertex_buffer_ptr[2].light = *(float *)(this_ptr->field0_0x0 + 0x2c);
    pCVar1->vertex_buffer_ptr[2].color = *(int *)(this_ptr->field0_0x0 + 0x30);
    pCVar1->vertex_buffer_ptr[2].fog = *(float *)(this_ptr->field0_0x0 + 0x34);
    pCVar1->vertex_buffer_ptr[3].light = *(float *)(this_ptr->field0_0x0 + 0x2c);
    pCVar1->vertex_buffer_ptr[3].color = *(int *)(this_ptr->field0_0x0 + 0x30);
    pCVar1->vertex_buffer_ptr[3].fog = *(float *)(this_ptr->field0_0x0 + 0x34);
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(pCVar1,1);
    fVar6 = core_actor_cpp_getRandomFloat_FUN_0040cc10(32768.0,40959.0);
    dVar13 = crt_math_c_round_FUN_005fe6b0((double)(fVar6 * local_284));
    engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60
              (g_CDemonRendererPtr,(int)ROUND(dVar13));
    engine_drender_cpp_CDemonRenderer_renderEnhancedQualityVariant_FUN_0048bdc0
              (g_CDemonRendererPtr,(SMRGLHeaderPrimitive *)local_220);
    engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
  }
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr,0);
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60(g_CDemonRendererPtr,0xffff);
  return;
}
