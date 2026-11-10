// Name: core_weather.cpp_CWeather_renderParticles_FUN_005ae890
// Address: 005ae890
// Address Range: [[005ae890, 005aefbb]]
// Convention: __cdecl
// Signature: void __cdecl core_weather_cpp_CWeather_renderParticles_FUN_005ae890(CWeather *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_weather_cpp_CWeather_renderParticles_FUN_005ae890(CWeather *this_ptr)

{
  SProjectedVertex *output;
  float fVar1;
  CDemonRenderer *pCVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  CVector3f *world_position;
  uint uVar6;
  byte bVar7;
  int aiStackY_10bc [1002];
  SMRGLHeaderPrimitive local_fc;
  uint local_e4;
  uint local_e0;
  uint local_dc;
  uint local_d8;
  CVector3f local_d4;
  CVector3f local_c8;
  float local_bc;
  float local_b8;
  float local_b4;
  CVector3i local_b0;
  CVector3i local_a4;
  CVector3i local_98;
  CVector3i local_8c;
  CVector3i local_80;
  float local_74;
  int aiStack_70 [2];
  CVector3i local_68;
  CVector3i local_5c;
  CVector3i local_50;
  float local_44;
  float local_40;
  float local_3c;
  CVector3i local_38;
  CVector3i local_2c;
  int local_20;
  float local_1c;
  float local_18;
  int local_14;
  int local_10;
  
  bVar7 = 0;
  if (this_ptr->weather_type == WEATHER_TYPE_NONE) {
    return;
  }
  engine_matrix_c_FUN_00483b70(DAT_00612560);
  local_d4.x = local_74;
  *(int *)((int)&local_d4 + (uint)bVar7 * -8 + 4) = aiStack_70[(uint)bVar7 * -2];
  *(int *)((int)&local_d4 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
       aiStack_70[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
  if (this_ptr->weather_type == WEATHER_TYPE_RAIN) {
    local_d4.x = 0.0;
  }
  if (this_ptr->weather_type == WEATHER_TYPE_RAIN) {
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00484f00
              (DAT_00612560,(SMRGLTextureBasic *)&DAT_00626050);
    pCVar2 = DAT_00612560;
    *(uint *)(DAT_00612560->vertex_buffer_ptr + 0x18) = 0x80000;
    *(uint *)(pCVar2->vertex_buffer_ptr + 0x1c) = 0x80000;
    *(uint *)(pCVar2->vertex_buffer_ptr + 0x48) = 0x780000;
    *(uint *)(pCVar2->vertex_buffer_ptr + 0x4c) = 0x80000;
    *(uint *)(pCVar2->vertex_buffer_ptr + 0x78) = 0x780000;
    *(uint *)(pCVar2->vertex_buffer_ptr + 0x7c) = 0xf80000;
    *(uint *)(pCVar2->vertex_buffer_ptr + 0xa8) = 0x80000;
    *(uint *)(pCVar2->vertex_buffer_ptr + 0xac) = 0xf80000;
  }
  else {
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00484f00
              (DAT_00612560,(SMRGLTextureBasic *)&DAT_00626080);
  }
  core_set_cpp_CDemonSet_setLightingParameters_FUN_00551c30
            (g_CDemonSetPtr,(CVector3f *)0x0,(UOrientationVector *)0x0,(CVector3f *)0x0,
             (CVector3f *)0x0,(CMatrix3x3f *)0x0);
  local_1c = 0.1;
  local_18 = 0.1;
  if (this_ptr->weather_type == WEATHER_TYPE_RAIN) {
    local_18 = -0.4;
    local_1c = 0.05;
  }
  local_fc.base.count = 4;
  local_fc.surface_normal.D.i = 0;
  local_fc.surface_normal.C.i = 0;
  local_fc.surface_normal.B.i = 0;
  local_fc.surface_normal.A.i = 0;
  local_e4 = 0;
  local_e0 = 1;
  local_dc = 2;
  local_d8 = 3;
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00483dd0(DAT_00612560,1);
  world_position = (CVector3f *)&DAT_02c997f8;
  uVar6 = 0;
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_00483de0(DAT_00612560,0x8000);
  do {
    output = (SProjectedVertex *)DAT_00612560->vertex_buffer_ptr;
    local_a4.x = (int)ROUND(world_position->x * _DAT_00607f90);
    local_a4.y = (int)ROUND(world_position->y * _DAT_00607f90);
    local_a4.z = (int)ROUND(world_position->z * _DAT_00607f90);
    engine_special_cpp_FUN_0058043c(output,&local_a4);
    iVar3 = engine_drender_cpp_CDemonRenderer_depthTest_FUN_00484fd0
                      (DAT_00612560,(SRenderVertex *)output);
    if (iVar3 != 0) {
      engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0
                (DAT_00612560,world_position);
      engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00483850
                (DAT_00612560,&local_d4,(CVector3f *)0x0);
      local_50.x = (int)ROUND(world_position->x * _DAT_00607f90);
      local_50.y = (int)ROUND(world_position->y * _DAT_00607f90);
      local_50.z = (int)ROUND(world_position->z * _DAT_00607f90);
      core_set_cpp_CDemonSet_computeLighting_FUN_00552a70
                (g_CDemonSetPtr,&local_50,(CVector3i *)0x0,0,4);
      pCVar2 = DAT_00612560;
      if (this_ptr->weather_type == WEATHER_TYPE_SNOW) {
        iVar4 = (uVar6 & 3) * 0x400000;
        local_20 = iVar4 + 0x80000;
        iVar5 = ((int)(uVar6 & 0xc) >> 2) * 0x400000;
        *(int *)(DAT_00612560->vertex_buffer_ptr + 0x18) = local_20;
        iVar3 = iVar5 + 0x80000;
        *(int *)(pCVar2->vertex_buffer_ptr + 0x1c) = iVar3;
        iVar4 = iVar4 + 0x380000;
        *(int *)(pCVar2->vertex_buffer_ptr + 0x48) = iVar4;
        *(int *)(pCVar2->vertex_buffer_ptr + 0x4c) = iVar3;
        *(int *)(pCVar2->vertex_buffer_ptr + 0x78) = iVar4;
        iVar5 = iVar5 + 0x380000;
        *(int *)(pCVar2->vertex_buffer_ptr + 0x7c) = iVar5;
        *(int *)(pCVar2->vertex_buffer_ptr + 0xa8) = local_20;
        *(int *)(pCVar2->vertex_buffer_ptr + 0xac) = iVar5;
      }
      local_b8 = -local_18;
      local_bc = local_1c;
      local_b4 = 0.0;
      local_2c.x = (int)ROUND(local_1c * _DAT_00607f90);
      local_2c.y = (int)ROUND(local_b8 * _DAT_00607f90);
      local_2c.z = (int)ROUND(_DAT_00607f90 * 0.0);
      engine_special_cpp_FUN_00580173((SProjectedVertex *)DAT_00612560->vertex_buffer_ptr,&local_2c)
      ;
      local_bc = -local_bc;
      local_b0.x = (int)ROUND(local_bc * _DAT_00607f90);
      local_b0.y = (int)ROUND(local_b8 * _DAT_00607f90);
      local_b0.z = (int)ROUND(local_b4 * _DAT_00607f90);
      engine_special_cpp_FUN_00580173
                ((SProjectedVertex *)(DAT_00612560->vertex_buffer_ptr + 0x30),&local_b0);
      local_b8 = -local_b8;
      local_8c.x = (int)ROUND(local_bc * _DAT_00607f90);
      local_8c.y = (int)ROUND(local_b8 * _DAT_00607f90);
      local_8c.z = (int)ROUND(local_b4 * _DAT_00607f90);
      engine_special_cpp_FUN_00580173
                ((SProjectedVertex *)(DAT_00612560->vertex_buffer_ptr + 0x60),&local_8c);
      local_bc = -local_bc;
      local_68.x = (int)ROUND(local_bc * _DAT_00607f90);
      local_68.y = (int)ROUND(local_b8 * _DAT_00607f90);
      local_68.z = (int)ROUND(local_b4 * _DAT_00607f90);
      engine_special_cpp_FUN_00580173
                ((SProjectedVertex *)(DAT_00612560->vertex_buffer_ptr + 0x90),&local_68);
      engine_drender_cpp_CDemonRenderer_renderBlendedDirect_FUN_00483050(DAT_00612560,&local_fc);
      engine_matrix_c_pop_FUN_004839a0();
    }
    uVar6 = uVar6 + 1;
    world_position = world_position + 1;
  } while ((int)uVar6 < 200);
  if (this_ptr->weather_type == WEATHER_TYPE_RAIN) {
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00484f00
              (DAT_00612560,(SMRGLTextureBasic *)&DAT_00626068);
    pCVar2 = DAT_00612560;
    *(uint *)(DAT_00612560->vertex_buffer_ptr + 0x18) = 0x80000;
    *(uint *)(pCVar2->vertex_buffer_ptr + 0x1c) = 0x80000;
    *(uint *)(pCVar2->vertex_buffer_ptr + 0x48) = 0x780000;
    *(uint *)(pCVar2->vertex_buffer_ptr + 0x4c) = 0x80000;
    *(uint *)(pCVar2->vertex_buffer_ptr + 0x78) = 0x780000;
    *(uint *)(pCVar2->vertex_buffer_ptr + 0x7c) = 0xf80000;
    iVar3 = 0;
    *(uint *)(pCVar2->vertex_buffer_ptr + 0xa8) = 0x80000;
    local_10 = 0;
    local_14 = 0;
    *(uint *)(pCVar2->vertex_buffer_ptr + 0xac) = 0xf80000;
    do {
      if (*(char *)(iVar3 + 0x2c9a478) != '\0') {
        fVar1 = *(float *)(local_10 + 0x2c9a158);
        iVar4 = (uint)bVar7 * -8 + local_14;
        local_c8.x = *(float *)(&DAT_02c997f8 + local_14);
        *(uint *)((int)&local_c8 + (uint)bVar7 * -8 + 4) =
             *(uint *)(&DAT_02c997fc + iVar4);
        *(uint *)((int)&local_c8 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
             *(uint *)((int)(&DAT_02c997fc + iVar4) + ((uint)bVar7 * -2 + 1) * 4);
        local_c8.y = fVar1;
        engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0
                  (DAT_00612560,&local_c8);
        engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00483850
                  (DAT_00612560,&local_d4,(CVector3f *)0x0);
        local_40 = 0.0;
        local_3c = 0.0;
        local_44 = 0.2;
        local_80.x = (int)ROUND(_DAT_00607f90 * 0.2);
        local_80.y = (int)ROUND(_DAT_00607f90 * 0.0);
        local_80.z = (int)ROUND(_DAT_00607f90 * 0.0);
        engine_special_cpp_FUN_00580173
                  ((SProjectedVertex *)DAT_00612560->vertex_buffer_ptr,&local_80);
        local_44 = -local_44;
        local_5c.x = (int)ROUND(local_44 * _DAT_00607f90);
        local_5c.y = (int)ROUND(local_40 * _DAT_00607f90);
        local_5c.z = (int)ROUND(local_3c * _DAT_00607f90);
        engine_special_cpp_FUN_00580173
                  ((SProjectedVertex *)(DAT_00612560->vertex_buffer_ptr + 0x30),&local_5c);
        local_40 = 0.4;
        local_38.x = (int)ROUND(local_44 * _DAT_00607f90);
        local_38.y = (int)ROUND(_DAT_00607f90 * 0.4);
        local_38.z = (int)ROUND(local_3c * _DAT_00607f90);
        engine_special_cpp_FUN_00580173
                  ((SProjectedVertex *)(DAT_00612560->vertex_buffer_ptr + 0x60),&local_38);
        local_44 = -local_44;
        local_98.x = (int)ROUND(local_44 * _DAT_00607f90);
        local_98.y = (int)ROUND(local_40 * _DAT_00607f90);
        local_98.z = (int)ROUND(local_3c * _DAT_00607f90);
        engine_special_cpp_FUN_00580173
                  ((SProjectedVertex *)(DAT_00612560->vertex_buffer_ptr + 0x90),&local_98);
        engine_drender_cpp_CDemonRenderer_renderBlendedDirect_FUN_00483050(DAT_00612560,&local_fc);
        engine_matrix_c_pop_FUN_004839a0();
      }
      iVar3 = iVar3 + 1;
      local_14 = local_14 + 0xc;
      local_10 = local_10 + 4;
    } while (iVar3 < 200);
  }
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00483dd0(DAT_00612560,0);
  return;
}
