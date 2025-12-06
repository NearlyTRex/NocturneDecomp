// Name: core_weather.cpp_CWeather_FUN_005ef190
// Address: 005ef190
// Address Range: [[005ef190, 005ef5f0] [005ef5f4, 005ef8b6]]
// Convention: unknown
// Signature: undefined core_weather.cpp_CWeather_FUN_005ef190()

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: byte core_weather.cpp_CWeather_FUN_005ef190(CWeather* param_1) */

void core_weather_cpp_CWeather_FUN_005ef190(void)

{
  SRenderVertex *vertex_ptr;
  CDemonRenderer *pCVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  BADSPACEBASE *in_ESP;
  int iVar5;
  float fVar6;
  CVector3f *world_position;
  uint uVar7;
  int iVar8;
  float unaff_retaddr;
  int *in_stack_00000004;
  int *in_stack_00000008;
  int *in_stack_00000010;
  float in_stack_00000014;
  int *in_stack_00000018;
  int *in_stack_0000002c;
  byte local_b8 [24];
  int local_a0;
  int local_9c;
  CVector3i local_90 [2];
  CVector3i local_78;
  byte local_64 [12];
  int local_58;
  int local_54;
  CVector3i local_3c;
  CVector3i local_2c;
  CVector3f local_18;
  float fVar9;
  
  if (*in_stack_00000004 == 0) {
    return;
  }
  engine_drender_cpp_CDemonRenderer_getCameraRotationAsRadians_FUN_0048c800
            (g_CDemonRendererPtr,(float *)(local_b8 + 8));
  if (*in_stack_00000008 == 1) {
    local_b8._12_4_ = 0.0;
  }
  if (*in_stack_00000008 == 1) {
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80(g_CDemonRendererPtr,&DAT_00684900)
    ;
    pCVar1 = g_CDemonRendererPtr;
    g_CDemonRendererPtr->vertex_buffer_ptr->u = 7.34684e-40;
    pCVar1->vertex_buffer_ptr->v = 7.34684e-40;
    pCVar1->vertex_buffer_ptr[1].u = 1.102026e-38;
    pCVar1->vertex_buffer_ptr[1].v = 7.34684e-40;
    pCVar1->vertex_buffer_ptr[2].u = 1.102026e-38;
    pCVar1->vertex_buffer_ptr[2].v = 2.2775203e-38;
    pCVar1->vertex_buffer_ptr[3].u = 7.34684e-40;
    pCVar1->vertex_buffer_ptr[3].v = 2.2775203e-38;
  }
  else {
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80(g_CDemonRendererPtr,&DAT_00684930)
    ;
  }
  core_set_cpp_CDemonSet_FUN_0056d380(g_CDemonSetPtr);
  fVar9 = 0.1;
  if (*in_stack_00000010 == 1) {
    fVar9 = -0.4;
  }
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr,1);
  world_position = DAT_03f95df8;
  uVar7 = 0;
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60(g_CDemonRendererPtr,0x8000);
  do {
    vertex_ptr = g_CDemonRendererPtr->vertex_buffer_ptr;
    local_3c.x = (int)ROUND(world_position->x * _DAT_00665700);
    local_3c.y = (int)ROUND(world_position->y * _DAT_00665700);
    local_3c.z = (int)ROUND(world_position->z * _DAT_00665700);
    wincore_windll_cpp_transformPoint_FUN_005b5a25(&vertex_ptr->projected_vertex,&local_3c);
    iVar2 = engine_drender_cpp_CDemonRenderer_depthTest_FUN_0048dc50(g_CDemonRendererPtr,vertex_ptr)
    ;
    if (iVar2 != 0) {
      engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
                (g_CDemonRendererPtr,world_position);
      engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
                (g_CDemonRendererPtr,local_90,(CVector3i *)0x0);
      local_64._8_4_ = (uint)ROUND(world_position->x * _DAT_00665700);
      local_58 = (int)ROUND(world_position->y * _DAT_00665700);
      local_54 = (int)ROUND(world_position->z * _DAT_00665700);
      core_set_cpp_CDemonSet_computeLighting_FUN_0056e110
                (g_CDemonSetPtr,(CVector3i *)(local_64 + 8),(CVector3i *)0x0,0,4);
      pCVar1 = g_CDemonRendererPtr;
      if (*in_stack_0000002c == 2) {
        iVar2 = (uVar7 & 3) * 0x400000;
        fVar4 = (float)(iVar2 + 0x80000);
        iVar5 = ((int)(uVar7 & 0xc) >> 2) * 0x400000;
        g_CDemonRendererPtr->vertex_buffer_ptr->u = fVar4;
        fVar6 = (float)(iVar5 + 0x80000);
        pCVar1->vertex_buffer_ptr->v = fVar6;
        fVar3 = (float)(iVar2 + 0x380000);
        pCVar1->vertex_buffer_ptr[1].u = fVar3;
        pCVar1->vertex_buffer_ptr[1].v = fVar6;
        pCVar1->vertex_buffer_ptr[2].u = fVar3;
        fVar6 = (float)(iVar5 + 0x380000);
        pCVar1->vertex_buffer_ptr[2].v = fVar6;
        pCVar1->vertex_buffer_ptr[3].u = fVar4;
        pCVar1->vertex_buffer_ptr[3].v = fVar6;
      }
      local_18.z = in_stack_00000014;
      local_64._0_4_ = (uint)ROUND(in_stack_00000014 * _DAT_00665700);
      local_64._4_4_ = (uint)ROUND(-(float)in_stack_00000018 * _DAT_00665700);
      local_64._8_4_ = (uint)ROUND(_DAT_00665700 * 0.0);
      wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                (&g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex,(CVector3i *)local_64);
      local_3c.x = (int)ROUND(--(float)in_stack_00000018 * _DAT_00665700);
      local_3c.y = (int)ROUND(_DAT_00665700 * 0.0);
      local_3c.z = (int)ROUND(fVar9 * _DAT_00665700);
      wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                (&g_CDemonRendererPtr->vertex_buffer_ptr[1].projected_vertex,&local_3c);
      local_2c.x = (int)ROUND(_DAT_00665700 * 0.0);
      local_2c.y = (int)ROUND(-fVar9 * _DAT_00665700);
      local_2c.z = (int)ROUND(unaff_retaddr * _DAT_00665700);
      wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                (&g_CDemonRendererPtr->vertex_buffer_ptr[2].projected_vertex,&local_2c);
      fVar9 = --fVar9;
      local_64._0_4_ = (uint)ROUND(fVar9 * _DAT_00665700);
      local_64._4_4_ = (uint)ROUND(unaff_retaddr * _DAT_00665700);
      local_64._8_4_ = (uint)ROUND((float)in_stack_00000004 * _DAT_00665700);
      wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                (&g_CDemonRendererPtr->vertex_buffer_ptr[3].projected_vertex,(CVector3i *)local_64);
      engine_drender_cpp_CDemonRenderer_renderEnhancedQuality_FUN_0048bcf0
                (g_CDemonRendererPtr,(SMRGLHeaderPrimitive *)local_b8);
      engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
    }
    uVar7 = uVar7 + 1;
    world_position = world_position + 1;
  } while ((int)uVar7 < 200);
  if (*in_stack_00000018 == 1) {
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80(g_CDemonRendererPtr,&DAT_00684918)
    ;
    pCVar1 = g_CDemonRendererPtr;
    g_CDemonRendererPtr->vertex_buffer_ptr->u = 7.34684e-40;
    pCVar1->vertex_buffer_ptr->v = 7.34684e-40;
    pCVar1->vertex_buffer_ptr[1].u = 1.102026e-38;
    pCVar1->vertex_buffer_ptr[1].v = 7.34684e-40;
    pCVar1->vertex_buffer_ptr[2].u = 1.102026e-38;
    pCVar1->vertex_buffer_ptr[2].v = 2.2775203e-38;
    iVar5 = 0;
    pCVar1->vertex_buffer_ptr[3].u = 7.34684e-40;
    iVar2 = 0;
    iVar8 = 0x3f95dfc;
    pCVar1->vertex_buffer_ptr[3].v = 2.2775203e-38;
    do {
      if ((&DAT_03f96a78)[iVar5] != '\0') {
        local_18.x = DAT_03f95df8[iVar5].x;
        local_18.z = *(float *)(iVar8 + 4);
        local_18.y = *(float *)((int)&DAT_03f96758 + iVar2);
        engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
                  (g_CDemonRendererPtr,&local_18);
        engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
                  (g_CDemonRendererPtr,(CVector3i *)local_b8,(CVector3i *)0x0);
        local_b8._0_4_ = 0.0;
        local_78.x = (int)ROUND(_DAT_00665700 * 0.2);
        local_78.y = (int)ROUND(_DAT_00665700 * 0.0);
        local_78.z = (int)ROUND(_DAT_00665700 * 0.0);
        wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                  (&g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex,&local_78);
        local_b8._20_4_ = (uint)ROUND(_DAT_00665700 * -0.0);
        local_a0 = (int)ROUND((float)local_b8._0_4_ * _DAT_00665700);
        local_9c = (int)ROUND((float)local_b8._4_4_ * _DAT_00665700);
        wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                  (&g_CDemonRendererPtr->vertex_buffer_ptr[1].projected_vertex,
                   (CVector3i *)(local_b8 + 0x14));
        local_b8._4_4_ = 0.4;
        wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                  (&g_CDemonRendererPtr->vertex_buffer_ptr[2].projected_vertex,
                   (CVector3i *)&stack0xffffff3c);
        local_b8._4_4_ = -(float)local_b8._4_4_;
        local_3c.x = (int)ROUND((float)local_b8._4_4_ * _DAT_00665700);
        local_3c.y = (int)ROUND((float)local_b8._8_4_ * _DAT_00665700);
        local_3c.z = (int)ROUND((float)local_b8._12_4_ * _DAT_00665700);
        wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                  (&g_CDemonRendererPtr->vertex_buffer_ptr[3].projected_vertex,&local_3c);
        engine_drender_cpp_CDemonRenderer_renderEnhancedQuality_FUN_0048bcf0
                  (g_CDemonRendererPtr,(SMRGLHeaderPrimitive *)&stack0xffffff1c);
        engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
      }
      iVar8 = iVar8 + 0xc;
      iVar5 = iVar5 + 1;
      iVar2 = iVar2 + 4;
    } while (iVar5 < 200);
  }
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr,0);
  return;
}
