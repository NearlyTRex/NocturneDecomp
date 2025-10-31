// Name: core_fire.cpp_CLaserBeam_render_FUN_004c25c0
// Address: 004c25c0
// Address Range: [[004c25c0, 004c2d4b] [004c2d69, 004c304f] [004c3053, 004c3865]]
// Convention: __cdecl
// Signature: void core_fire.cpp_CLaserBeam_render_FUN_004c25c0(CLaserBeam * this_ptr)
// Cross-references:
//   core_fire.cpp_CFireEffect_render_FUN_004c7180 (004c7180) at 004c72fe [UNCONDITIONAL_CALL]
// Globals:
//   double DOUBLE_00629d1b = 18
//   double DOUBLE_00629d23 = 2
//   float FLOAT_00629d2b = 0.04000000
//   double DOUBLE_00629d33 = 8192
//   float FLOAT_00629d3b = 1.677722E+7
//   float FLOAT_00629d3f = 30
//   double DOUBLE_00629d43 = 3.14159265350000
//   double DOUBLE_00629d4b = 32767.5
//   float FLOAT_00629d53 = 0.1000000
//   double DOUBLE_00629d5b = -0.100000000000000
//   float FLOAT_0065dca8 = 256
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   SMRGLTextureBasic g_FireEffectLaserTexture
//   SMRGLTextureBasic g_FireEffectBeamFuzzTexture
//   SMRGLTextureBasic g_FireEffectReticle
//   SMRGLTextureBasic g_FireEffectHeadliteTexture
//   CGame* g_CGamePtr = 02d81a9c
//   undefined4 DAT_00800000
//   undefined4 DAT_00f80000
//   CDemonRenderer g_CDemonRendererInstance
//   undefined4 DAT_02d13564
//   undefined4 DAT_02d81aa8
// Function calls:
//   core_actor.cpp_getRandomFloat_FUN_0040cc10
//   core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
//   core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
//   core_fire.cpp_FUN_004c24d0
//   core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
//   crt_math.c_round_FUN_005fe6b0
//   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
//   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
//   engine_drender.cpp_CDemonRenderer_getCameraOriginScaled_FUN_0048c780
//   engine_drender.cpp_CDemonRenderer_getCameraRotationAsRadians_FUN_0048c800
//   engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720
//   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
//   engine_drender.cpp_CDemonRenderer_renderEnhancedQualityVariant_FUN_0048bdc0
//   engine_drender.cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0
//   engine_drender.cpp_CDemonRenderer_renderMaximumQualityVariant_FUN_0048bba0
//   engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50
//   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60
//   engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0048ca00
//   wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c

#include "nocturne.h"

void __cdecl core_fire_cpp_CLaserBeam_render_FUN_004c25c0(CLaserBeam *this_ptr)

{
  float render_alpha;
  char *pcVar1;
  float *pfVar2;
  float fVar3;
  undefined4 extraout_EAX;
  CVector3f *pCVar4;
  int iVar5;
  float extraout_ECX;
  CDemonRenderer *pCVar6;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
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
  undefined1 local_278 [8];
  int local_270;
  int local_26c;
  int local_268;
  int local_264;
  int local_260;
  undefined4 local_25c;
  int local_258;
  int local_254;
  undefined4 local_250;
  int local_24c;
  int local_248;
  undefined4 local_244;
  undefined4 local_240;
  int local_23c;
  undefined4 uStack_21c;
  undefined1 local_218 [12];
  undefined1 local_20c [12];
  float local_200;
  float fStack_1fc;
  float local_1f8;
  float fStack_1f4;
  float local_1f0;
  float local_1ec;
  undefined4 local_1e8;
  undefined4 local_1e4;
  float local_1e0;
  undefined4 local_1dc;
  float local_1d4;
  CVector3i local_1d0;
  float local_1c4;
  undefined1 local_1c0 [8];
  float local_1b8;
  float local_1b4;
  CVector3f local_1a0;
  float local_190;
  float local_18c;
  undefined1 local_188 [8];
  int local_180;
  CVector3i local_17c [2];
  undefined1 local_15c [12];
  float local_150;
  float local_14c;
  CVector3f local_148;
  undefined1 local_13c [8];
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
  undefined1 local_98 [8];
  CVector3i local_90;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  CVector3i local_74;
  float local_68;
  CVector3i local_5c;
  float local_50;
  float local_4c;
  undefined1 local_48 [8];
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
      local_40 = ((local_1b4 * (float)DOUBLE_00629d1b) / in_stack_fffffd34) * (float)DOUBLE_00629d23
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
      local_188._0_4_ = (float)(int)this_ptr * FLOAT_00629d2b * (float)pCVar6;
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
      local_15c._0_4_ = (undefined4)ROUND((float)this_ptr * FLOAT_0065dca8);
      local_15c._4_4_ = (undefined4)ROUND((float)this_ptr * FLOAT_0065dca8);
      local_15c._8_4_ = (undefined4)ROUND(FLOAT_0065dca8 * 0.0);
      local_b8.x = (int)this_ptr;
      local_b8.y = (int)this_ptr;
      wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                (&g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex,
                 (CVector3i *)(local_15c + 8));
      local_b8.y = (int)-(float)local_b8.y;
      local_90.x = (int)ROUND((float)local_b8.y * FLOAT_0065dca8);
      local_90.y = (int)ROUND((float)local_b8.z * FLOAT_0065dca8);
      local_90.z = (int)ROUND(local_ac * FLOAT_0065dca8);
      wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                (&g_CDemonRendererPtr->vertex_buffer_ptr[1].projected_vertex,&local_90);
      local_ac = -local_ac;
      local_188._0_4_ = (undefined4)ROUND((float)local_b8.z * FLOAT_0065dca8);
      local_188._4_4_ = (undefined4)ROUND(local_ac * FLOAT_0065dca8);
      local_180 = (int)ROUND(local_a8 * FLOAT_0065dca8);
      wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                (&g_CDemonRendererPtr->vertex_buffer_ptr[2].projected_vertex,(CVector3i *)local_188)
      ;
      local_ac = -local_ac;
      local_13c._0_4_ = (undefined4)ROUND(local_ac * FLOAT_0065dca8);
      local_13c._4_4_ = (undefined4)ROUND(local_a8 * FLOAT_0065dca8);
      local_134 = (float)(int)ROUND(local_a4 * FLOAT_0065dca8);
      wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                (&g_CDemonRendererPtr->vertex_buffer_ptr[3].projected_vertex,(CVector3i *)local_13c)
      ;
      engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
                (g_CDemonRendererPtr,&g_FireEffectHeadliteTexture);
      fVar10 = (float10)in_stack_fffffd58 * (float10)DOUBLE_00629d33;
      local_20c._8_4_ = 5.60519e-45;
      fStack_1f4 = 0.0;
      local_1f8 = 0.0;
      fStack_1fc = 0.0;
      local_200 = 0.0;
      local_1f0 = 0.0;
      dVar12 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44(g_CDemonRendererPtr,4));
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
      this_ptr = (CLaserBeam *)((in_stack_fffffd60 * FLOAT_00629d3b) / FLOAT_00629d3f);
      iStack0000001c = 0x100;
      do {
        pCVar6 = g_CDemonRendererPtr;
        fVar10 = ((float10)iStack0000002c / (float10)in_stack_00000028) * (float10)DOUBLE_00629d23 *
                 (float10)DOUBLE_00629d43;
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
        local_5c.x = (int)ROUND(fStack_80 * FLOAT_0065dca8);
        local_5c.y = (int)ROUND(fStack_7c * FLOAT_0065dca8);
        local_5c.z = (int)ROUND(FLOAT_0065dca8 * 0.0);
        wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                  (&pCVar6->vertex_buffer_ptr->projected_vertex,&local_5c);
        fStack_7c = local_18 * in_stack_00000018;
        fStack_78 = local_1c * in_stack_00000018;
        local_74.x = (int)(in_stack_fffffd64 + (float)DOUBLE_00629d5b);
        local_b8.x = (int)ROUND(fStack_7c * FLOAT_0065dca8);
        local_b8.y = (int)ROUND(fStack_78 * FLOAT_0065dca8);
        local_b8.z = (int)ROUND((float)local_74.x * FLOAT_0065dca8);
        wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                  (&g_CDemonRendererPtr->vertex_buffer_ptr[1].projected_vertex,&local_b8);
        if (in_stack_00000028 != 0) {
          fVar10 = (float10)fVar3;
          dVar12 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44(in_stack_00000028,this_ptr));
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
          if (*(float *)(SUB84(dVar12,0) + 0x3c) <= 0.0) {
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
          fVar10 = (float10)local_284 * (float10)DOUBLE_00629d4b;
          crt_math_c_round_FUN_005fe6b0((double)CONCAT44(extraout_EDX,extraout_EAX));
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
    local_c4 = CStack_e8.x * FLOAT_00629d53;
    local_c0 = CStack_e8.y * FLOAT_00629d53;
    local_bc = CStack_e8.z * FLOAT_00629d53;
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
    local_13c._4_4_ = (undefined4)ROUND(FLOAT_0065dca8 * 0.2);
    local_134 = (float)(int)ROUND(FLOAT_0065dca8 * 0.2);
    local_130[0].x = (float)(int)ROUND(FLOAT_0065dca8 * 0.0);
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex,
               (CVector3i *)(local_13c + 4));
    local_50 = -local_50;
    local_74.x = (int)ROUND(local_50 * FLOAT_0065dca8);
    local_74.y = (int)ROUND(local_4c * FLOAT_0065dca8);
    local_74.z = (int)ROUND((float)local_48._0_4_ * FLOAT_0065dca8);
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr->vertex_buffer_ptr[1].projected_vertex,&local_74);
    local_48._0_4_ = -(float)local_48._0_4_;
    local_188._4_4_ = (undefined4)ROUND(local_4c * FLOAT_0065dca8);
    local_180 = (int)ROUND((float)local_48._0_4_ * FLOAT_0065dca8);
    local_17c[0].x = (int)ROUND((float)local_48._4_4_ * FLOAT_0065dca8);
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr->vertex_buffer_ptr[2].projected_vertex,
               (CVector3i *)(local_188 + 4));
    local_48._0_4_ = -(float)local_48._0_4_;
    local_15c._0_4_ = (undefined4)ROUND((float)local_48._0_4_ * FLOAT_0065dca8);
    local_15c._4_4_ = (undefined4)ROUND((float)local_48._4_4_ * FLOAT_0065dca8);
    local_15c._8_4_ = (undefined4)ROUND(local_40 * FLOAT_0065dca8);
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
    crt_math_c_round_FUN_005fe6b0((double)CONCAT44(extraout_EDX_00,fVar3));
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


