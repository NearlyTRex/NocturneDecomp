// Name: core_weather.cpp_CWeather_renderParticles_FUN_005ef190
// Address: 005ef190
// Address Range: [[005ef190, 005ef8be]]
// Convention: __cdecl
// Signature: void __cdecl core_weather_cpp_CWeather_renderParticles_FUN_005ef190(CWeather *this_ptr)

#include "nocturne.h"

void __cdecl core_weather_cpp_CWeather_renderParticles_FUN_005ef190(CWeather *this_ptr)

{
  SRenderVertex *vertex_ptr_00;
  float fVar1;
  CDemonRenderer *pCVar2;
  int iVar2;
  int iVar4;
  int iVar6;
  int iVar7;
  int iVar8;
  CVector3f *world_position;
  int iVar3;
  uint uVar4;
  int iVar5;
  SMRGLPrimitiveQuadIndex local_f0;
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
  int local_1c;
  int local_18;
  float local_14;
  float local_10;
  SRenderVertex *vertex_ptr;
  CDemonRenderer *pCVar1;
  
  if (this_ptr->weather_type == WEATHER_TYPE_NONE) {
    return;
  }
  engine_drender_cpp_CDemonRenderer_getCameraRotationAsRadians_FUN_0048c800
            (g_CDemonRendererPtr2,(float *)&local_b0);
  if (this_ptr->weather_type == WEATHER_TYPE_RAIN) {
    local_b0.x = 0;
  }
  if (this_ptr->weather_type == WEATHER_TYPE_RAIN) {
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
              (g_CDemonRendererPtr2,&g_RainDropTexture);
    pCVar1 = g_CDemonRendererPtr2;
    g_CDemonRendererPtr2->vertex_buffer_ptr->u = 0x80000;
    pCVar1->vertex_buffer_ptr->v = 0x80000;
    pCVar1->vertex_buffer_ptr[1].u = 0x780000;
    pCVar1->vertex_buffer_ptr[1].v = 0x80000;
    pCVar1->vertex_buffer_ptr[2].u = 0x780000;
    pCVar1->vertex_buffer_ptr[2].v = 0xf80000;
    pCVar1->vertex_buffer_ptr[3].u = 0x80000;
    pCVar1->vertex_buffer_ptr[3].v = 0xf80000;
  }
  else {
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
              (g_CDemonRendererPtr2,&g_SnowflakeTexture);
  }
  core_set_cpp_CDemonSet_setLightingParameters_FUN_0056d380
            (g_CDemonSetPtr,(CVector3f *)0x0,(UOrientationVector *)0x0,(CVector3f *)0x0,
             (CVector3f *)0x0,(CMatrix3x3f *)0x0);
  local_14 = 0.1;
  local_10 = 0.1;
  if (this_ptr->weather_type == WEATHER_TYPE_RAIN) {
    local_10 = -0.4;
    local_14 = 0.05;
  }
  local_f0.base.base.count = 4;
  local_f0.base.surface_normal.D = 0;
  local_f0.base.surface_normal.C = 0;
  local_f0.base.surface_normal.B = 0;
  local_f0.base.surface_normal.A = 0;
  local_f0.vertices[0] = 0;
  local_f0.vertices[1] = 1;
  local_f0.vertices[2] = 2;
  local_f0.vertices[3] = 3;
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr2,1);
  world_position = g_WeatherParticlePositions;
  uVar4 = 0;
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60(g_CDemonRendererPtr2,0x8000);
  do {
    vertex_ptr_00 = g_CDemonRendererPtr2->vertex_buffer_ptr;
    local_50.x = (int)ROUND(world_position->x * 256.0f);
    local_50.y = (int)ROUND(world_position->y * 256.0f);
    local_50.z = (int)ROUND(world_position->z * 256.0f);
    wincore_windll_cpp_transformPoint_FUN_005b5a25(&vertex_ptr_00->projected_vertex,&local_50);
    iVar2 = engine_drender_cpp_CDemonRenderer_depthTest_FUN_0048dc50
                      (g_CDemonRendererPtr2,vertex_ptr_00);
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
      pCVar2 = g_CDemonRendererPtr2;
      if (this_ptr->weather_type == WEATHER_TYPE_SNOW) {
        iVar4 = (uVar4 & 3) * 0x400000;
        iVar6 = iVar4 + 0x80000;
        iVar7 = ((int)(uVar4 & 0xc) >> 2) * 0x400000;
        g_CDemonRendererPtr2->vertex_buffer_ptr->u = iVar6;
        iVar8 = iVar7 + 0x80000;
        pCVar2->vertex_buffer_ptr->v = iVar8;
        iVar4 = iVar4 + 0x380000;
        pCVar2->vertex_buffer_ptr[1].u = iVar4;
        pCVar2->vertex_buffer_ptr[1].v = iVar8;
        pCVar2->vertex_buffer_ptr[2].u = iVar4;
        iVar7 = iVar7 + 0x380000;
        pCVar2->vertex_buffer_ptr[2].v = iVar7;
        pCVar2->vertex_buffer_ptr[3].u = iVar6;
        pCVar2->vertex_buffer_ptr[3].v = iVar7;
      }
      fVar1 = -local_10;
      local_8c.x = (int)ROUND(local_14 * 256.0f);
      local_8c.y = (int)ROUND(fVar1 * 256.0f);
      local_8c.z = (int)ROUND(256.0f * 0.0);
      wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                (&g_CDemonRendererPtr2->vertex_buffer_ptr->projected_vertex,&local_8c);
      local_38 = -local_14;
      local_68.x = (int)ROUND(local_38 * 256.0f);
      local_68.y = (int)ROUND(fVar1 * 256.0f);
      local_68.z = (int)ROUND(256.0f * 0.0);
      wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                (&g_CDemonRendererPtr2->vertex_buffer_ptr[1].projected_vertex,&local_68);
      local_34 = -fVar1;
      local_5c.x = (int)ROUND(local_38 * 256.0f);
      local_5c.y = (int)ROUND(local_34 * 256.0f);
      local_5c.z = (int)ROUND(256.0f * 0.0);
      wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                (&g_CDemonRendererPtr2->vertex_buffer_ptr[2].projected_vertex,&local_5c);
      local_38 = -local_38;
      local_98.x = (int)ROUND(local_38 * 256.0f);
      local_98.y = (int)ROUND(local_34 * 256.0f);
      local_98.z = (int)ROUND(256.0f * 0.0);
      wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                (&g_CDemonRendererPtr2->vertex_buffer_ptr[3].projected_vertex,&local_98);
      engine_drender_cpp_CDemonRenderer_renderEnhancedQuality_FUN_0048bcf0
                (g_CDemonRendererPtr2,&local_f0.base);
      engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0048c640(g_CDemonRendererPtr2);
    }
    uVar4 = uVar4 + 1;
    world_position = world_position + 1;
  } while ((int)uVar4 < 200);
  if (this_ptr->weather_type == WEATHER_TYPE_RAIN) {
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
              (g_CDemonRendererPtr2,&g_RainSplashTexture);
    pCVar2 = g_CDemonRendererPtr2;
    g_CDemonRendererPtr2->vertex_buffer_ptr->u = 0x80000;
    pCVar2->vertex_buffer_ptr->v = 0x80000;
    pCVar2->vertex_buffer_ptr[1].u = 0x780000;
    pCVar2->vertex_buffer_ptr[1].v = 0x80000;
    pCVar2->vertex_buffer_ptr[2].u = 0x780000;
    pCVar2->vertex_buffer_ptr[2].v = 0xf80000;
    iVar3 = 0;
    pCVar2->vertex_buffer_ptr[3].u = 0x80000;
    iVar8 = 0;
    iVar5 = 0x3f95dfc;
    pCVar2->vertex_buffer_ptr[3].v = 0xf80000;
    do {
      if (g_WeatherParticleHitGround[iVar3] != '\0') {
        local_2c.x = g_WeatherParticlePositions[iVar3].x;
        local_2c.z = *(float *)(iVar5 + 4);
        local_2c.y = *(float *)((int)g_WeatherParticleGroundHeights + iVar8);
        engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
                  (g_CDemonRendererPtr2,&local_2c);
        engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
                  (g_CDemonRendererPtr2,&local_b0,(CVector3i *)0x0);
        local_74.x = (int)ROUND(256.0f * 0.2);
        local_74.y = (int)ROUND(256.0f * 0.0);
        local_74.z = (int)ROUND(256.0f * 0.0);
        wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                  (&g_CDemonRendererPtr2->vertex_buffer_ptr->projected_vertex,&local_74);
        local_a4.x = (int)ROUND(256.0f * -0.2);
        local_a4.y = (int)ROUND(256.0f * 0.0);
        local_a4.z = (int)ROUND(256.0f * 0.0);
        wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                  (&g_CDemonRendererPtr2->vertex_buffer_ptr[1].projected_vertex,&local_a4);
        local_c8.x = (int)ROUND(256.0f * -0.2);
        local_c8.y = (int)ROUND(256.0f * 0.4);
        local_c8.z = (int)ROUND(256.0f * 0.0);
        wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                  (&g_CDemonRendererPtr2->vertex_buffer_ptr[2].projected_vertex,&local_c8);
        local_44.x = (int)ROUND(256.0f * 0.2);
        local_44.y = (int)ROUND(256.0f * 0.4);
        local_44.z = (int)ROUND(256.0f * 0.0);
        wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                  (&g_CDemonRendererPtr2->vertex_buffer_ptr[3].projected_vertex,&local_44);
        engine_drender_cpp_CDemonRenderer_renderEnhancedQuality_FUN_0048bcf0
                  (g_CDemonRendererPtr2,&local_f0.base);
        engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0048c640(g_CDemonRendererPtr2);
      }
      iVar5 = iVar5 + 0xc;
      iVar3 = iVar3 + 1;
      iVar8 = iVar8 + 4;
    } while (iVar3 < 200);
  }
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr2,0);
  return;
}
