// Name: core_weather.cpp_CWeather_renderParticles_FUN_0058ad40
// Address: 0058ad40
// Address Range: [[0058ad40, 0058b46b]]
// Convention: __cdecl
// Signature: void __cdecl core_weather_cpp_CWeather_renderParticles_FUN_0058ad40(CWeather *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_weather_cpp_CWeather_renderParticles_FUN_0058ad40(CWeather *this_ptr)

{
  SRenderVertex *vertex_ptr;
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
  engine_drender_cpp_FUN_0046b670(DAT_0060b280);
  local_d4.x = local_74;
  *(int *)((int)&local_d4 + (uint)bVar7 * -8 + 4) = aiStack_70[(uint)bVar7 * -2];
  *(int *)((int)&local_d4 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
       aiStack_70[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
  if (this_ptr->weather_type == WEATHER_TYPE_RAIN) {
    local_d4.x = 0.0;
  }
  if (this_ptr->weather_type == WEATHER_TYPE_RAIN) {
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046ca00
              (DAT_0060b280,(SMRGLTextureBasic *)&DAT_0061e8f8);
    pCVar2 = DAT_0060b280;
    DAT_0060b280->vertex_buffer_ptr->u = 0x80000;
    pCVar2->vertex_buffer_ptr->v = 0x80000;
    pCVar2->vertex_buffer_ptr[1].u = 0x780000;
    pCVar2->vertex_buffer_ptr[1].v = 0x80000;
    pCVar2->vertex_buffer_ptr[2].u = 0x780000;
    pCVar2->vertex_buffer_ptr[2].v = 0xf80000;
    pCVar2->vertex_buffer_ptr[3].u = 0x80000;
    pCVar2->vertex_buffer_ptr[3].v = 0xf80000;
  }
  else {
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046ca00
              (DAT_0060b280,(SMRGLTextureBasic *)&DAT_0061e928);
  }
  core_set_cpp_CDemonSet_setLightingParameters_FUN_00530980
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
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0(DAT_0060b280,1);
  world_position = (CVector3f *)&DAT_02661fb8;
  uVar6 = 0;
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0(DAT_0060b280,0x8000);
  do {
    vertex_ptr = DAT_0060b280->vertex_buffer_ptr;
    local_a4.x = (int)ROUND(world_position->x * _DAT_005fe090);
    local_a4.y = (int)ROUND(world_position->y * _DAT_005fe090);
    local_a4.z = (int)ROUND(world_position->z * _DAT_005fe090);
    engine_special_cpp_FUN_0055d9ec(&vertex_ptr->projected_vertex,&local_a4);
    iVar3 = engine_drender_cpp_CDemonRenderer_depthTest_FUN_0046cad0(DAT_0060b280,vertex_ptr);
    if (iVar3 != 0) {
      engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0
                (DAT_0060b280,world_position);
      engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350
                (DAT_0060b280,&local_d4,(CVector3f *)0x0);
      local_50.x = (int)ROUND(world_position->x * _DAT_005fe090);
      local_50.y = (int)ROUND(world_position->y * _DAT_005fe090);
      local_50.z = (int)ROUND(world_position->z * _DAT_005fe090);
      core_set_cpp_CDemonSet_computeLighting_FUN_005317c0
                (g_CDemonSetPtr,&local_50,(CVector3i *)0x0,0,4);
      pCVar2 = DAT_0060b280;
      if (this_ptr->weather_type == WEATHER_TYPE_SNOW) {
        iVar4 = (uVar6 & 3) * 0x400000;
        local_20 = iVar4 + 0x80000;
        iVar5 = ((int)(uVar6 & 0xc) >> 2) * 0x400000;
        DAT_0060b280->vertex_buffer_ptr->u = local_20;
        iVar3 = iVar5 + 0x80000;
        pCVar2->vertex_buffer_ptr->v = iVar3;
        iVar4 = iVar4 + 0x380000;
        pCVar2->vertex_buffer_ptr[1].u = iVar4;
        pCVar2->vertex_buffer_ptr[1].v = iVar3;
        pCVar2->vertex_buffer_ptr[2].u = iVar4;
        iVar5 = iVar5 + 0x380000;
        pCVar2->vertex_buffer_ptr[2].v = iVar5;
        pCVar2->vertex_buffer_ptr[3].u = local_20;
        pCVar2->vertex_buffer_ptr[3].v = iVar5;
      }
      local_b8 = -local_18;
      local_bc = local_1c;
      local_b4 = 0.0;
      local_2c.x = (int)ROUND(local_1c * _DAT_005fe090);
      local_2c.y = (int)ROUND(local_b8 * _DAT_005fe090);
      local_2c.z = (int)ROUND(_DAT_005fe090 * 0.0);
      engine_special_cpp_FUN_0055d723(&DAT_0060b280->vertex_buffer_ptr->projected_vertex,&local_2c);
      local_bc = -local_bc;
      local_b0.x = (int)ROUND(local_bc * _DAT_005fe090);
      local_b0.y = (int)ROUND(local_b8 * _DAT_005fe090);
      local_b0.z = (int)ROUND(local_b4 * _DAT_005fe090);
      engine_special_cpp_FUN_0055d723
                (&DAT_0060b280->vertex_buffer_ptr[1].projected_vertex,&local_b0);
      local_b8 = -local_b8;
      local_8c.x = (int)ROUND(local_bc * _DAT_005fe090);
      local_8c.y = (int)ROUND(local_b8 * _DAT_005fe090);
      local_8c.z = (int)ROUND(local_b4 * _DAT_005fe090);
      engine_special_cpp_FUN_0055d723
                (&DAT_0060b280->vertex_buffer_ptr[2].projected_vertex,&local_8c);
      local_bc = -local_bc;
      local_68.x = (int)ROUND(local_bc * _DAT_005fe090);
      local_68.y = (int)ROUND(local_b8 * _DAT_005fe090);
      local_68.z = (int)ROUND(local_b4 * _DAT_005fe090);
      engine_special_cpp_FUN_0055d723
                (&DAT_0060b280->vertex_buffer_ptr[3].projected_vertex,&local_68);
      engine_drender_cpp_CDemonRenderer_renderBlendedDirect_FUN_0046ab50(DAT_0060b280,&local_fc);
      engine_drender_cpp_pop_FUN_0046b4a0();
    }
    uVar6 = uVar6 + 1;
    world_position = world_position + 1;
  } while ((int)uVar6 < 200);
  if (this_ptr->weather_type == WEATHER_TYPE_RAIN) {
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046ca00
              (DAT_0060b280,(SMRGLTextureBasic *)&DAT_0061e910);
    pCVar2 = DAT_0060b280;
    DAT_0060b280->vertex_buffer_ptr->u = 0x80000;
    pCVar2->vertex_buffer_ptr->v = 0x80000;
    pCVar2->vertex_buffer_ptr[1].u = 0x780000;
    pCVar2->vertex_buffer_ptr[1].v = 0x80000;
    pCVar2->vertex_buffer_ptr[2].u = 0x780000;
    pCVar2->vertex_buffer_ptr[2].v = 0xf80000;
    iVar3 = 0;
    pCVar2->vertex_buffer_ptr[3].u = 0x80000;
    local_10 = 0;
    local_14 = 0;
    pCVar2->vertex_buffer_ptr[3].v = 0xf80000;
    do {
      if (*(char *)(iVar3 + 0x2662c38) != '\0') {
        fVar1 = *(float *)(local_10 + 0x2662918);
        iVar4 = (uint)bVar7 * -8 + local_14;
        local_c8.x = *(float *)(&DAT_02661fb8 + local_14);
        *(uint *)((int)&local_c8 + (uint)bVar7 * -8 + 4) =
             *(uint *)(&DAT_02661fbc + iVar4);
        *(uint *)((int)&local_c8 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
             *(uint *)((int)(&DAT_02661fbc + iVar4) + ((uint)bVar7 * -2 + 1) * 4);
        local_c8.y = fVar1;
        engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0
                  (DAT_0060b280,&local_c8);
        engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350
                  (DAT_0060b280,&local_d4,(CVector3f *)0x0);
        local_40 = 0.0;
        local_3c = 0.0;
        local_44 = 0.2;
        local_80.x = (int)ROUND(_DAT_005fe090 * 0.2);
        local_80.y = (int)ROUND(_DAT_005fe090 * 0.0);
        local_80.z = (int)ROUND(_DAT_005fe090 * 0.0);
        engine_special_cpp_FUN_0055d723
                  (&DAT_0060b280->vertex_buffer_ptr->projected_vertex,&local_80);
        local_44 = -local_44;
        local_5c.x = (int)ROUND(local_44 * _DAT_005fe090);
        local_5c.y = (int)ROUND(local_40 * _DAT_005fe090);
        local_5c.z = (int)ROUND(local_3c * _DAT_005fe090);
        engine_special_cpp_FUN_0055d723
                  (&DAT_0060b280->vertex_buffer_ptr[1].projected_vertex,&local_5c);
        local_40 = 0.4;
        local_38.x = (int)ROUND(local_44 * _DAT_005fe090);
        local_38.y = (int)ROUND(_DAT_005fe090 * 0.4);
        local_38.z = (int)ROUND(local_3c * _DAT_005fe090);
        engine_special_cpp_FUN_0055d723
                  (&DAT_0060b280->vertex_buffer_ptr[2].projected_vertex,&local_38);
        local_44 = -local_44;
        local_98.x = (int)ROUND(local_44 * _DAT_005fe090);
        local_98.y = (int)ROUND(local_40 * _DAT_005fe090);
        local_98.z = (int)ROUND(local_3c * _DAT_005fe090);
        engine_special_cpp_FUN_0055d723
                  (&DAT_0060b280->vertex_buffer_ptr[3].projected_vertex,&local_98);
        engine_drender_cpp_CDemonRenderer_renderBlendedDirect_FUN_0046ab50(DAT_0060b280,&local_fc);
        engine_drender_cpp_pop_FUN_0046b4a0();
      }
      iVar3 = iVar3 + 1;
      local_14 = local_14 + 0xc;
      local_10 = local_10 + 4;
    } while (iVar3 < 200);
  }
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0(DAT_0060b280,0);
  return;
}
