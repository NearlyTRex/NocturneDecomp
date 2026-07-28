// Name: core_weather.cpp_CWeather_renderParticles_FUN_00555020
// Address: 00555020
// Address Range: [[00555020, 0055574e]]
// Convention: __cdecl
// Signature: void __cdecl core_weather_cpp_CWeather_renderParticles_FUN_00555020(CWeather *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_weather_cpp_CWeather_renderParticles_FUN_00555020(CWeather *this_ptr)

{
  SRenderVertex *vertex_ptr;
  CDemonRenderer *pCVar1;
  int iVar2;
  CVector3f *world_position;
  int iVar3;
  uint uVar4;
  byte *puVar5;
  SMRGLHeaderPrimitive local_f0;
  uint local_d8;
  uint local_d4;
  uint local_d0;
  uint local_cc;
  CVector3i local_c8;
  float local_bc;
  float local_b8;
  float local_b4;
  CVector3f local_b0;
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
  
  if (this_ptr->weather_type == WEATHER_TYPE_NONE) {
    return;
  }
  engine_drender_cpp_CDemonRenderer_getCameraRotationRadians_FUN_00460db0(DAT_005ae704,&local_b0);
  if (this_ptr->weather_type == WEATHER_TYPE_RAIN) {
    local_b0.x = 0.0;
  }
  if (this_ptr->weather_type == WEATHER_TYPE_RAIN) {
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00461eb0
              (DAT_005ae704,(SMRGLTextureBasic *)&DAT_005c15bc);
    pCVar1 = DAT_005ae704;
    DAT_005ae704->vertex_buffer_ptr->u = 0x80000;
    pCVar1->vertex_buffer_ptr->v = 0x80000;
    pCVar1->vertex_buffer_ptr[1].u = 0x780000;
    pCVar1->vertex_buffer_ptr[1].v = 0x80000;
    pCVar1->vertex_buffer_ptr[2].u = 0x780000;
    pCVar1->vertex_buffer_ptr[2].v = 0xf80000;
    pCVar1->vertex_buffer_ptr[3].u = 0x80000;
    pCVar1->vertex_buffer_ptr[3].v = 0xf80000;
  }
  else {
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00461eb0
              (DAT_005ae704,(SMRGLTextureBasic *)&DAT_005c15ec);
  }
  core_set_cpp_CDemonSet_setLightingParameters_FUN_0050adc0
            (0x01E57284,(CVector3f *)0x0,(UOrientationVector *)0x0,(CVector3f *)0x0,
             (CVector3f *)0x0,(CMatrix3x3f *)0x0);
  local_14 = 0.1;
  local_10 = 0.1;
  if (this_ptr->weather_type == WEATHER_TYPE_RAIN) {
    local_10 = -0.4;
    local_14 = 0.05;
  }
  local_f0.base.count = 4;
  local_f0.surface_normal.D.i = 0;
  local_f0.surface_normal.C.i = 0;
  local_f0.surface_normal.B.i = 0;
  local_f0.surface_normal.A.i = 0;
  local_d8 = 0;
  local_d4 = 1;
  local_d0 = 2;
  local_cc = 3;
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00461000(DAT_005ae704,1);
  world_position = (CVector3f *)&DAT_02ddfa28;
  uVar4 = 0;
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_00461010(DAT_005ae704,0x8000);
  do {
    vertex_ptr = DAT_005ae704->vertex_buffer_ptr;
    local_50.x = (int)ROUND(world_position->x * _DAT_005a4290);
    local_50.y = (int)ROUND(world_position->y * _DAT_005a4290);
    local_50.z = (int)ROUND(world_position->z * _DAT_005a4290);
    engine_special_cpp_transformPoint_FUN_00530a25(&vertex_ptr->projected_vertex,&local_50);
    iVar2 = engine_drender_cpp_CDemonRenderer_depthTest_FUN_00461f80(DAT_005ae704,vertex_ptr);
    if (iVar2 != 0) {
      engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00
                (DAT_005ae704,world_position);
      engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0
                (DAT_005ae704,&local_b0,(CVector3f *)0x0);
      local_80.x = (int)ROUND(world_position->x * _DAT_005a4290);
      local_80.y = (int)ROUND(world_position->y * _DAT_005a4290);
      local_80.z = (int)ROUND(world_position->z * _DAT_005a4290);
      core_set_cpp_CDemonSet_computeLighting_FUN_0050bb50
                (0x01E57284,&local_80,(CVector3i *)0x0,0,4);
      pCVar1 = DAT_005ae704;
      if (this_ptr->weather_type == WEATHER_TYPE_SNOW) {
        local_20 = (uVar4 & 3) * 0x400000;
        iVar2 = ((int)(uVar4 & 0xc) >> 2) * 0x400000;
        DAT_005ae704->vertex_buffer_ptr->u = local_20 + 0x80000;
        local_18 = iVar2 + 0x80000;
        pCVar1->vertex_buffer_ptr->v = local_18;
        local_1c = local_20 + 0x380000;
        pCVar1->vertex_buffer_ptr[1].u = local_1c;
        pCVar1->vertex_buffer_ptr[1].v = local_18;
        pCVar1->vertex_buffer_ptr[2].u = local_1c;
        iVar2 = iVar2 + 0x380000;
        pCVar1->vertex_buffer_ptr[2].v = iVar2;
        pCVar1->vertex_buffer_ptr[3].u = local_20 + 0x80000;
        pCVar1->vertex_buffer_ptr[3].v = iVar2;
      }
      local_34 = -local_10;
      local_38 = local_14;
      local_30 = 0.0;
      local_8c.x = (int)ROUND(local_14 * _DAT_005a4290);
      local_8c.y = (int)ROUND(local_34 * _DAT_005a4290);
      local_8c.z = (int)ROUND(_DAT_005a4290 * 0.0);
      engine_special_cpp_transformAndProjectPoint_FUN_0053075c
                (&DAT_005ae704->vertex_buffer_ptr->projected_vertex,&local_8c);
      local_38 = -local_38;
      local_68.x = (int)ROUND(local_38 * _DAT_005a4290);
      local_68.y = (int)ROUND(local_34 * _DAT_005a4290);
      local_68.z = (int)ROUND(local_30 * _DAT_005a4290);
      engine_special_cpp_transformAndProjectPoint_FUN_0053075c
                (&DAT_005ae704->vertex_buffer_ptr[1].projected_vertex,&local_68);
      local_34 = -local_34;
      local_5c.x = (int)ROUND(local_38 * _DAT_005a4290);
      local_5c.y = (int)ROUND(local_34 * _DAT_005a4290);
      local_5c.z = (int)ROUND(local_30 * _DAT_005a4290);
      engine_special_cpp_transformAndProjectPoint_FUN_0053075c
                (&DAT_005ae704->vertex_buffer_ptr[2].projected_vertex,&local_5c);
      local_38 = -local_38;
      local_98.x = (int)ROUND(local_38 * _DAT_005a4290);
      local_98.y = (int)ROUND(local_34 * _DAT_005a4290);
      local_98.z = (int)ROUND(local_30 * _DAT_005a4290);
      engine_special_cpp_transformAndProjectPoint_FUN_0053075c
                (&DAT_005ae704->vertex_buffer_ptr[3].projected_vertex,&local_98);
      engine_drender_cpp_CDemonRenderer_renderBlendedDirect_FUN_004602a0(DAT_005ae704,&local_f0);
      engine_drender_cpp_CDemonRenderer_matrixPop_FUN_00460bf0();
    }
    uVar4 = uVar4 + 1;
    world_position = world_position + 1;
  } while ((int)uVar4 < 200);
  if (this_ptr->weather_type == WEATHER_TYPE_RAIN) {
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00461eb0
              (DAT_005ae704,(SMRGLTextureBasic *)&DAT_005c15d4);
    pCVar1 = DAT_005ae704;
    DAT_005ae704->vertex_buffer_ptr->u = 0x80000;
    pCVar1->vertex_buffer_ptr->v = 0x80000;
    pCVar1->vertex_buffer_ptr[1].u = 0x780000;
    pCVar1->vertex_buffer_ptr[1].v = 0x80000;
    pCVar1->vertex_buffer_ptr[2].u = 0x780000;
    pCVar1->vertex_buffer_ptr[2].v = 0xf80000;
    iVar3 = 0;
    pCVar1->vertex_buffer_ptr[3].u = 0x80000;
    iVar2 = 0;
    puVar5 = &DAT_02ddfa2c;
    pCVar1->vertex_buffer_ptr[3].v = 0xf80000;
    do {
      if (*(char *)(iVar3 + 0x2de06a8) != '\0') {
        local_2c.x = *(float *)(&DAT_02ddfa28 + iVar3 * 0xc);
        local_2c.z = *(float *)(puVar5 + 4);
        local_2c.y = *(float *)(iVar2 + 0x2de0388);
        engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00
                  (DAT_005ae704,&local_2c);
        engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0
                  (DAT_005ae704,&local_b0,(CVector3f *)0x0);
        local_b8 = 0.0;
        local_b4 = 0.0;
        local_bc = 0.2;
        local_74.x = (int)ROUND(_DAT_005a4290 * 0.2);
        local_74.y = (int)ROUND(_DAT_005a4290 * 0.0);
        local_74.z = (int)ROUND(_DAT_005a4290 * 0.0);
        engine_special_cpp_transformAndProjectPoint_FUN_0053075c
                  (&DAT_005ae704->vertex_buffer_ptr->projected_vertex,&local_74);
        local_bc = -local_bc;
        local_a4.x = (int)ROUND(local_bc * _DAT_005a4290);
        local_a4.y = (int)ROUND(local_b8 * _DAT_005a4290);
        local_a4.z = (int)ROUND(local_b4 * _DAT_005a4290);
        engine_special_cpp_transformAndProjectPoint_FUN_0053075c
                  (&DAT_005ae704->vertex_buffer_ptr[1].projected_vertex,&local_a4);
        local_b8 = 0.4;
        local_c8.x = (int)ROUND(local_bc * _DAT_005a4290);
        local_c8.y = (int)ROUND(_DAT_005a4290 * 0.4);
        local_c8.z = (int)ROUND(local_b4 * _DAT_005a4290);
        engine_special_cpp_transformAndProjectPoint_FUN_0053075c
                  (&DAT_005ae704->vertex_buffer_ptr[2].projected_vertex,&local_c8);
        local_bc = -local_bc;
        local_44.x = (int)ROUND(local_bc * _DAT_005a4290);
        local_44.y = (int)ROUND(local_b8 * _DAT_005a4290);
        local_44.z = (int)ROUND(local_b4 * _DAT_005a4290);
        engine_special_cpp_transformAndProjectPoint_FUN_0053075c
                  (&DAT_005ae704->vertex_buffer_ptr[3].projected_vertex,&local_44);
        engine_drender_cpp_CDemonRenderer_renderBlendedDirect_FUN_004602a0(DAT_005ae704,&local_f0);
        engine_drender_cpp_CDemonRenderer_matrixPop_FUN_00460bf0();
      }
      puVar5 = puVar5 + 0xc;
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 4;
    } while (iVar3 < 200);
  }
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00461000(DAT_005ae704,0);
  return;
}
