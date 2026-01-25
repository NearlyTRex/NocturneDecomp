// Name: core_weather.cpp_CWeather_FUN_005ef190
// Address: 005ef190
// Address Range: [[005ef190, 005ef5f0] [005ef5f4, 005ef8b6]]
// Convention: unknown
// Signature: undefined core_weather.cpp_CWeather_FUN_005ef190()

#include "nocturne.h"

/* Signature: byte core_weather.cpp_CWeather_FUN_005ef190(CWeather* param_1) */

void core_weather_cpp_CWeather_FUN_005ef190(void)

{
  SRenderVertex *vertex_ptr;
  CDemonRenderer *pCVar1;
  int iVar2;
  float fVar3;
  CVector3f *world_position;
  int iVar4;
  uint uVar5;
  int iVar6;
  int *in_stack_00000004;
  SMRGLHeaderPrimitive local_f0;
  uint local_d8;
  uint local_d4;
  uint local_d0;
  uint local_cc;
  CVector3i local_c8;
  float local_bc;
  float local_b8;
  float local_b4;
  CVector3i local_b0;
  CVector3i local_a4;
  CVector3i local_98;
  CVector3i local_8c;
  CVector3i local_80;
  CVector3i local_74;
  CVector3i local_68;
  CVector3i local_5c;
  CVector3i local_50;
  CVector3i local_44;
  float local_38;
  float local_34;
  float local_30;
  CVector3f local_2c;
  int local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  
  if (*in_stack_00000004 == 0) {
    return;
  }
  engine_drender_cpp_CDemonRenderer_getCameraRotationAsRadians_FUN_0048c800
            (g_CDemonRendererPtr2,(float *)&local_b0);
  if (*in_stack_00000004 == 1) {
    local_b0.x = 0;
  }
  if (*in_stack_00000004 == 1) {
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
              (g_CDemonRendererPtr2,&DAT_00684900);
    pCVar1 = g_CDemonRendererPtr2;
    g_CDemonRendererPtr2->vertex_buffer_ptr->u = 7.34684e-40;
    pCVar1->vertex_buffer_ptr->v = 7.34684e-40;
    pCVar1->vertex_buffer_ptr[1].u = 1.102026e-38;
    pCVar1->vertex_buffer_ptr[1].v = 7.34684e-40;
    pCVar1->vertex_buffer_ptr[2].u = 1.102026e-38;
    pCVar1->vertex_buffer_ptr[2].v = 2.2775203e-38;
    pCVar1->vertex_buffer_ptr[3].u = 7.34684e-40;
    pCVar1->vertex_buffer_ptr[3].v = 2.2775203e-38;
  }
  else {
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
              (g_CDemonRendererPtr2,&DAT_00684930);
  }
  core_set_cpp_CDemonSet_FUN_0056d380(g_CDemonSetPtr);
  local_14 = 0.1;
  local_10 = 0.1;
  if (*in_stack_00000004 == 1) {
    local_10 = -0.4;
    local_14 = 0.05;
  }
  local_f0.base.count = 4;
  local_f0.surface_normal.D = 0;
  local_f0.surface_normal.C = 0;
  local_f0.surface_normal.B = 0;
  local_f0.surface_normal.A = 0;
  local_d8 = 0;
  local_d4 = 1;
  local_d0 = 2;
  local_cc = 3;
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr2,1);
  world_position = DAT_03f95df8;
  uVar5 = 0;
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60(g_CDemonRendererPtr2,0x8000);
  do {
    vertex_ptr = g_CDemonRendererPtr2->vertex_buffer_ptr;
    local_50.x = (int)ROUND(world_position->x * 256.0f);
    local_50.y = (int)ROUND(world_position->y * 256.0f);
    local_50.z = (int)ROUND(world_position->z * 256.0f);
    wincore_windll_cpp_transformPoint_FUN_005b5a25(&vertex_ptr->projected_vertex,&local_50);
    iVar2 = engine_drender_cpp_CDemonRenderer_depthTest_FUN_0048dc50
                      (g_CDemonRendererPtr2,vertex_ptr);
    if (iVar2 != 0) {
      engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
                (g_CDemonRendererPtr2,world_position);
      engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
                (g_CDemonRendererPtr2,&local_b0,(CVector3i *)0x0);
      local_80.x = (int)ROUND(world_position->x * 256.0f);
      local_80.y = (int)ROUND(world_position->y * 256.0f);
      local_80.z = (int)ROUND(world_position->z * 256.0f);
      core_set_cpp_CDemonSet_computeLighting_FUN_0056e110
                (g_CDemonSetPtr,&local_80,(CVector3i *)0x0,0,4);
      pCVar1 = g_CDemonRendererPtr2;
      if (*in_stack_00000004 == 2) {
        local_20 = (uVar5 & 3) * 0x400000;
        iVar2 = ((int)(uVar5 & 0xc) >> 2) * 0x400000;
        g_CDemonRendererPtr2->vertex_buffer_ptr->u = (float)(local_20 + 0x80000);
        local_18 = (float)(iVar2 + 0x80000);
        pCVar1->vertex_buffer_ptr->v = local_18;
        local_1c = (float)(local_20 + 0x380000);
        pCVar1->vertex_buffer_ptr[1].u = local_1c;
        pCVar1->vertex_buffer_ptr[1].v = local_18;
        pCVar1->vertex_buffer_ptr[2].u = local_1c;
        fVar3 = (float)(iVar2 + 0x380000);
        pCVar1->vertex_buffer_ptr[2].v = fVar3;
        pCVar1->vertex_buffer_ptr[3].u = (float)(local_20 + 0x80000);
        pCVar1->vertex_buffer_ptr[3].v = fVar3;
      }
      local_34 = -local_10;
      local_38 = local_14;
      local_30 = 0.0;
      local_8c.x = (int)ROUND(local_14 * 256.0f);
      local_8c.y = (int)ROUND(local_34 * 256.0f);
      local_8c.z = (int)ROUND(256.0f * 0.0);
      wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                (&g_CDemonRendererPtr2->vertex_buffer_ptr->projected_vertex,&local_8c);
      local_38 = -local_38;
      local_68.x = (int)ROUND(local_38 * 256.0f);
      local_68.y = (int)ROUND(local_34 * 256.0f);
      local_68.z = (int)ROUND(local_30 * 256.0f);
      wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                (&g_CDemonRendererPtr2->vertex_buffer_ptr[1].projected_vertex,&local_68);
      local_34 = -local_34;
      local_5c.x = (int)ROUND(local_38 * 256.0f);
      local_5c.y = (int)ROUND(local_34 * 256.0f);
      local_5c.z = (int)ROUND(local_30 * 256.0f);
      wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                (&g_CDemonRendererPtr2->vertex_buffer_ptr[2].projected_vertex,&local_5c);
      local_38 = -local_38;
      local_98.x = (int)ROUND(local_38 * 256.0f);
      local_98.y = (int)ROUND(local_34 * 256.0f);
      local_98.z = (int)ROUND(local_30 * 256.0f);
      wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                (&g_CDemonRendererPtr2->vertex_buffer_ptr[3].projected_vertex,&local_98);
      engine_drender_cpp_CDemonRenderer_renderEnhancedQuality_FUN_0048bcf0
                (g_CDemonRendererPtr2,&local_f0);
      engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
    }
    uVar5 = uVar5 + 1;
    world_position = world_position + 1;
  } while ((int)uVar5 < 200);
  if (*in_stack_00000004 == 1) {
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
              (g_CDemonRendererPtr2,&DAT_00684918);
    pCVar1 = g_CDemonRendererPtr2;
    g_CDemonRendererPtr2->vertex_buffer_ptr->u = 7.34684e-40;
    pCVar1->vertex_buffer_ptr->v = 7.34684e-40;
    pCVar1->vertex_buffer_ptr[1].u = 1.102026e-38;
    pCVar1->vertex_buffer_ptr[1].v = 7.34684e-40;
    pCVar1->vertex_buffer_ptr[2].u = 1.102026e-38;
    pCVar1->vertex_buffer_ptr[2].v = 2.2775203e-38;
    iVar4 = 0;
    pCVar1->vertex_buffer_ptr[3].u = 7.34684e-40;
    iVar2 = 0;
    iVar6 = 0x3f95dfc;
    pCVar1->vertex_buffer_ptr[3].v = 2.2775203e-38;
    do {
      if ((&DAT_03f96a78)[iVar4] != '\0') {
        local_2c.x = DAT_03f95df8[iVar4].x;
        local_2c.z = *(float *)(iVar6 + 4);
        local_2c.y = *(float *)((int)&DAT_03f96758 + iVar2);
        engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
                  (g_CDemonRendererPtr2,&local_2c);
        engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
                  (g_CDemonRendererPtr2,&local_b0,(CVector3i *)0x0);
        local_b8 = 0.0;
        local_b4 = 0.0;
        local_bc = 0.2;
        local_74.x = (int)ROUND(256.0f * 0.2);
        local_74.y = (int)ROUND(256.0f * 0.0);
        local_74.z = (int)ROUND(256.0f * 0.0);
        wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                  (&g_CDemonRendererPtr2->vertex_buffer_ptr->projected_vertex,&local_74);
        local_bc = -local_bc;
        local_a4.x = (int)ROUND(local_bc * 256.0f);
        local_a4.y = (int)ROUND(local_b8 * 256.0f);
        local_a4.z = (int)ROUND(local_b4 * 256.0f);
        wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                  (&g_CDemonRendererPtr2->vertex_buffer_ptr[1].projected_vertex,&local_a4);
        local_b8 = 0.4;
        local_c8.x = (int)ROUND(local_bc * 256.0f);
        local_c8.y = (int)ROUND(256.0f * 0.4);
        local_c8.z = (int)ROUND(local_b4 * 256.0f);
        wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                  (&g_CDemonRendererPtr2->vertex_buffer_ptr[2].projected_vertex,&local_c8);
        local_bc = -local_bc;
        local_44.x = (int)ROUND(local_bc * 256.0f);
        local_44.y = (int)ROUND(local_b8 * 256.0f);
        local_44.z = (int)ROUND(local_b4 * 256.0f);
        wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                  (&g_CDemonRendererPtr2->vertex_buffer_ptr[3].projected_vertex,&local_44);
        engine_drender_cpp_CDemonRenderer_renderEnhancedQuality_FUN_0048bcf0
                  (g_CDemonRendererPtr2,&local_f0);
        engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
      }
      iVar6 = iVar6 + 0xc;
      iVar4 = iVar4 + 1;
      iVar2 = iVar2 + 4;
    } while (iVar4 < 200);
  }
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr2,0);
  return;
}