// Assembly code:
// 004c25c0: PUSH EBX
//   Label: core_fire.cpp_CLaserBeam_render_FUN_004c25c0
// 004c25c1: PUSH ESI
// 004c25c2: PUSH EDI
// 004c25c3: PUSH EBP
// 004c25c4: MOV EBP,ESP
// 004c25c6: SUB ESP,0x2fc
// 004c25cc: AND ESP,0xfffffff8
// 004c25cf: PUSH 0x67a80c
//   XREF to: 0067a80c (DATA)
// 004c25d4: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004c25da: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 004c25db: CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
//   XREF to: 0048db80 (UNCONDITIONAL_CALL)
// 004c25e0: ADD ESP,0x8
// 004c25e3: MOV EAX,dword ptr [EBP + 0x14]
// 004c25e6: FLD float ptr [EAX + 0xc]
// 004c25e9: FSUB float ptr [EAX]
// 004c25eb: FSTP float ptr [ESP + 0x16c]
// 004c25f2: FLD float ptr [EAX + 0x10]
// 004c25f5: FSUB float ptr [EAX + 0x4]
// 004c25f8: FSTP float ptr [ESP + 0x170]
// 004c25ff: FLD float ptr [EAX + 0x14]
// 004c2602: FSUB float ptr [EAX + 0x8]
// 004c2605: LEA EAX,[ESP + 0x16c]
// 004c260c: PUSH EAX
// 004c260d: LEA EAX,[ESP + 0x278]
// 004c2614: PUSH EAX
// 004c2615: FSTP float ptr [ESP + 0x17c]
// 004c261c: CALL core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
//   XREF to: 005e7830 (UNCONDITIONAL_CALL)
// 004c2621: ADD ESP,0x8
// 004c2624: FLD float ptr [ESP + 0x170]
// 004c262b: FMUL ST0
// 004c262d: FLD float ptr [ESP + 0x16c]
// 004c2634: FMUL ST0
// 004c2636: FADDP
// 004c2638: FLD float ptr [ESP + 0x174]
// 004c263f: FMUL ST0
// 004c2641: FADDP
// 004c2643: FSQRT
// 004c2645: LEA EAX,[ESP + 0x274]
// 004c264c: PUSH EAX
// 004c264d: LEA EAX,[ESP + 0xf4]
// 004c2654: PUSH EAX
// 004c2655: FSTP float ptr [ESP + 0x2c]
// 004c2659: CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
//   XREF to: 00471d30 (UNCONDITIONAL_CALL)
// 004c265e: ADD ESP,0x8
// 004c2661: MOV EAX,dword ptr [EBP + 0x14]
// 004c2664: MOV EAX,dword ptr [EAX + 0x18]
// 004c2667: MOV dword ptr [ESP + 0x30],EAX
// 004c266b: MOV EAX,dword ptr [EBP + 0x14]
// 004c266e: MOV EAX,dword ptr [EAX + 0x1c]
// 004c2671: MOV dword ptr [ESP + 0x1c],EAX
// 004c2675: LEA EAX,[ESP + 0x220]
// 004c267c: PUSH EAX
// 004c267d: MOV EBX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
//   XREF to: 02c6d578 (PARAM)
// 004c2683: XOR ECX,ECX
// 004c2685: PUSH EBX
//   XREF to: 02c6d578 (DATA)
// 004c2686: MOV dword ptr [ESP + 0x30],ECX
// 004c268a: CALL engine_drender.cpp_CDemonRenderer_getCameraOriginScaled_FUN_0048c780
//   XREF to: 0048c780 (UNCONDITIONAL_CALL)
// 004c268f: ADD ESP,0x8
// 004c2692: MOV EDX,dword ptr [EBP + 0x14]
// 004c2695: FLD float ptr [EAX]
// 004c2697: FSUB float ptr [EDX]
// 004c2699: FSTP float ptr [ESP + 0x1cc]
// 004c26a0: FLD float ptr [EAX + 0x4]
// 004c26a3: FSUB float ptr [EDX + 0x4]
// 004c26a6: FSTP float ptr [ESP + 0x1d0]
// 004c26ad: FLD float ptr [EAX + 0x8]
// 004c26b0: LEA EAX,[ESP + 0x1f0]
// 004c26b7: FSUB float ptr [EDX + 0x8]
// 004c26ba: LEA EDX,[ESP + 0x1cc]
// 004c26c1: FSTP float ptr [ESP + 0x1d4]
// 004c26c8: CMP EAX,EDX
// 004c26ca: JNZ 0x004c3090
//   XREF to: 004c3090 (CONDITIONAL_JUMP)
// 004c26d0: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_004c26d0
// 004c26d3: FLD float ptr [EAX + 0xc]
// 004c26d6: FSUB float ptr [EAX]
// 004c26d8: FSTP float ptr [ESP + 0x184]
// 004c26df: FLD float ptr [EAX + 0x10]
// 004c26e2: FSUB float ptr [EAX + 0x4]
// 004c26e5: LEA EDX,[ESP + 0x130]
// 004c26ec: FSTP float ptr [ESP + 0x188]
// 004c26f3: FLD float ptr [EAX + 0x14]
// 004c26f6: FSUB float ptr [EAX + 0x8]
// 004c26f9: LEA EAX,[ESP + 0x184]
// 004c2700: FSTP float ptr [ESP + 0x18c]
// 004c2707: CMP EDX,EAX
// 004c2709: JZ 0x004c2735
//   XREF to: 004c2735 (CONDITIONAL_JUMP)
// 004c270b: MOV EAX,dword ptr [ESP + 0x184]
// 004c2712: MOV dword ptr [ESP + 0x130],EAX
// 004c2719: MOV EAX,dword ptr [ESP + 0x188]
// 004c2720: MOV dword ptr [ESP + 0x134],EAX
// 004c2727: MOV EAX,dword ptr [ESP + 0x18c]
// 004c272e: MOV dword ptr [ESP + 0x138],EAX
// 004c2735: FLD float ptr [ESP + 0x1f4]
//   Label: LAB_004c2735
// 004c273c: FMUL float ptr [ESP + 0x134]
// 004c2743: FLD float ptr [ESP + 0x1f0]
// 004c274a: FMUL float ptr [ESP + 0x130]
// 004c2751: FADDP
// 004c2753: FLD float ptr [ESP + 0x1f8]
// 004c275a: FMUL float ptr [ESP + 0x138]
// 004c2761: MOV ESI,0x43e00000
// 004c2766: FADDP
// 004c2768: MOV dword ptr [ESP + 0x2c],ESI
// 004c276c: FST float ptr [ESP + 0x20]
// 004c2770: FLDZ
// 004c2772: FCOMPP
// 004c2774: FNSTSW AX
// 004c2776: SAHF
// 004c2777: JNC 0x004c281f
//   XREF to: 004c281f (CONDITIONAL_JUMP)
// 004c277d: MOV EAX,dword ptr [EBP + 0x14]
// 004c2780: FLDZ
// 004c2782: FLD float ptr [EAX + 0x3c]
// 004c2785: FSTP double ptr [ESP]
// 004c2788: FCOMP double ptr [ESP]
// 004c278b: FNSTSW AX
// 004c278d: SAHF
// 004c278e: JNC 0x004c30bf
//   XREF to: 004c30bf (CONDITIONAL_JUMP)
// 004c2794: FLD double ptr [ESP]
// 004c2797: FCOS
// 004c2799: FLD float ptr [ESP + 0x1f4]
// 004c27a0: FMUL ST0
// 004c27a2: FLD float ptr [ESP + 0x1f0]
// 004c27a9: FMUL ST0
// 004c27ab: FADDP
// 004c27ad: FLD float ptr [ESP + 0x1f8]
// 004c27b4: FMUL ST0
// 004c27b6: FADDP
// 004c27b8: FSQRT
// 004c27ba: FLD float ptr [ESP + 0x134]
// 004c27c1: FMUL ST0
// 004c27c3: FLD float ptr [ESP + 0x130]
// 004c27ca: FMUL ST0
// 004c27cc: FADDP
// 004c27ce: FLD float ptr [ESP + 0x138]
// 004c27d5: FMUL ST0
// 004c27d7: FADDP
// 004c27d9: FSQRT
// 004c27db: FMULP
// 004c27dd: FDIVR float ptr [ESP + 0x20]
// 004c27e1: FXCH
// 004c27e3: FSTP float ptr [ESP + 0x18]
// 004c27e7: FST float ptr [ESP + 0x2c4]
// 004c27ee: FCOMP float ptr [ESP + 0x18]
// 004c27f2: FNSTSW AX
// 004c27f4: SAHF
// 004c27f5: JBE 0x004c280e
//   XREF to: 004c280e (CONDITIONAL_JUMP)
// 004c27f7: FLD float ptr [ESP + 0x18]
// 004c27fb: FLD float ptr [ESP + 0x2c4]
// 004c2802: FSUB ST0,ST1
// 004c2804: FLD1
// 004c2806: FSUBRP ST2,ST0
// 004c2808: FDIVRP
// 004c280a: FSTP float ptr [ESP + 0x28]
// 004c280e: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_004c280e
// 004c2811: FLD float ptr [EAX + 0x3c]
// 004c2814: FPTAN
// 004c2816: FSTP ST0
// 004c2818: FSTP float ptr [ESP + 0x2cc]
// 004c281f: PUSH 0x0
//   Label: LAB_004c281f
// 004c2821: MOV EAX,[0x006703ec]
//   XREF to: 006703ec (READ)
// 004c2826: PUSH EAX
//   XREF to: 02c6d578 (DATA)
// 004c2827: CALL engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0048ca00
//   XREF to: 0048ca00 (UNCONDITIONAL_CALL)
// 004c282c: ADD ESP,0x8
// 004c282f: FLDZ
// 004c2831: FLD float ptr [ESP + 0x28]
// 004c2835: FSTP double ptr [ESP + 0x10]
// 004c2839: FCOMP double ptr [ESP + 0x10]
// 004c283d: FNSTSW AX
// 004c283f: SAHF
// 004c2840: JNC 0x004c2d69
//   XREF to: 004c2d69 (CONDITIONAL_JUMP)
// 004c2846: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 004c284b: CMP dword ptr [EAX + 0xc],0x0
//   XREF to: 02d81aa8 (READ)
// 004c284f: JZ 0x004c2d69
//   XREF to: 004c2d69 (CONDITIONAL_JUMP)
// 004c2855: FLD double ptr [ESP + 0x10]
// 004c2859: FMUL double ptr [0x00629d23]
//   XREF to: 00629d23 (READ)
// 004c285f: MOV EAX,dword ptr [EBP + 0x14]
// 004c2862: FLD float ptr [ESP + 0x28]
// 004c2866: FMUL float ptr [EAX + 0x18]
// 004c2869: FLD float ptr [ESP + 0x30]
// 004c286d: FLD ST0
// 004c286f: FLD1
// 004c2871: FSUBRP ST4,ST0
// 004c2873: FMUL ST3
// 004c2875: FLD float ptr [ESP + 0x1c]
// 004c2879: FMUL ST4
// 004c287b: PUSH 0x1
// 004c287d: MOV ECX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004c2883: XOR ESI,ESI
// 004c2885: PUSH ECX
//   XREF to: 02c6d578 (DATA)
// 004c2886: FXCH ST3
// 004c2888: FSTP float ptr [ESP + 0x30]
// 004c288c: FSTP ST1
// 004c288e: FXCH ST2
// 004c2890: FSTP ST1
// 004c2892: FXCH
// 004c2894: FSTP float ptr [ESP + 0x38]
// 004c2898: FSTP float ptr [ESP + 0x24]
// 004c289c: CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50
//   XREF to: 0048ca50 (UNCONDITIONAL_CALL)
// 004c28a1: ADD ESP,0x8
// 004c28a4: MOV EDI,0x80000
// 004c28a9: MOV dword ptr [ESP + 0x2f4],ESI
//   Label: LAB_004c28a9
// 004c28b0: FILD dword ptr [ESP + 0x2f4]
// 004c28b7: FMUL float ptr [0x00629d2b]
//   XREF to: 00629d2b (READ)
// 004c28bd: MOV EAX,dword ptr [EBP + 0x14]
// 004c28c0: FMUL float ptr [ESP + 0x24]
// 004c28c4: FLD float ptr [EAX + 0x3c]
// 004c28c7: FLDZ
// 004c28c9: FXCH ST2
// 004c28cb: FSTP float ptr [ESP + 0x34]
// 004c28cf: FXCH
// 004c28d1: FCOMPP
// 004c28d3: FNSTSW AX
// 004c28d5: SAHF
// 004c28d6: JNC 0x004c31e3
//   XREF to: 004c31e3 (CONDITIONAL_JUMP)
// 004c28dc: FLD float ptr [ESP + 0x2cc]
// 004c28e3: FMUL float ptr [ESP + 0x34]
//   Label: LAB_004c28e3
// 004c28e7: FSTP float ptr [ESP + 0x2e8]
// 004c28ee: FLD float ptr [ESP + 0x34]
// 004c28f2: FLD float ptr [ESP + 0xf8]
// 004c28f9: FMUL ST1
// 004c28fb: FLD float ptr [ESP + 0x104]
// 004c2902: FMUL ST2
// 004c2904: FLD float ptr [ESP + 0x110]
// 004c290b: MOV EAX,dword ptr [ESP + 0xf8]
// 004c2912: FMULP ST3
// 004c2914: MOV dword ptr [ESP + 0x280],EAX
// 004c291b: MOV EAX,dword ptr [ESP + 0x104]
// 004c2922: FXCH
// 004c2924: FSTP float ptr [ESP + 0x160]
// 004c292b: MOV dword ptr [ESP + 0x284],EAX
// 004c2932: MOV EAX,dword ptr [ESP + 0x110]
// 004c2939: FSTP float ptr [ESP + 0x164]
// 004c2940: MOV dword ptr [ESP + 0x288],EAX
// 004c2947: MOV EAX,dword ptr [EBP + 0x14]
// 004c294a: FSTP float ptr [ESP + 0x168]
// 004c2951: FLD float ptr [EAX]
// 004c2953: FADD float ptr [ESP + 0x160]
// 004c295a: FSTP float ptr [ESP + 0x1c0]
// 004c2961: FLD float ptr [EAX + 0x4]
// 004c2964: FADD float ptr [ESP + 0x164]
// 004c296b: LEA EDX,[ESP + 0x1a8]
// 004c2972: FSTP float ptr [ESP + 0x1c4]
// 004c2979: FLD float ptr [EAX + 0x8]
// 004c297c: FADD float ptr [ESP + 0x168]
// 004c2983: LEA EAX,[ESP + 0x1c0]
// 004c298a: FSTP float ptr [ESP + 0x1c8]
// 004c2991: CMP EDX,EAX
// 004c2993: JZ 0x004c29bf
//   XREF to: 004c29bf (CONDITIONAL_JUMP)
// 004c2995: MOV EAX,dword ptr [ESP + 0x1c0]
// 004c299c: MOV dword ptr [ESP + 0x1a8],EAX
// 004c29a3: MOV EAX,dword ptr [ESP + 0x1c4]
// 004c29aa: MOV dword ptr [ESP + 0x1ac],EAX
// 004c29b1: MOV EAX,dword ptr [ESP + 0x1c8]
// 004c29b8: MOV dword ptr [ESP + 0x1b0],EAX
// 004c29bf: LEA EAX,[ESP + 0x1a8]
//   Label: LAB_004c29bf
// 004c29c6: PUSH EAX
// 004c29c7: MOV EBX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004c29cd: PUSH EBX
//   XREF to: 02c6d578 (DATA)
// 004c29ce: CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
//   XREF to: 0048c450 (UNCONDITIONAL_CALL)
// 004c29d3: ADD ESP,0x8
// 004c29d6: LEA EAX,[ESP + 0x118]
// 004c29dd: PUSH EAX
// 004c29de: MOV EAX,[0x006703ec]
//   XREF to: 006703ec (READ)
// 004c29e3: PUSH EAX
//   XREF to: 02c6d578 (DATA)
// 004c29e4: LEA EBX,[ESP + 0x198]
// 004c29eb: CALL engine_drender.cpp_CDemonRenderer_getCameraRotationAsRadians_FUN_0048c800
//   XREF to: 0048c800 (UNCONDITIONAL_CALL)
// 004c29f0: LEA EAX,[ESP + 0x120]
// 004c29f7: ADD ESP,0x8
// 004c29fa: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004c2a00: MOV dword ptr [ESP + 0x2f4],ESI
// 004c2a07: PUSH 0x0
// 004c2a09: FILD dword ptr [ESP + 0x2f8]
// 004c2a10: PUSH EAX
// 004c2a11: FADD float ptr [ESP + 0x128]
// 004c2a18: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 004c2a19: FSTP float ptr [ESP + 0x12c]
// 004c2a20: CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
//   XREF to: 0048c4f0 (UNCONDITIONAL_CALL)
// 004c2a25: ADD ESP,0xc
// 004c2a28: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004c2a2e: MOV EAX,dword ptr [ESP + 0x2e8]
// 004c2a35: XOR ECX,ECX
// 004c2a37: MOV dword ptr [ESP + 0x22c],EAX
// 004c2a3e: MOV dword ptr [ESP + 0x230],EAX
// 004c2a45: LEA EAX,[ESP + 0x22c]
// 004c2a4c: MOV dword ptr [ESP + 0x234],ECX
// 004c2a53: FLD float ptr [EAX]
// 004c2a55: FMUL float ptr [0x0065dca8]
//   XREF to: 0065dca8 (READ)
// 004c2a5b: FISTP dword ptr [EBX]
// 004c2a5d: FLD float ptr [EAX + 0x4]
// 004c2a60: FMUL float ptr [0x0065dca8]
//   XREF to: 0065dca8 (READ)
// 004c2a66: FISTP dword ptr [EBX + 0x4]
// 004c2a69: FLD float ptr [EAX + 0x8]
// 004c2a6c: FMUL float ptr [0x0065dca8]
//   XREF to: 0065dca8 (READ)
// 004c2a72: FISTP dword ptr [EBX + 0x8]
// 004c2a75: LEA EAX,[ESP + 0x190]
// 004c2a7c: PUSH EAX
// 004c2a7d: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 004c2a7f: PUSH EAX
// 004c2a80: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 004c2a85: ADD ESP,0x8
// 004c2a88: MOV AH,byte ptr [ESP + 0x22f]
// 004c2a8f: XOR AH,0x80
// 004c2a92: LEA EBX,[ESP + 0x250]
// 004c2a99: MOV byte ptr [ESP + 0x22f],AH
// 004c2aa0: LEA EAX,[ESP + 0x22c]
// 004c2aa7: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004c2aad: FLD float ptr [EAX]
// 004c2aaf: FMUL float ptr [0x0065dca8]
//   XREF to: 0065dca8 (READ)
// 004c2ab5: FISTP dword ptr [EBX]
// 004c2ab7: FLD float ptr [EAX + 0x4]
// 004c2aba: FMUL float ptr [0x0065dca8]
//   XREF to: 0065dca8 (READ)
// 004c2ac0: FISTP dword ptr [EBX + 0x4]
// 004c2ac3: FLD float ptr [EAX + 0x8]
// 004c2ac6: FMUL float ptr [0x0065dca8]
//   XREF to: 0065dca8 (READ)
// 004c2acc: FISTP dword ptr [EBX + 0x8]
// 004c2acf: LEA EAX,[ESP + 0x250]
// 004c2ad6: PUSH EAX
// 004c2ad7: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 004c2ad9: ADD EAX,0x30
// 004c2adc: PUSH EAX
// 004c2add: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 004c2ae2: ADD ESP,0x8
// 004c2ae5: MOV DL,byte ptr [ESP + 0x233]
// 004c2aec: LEA EBX,[ESP + 0x154]
// 004c2af3: XOR DL,0x80
// 004c2af6: LEA EAX,[ESP + 0x22c]
// 004c2afd: MOV byte ptr [ESP + 0x233],DL
// 004c2b04: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004c2b0a: FLD float ptr [EAX]
// 004c2b0c: FMUL float ptr [0x0065dca8]
//   XREF to: 0065dca8 (READ)
// 004c2b12: FISTP dword ptr [EBX]
// 004c2b14: FLD float ptr [EAX + 0x4]
// 004c2b17: FMUL float ptr [0x0065dca8]
//   XREF to: 0065dca8 (READ)
// 004c2b1d: FISTP dword ptr [EBX + 0x4]
// 004c2b20: FLD float ptr [EAX + 0x8]
// 004c2b23: FMUL float ptr [0x0065dca8]
//   XREF to: 0065dca8 (READ)
// 004c2b29: FISTP dword ptr [EBX + 0x8]
// 004c2b2c: LEA EAX,[ESP + 0x154]
// 004c2b33: PUSH EAX
// 004c2b34: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 004c2b36: ADD EAX,0x60
// 004c2b39: PUSH EAX
// 004c2b3a: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 004c2b3f: ADD ESP,0x8
// 004c2b42: MOV DH,byte ptr [ESP + 0x22f]
// 004c2b49: LEA EBX,[ESP + 0x19c]
// 004c2b50: XOR DH,0x80
// 004c2b53: LEA EAX,[ESP + 0x22c]
// 004c2b5a: MOV byte ptr [ESP + 0x22f],DH
// 004c2b61: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004c2b67: FLD float ptr [EAX]
// 004c2b69: FMUL float ptr [0x0065dca8]
//   XREF to: 0065dca8 (READ)
// 004c2b6f: FISTP dword ptr [EBX]
// 004c2b71: FLD float ptr [EAX + 0x4]
// 004c2b74: FMUL float ptr [0x0065dca8]
//   XREF to: 0065dca8 (READ)
// 004c2b7a: FISTP dword ptr [EBX + 0x4]
// 004c2b7d: FLD float ptr [EAX + 0x8]
// 004c2b80: FMUL float ptr [0x0065dca8]
//   XREF to: 0065dca8 (READ)
// 004c2b86: FISTP dword ptr [EBX + 0x8]
// 004c2b89: LEA EAX,[ESP + 0x19c]
// 004c2b90: PUSH EAX
// 004c2b91: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 004c2b93: ADD EAX,0x90
// 004c2b98: PUSH EAX
// 004c2b99: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 004c2b9e: ADD ESP,0x8
// 004c2ba1: PUSH 0x67a854
//   XREF to: 0067a854 (DATA)
// 004c2ba6: MOV EBX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004c2bac: PUSH EBX
//   XREF to: 02c6d578 (DATA)
// 004c2bad: CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
//   XREF to: 0048db80 (UNCONDITIONAL_CALL)
// 004c2bb2: ADD ESP,0x8
// 004c2bb5: FLD float ptr [ESP + 0x28]
// 004c2bb9: FMUL double ptr [0x00629d33]
//   XREF to: 00629d33 (READ)
// 004c2bbf: MOV EAX,0x4
// 004c2bc4: XOR EDX,EDX
// 004c2bc6: MOV dword ptr [ESP + 0xcc],EAX
// 004c2bcd: MOV dword ptr [ESP + 0xdc],EDX
// 004c2bd4: MOV dword ptr [ESP + 0xd8],EDX
// 004c2bdb: MOV dword ptr [ESP + 0xd4],EDX
// 004c2be2: MOV dword ptr [ESP + 0xd0],EDX
// 004c2be9: MOV dword ptr [ESP + 0xe0],EDX
// 004c2bf0: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004c2bf6: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 004c2bfb: MOV EBX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 004c2bfd: FISTP dword ptr [ESP + 0x29c]
// 004c2c04: MOV EAX,dword ptr [ESP + 0x29c]
// 004c2c0b: MOV dword ptr [EBX + 0x2c],EAX
// 004c2c0e: MOV EAX,dword ptr [EBP + 0x14]
// 004c2c11: MOV EBX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 004c2c13: MOV EAX,dword ptr [EAX + 0x2c]
// 004c2c16: MOV dword ptr [EBX + 0x20],EAX
// 004c2c19: MOV EAX,dword ptr [EBP + 0x14]
// 004c2c1c: MOV EBX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 004c2c1e: MOV EAX,dword ptr [EAX + 0x30]
// 004c2c21: MOV dword ptr [EBX + 0x24],EAX
// 004c2c24: MOV EAX,dword ptr [EBP + 0x14]
// 004c2c27: MOV EBX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 004c2c29: MOV EAX,dword ptr [EAX + 0x34]
// 004c2c2c: MOV ECX,0x1
// 004c2c31: MOV dword ptr [EBX + 0x28],EAX
// 004c2c34: MOV dword ptr [ESP + 0xe4],ECX
// 004c2c3b: MOV EBX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 004c2c3d: MOV EAX,dword ptr [ESP + 0x29c]
// 004c2c44: MOV dword ptr [EBX + 0x5c],EAX
// 004c2c47: MOV EBX,dword ptr [EBP + 0x14]
// 004c2c4a: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 004c2c4c: MOV EBX,dword ptr [EBX + 0x2c]
// 004c2c4f: MOV dword ptr [EAX + 0x50],EBX
// 004c2c52: MOV EBX,dword ptr [EBP + 0x14]
// 004c2c55: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 004c2c57: MOV EBX,dword ptr [EBX + 0x30]
// 004c2c5a: MOV dword ptr [EAX + 0x54],EBX
// 004c2c5d: MOV EBX,dword ptr [EBP + 0x14]
// 004c2c60: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 004c2c62: MOV EBX,dword ptr [EBX + 0x34]
// 004c2c65: MOV dword ptr [EAX + 0x58],EBX
// 004c2c68: MOV dword ptr [ESP + 0xe8],0x2
// 004c2c73: MOV EBX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 004c2c75: MOV EAX,dword ptr [ESP + 0x29c]
// 004c2c7c: MOV dword ptr [EBX + 0x8c],EAX
// 004c2c82: MOV EBX,dword ptr [EBP + 0x14]
// 004c2c85: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 004c2c87: MOV EBX,dword ptr [EBX + 0x2c]
// 004c2c8a: MOV dword ptr [EAX + 0x80],EBX
// 004c2c90: MOV EBX,dword ptr [EBP + 0x14]
// 004c2c93: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 004c2c95: MOV EBX,dword ptr [EBX + 0x30]
// 004c2c98: MOV dword ptr [EAX + 0x84],EBX
// 004c2c9e: MOV EBX,dword ptr [EBP + 0x14]
// 004c2ca1: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 004c2ca3: MOV EBX,dword ptr [EBX + 0x34]
// 004c2ca6: MOV dword ptr [EAX + 0x88],EBX
// 004c2cac: MOV dword ptr [ESP + 0xec],0x3
// 004c2cb7: MOV EBX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 004c2cb9: MOV EAX,dword ptr [ESP + 0x29c]
// 004c2cc0: MOV dword ptr [EBX + 0xbc],EAX
// 004c2cc6: MOV EBX,dword ptr [EBP + 0x14]
// 004c2cc9: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 004c2ccb: MOV EBX,dword ptr [EBX + 0x2c]
// 004c2cce: MOV dword ptr [EAX + 0xb0],EBX
// 004c2cd4: MOV EBX,dword ptr [EBP + 0x14]
// 004c2cd7: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 004c2cd9: MOV EBX,dword ptr [EBX + 0x30]
// 004c2cdc: MOV dword ptr [EAX + 0xb4],EBX
// 004c2ce2: MOV EBX,dword ptr [EBP + 0x14]
// 004c2ce5: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 004c2ce7: MOV EBX,dword ptr [EBX + 0x34]
// 004c2cea: MOV dword ptr [EAX + 0xb8],EBX
// 004c2cf0: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 004c2cf2: MOV dword ptr [EAX + 0x18],0xf80000
//   XREF to: 00f80000 (DATA)
// 004c2cf9: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 004c2cfb: MOV dword ptr [EAX + 0x1c],0xf80000
//   XREF to: 00f80000 (DATA)
// 004c2d02: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 004c2d04: MOV dword ptr [EAX + 0x48],EDI
// 004c2d07: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 004c2d09: MOV dword ptr [EAX + 0x4c],0xf80000
//   XREF to: 00f80000 (DATA)
// 004c2d10: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 004c2d12: MOV dword ptr [EAX + 0x78],EDI
// 004c2d15: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 004c2d17: MOV dword ptr [EAX + 0x7c],EDI
// 004c2d1a: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 004c2d1c: MOV dword ptr [EAX + 0xa8],0xf80000
//   XREF to: 00f80000 (DATA)
// 004c2d26: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 004c2d28: MOV dword ptr [EAX + 0xac],EDI
// 004c2d2e: LEA EAX,[ESP + 0xc8]
// 004c2d35: PUSH EAX
// 004c2d36: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 004c2d37: CALL engine_drender.cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0
//   XREF to: 0048bad0 (UNCONDITIONAL_CALL)
// 004c2d3c: ADD ESP,0x8
// 004c2d3f: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004c2d45: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 004c2d46: INC ESI
// 004c2d47: CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720
//   XREF to: 0048c640 (UNCONDITIONAL_CALL)
// 004c2d69: FLD float ptr [ESP + 0x30]
//   Label: LAB_004c2d69
// 004c2d6d: FLDZ
// 004c2d6f: FCOMPP
// 004c2d71: FNSTSW AX
// 004c2d73: SAHF
// 004c2d74: JNC 0x004c3053
//   XREF to: 004c3053 (CONDITIONAL_JUMP)
// 004c2d7a: PUSH 0x67a824
//   XREF to: 0067a824 (DATA)
// 004c2d7f: MOV EBX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
//   XREF to: 02c6d578 (PARAM)
// 004c2d85: PUSH EBX
//   XREF to: 02c6d578 (DATA)
// 004c2d86: CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
//   XREF to: 0048db80 (UNCONDITIONAL_CALL)
// 004c2d8b: ADD ESP,0x8
// 004c2d8e: MOV ESI,dword ptr [EBP + 0x14]
// 004c2d91: PUSH ESI
// 004c2d92: MOV EDI,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004c2d98: PUSH EDI
//   XREF to: 02c6d578 (DATA)
// 004c2d99: CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
//   XREF to: 0048c450 (UNCONDITIONAL_CALL)
// 004c2d9e: ADD ESP,0x8
// 004c2da1: PUSH 0x0
// 004c2da3: LEA EAX,[ESP + 0x278]
// 004c2daa: PUSH EAX
// 004c2dab: MOV EAX,[0x006703ec]
//   XREF to: 006703ec (READ)
// 004c2db0: PUSH EAX
//   XREF to: 02c6d578 (DATA)
// 004c2db1: CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
//   XREF to: 0048c4f0 (UNCONDITIONAL_CALL)
// 004c2db6: FLDZ
// 004c2db8: FLD float ptr [ESI + 0x3c]
// 004c2dbb: MOV ECX,0x8
// 004c2dc0: ADD ESP,0xc
// 004c2dc3: MOV EAX,dword ptr [ESI + 0x38]
// 004c2dc6: XOR EDX,EDX
// 004c2dc8: FSTP double ptr [ESP + 0x8]
// 004c2dcc: MOV dword ptr [ESP + 0x2bc],EAX
// 004c2dd3: MOV dword ptr [ESP + 0x2d0],EDX
// 004c2dda: MOV dword ptr [ESP + 0x2ec],ECX
// 004c2de1: FCOMP double ptr [ESP + 0x8]
// 004c2de5: FNSTSW AX
// 004c2de7: SAHF
// 004c2de8: JNC 0x004c2e15
//   XREF to: 004c2e15 (CONDITIONAL_JUMP)
// 004c2dea: FLD double ptr [ESP + 0x8]
// 004c2dee: FPTAN
// 004c2df0: FSTP ST0
// 004c2df2: FMUL float ptr [ESP + 0x24]
// 004c2df6: MOV EBX,0x1
// 004c2dfb: MOV ESI,0x10
// 004c2e00: MOV dword ptr [ESP + 0x2d0],EBX
// 004c2e07: MOV dword ptr [ESP + 0x2ec],ESI
// 004c2e0e: FSTP float ptr [ESP + 0x2bc]
// 004c2e15: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_004c2e15
// 004c2e18: PUSH dword ptr [EAX + 0x38]
// 004c2e1b: PUSH 0x0
// 004c2e1d: CALL core_fire.cpp_FUN_004c24d0
//   XREF to: 004c24d0 (UNCONDITIONAL_CALL)
// 004c2e22: MOV dword ptr [ESP + 0x300],EAX
// 004c2e29: FLD float ptr [ESP + 0x300]
// 004c2e30: ADD ESP,0x8
// 004c2e33: PUSH dword ptr [ESP + 0x2bc]
// 004c2e3a: PUSH dword ptr [ESP + 0x28]
// 004c2e3e: FSTP float ptr [ESP + 0x2dc]
// 004c2e45: CALL core_fire.cpp_FUN_004c24d0
//   XREF to: 004c24d0 (UNCONDITIONAL_CALL)
// 004c2e4a: MOV dword ptr [ESP + 0x300],EAX
// 004c2e51: FLD float ptr [ESP + 0x300]
// 004c2e58: ADD ESP,0x8
// 004c2e5b: XOR EDI,EDI
// 004c2e5d: FSTP float ptr [ESP + 0x2d8]
// 004c2e64: MOV EAX,dword ptr [ESP + 0x2ec]
// 004c2e6b: MOV dword ptr [ESP + 0x2f0],EDI
// 004c2e72: TEST EAX,EAX
// 004c2e74: JL 0x004c3044
//   XREF to: 004c3044 (CONDITIONAL_JUMP)
// 004c2e7a: FLD float ptr [ESP + 0x24]
// 004c2e7e: FMUL float ptr [0x00629d3b]
//   XREF to: 00629d3b (READ)
// 004c2e84: FDIV float ptr [0x00629d3f]
//   XREF to: 00629d3f (READ)
// 004c2e8a: MOV dword ptr [ESP + 0x2e0],0x100
// 004c2e95: FSTP float ptr [ESP + 0x2c8]
// 004c2e9c: MOV EAX,dword ptr [ESP + 0x2f0]
//   Label: LAB_004c2e9c
// 004c2ea3: MOV dword ptr [ESP + 0x2f4],EAX
// 004c2eaa: MOV EAX,dword ptr [ESP + 0x2ec]
// 004c2eb1: MOV dword ptr [ESP + 0x2f8],EAX
// 004c2eb8: FILD dword ptr [ESP + 0x2f4]
// 004c2ebf: FILD dword ptr [ESP + 0x2f8]
// 004c2ec6: FDIVP
// 004c2ec8: FMUL double ptr [0x00629d23]
//   XREF to: 00629d23 (READ)
// 004c2ece: FMUL double ptr [0x00629d43]
//   XREF to: 00629d43 (READ)
// 004c2ed4: FLD ST0
// 004c2ed6: FSIN
// 004c2ed8: FXCH
// 004c2eda: FCOS
// 004c2edc: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004c2ee2: MOV ESI,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 004c2ee4: MOV ECX,0xc
// 004c2ee9: LEA EDI,[ESI + 0x90]
// 004c2eef: MOVSD.REP ES:EDI,ESI
// 004c2ef1: FXCH
// 004c2ef3: FST float ptr [ESP + 0x2a4]
// 004c2efa: FLD float ptr [ESP + 0x2d4]
// 004c2f01: FXCH
// 004c2f03: FMUL ST1
// 004c2f05: MOV ESI,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 004c2f07: MOV ECX,0xc
// 004c2f0c: LEA EDI,[ESI + 0x60]
// 004c2f0f: LEA ESI,[ESI + 0x30]
// 004c2f12: FXCH ST2
// 004c2f14: FST float ptr [ESP + 0x2a8]
// 004c2f1b: FMULP
// 004c2f1d: MOVSD.REP ES:EDI,ESI
// 004c2f1f: XOR EAX,EAX
// 004c2f21: LEA EBX,[ESP + 0x268]
// 004c2f28: MOV dword ptr [ESP + 0x24c],EAX
// 004c2f2f: LEA EAX,[ESP + 0x244]
// 004c2f36: FXCH
// 004c2f38: FSTP float ptr [ESP + 0x248]
// 004c2f3f: FSTP float ptr [ESP + 0x244]
// 004c2f46: FLD float ptr [EAX]
// 004c2f48: FMUL float ptr [0x0065dca8]
//   XREF to: 0065dca8 (READ)
// 004c2f4e: FISTP dword ptr [EBX]
// 004c2f50: FLD float ptr [EAX + 0x4]
// 004c2f53: FMUL float ptr [0x0065dca8]
//   XREF to: 0065dca8 (READ)
// 004c2f59: FISTP dword ptr [EBX + 0x4]
// 004c2f5c: FLD float ptr [EAX + 0x8]
// 004c2f5f: FMUL float ptr [0x0065dca8]
//   XREF to: 0065dca8 (READ)
// 004c2f65: FISTP dword ptr [EBX + 0x8]
// 004c2f68: LEA EAX,[ESP + 0x268]
// 004c2f6f: PUSH EAX
// 004c2f70: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 004c2f72: PUSH EAX
// 004c2f73: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 004c2f78: ADD ESP,0x8
// 004c2f7b: FLD float ptr [ESP + 0x2d8]
// 004c2f82: FLD float ptr [ESP + 0x2a8]
// 004c2f89: FMUL ST1
// 004c2f8b: FLD float ptr [ESP + 0x2a4]
// 004c2f92: FMULP ST2
// 004c2f94: LEA EBX,[ESP + 0x208]
// 004c2f9b: LEA EAX,[ESP + 0x244]
// 004c2fa2: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004c2fa8: FLD float ptr [ESP + 0x24]
// 004c2fac: FADD double ptr [0x00629d5b]
//   XREF to: 00629d5b (READ)
// 004c2fb2: FXCH
// 004c2fb4: FSTP float ptr [ESP + 0x244]
// 004c2fbb: FXCH
// 004c2fbd: FSTP float ptr [ESP + 0x248]
// 004c2fc4: FSTP float ptr [ESP + 0x24c]
// 004c2fcb: FLD float ptr [EAX]
// 004c2fcd: FMUL float ptr [0x0065dca8]
//   XREF to: 0065dca8 (READ)
// 004c2fd3: FISTP dword ptr [EBX]
// 004c2fd5: FLD float ptr [EAX + 0x4]
// 004c2fd8: FMUL float ptr [0x0065dca8]
//   XREF to: 0065dca8 (READ)
// 004c2fde: FISTP dword ptr [EBX + 0x4]
// 004c2fe1: FLD float ptr [EAX + 0x8]
// 004c2fe4: FMUL float ptr [0x0065dca8]
//   XREF to: 0065dca8 (READ)
// 004c2fea: FISTP dword ptr [EBX + 0x8]
// 004c2fed: LEA EAX,[ESP + 0x208]
// 004c2ff4: PUSH EAX
// 004c2ff5: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 004c2ff7: ADD EAX,0x30
// 004c2ffa: PUSH EAX
// 004c2ffb: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 004c3000: ADD ESP,0x8
// 004c3003: MOV EDX,dword ptr [ESP + 0x2f0]
// 004c300a: TEST EDX,EDX
// 004c300c: JNZ 0x004c31f2
//   XREF to: 004c31f2 (CONDITIONAL_JUMP)
// 004c3012: MOV EDX,dword ptr [ESP + 0x2e0]
//   Label: LAB_004c3012
// 004c3019: MOV ECX,dword ptr [ESP + 0x2f0]
// 004c3020: MOV EBX,dword ptr [ESP + 0x2ec]
// 004c3027: ADD EDX,0x100
// 004c302d: INC ECX
// 004c302e: MOV dword ptr [ESP + 0x2e0],EDX
// 004c3035: MOV dword ptr [ESP + 0x2f0],ECX
// 004c303c: CMP ECX,EBX
// 004c303e: JLE 0x004c2e9c
//   XREF to: 004c2e9c (CONDITIONAL_JUMP)
// 004c3044: MOV ESI,dword ptr [0x006703ec]
//   Label: LAB_004c3044
//   XREF to: 006703ec (READ)
// 004c304a: PUSH ESI
//   XREF to: 02c6d578 (DATA)
// 004c304b: CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720
//   XREF to: 0048c640 (UNCONDITIONAL_CALL)
// 004c3053: FLD float ptr [ESP + 0x1c]
//   Label: LAB_004c3053
// 004c3057: FLDZ
// 004c3059: FCOMPP
// 004c305b: FNSTSW AX
// 004c305d: SAHF
// 004c305e: JC 0x004c3422
//   XREF to: 004c3422 (CONDITIONAL_JUMP)
// 004c3064: PUSH 0x0
//   Label: LAB_004c3064
// 004c3066: MOV ESI,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004c306c: PUSH ESI
//   XREF to: 02c6d578 (DATA)
// 004c306d: CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50
//   XREF to: 0048ca50 (UNCONDITIONAL_CALL)
// 004c3072: ADD ESP,0x8
// 004c3075: PUSH 0xffff
// 004c307a: MOV EDI,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004c3080: PUSH EDI
//   XREF to: 02c6d578 (DATA)
// 004c3081: CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60
//   XREF to: 0048ca60 (UNCONDITIONAL_CALL)
// 004c3086: ADD ESP,0x8
// 004c3089: MOV ESP,EBP
// 004c308b: POP EBP
// 004c308c: POP EDI
// 004c308d: POP ESI
// 004c308e: POP EBX
// 004c308f: RET
// 004c3090: MOV EAX,dword ptr [ESP + 0x1cc]
//   Label: LAB_004c3090
// 004c3097: MOV dword ptr [ESP + 0x1f0],EAX
// 004c309e: MOV EAX,dword ptr [ESP + 0x1d0]
// 004c30a5: MOV dword ptr [ESP + 0x1f4],EAX
// 004c30ac: MOV EAX,dword ptr [ESP + 0x1d4]
// 004c30b3: MOV dword ptr [ESP + 0x1f8],EAX
// 004c30ba: JMP 0x004c26d0
//   XREF to: 004c26d0 (UNCONDITIONAL_JUMP)
// 004c30bf: LEA EAX,[ESP + 0x13c]
//   Label: LAB_004c30bf
// 004c30c6: PUSH EAX
// 004c30c7: MOV EDI,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004c30cd: PUSH EDI
//   XREF to: 02c6d578 (DATA)
// 004c30ce: CALL engine_drender.cpp_CDemonRenderer_getCameraOriginScaled_FUN_0048c780
//   XREF to: 0048c780 (UNCONDITIONAL_CALL)
// 004c30d3: ADD ESP,0x8
// 004c30d6: MOV EAX,dword ptr [EBP + 0x14]
// 004c30d9: FLD float ptr [ESP + 0x13c]
// 004c30e0: FSUB float ptr [EAX]
// 004c30e2: FLD float ptr [ESP + 0x140]
// 004c30e9: FXCH
// 004c30eb: FSTP float ptr [ESP + 0x13c]
// 004c30f2: FSUB float ptr [EAX + 0x4]
// 004c30f5: FLD float ptr [ESP + 0x144]
// 004c30fc: FXCH
// 004c30fe: FSTP float ptr [ESP + 0x140]
// 004c3105: FSUB float ptr [EAX + 0x8]
// 004c3108: LEA EAX,[ESP + 0x13c]
// 004c310f: PUSH EAX
// 004c3110: LEA EAX,[ESP + 0x218]
// 004c3117: PUSH EAX
// 004c3118: LEA EAX,[ESP + 0xf8]
// 004c311f: PUSH EAX
// 004c3120: FSTP float ptr [ESP + 0x150]
// 004c3127: CALL core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
//   XREF to: 00472030 (UNCONDITIONAL_CALL)
// 004c312c: MOV EDX,EAX
// 004c312e: LEA EAX,[ESP + 0x148]
// 004c3135: ADD ESP,0xc
// 004c3138: CMP EAX,EDX
// 004c313a: JZ 0x004c3159
//   XREF to: 004c3159 (CONDITIONAL_JUMP)
// 004c313c: MOV EAX,dword ptr [EDX]
// 004c313e: MOV dword ptr [ESP + 0x13c],EAX
// 004c3145: MOV EAX,dword ptr [EDX + 0x4]
// 004c3148: MOV dword ptr [ESP + 0x140],EAX
// 004c314f: MOV EAX,dword ptr [EDX + 0x8]
// 004c3152: MOV dword ptr [ESP + 0x144],EAX
// 004c3159: FLD float ptr [ESP + 0x144]
//   Label: LAB_004c3159
// 004c3160: FMUL double ptr [0x00629d1b]
//   XREF to: 00629d1b (READ)
// 004c3166: FDIV float ptr [ESP + 0x2c]
// 004c316a: FLD float ptr [ESP + 0x140]
// 004c3171: FMUL ST0
// 004c3173: FLD float ptr [ESP + 0x13c]
// 004c317a: FMUL ST0
// 004c317c: FXCH ST2
// 004c317e: FMUL double ptr [0x00629d23]
//   XREF to: 00629d23 (READ)
// 004c3184: FXCH
// 004c3186: FSTP float ptr [ESP + 0x2b0]
// 004c318d: FXCH
// 004c318f: FADD float ptr [ESP + 0x2b0]
// 004c3196: FXCH
// 004c3198: FST float ptr [ESP + 0x2b8]
// 004c319f: FMUL float ptr [ESP + 0x2b8]
// 004c31a6: FXCH
// 004c31a8: FST float ptr [ESP + 0x2c0]
// 004c31af: FXCH
// 004c31b1: FSTP float ptr [ESP + 0x2b4]
// 004c31b8: FCOMP float ptr [ESP + 0x2b4]
// 004c31bf: FNSTSW AX
// 004c31c1: SAHF
// 004c31c2: JNC 0x004c281f
//   XREF to: 004c281f (CONDITIONAL_JUMP)
// 004c31c8: FLD float ptr [ESP + 0x2c0]
// 004c31cf: FDIV float ptr [ESP + 0x2b4]
// 004c31d6: FLD1
// 004c31d8: FSUBRP
// 004c31da: FSTP float ptr [ESP + 0x28]
// 004c31de: JMP 0x004c281f
//   XREF to: 004c281f (UNCONDITIONAL_JUMP)
// 004c31e3: FLD float ptr [ESP + 0x2c]
//   Label: LAB_004c31e3
// 004c31e7: FDIVR double ptr [0x00629d1b]
//   XREF to: 00629d1b (READ)
// 004c31ed: JMP 0x004c28e3
//   XREF to: 004c28e3 (UNCONDITIONAL_JUMP)
// 004c31f2: FLD float ptr [ESP + 0x2c8]
//   Label: LAB_004c31f2
// 004c31f9: MOV ECX,0x4
// 004c31fe: MOV ESI,0x3
// 004c3203: MOV EAX,dword ptr [EBP + 0x14]
// 004c3206: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 004c320b: XOR EBX,EBX
// 004c320d: MOV dword ptr [ESP + 0x3c],ECX
// 004c3211: MOV dword ptr [ESP + 0x4c],EBX
// 004c3215: MOV dword ptr [ESP + 0x48],EBX
// 004c3219: MOV dword ptr [ESP + 0x44],EBX
// 004c321d: MOV dword ptr [ESP + 0x40],EBX
// 004c3221: MOV dword ptr [ESP + 0x50],EBX
// 004c3225: MOV dword ptr [ESP + 0x74],ESI
// 004c3229: MOV ECX,0x1
// 004c322e: MOV EBX,0x2
// 004c3233: MOV dword ptr [ESP + 0x5c],ECX
// 004c3237: MOV dword ptr [ESP + 0x68],EBX
// 004c323b: FISTP dword ptr [ESP + 0x2dc]
// 004c3242: FLD float ptr [EAX + 0x3c]
// 004c3245: FLDZ
// 004c3247: FCOMPP
// 004c3249: FNSTSW AX
// 004c324b: SAHF
// 004c324c: JNC 0x004c338b
//   XREF to: 004c338b (CONDITIONAL_JUMP)
// 004c3252: MOV EDX,0x800000
//   XREF to: 00800000 (DATA)
// 004c3257: MOV dword ptr [ESP + 0x58],EDX
//   XREF to: 00800000 (DATA)
// 004c325b: MOV dword ptr [ESP + 0x60],EDX
//   XREF to: 00800000 (DATA)
// 004c325f: MOV dword ptr [ESP + 0x64],EDX
//   XREF to: 00800000 (DATA)
// 004c3263: MOV dword ptr [ESP + 0x6c],EDX
//   XREF to: 00800000 (DATA)
// 004c3267: MOV dword ptr [ESP + 0x70],EDX
//   XREF to: 00800000 (DATA)
// 004c326b: MOV dword ptr [ESP + 0x78],EDX
//   XREF to: 00800000 (DATA)
// 004c326f: MOV dword ptr [ESP + 0x7c],EDX
//   XREF to: 00800000 (DATA)
// 004c3273: MOV dword ptr [ESP + 0x54],EDX
//   XREF to: 00800000 (DATA)
// 004c3277: MOV EAX,[0x006703ec]
//   Label: LAB_004c3277
//   XREF to: 006703ec (READ)
// 004c327c: MOV EBX,dword ptr [EBP + 0x14]
// 004c327f: MOV EDX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 004c3281: MOV EBX,dword ptr [EBX + 0x2c]
// 004c3284: MOV dword ptr [EDX + 0x20],EBX
// 004c3287: MOV EDX,dword ptr [EBP + 0x14]
// 004c328a: MOV EBX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 004c328c: MOV EDX,dword ptr [EDX + 0x30]
// 004c328f: MOV dword ptr [EBX + 0x24],EDX
// 004c3292: MOV EDX,dword ptr [EBP + 0x14]
// 004c3295: MOV EBX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 004c3297: MOV EDX,dword ptr [EDX + 0x34]
// 004c329a: MOV dword ptr [EBX + 0x28],EDX
// 004c329d: MOV EDX,dword ptr [EBP + 0x14]
// 004c32a0: MOV EBX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 004c32a2: MOV EDX,dword ptr [EDX + 0x2c]
// 004c32a5: MOV dword ptr [EBX + 0x50],EDX
// 004c32a8: MOV EBX,dword ptr [EBP + 0x14]
// 004c32ab: MOV EDX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 004c32ad: MOV EBX,dword ptr [EBX + 0x30]
// 004c32b0: MOV dword ptr [EDX + 0x54],EBX
// 004c32b3: MOV EDX,dword ptr [EBP + 0x14]
// 004c32b6: MOV EBX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 004c32b8: MOV EDX,dword ptr [EDX + 0x34]
// 004c32bb: MOV dword ptr [EBX + 0x58],EDX
// 004c32be: MOV EDX,dword ptr [EBP + 0x14]
// 004c32c1: MOV EBX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 004c32c3: MOV EDX,dword ptr [EDX + 0x2c]
// 004c32c6: MOV dword ptr [EBX + 0x80],EDX
// 004c32cc: MOV EDX,dword ptr [EBP + 0x14]
// 004c32cf: MOV EBX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 004c32d1: MOV EDX,dword ptr [EDX + 0x30]
// 004c32d4: MOV dword ptr [EBX + 0x84],EDX
// 004c32da: MOV EDX,dword ptr [EBP + 0x14]
// 004c32dd: MOV EBX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 004c32df: MOV EDX,dword ptr [EDX + 0x34]
// 004c32e2: MOV dword ptr [EBX + 0x88],EDX
// 004c32e8: MOV EDX,dword ptr [EBP + 0x14]
// 004c32eb: MOV EBX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 004c32ed: MOV EDX,dword ptr [EDX + 0x2c]
// 004c32f0: MOV dword ptr [EBX + 0xb0],EDX
// 004c32f6: MOV EDX,dword ptr [EBP + 0x14]
// 004c32f9: MOV EBX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 004c32fb: MOV EDX,dword ptr [EDX + 0x30]
// 004c32fe: MOV dword ptr [EBX + 0xb4],EDX
// 004c3304: MOV EDX,dword ptr [EBP + 0x14]
// 004c3307: PUSH 0x1
// 004c3309: MOV EBX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 004c330b: MOV EDX,dword ptr [EDX + 0x34]
// 004c330e: PUSH EAX
//   XREF to: 02c6d578 (DATA)
// 004c330f: MOV dword ptr [EBX + 0xb8],EDX
// 004c3315: CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50
//   XREF to: 0048ca50 (UNCONDITIONAL_CALL)
// 004c331a: ADD ESP,0x8
// 004c331d: FLD float ptr [ESP + 0x30]
// 004c3321: FMUL double ptr [0x00629d4b]
//   XREF to: 00629d4b (READ)
// 004c3327: MOV EBX,dword ptr [ESP + 0x2d0]
// 004c332e: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 004c3333: FISTP dword ptr [ESP + 0x2e4]
// 004c333a: TEST EBX,EBX
// 004c333c: JZ 0x004c33f3
//   XREF to: 004c33f3 (CONDITIONAL_JUMP)
// 004c3342: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004c3348: MOV EBX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 004c334a: MOV EAX,dword ptr [ESP + 0x2e4]
// 004c3351: MOV dword ptr [EBX + 0x2c],EAX
// 004c3354: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 004c3356: MOV dword ptr [EAX + 0x5c],0x0
// 004c335d: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 004c335f: MOV dword ptr [EAX + 0x8c],0x0
// 004c3369: MOV EBX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 004c336b: MOV EAX,dword ptr [ESP + 0x2e4]
// 004c3372: MOV dword ptr [EBX + 0xbc],EAX
// 004c3378: LEA EAX,[ESP + 0x38]
// 004c337c: PUSH EAX
// 004c337d: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 004c337e: CALL engine_drender.cpp_CDemonRenderer_renderMaximumQualityVariant_FUN_0048bba0
//   XREF to: 0048bba0 (UNCONDITIONAL_CALL)
// 004c3383: ADD ESP,0x8
// 004c3386: JMP 0x004c3012
//   XREF to: 004c3012 (UNCONDITIONAL_JUMP)
// 004c338b: SHL EDX,0x8
//   Label: LAB_004c338b
// 004c338e: MOV ECX,dword ptr [ESP + 0x2ec]
// 004c3395: MOV EAX,EDX
// 004c3397: SAR EDX,0x1f
// 004c339a: IDIV ECX
// 004c339c: MOV EBX,dword ptr [0x02d13564]
//   XREF to: 02d13564 (READ)
// 004c33a2: ADD EAX,EBX
// 004c33a4: SHL EAX,0x10
// 004c33a7: MOV dword ptr [ESP + 0x58],EAX
// 004c33ab: MOV EAX,dword ptr [ESP + 0x2dc]
// 004c33b2: MOV dword ptr [ESP + 0x60],EAX
// 004c33b6: MOV EAX,dword ptr [ESP + 0x58]
// 004c33ba: MOV dword ptr [ESP + 0x64],EAX
// 004c33be: MOV EAX,dword ptr [ESP + 0x2dc]
// 004c33c5: MOV dword ptr [ESP + 0x6c],EAX
// 004c33c9: MOV EAX,dword ptr [ESP + 0x2e0]
// 004c33d0: MOV EDX,EAX
// 004c33d2: SAR EDX,0x1f
// 004c33d5: IDIV ECX
// 004c33d7: XOR EDI,EDI
// 004c33d9: ADD EAX,EBX
// 004c33db: MOV dword ptr [ESP + 0x78],EDI
// 004c33df: SHL EAX,0x10
// 004c33e2: MOV dword ptr [ESP + 0x54],EDI
// 004c33e6: MOV dword ptr [ESP + 0x70],EAX
// 004c33ea: MOV dword ptr [ESP + 0x7c],EAX
// 004c33ee: JMP 0x004c3277
//   XREF to: 004c3277 (UNCONDITIONAL_JUMP)
// 004c33f3: MOV ESI,dword ptr [ESP + 0x2e4]
//   Label: LAB_004c33f3
// 004c33fa: PUSH ESI
// 004c33fb: MOV EDI,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004c3401: PUSH EDI
//   XREF to: 02c6d578 (DATA)
// 004c3402: CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60
//   XREF to: 0048ca60 (UNCONDITIONAL_CALL)
// 004c3407: ADD ESP,0x8
// 004c340a: LEA EAX,[ESP + 0x38]
// 004c340e: PUSH EAX
// 004c340f: MOV EAX,[0x006703ec]
//   XREF to: 006703ec (READ)
// 004c3414: PUSH EAX
//   XREF to: 02c6d578 (DATA)
// 004c3415: CALL engine_drender.cpp_CDemonRenderer_renderEnhancedQualityVariant_FUN_0048bdc0
//   XREF to: 0048bdc0 (UNCONDITIONAL_CALL)
// 004c341a: ADD ESP,0x8
// 004c341d: JMP 0x004c3012
//   XREF to: 004c3012 (UNCONDITIONAL_JUMP)
// 004c3422: FLD1
//   Label: LAB_004c3422
// 004c3424: FLD float ptr [ESP + 0x16c]
// 004c342b: FXCH
// 004c342d: FDIV float ptr [ESP + 0x24]
// 004c3431: FXCH
// 004c3433: FMUL ST1
// 004c3435: FLD float ptr [ESP + 0x170]
// 004c343c: FMUL ST2
// 004c343e: FLD float ptr [ESP + 0x174]
// 004c3445: FMULP ST3
// 004c3447: FXCH
// 004c3449: FST float ptr [ESP + 0x1d8]
// 004c3450: FLD float ptr [0x00629d53]
//   XREF to: 00629d53 (READ)
// 004c3456: FXCH
// 004c3458: FMUL ST1
// 004c345a: FXCH ST2
// 004c345c: FST float ptr [ESP + 0x1dc]
// 004c3463: FMUL ST1
// 004c3465: FXCH ST3
// 004c3467: FST float ptr [ESP + 0x1e0]
// 004c346e: FMULP
// 004c3470: MOV EAX,dword ptr [EBP + 0x14]
// 004c3473: FXCH
// 004c3475: FSTP float ptr [ESP + 0x1fc]
// 004c347c: FXCH
// 004c347e: FSTP float ptr [ESP + 0x200]
// 004c3485: FSTP float ptr [ESP + 0x204]
// 004c348c: FLD float ptr [EAX + 0xc]
// 004c348f: FSUB float ptr [ESP + 0x1fc]
// 004c3496: ADD EAX,0x20
// 004c3499: FSTP float ptr [ESP + 0x1e4]
// 004c34a0: FLD float ptr [EAX + -0x10]
// 004c34a3: FSUB float ptr [ESP + 0x200]
// 004c34aa: PUSH EAX
// 004c34ab: FSTP float ptr [ESP + 0x1ec]
// 004c34b2: FLD float ptr [EAX + -0xc]
// 004c34b5: LEA EAX,[ESP + 0x1b8]
// 004c34bc: FSUB float ptr [ESP + 0x208]
// 004c34c3: PUSH EAX
// 004c34c4: FSTP float ptr [ESP + 0x1f4]
// 004c34cb: CALL core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
//   XREF to: 005e7830 (UNCONDITIONAL_CALL)
// 004c34d0: MOV EDX,EAX
// 004c34d2: LEA EAX,[ESP + 0x27c]
// 004c34d9: ADD ESP,0x8
// 004c34dc: CMP EAX,EDX
// 004c34de: JZ 0x004c34fd
//   XREF to: 004c34fd (CONDITIONAL_JUMP)
// 004c34e0: MOV EAX,dword ptr [EDX]
// 004c34e2: MOV dword ptr [ESP + 0x274],EAX
// 004c34e9: MOV EAX,dword ptr [EDX + 0x4]
// 004c34ec: MOV dword ptr [ESP + 0x278],EAX
// 004c34f3: MOV EAX,dword ptr [EDX + 0x8]
// 004c34f6: MOV dword ptr [ESP + 0x27c],EAX
// 004c34fd: LEA EAX,[ESP + 0x1e4]
//   Label: LAB_004c34fd
// 004c3504: PUSH EAX
// 004c3505: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004c350b: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 004c350c: CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
//   XREF to: 0048c450 (UNCONDITIONAL_CALL)
// 004c3511: ADD ESP,0x8
// 004c3514: PUSH 0x0
// 004c3516: LEA EAX,[ESP + 0x278]
// 004c351d: PUSH EAX
// 004c351e: MOV ECX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004c3524: PUSH ECX
//   XREF to: 02c6d578 (DATA)
// 004c3525: CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
//   XREF to: 0048c4f0 (UNCONDITIONAL_CALL)
// 004c352a: ADD ESP,0xc
// 004c352d: PUSH 0x67a83c
//   XREF to: 0067a83c (DATA)
// 004c3532: MOV EBX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004c3538: PUSH EBX
//   XREF to: 02c6d578 (DATA)
// 004c3539: MOV ESI,0x3e4ccccd
// 004c353e: CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
//   XREF to: 0048db80 (UNCONDITIONAL_CALL)
// 004c3543: LEA EBX,[ESP + 0x180]
// 004c354a: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004c3550: ADD ESP,0x8
// 004c3553: XOR EAX,EAX
// 004c3555: MOV dword ptr [ESP + 0x25c],ESI
// 004c355c: MOV dword ptr [ESP + 0x264],EAX
// 004c3563: LEA EAX,[ESP + 0x25c]
// 004c356a: MOV dword ptr [ESP + 0x260],ESI
// 004c3571: FLD float ptr [EAX]
// 004c3573: FMUL float ptr [0x0065dca8]
//   XREF to: 0065dca8 (READ)
// 004c3579: FISTP dword ptr [EBX]
// 004c357b: FLD float ptr [EAX + 0x4]
// 004c357e: FMUL float ptr [0x0065dca8]
//   XREF to: 0065dca8 (READ)
// 004c3584: FISTP dword ptr [EBX + 0x4]
// 004c3587: FLD float ptr [EAX + 0x8]
// 004c358a: FMUL float ptr [0x0065dca8]
//   XREF to: 0065dca8 (READ)
// 004c3590: FISTP dword ptr [EBX + 0x8]
// 004c3593: LEA EAX,[ESP + 0x178]
// 004c359a: PUSH EAX
// 004c359b: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 004c359d: PUSH EAX
// 004c359e: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 004c35a3: ADD ESP,0x8
// 004c35a6: MOV BL,byte ptr [ESP + 0x25f]
// 004c35ad: XOR BL,0x80
// 004c35b0: LEA EAX,[ESP + 0x25c]
// 004c35b7: MOV byte ptr [ESP + 0x25f],BL
// 004c35be: LEA EBX,[ESP + 0x238]
// 004c35c5: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004c35cb: FLD float ptr [EAX]
// 004c35cd: FMUL float ptr [0x0065dca8]
//   XREF to: 0065dca8 (READ)
// 004c35d3: FISTP dword ptr [EBX]
// 004c35d5: FLD float ptr [EAX + 0x4]
// 004c35d8: FMUL float ptr [0x0065dca8]
//   XREF to: 0065dca8 (READ)
// 004c35de: FISTP dword ptr [EBX + 0x4]
// 004c35e1: FLD float ptr [EAX + 0x8]
// 004c35e4: FMUL float ptr [0x0065dca8]
//   XREF to: 0065dca8 (READ)
// 004c35ea: FISTP dword ptr [EBX + 0x8]
// 004c35ed: LEA EAX,[ESP + 0x238]
// 004c35f4: PUSH EAX
// 004c35f5: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 004c35f7: ADD EAX,0x30
// 004c35fa: PUSH EAX
// 004c35fb: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 004c3600: ADD ESP,0x8
// 004c3603: MOV BH,byte ptr [ESP + 0x263]
// 004c360a: XOR BH,0x80
// 004c360d: LEA EAX,[ESP + 0x25c]
// 004c3614: MOV byte ptr [ESP + 0x263],BH
// 004c361b: LEA EBX,[ESP + 0x124]
// 004c3622: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004c3628: FLD float ptr [EAX]
// 004c362a: FMUL float ptr [0x0065dca8]
//   XREF to: 0065dca8 (READ)
// 004c3630: FISTP dword ptr [EBX]
// 004c3632: FLD float ptr [EAX + 0x4]
// 004c3635: FMUL float ptr [0x0065dca8]
//   XREF to: 0065dca8 (READ)
// 004c363b: FISTP dword ptr [EBX + 0x4]
// 004c363e: FLD float ptr [EAX + 0x8]
// 004c3641: FMUL float ptr [0x0065dca8]
//   XREF to: 0065dca8 (READ)
// 004c3647: FISTP dword ptr [EBX + 0x8]
// 004c364a: LEA EAX,[ESP + 0x124]
// 004c3651: PUSH EAX
// 004c3652: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 004c3654: ADD EAX,0x60
// 004c3657: PUSH EAX
// 004c3658: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 004c365d: ADD ESP,0x8
// 004c3660: LEA EBX,[ESP + 0x148]
// 004c3667: MOV CL,byte ptr [ESP + 0x25f]
// 004c366e: LEA EAX,[ESP + 0x25c]
// 004c3675: XOR CL,0x80
// 004c3678: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004c367e: MOV byte ptr [ESP + 0x25f],CL
// 004c3685: FLD float ptr [EAX]
// 004c3687: FMUL float ptr [0x0065dca8]
//   XREF to: 0065dca8 (READ)
// 004c368d: FISTP dword ptr [EBX]
// 004c368f: FLD float ptr [EAX + 0x4]
// 004c3692: FMUL float ptr [0x0065dca8]
//   XREF to: 0065dca8 (READ)
// 004c3698: FISTP dword ptr [EBX + 0x4]
// 004c369b: FLD float ptr [EAX + 0x8]
// 004c369e: FMUL float ptr [0x0065dca8]
//   XREF to: 0065dca8 (READ)
// 004c36a4: FISTP dword ptr [EBX + 0x8]
// 004c36a7: LEA EAX,[ESP + 0x148]
// 004c36ae: PUSH EAX
// 004c36af: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 004c36b1: ADD EAX,0x90
// 004c36b6: PUSH EAX
// 004c36b7: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 004c36bc: ADD ESP,0x8
// 004c36bf: MOV EDX,0x4
// 004c36c4: MOV EBX,0x3
// 004c36c9: MOV ESI,0x80000
// 004c36ce: MOV EAX,0xf80000
//   XREF to: 00f80000 (DATA)
// 004c36d3: XOR ECX,ECX
// 004c36d5: MOV dword ptr [ESP + 0x84],EDX
// 004c36dc: MOV dword ptr [ESP + 0x94],ECX
// 004c36e3: MOV dword ptr [ESP + 0x90],ECX
// 004c36ea: MOV dword ptr [ESP + 0x8c],ECX
// 004c36f1: MOV dword ptr [ESP + 0x88],ECX
// 004c36f8: MOV dword ptr [ESP + 0x98],ECX
// 004c36ff: MOV dword ptr [ESP + 0xbc],EBX
// 004c3706: MOV dword ptr [ESP + 0x9c],ESI
// 004c370d: MOV dword ptr [ESP + 0xa0],ESI
// 004c3714: MOV dword ptr [ESP + 0xa8],EAX
//   XREF to: 00f80000 (DATA)
// 004c371b: MOV dword ptr [ESP + 0xac],ESI
// 004c3722: MOV dword ptr [ESP + 0xb4],EAX
//   XREF to: 00f80000 (DATA)
// 004c3729: MOV dword ptr [ESP + 0xb8],EAX
//   XREF to: 00f80000 (DATA)
// 004c3730: MOV dword ptr [ESP + 0xc0],ESI
// 004c3737: MOV dword ptr [ESP + 0xc4],EAX
//   XREF to: 00f80000 (DATA)
// 004c373e: MOV EDX,0x1
// 004c3743: MOV ECX,0x2
// 004c3748: MOV EAX,[0x006703ec]
//   XREF to: 006703ec (READ)
// 004c374d: MOV dword ptr [ESP + 0xa4],EDX
// 004c3754: MOV dword ptr [ESP + 0xb0],ECX
// 004c375b: MOV EDX,dword ptr [EBP + 0x14]
// 004c375e: MOV EBX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 004c3760: MOV EDX,dword ptr [EDX + 0x2c]
// 004c3763: MOV dword ptr [EBX + 0x20],EDX
// 004c3766: MOV EDX,dword ptr [EBP + 0x14]
// 004c3769: MOV EBX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 004c376b: MOV EDX,dword ptr [EDX + 0x30]
// 004c376e: MOV dword ptr [EBX + 0x24],EDX
// 004c3771: MOV EDX,dword ptr [EBP + 0x14]
// 004c3774: MOV EBX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 004c3776: MOV EDX,dword ptr [EDX + 0x34]
// 004c3779: MOV dword ptr [EBX + 0x28],EDX
// 004c377c: MOV EDX,dword ptr [EBP + 0x14]
// 004c377f: MOV EBX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 004c3781: MOV EDX,dword ptr [EDX + 0x2c]
// 004c3784: MOV dword ptr [EBX + 0x50],EDX
// 004c3787: MOV EDX,dword ptr [EBP + 0x14]
// 004c378a: MOV EBX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 004c378c: MOV EDX,dword ptr [EDX + 0x30]
// 004c378f: MOV dword ptr [EBX + 0x54],EDX
// 004c3792: MOV EDX,dword ptr [EBP + 0x14]
// 004c3795: MOV EBX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 004c3797: MOV EDX,dword ptr [EDX + 0x34]
// 004c379a: MOV dword ptr [EBX + 0x58],EDX
// 004c379d: MOV EDX,dword ptr [EBP + 0x14]
// 004c37a0: MOV EBX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 004c37a2: MOV EDX,dword ptr [EDX + 0x2c]
// 004c37a5: MOV dword ptr [EBX + 0x80],EDX
// 004c37ab: MOV EDX,dword ptr [EBP + 0x14]
// 004c37ae: MOV EBX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 004c37b0: MOV EDX,dword ptr [EDX + 0x30]
// 004c37b3: MOV dword ptr [EBX + 0x84],EDX
// 004c37b9: MOV EDX,dword ptr [EBP + 0x14]
// 004c37bc: MOV EBX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 004c37be: MOV EDX,dword ptr [EDX + 0x34]
// 004c37c1: MOV dword ptr [EBX + 0x88],EDX
// 004c37c7: MOV EDX,dword ptr [EBP + 0x14]
// 004c37ca: MOV EBX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 004c37cc: MOV EDX,dword ptr [EDX + 0x2c]
// 004c37cf: MOV dword ptr [EBX + 0xb0],EDX
// 004c37d5: MOV EDX,dword ptr [EBP + 0x14]
// 004c37d8: MOV EBX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 004c37da: MOV EDX,dword ptr [EDX + 0x30]
// 004c37dd: MOV dword ptr [EBX + 0xb4],EDX
// 004c37e3: MOV EDX,dword ptr [EBP + 0x14]
// 004c37e6: PUSH 0x1
// 004c37e8: MOV EBX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 004c37ea: MOV EDX,dword ptr [EDX + 0x34]
// 004c37ed: PUSH EAX
//   XREF to: 02c6d578 (DATA)
// 004c37ee: MOV dword ptr [EBX + 0xb8],EDX
// 004c37f4: CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50
//   XREF to: 0048ca50 (UNCONDITIONAL_CALL)
// 004c37f9: ADD ESP,0x8
// 004c37fc: PUSH 0x471fff00
// 004c3801: PUSH 0x47000000
// 004c3806: CALL core_actor.cpp_getRandomFloat_FUN_0040cc10
//   XREF to: 0040cc10 (UNCONDITIONAL_CALL)
// 004c380b: MOV dword ptr [ESP + 0x300],EAX
// 004c3812: FLD float ptr [ESP + 0x300]
// 004c3819: ADD ESP,0x8
// 004c381c: FMUL float ptr [ESP + 0x1c]
// 004c3820: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 004c3825: FISTP dword ptr [ESP + 0x2f4]
// 004c382c: MOV EAX,dword ptr [ESP + 0x2f4]
// 004c3833: PUSH EAX
// 004c3834: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004c383a: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 004c383b: CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60
//   XREF to: 0048ca60 (UNCONDITIONAL_CALL)
// 004c3840: ADD ESP,0x8
// 004c3843: LEA EAX,[ESP + 0x80]
// 004c384a: PUSH EAX
// 004c384b: MOV ECX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004c3851: PUSH ECX
//   XREF to: 02c6d578 (DATA)
// 004c3852: CALL engine_drender.cpp_CDemonRenderer_renderEnhancedQualityVariant_FUN_0048bdc0
//   XREF to: 0048bdc0 (UNCONDITIONAL_CALL)
// 004c3857: ADD ESP,0x8
// 004c385a: MOV EBX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004c3860: PUSH EBX
//   XREF to: 02c6d578 (DATA)
// 004c3861: CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720
//   XREF to: 0048c640 (UNCONDITIONAL_CALL)
