// Name: core_fire.cpp_CLaserBeam_render_FUN_004c25c0
// Address: 004c25c0
// Address Range: [[004c25c0, 004c2d4b] [004c2d69, 004c304f] [004c3053, 004c3865]]
// Convention: __cdecl
// Signature: void core_fire.cpp_CLaserBeam_render_FUN_004c25c0(CLaserBeam * this_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_CLaserBeam_render_FUN_004c25c0(CLaserBeam *this_ptr)

{
  float render_alpha;
  char *pcVar1;
  float *pfVar2;
  float fVar3;
  uint extraout_EAX;
  CVector3f *pCVar4;
  int iVar5;
  float extraout_ECX;
  CDemonRenderer *pCVar6;
  uint extraout_EDX;
  uint extraout_EDX_00;
  BADSPACEBASE *in_ESP;
  SRenderVertex *pSVar7;
  SRenderVertex *pSVar8;
  byte bVar9;
  float10 fVar10;
  float10 fVar11;
  double dVar12;
  float in_stack_00000010;
  float in_stack_00000018;
  int iStack0000001c;
  int in_stack_00000028;
  int iStack0000002c;
  float in_stack_fffffd34;
  float in_stack_fffffd58;
  float in_stack_fffffd5c;
  float in_stack_fffffd60;
  float in_stack_fffffd64;
  float local_290;
  float local_284;
  float local_27c;
  byte local_278 [8];
  int local_270;
  int local_26c;
  int local_268;
  int local_264;
  int local_260;
  uint local_25c;
  int local_258;
  int local_254;
  uint local_250;
  int local_24c;
  int local_248;
  uint local_244;
  uint local_240;
  int local_23c;
  uint uStack_21c;
  byte local_218 [12];
  byte local_20c [12];
  float local_200;
  float fStack_1fc;
  float local_1f8;
  float fStack_1f4;
  float local_1f0;
  float local_1ec;
  uint local_1e8;
  uint local_1e4;
  float local_1e0;
  uint local_1dc;
  float local_1d4;
  CVector3i local_1d0;
  float local_1c4;
  byte local_1c0 [8];
  float local_1b8;
  float local_1b4;
  CVector3f local_1a0;
  float local_190;
  float local_18c;
  byte local_188 [8];
  int local_180;
  CVector3i local_17c [2];
  byte local_15c [12];
  float local_150;
  float local_14c;
  CVector3f local_148;
  byte local_13c [8];
  float local_134;
  CVector3f local_130 [2];
  float local_110;
  CVector3f local_10c [3];
  CVector3f CStack_e8;
  float local_dc;
  CVector3f local_d8;
  float local_c4;
  float local_c0;
  float local_bc;
  CVector3i local_b8;
  float local_ac;
  float local_a8;
  float local_a4;
  byte local_98 [8];
  CVector3i local_90;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  CVector3i local_74;
  float local_68;
  CVector3i local_5c;
  float local_50;
  float local_4c;
  byte local_48 [8];
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_20;
  float local_1c;
  float local_18;
  
  bVar9 = 0;
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
            (g_CDemonRendererPtr,&g_FireEffectLaserTexture);
  local_1a0.x = *(float *)(this_ptr->field0_0x0 + 0xc) - *(float *)this_ptr->field0_0x0;
  local_1a0.y = *(float *)(this_ptr->field0_0x0 + 0x10) - *(float *)(this_ptr->field0_0x0 + 4);
  local_1a0.z = *(float *)(this_ptr->field0_0x0 + 0x14) - *(float *)(this_ptr->field0_0x0 + 8);
  core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
            ((CVector3f *)local_98,&local_1a0);
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
            ((CMatrix3x3f *)local_218,(CVector3f *)(local_98 + 4));
  pfVar2 = engine_drender_cpp_CDemonRenderer_getCameraOriginScaled_FUN_0048c780
                     (g_CDemonRendererPtr,&CStack_e8.y);
  local_134 = *pfVar2 - *(float *)this_ptr->field0_0x0;
  local_130[0].x = pfVar2[1] - *(float *)(this_ptr->field0_0x0 + 4);
  local_130[0].y = pfVar2[2] - *(float *)(this_ptr->field0_0x0 + 8);
  if (&local_110 != &local_134) {
    local_110 = local_134;
    local_10c[0].x = local_130[0].x;
    local_10c[0].y = local_130[0].y;
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
  fVar3 = local_10c[0].y * (float)local_1d0.z +
          local_110 * (float)local_1d0.x + local_10c[0].x * (float)local_1d0.y;
  if (0.0 < fVar3) {
    if (*(float *)(this_ptr->field0_0x0 + 0x3c) <= 0.0) {
      engine_drender_cpp_CDemonRenderer_getCameraOriginScaled_FUN_0048c780
                (g_CDemonRendererPtr,&local_1c4);
      local_1c0._0_4_ = (float)local_1c0._0_4_ - *(float *)this_ptr->field0_0x0;
      local_1c0._4_4_ = (float)local_1c0._4_4_ - *(float *)(this_ptr->field0_0x0 + 4);
      local_1b8 = local_1b8 - *(float *)(this_ptr->field0_0x0 + 8);
      pCVar4 = core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
                         ((CMatrix3x3f *)local_20c,&CStack_e8,(CVector3f *)local_1c0);
      if ((CVector3f *)(local_1c0 + 4) != pCVar4) {
        local_1c0._4_4_ = pCVar4->x;
        local_1b8 = pCVar4->y;
        local_1b4 = pCVar4->z;
      }
      local_48._0_4_ = local_1b8 * local_1b8;
      local_40 = ((local_1b4 * (float)18) / in_stack_fffffd34) * (float)2
      ;
      local_38 = (float)local_1c0._4_4_ * (float)local_1c0._4_4_ + (float)local_48._0_4_;
      local_48._4_4_ = local_40 * local_40;
    }
    else {
      fcos((float10)*(float *)(this_ptr->field0_0x0 + 0x3c));
      local_3c = fVar3 / (SQRT((float)local_1d0.z * (float)local_1d0.z +
                               (float)local_1d0.x * (float)local_1d0.x +
                               (float)local_1d0.y * (float)local_1d0.y) *
                         SQRT(local_10c[0].y * local_10c[0].y +
                              local_110 * local_110 + local_10c[0].x * local_10c[0].x));
      fVar10 = (float10)fptan((float10)*(float *)(this_ptr->field0_0x0 + 0x3c));
      local_34 = (float)fVar10;
    }
  }
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0048ca00(g_CDemonRendererPtr,0);
  if ((0.0 < in_stack_fffffd34) && (g_CGamePtr->halo_mode != 0)) {
    pCVar6 = (CDemonRenderer *)(in_stack_fffffd34 * *(float *)(this_ptr->field0_0x0 + 0x18));
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr,1);
    pcVar1 = (char *)0x0;
    do {
      this_ptr = (CLaserBeam *)pcVar1;
      local_188._0_4_ = (float)(int)this_ptr * 0.04f * (float)pCVar6;
      local_190 = local_1f8 * (float)local_188._0_4_;
      local_18c = local_1ec * (float)local_188._0_4_;
      local_188._0_4_ = local_1e0 * (float)local_188._0_4_;
      local_74.y = (int)local_1f8;
      local_74.z = (int)local_1ec;
      local_68 = local_1e0;
      local_130[0].x = *(float *)this_ptr + local_190;
      local_130[0].y = *(float *)((int)this_ptr + 4) + local_18c;
      local_130[0].z = *(float *)((int)this_ptr + 8) + (float)local_188._0_4_;
      if (&local_148 != local_130) {
        local_148.x = local_130[0].x;
        local_148.y = local_130[0].y;
        local_148.z = local_130[0].z;
      }
      engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
                (g_CDemonRendererPtr,&local_148);
      engine_drender_cpp_CDemonRenderer_getCameraRotationAsRadians_FUN_0048c800
                (g_CDemonRendererPtr,&local_1d4);
      local_1d0.z = (int)((float)(int)this_ptr + (float)local_1d0.z);
      engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
                (g_CDemonRendererPtr,&local_1d0,(CVector3i *)0x0);
      local_b8.z = 0;
      local_15c._0_4_ = (uint)ROUND((float)this_ptr * 256f);
      local_15c._4_4_ = (uint)ROUND((float)this_ptr * 256f);
      local_15c._8_4_ = (uint)ROUND(256f * 0.0);
      local_b8.x = (int)this_ptr;
      local_b8.y = (int)this_ptr;
      wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                (&g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex,
                 (CVector3i *)(local_15c + 8));
      local_b8.y = (int)-(float)local_b8.y;
      local_90.x = (int)ROUND((float)local_b8.y * 256f);
      local_90.y = (int)ROUND((float)local_b8.z * 256f);
      local_90.z = (int)ROUND(local_ac * 256f);
      wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                (&g_CDemonRendererPtr->vertex_buffer_ptr[1].projected_vertex,&local_90);
      local_ac = -local_ac;
      local_188._0_4_ = (uint)ROUND((float)local_b8.z * 256f);
      local_188._4_4_ = (uint)ROUND(local_ac * 256f);
      local_180 = (int)ROUND(local_a8 * 256f);
      wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                (&g_CDemonRendererPtr->vertex_buffer_ptr[2].projected_vertex,(CVector3i *)local_188)
      ;
      local_ac = -local_ac;
      local_13c._0_4_ = (uint)ROUND(local_ac * 256f);
      local_13c._4_4_ = (uint)ROUND(local_a8 * 256f);
      local_134 = (float)(int)ROUND(local_a4 * 256f);
      wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                (&g_CDemonRendererPtr->vertex_buffer_ptr[3].projected_vertex,(CVector3i *)local_13c)
      ;
      engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
                (g_CDemonRendererPtr,&g_FireEffectHeadliteTexture);
      fVar10 = (float10)in_stack_fffffd58 * (float10)8192;
      local_20c._8_4_ = 5.60519e-45;
      fStack_1f4 = 0.0;
      local_1f8 = 0.0;
      fStack_1fc = 0.0;
      local_200 = 0.0;
      local_1f0 = 0.0;
      dVar12 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(g_CDemonRendererPtr,4));
      pCVar6 = (CDemonRenderer *)((ulonglong)dVar12 >> 0x20);
      local_30 = (float)(int)ROUND(fVar10);
      pCVar6->vertex_buffer_ptr->w_recip = local_30;
      pCVar6->vertex_buffer_ptr->light = *(float *)((int)this_ptr + 0x2c);
      pCVar6->vertex_buffer_ptr->color = (int)*(float *)((int)this_ptr + 0x30);
      pCVar6->vertex_buffer_ptr->fog = *(float *)((int)this_ptr + 0x34);
      local_1e8 = 1;
      pCVar6->vertex_buffer_ptr[1].w_recip = local_30;
      pCVar6->vertex_buffer_ptr[1].light = *(float *)((int)this_ptr + 0x2c);
      pCVar6->vertex_buffer_ptr[1].color = (int)*(float *)((int)this_ptr + 0x30);
      pCVar6->vertex_buffer_ptr[1].fog = *(float *)((int)this_ptr + 0x34);
      local_1e4 = 2;
      pCVar6->vertex_buffer_ptr[2].w_recip = local_30;
      pCVar6->vertex_buffer_ptr[2].light = *(float *)((int)this_ptr + 0x2c);
      pCVar6->vertex_buffer_ptr[2].color = (int)*(float *)((int)this_ptr + 0x30);
      pCVar6->vertex_buffer_ptr[2].fog = *(float *)((int)this_ptr + 0x34);
      local_1e0 = 4.2039e-45;
      pCVar6->vertex_buffer_ptr[3].w_recip = local_30;
      pCVar6->vertex_buffer_ptr[3].light = *(float *)((int)this_ptr + 0x2c);
      pCVar6->vertex_buffer_ptr[3].color = (int)*(float *)((int)this_ptr + 0x30);
      pCVar6->vertex_buffer_ptr[3].fog = *(float *)((int)this_ptr + 0x34);
      pCVar6->vertex_buffer_ptr->u = 2.2775203e-38;
      pCVar6->vertex_buffer_ptr->v = 2.2775203e-38;
      pCVar6->vertex_buffer_ptr[1].u = 7.34684e-40;
      pCVar6->vertex_buffer_ptr[1].v = 2.2775203e-38;
      pCVar6->vertex_buffer_ptr[2].u = 7.34684e-40;
      pCVar6->vertex_buffer_ptr[2].v = 7.34684e-40;
      pCVar6->vertex_buffer_ptr[3].u = 2.2775203e-38;
      pCVar6->vertex_buffer_ptr[3].v = 7.34684e-40;
      engine_drender_cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0
                (pCVar6,(SMRGLHeaderPrimitive *)(local_20c + 8));
      pCVar6 = g_CDemonRendererPtr;
      engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
      pcVar1 = (char *)((int)this_ptr + 1);
    } while ((int)this_ptr + 1 < 0x19);
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr,0);
  }
  if (0.0 < local_290) {
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
              (g_CDemonRendererPtr,&g_FireEffectBeamFuzzTexture);
    engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
              (g_CDemonRendererPtr,(CVector3f *)this_ptr);
    engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
              (g_CDemonRendererPtr,&local_5c,(CVector3i *)0x0);
    fVar3 = *(float *)(this_ptr->field0_0x0 + 0x3c);
    if (0.0 < fVar3) {
      fptan((float10)fVar3);
    }
    this_ptr = (CLaserBeam *)(uint)(0.0 < fVar3);
    fVar3 = (float)core_fire_cpp_FUN_004c24d0();
    core_fire_cpp_FUN_004c24d0();
    iStack0000002c = 0;
    if (-1 < in_stack_00000028) {
      this_ptr = (CLaserBeam *)((in_stack_fffffd60 * 16777220f) / 30f);
      iStack0000001c = 0x100;
      do {
        pCVar6 = g_CDemonRendererPtr;
        fVar10 = ((float10)iStack0000002c / (float10)in_stack_00000028) * (float10)2 *
                 (float10)3.1415926535000001;
        fVar11 = (float10)fsin(fVar10);
        fVar10 = (float10)fcos(fVar10);
        pSVar7 = g_CDemonRendererPtr->vertex_buffer_ptr;
        pSVar8 = g_CDemonRendererPtr->vertex_buffer_ptr + 3;
        for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
          (pSVar8->projected_vertex).transformed_x = (pSVar7->projected_vertex).transformed_x;
          pSVar7 = (SRenderVertex *)((int)pSVar7 + ((uint)bVar9 * -2 + 1) * 4);
          pSVar8 = (SRenderVertex *)((int)pSVar8 + ((uint)bVar9 * -2 + 1) * 4);
        }
        local_20 = (float)fVar11;
        pSVar7 = pCVar6->vertex_buffer_ptr;
        local_1c = (float)fVar10;
        pSVar8 = pSVar7 + 1;
        pSVar7 = pSVar7 + 2;
        for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
          (pSVar7->projected_vertex).transformed_x = (pSVar8->projected_vertex).transformed_x;
          pSVar8 = (SRenderVertex *)((int)pSVar8 + ((uint)bVar9 * -2 + 1) * 4);
          pSVar7 = (SRenderVertex *)((int)pSVar7 + ((uint)bVar9 * -2 + 1) * 4);
        }
        fStack_78 = 0.0;
        fStack_7c = (float)(fVar11 * (float10)in_stack_00000010);
        fStack_80 = (float)(fVar10 * (float10)in_stack_00000010);
        local_5c.x = (int)ROUND(fStack_80 * 256f);
        local_5c.y = (int)ROUND(fStack_7c * 256f);
        local_5c.z = (int)ROUND(256f * 0.0);
        wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                  (&pCVar6->vertex_buffer_ptr->projected_vertex,&local_5c);
        fStack_7c = local_18 * in_stack_00000018;
        fStack_78 = local_1c * in_stack_00000018;
        local_74.x = (int)(in_stack_fffffd64 + (float)-0.10000000000000001);
        local_b8.x = (int)ROUND(fStack_7c * 256f);
        local_b8.y = (int)ROUND(fStack_78 * 256f);
        local_b8.z = (int)ROUND((float)local_74.x * 256f);
        wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                  (&g_CDemonRendererPtr->vertex_buffer_ptr[1].projected_vertex,&local_b8);
        if (in_stack_00000028 != 0) {
          fVar10 = (float10)fVar3;
          dVar12 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(in_stack_00000028,this_ptr));
          pCVar6 = g_CDemonRendererPtr;
          local_26c = 0;
          local_270 = 0;
          local_278._4_4_ = 0;
          local_278._0_4_ = 0;
          local_268 = 0;
          local_244 = 3;
          local_25c = 1;
          local_250 = 2;
          local_24c = (int)ROUND(fVar10);
          if (*(float *)(SUB84 /* extract 2-byte value */(dVar12,0) + 0x3c) <= 0.0) {
            local_254 = (((int)((ulonglong)dVar12 >> 0x20) << 8) / in_stack_00000028 + DAT_02d13564)
                        * 0x10000;
            local_240 = 0;
            local_23c = (in_stack_00000028 / in_stack_00000028 + DAT_02d13564) * 0x10000;
            local_264 = 0;
          }
          else {
            local_254 = 0x800000;
            local_24c = 0x800000;
            local_240 = 0x800000;
            local_23c = 0x800000;
            local_264 = 0x800000;
          }
          g_CDemonRendererPtr->vertex_buffer_ptr->light = *(float *)(this_ptr->field0_0x0 + 0x2c);
          pCVar6->vertex_buffer_ptr->color = *(int *)(this_ptr->field0_0x0 + 0x30);
          pCVar6->vertex_buffer_ptr->fog = *(float *)(this_ptr->field0_0x0 + 0x34);
          pCVar6->vertex_buffer_ptr[1].light = *(float *)(this_ptr->field0_0x0 + 0x2c);
          pCVar6->vertex_buffer_ptr[1].color = *(int *)(this_ptr->field0_0x0 + 0x30);
          pCVar6->vertex_buffer_ptr[1].fog = *(float *)(this_ptr->field0_0x0 + 0x34);
          pCVar6->vertex_buffer_ptr[2].light = *(float *)(this_ptr->field0_0x0 + 0x2c);
          pCVar6->vertex_buffer_ptr[2].color = *(int *)(this_ptr->field0_0x0 + 0x30);
          pCVar6->vertex_buffer_ptr[2].fog = *(float *)(this_ptr->field0_0x0 + 0x34);
          pCVar6->vertex_buffer_ptr[3].light = *(float *)(this_ptr->field0_0x0 + 0x2c);
          pCVar6->vertex_buffer_ptr[3].color = *(int *)(this_ptr->field0_0x0 + 0x30);
          pCVar6->vertex_buffer_ptr[3].fog = *(float *)(this_ptr->field0_0x0 + 0x34);
          local_260 = local_254;
          local_258 = local_24c;
          local_248 = local_23c;
          engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(pCVar6,1);
          fVar10 = (float10)local_284 * (float10)32767.5;
          crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(extraout_EDX,extraout_EAX));
          pCVar6 = g_CDemonRendererPtr;
          render_alpha = (float)(int)ROUND(fVar10);
          local_27c = extraout_ECX;
          if (iStack0000001c == 0) {
            engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60
                      (g_CDemonRendererPtr,(int)render_alpha);
            engine_drender_cpp_CDemonRenderer_renderEnhancedQualityVariant_FUN_0048bdc0
                      (g_CDemonRendererPtr,(SMRGLHeaderPrimitive *)(local_278 + 4));
          }
          else {
            g_CDemonRendererPtr->vertex_buffer_ptr->w_recip = render_alpha;
            pCVar6->vertex_buffer_ptr[1].w_recip = 0.0;
            pCVar6->vertex_buffer_ptr[2].w_recip = 0.0;
            pCVar6->vertex_buffer_ptr[3].w_recip = render_alpha;
            engine_drender_cpp_CDemonRenderer_renderMaximumQualityVariant_FUN_0048bba0
                      (pCVar6,(SMRGLHeaderPrimitive *)local_278);
          }
        }
        iStack0000001c = iStack0000001c + 0x100;
        iStack0000002c = iStack0000002c + 1;
      } while (iStack0000002c <= in_stack_00000028);
    }
    engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
  }
  if (0.0 < in_stack_fffffd5c) {
    CStack_e8.z = 1.0 / in_stack_fffffd64;
    CStack_e8.x = (float)local_15c._8_4_ * CStack_e8.z;
    CStack_e8.y = local_150 * CStack_e8.z;
    CStack_e8.z = local_14c * CStack_e8.z;
    local_c4 = CStack_e8.x * 0.1f;
    local_c0 = CStack_e8.y * 0.1f;
    local_bc = CStack_e8.z * 0.1f;
    local_dc = *(float *)(this_ptr->field0_0x0 + 0xc) - local_c4;
    local_d8.x = *(float *)(this_ptr->field0_0x0 + 0x10) - local_c0;
    local_d8.y = *(float *)(this_ptr->field0_0x0 + 0x14) - local_bc;
    pCVar4 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                       (local_10c,(CVector3f *)(this_ptr->field0_0x0 + 0x20));
    if ((CVector3f *)local_48 != pCVar4) {
      local_48._0_4_ = pCVar4->x;
      local_48._4_4_ = pCVar4->y;
      local_40 = pCVar4->z;
    }
    engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
              (g_CDemonRendererPtr,&local_d8);
    engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
              (g_CDemonRendererPtr,(CVector3i *)(local_48 + 4),(CVector3i *)0x0);
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
              (g_CDemonRendererPtr,&g_FireEffectReticle);
    local_5c.z = 0x3e4ccccd;
    local_4c = 0.0;
    local_50 = 0.2;
    local_13c._4_4_ = (uint)ROUND(256f * 0.2);
    local_134 = (float)(int)ROUND(256f * 0.2);
    local_130[0].x = (float)(int)ROUND(256f * 0.0);
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex,
               (CVector3i *)(local_13c + 4));
    local_50 = -local_50;
    local_74.x = (int)ROUND(local_50 * 256f);
    local_74.y = (int)ROUND(local_4c * 256f);
    local_74.z = (int)ROUND((float)local_48._0_4_ * 256f);
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr->vertex_buffer_ptr[1].projected_vertex,&local_74);
    local_48._0_4_ = -(float)local_48._0_4_;
    local_188._4_4_ = (uint)ROUND(local_4c * 256f);
    local_180 = (int)ROUND((float)local_48._0_4_ * 256f);
    local_17c[0].x = (int)ROUND((float)local_48._4_4_ * 256f);
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr->vertex_buffer_ptr[2].projected_vertex,
               (CVector3i *)(local_188 + 4));
    local_48._0_4_ = -(float)local_48._0_4_;
    local_15c._0_4_ = (uint)ROUND((float)local_48._0_4_ * 256f);
    local_15c._4_4_ = (uint)ROUND((float)local_48._4_4_ * 256f);
    local_15c._8_4_ = (uint)ROUND(local_40 * 256f);
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr->vertex_buffer_ptr[3].projected_vertex,(CVector3i *)local_15c);
    pCVar6 = g_CDemonRendererPtr;
    uStack_21c = 4;
    local_20c._0_4_ = 0.0;
    local_218._8_4_ = 0.0;
    local_218._4_4_ = 0.0;
    local_218._0_4_ = 0.0;
    local_20c._4_4_ = 0.0;
    local_1e4 = 3;
    local_20c._8_4_ = 7.34684e-40;
    local_200 = 7.34684e-40;
    local_1f8 = 2.2775203e-38;
    fStack_1f4 = 7.34684e-40;
    local_1ec = 2.2775203e-38;
    local_1e8 = 0xf80000;
    local_1e0 = 7.34684e-40;
    local_1dc = 0xf80000;
    fStack_1fc = 1.4013e-45;
    local_1f0 = 2.8026e-45;
    g_CDemonRendererPtr->vertex_buffer_ptr->light = *(float *)(this_ptr->field0_0x0 + 0x2c);
    pCVar6->vertex_buffer_ptr->color = *(int *)(this_ptr->field0_0x0 + 0x30);
    pCVar6->vertex_buffer_ptr->fog = *(float *)(this_ptr->field0_0x0 + 0x34);
    pCVar6->vertex_buffer_ptr[1].light = *(float *)(this_ptr->field0_0x0 + 0x2c);
    pCVar6->vertex_buffer_ptr[1].color = *(int *)(this_ptr->field0_0x0 + 0x30);
    pCVar6->vertex_buffer_ptr[1].fog = *(float *)(this_ptr->field0_0x0 + 0x34);
    pCVar6->vertex_buffer_ptr[2].light = *(float *)(this_ptr->field0_0x0 + 0x2c);
    pCVar6->vertex_buffer_ptr[2].color = *(int *)(this_ptr->field0_0x0 + 0x30);
    pCVar6->vertex_buffer_ptr[2].fog = *(float *)(this_ptr->field0_0x0 + 0x34);
    pCVar6->vertex_buffer_ptr[3].light = *(float *)(this_ptr->field0_0x0 + 0x2c);
    pCVar6->vertex_buffer_ptr[3].color = *(int *)(this_ptr->field0_0x0 + 0x30);
    pCVar6->vertex_buffer_ptr[3].fog = *(float *)(this_ptr->field0_0x0 + 0x34);
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(pCVar6,1);
    fVar3 = core_actor_cpp_getRandomFloat_FUN_0040cc10(32768.0,40959.0);
    fVar10 = (float10)fVar3 * (float10)local_27c;
    crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(extraout_EDX_00,fVar3));
    engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60
              (g_CDemonRendererPtr,(int)ROUND(fVar10));
    engine_drender_cpp_CDemonRenderer_renderEnhancedQualityVariant_FUN_0048bdc0
              (g_CDemonRendererPtr,(SMRGLHeaderPrimitive *)(local_218 + 8));
    engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
  }
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr,0);
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60(g_CDemonRendererPtr,0xffff);
  return;
}
