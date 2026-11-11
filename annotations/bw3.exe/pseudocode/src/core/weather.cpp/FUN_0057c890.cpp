// Name: core_weather.cpp_FUN_0057c890
// Address: 0057c890
// Address Range: [[0057c890, 0057d04c]]
// Convention: __cdecl
// Signature: void __cdecl core_weather_cpp_FUN_0057c890(CWeather *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_weather_cpp_FUN_0057c890(CWeather *this_ptr)

{
  SRenderVertex *vertex_ptr;
  float fVar1;
  CDemonRenderer *pCVar2;
  int iVar3;
  int iVar4;
  CVector3f *world_position;
  uint uVar5;
  byte bVar6;
  int aiStackY_1078 [984];
  SMRGLHeaderPrimitive local_f4;
  uint local_dc;
  uint local_d8;
  uint local_d4;
  uint local_d0;
  CVector3i local_cc;
  CVector3i local_c0;
  CVector3i local_b4;
  CVector3i local_a8;
  CVector3i local_9c;
  CVector3f local_90;
  CVector3f local_84;
  float local_78;
  int aiStack_74 [2];
  CVector3i local_6c;
  CVector3i local_60;
  CVector3i local_54;
  CVector3i local_48;
  CVector3i local_3c;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  int local_18;
  float local_14;
  float local_10;
  int local_c;
  int local_8;
  
  bVar6 = 0;
  if (this_ptr->weather_type != WEATHER_TYPE_NONE) {
    engine_matrix_c_FUN_0046d250(DAT_005f2afc);
    local_84.x = local_78;
    *(int *)((int)&local_84 + (uint)bVar6 * -8 + 4) = aiStack_74[(uint)bVar6 * -2];
    *(int *)((int)&local_84 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
         aiStack_74[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
    if ((this_ptr->weather_type == WEATHER_TYPE_RAIN) || (this_ptr->weather_type == 5)) {
      local_84.x = 0.0;
    }
    if ((this_ptr->weather_type == WEATHER_TYPE_RAIN) || (this_ptr->weather_type == 5)) {
      engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046e5e0
                (DAT_005f2afc,(SMRGLTextureBasic *)&DAT_006071f4);
      pCVar2 = DAT_005f2afc;
      DAT_005f2afc->vertex_buffer_ptr->u = 0x80000;
      pCVar2->vertex_buffer_ptr->v = 0x80000;
      pCVar2->vertex_buffer_ptr[1].u = 0x780000;
      pCVar2->vertex_buffer_ptr[1].v = 0x80000;
      pCVar2->vertex_buffer_ptr[2].u = 0x780000;
      pCVar2->vertex_buffer_ptr[2].v = 0xf80000;
      pCVar2->vertex_buffer_ptr[3].u = 0x80000;
      pCVar2->vertex_buffer_ptr[3].v = 0xf80000;
    }
    else {
      engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046e5e0
                (DAT_005f2afc,(SMRGLTextureBasic *)&DAT_00607224);
    }
    core_set_cpp_CDemonSet_setLightingParameters_FUN_005375c0
              (g_CDemonSetPtr,(CVector3f *)0x0,(UOrientationVector *)0x0,(CVector3f *)0x0,
               (CVector3f *)0x0,(CMatrix3x3f *)0x0);
    local_10 = 0.1;
    local_14 = 0.1;
    if ((this_ptr->weather_type == WEATHER_TYPE_RAIN) || (this_ptr->weather_type == 5)) {
      local_14 = -0.4;
      local_10 = 0.05;
    }
    local_f4.base.count = 4;
    local_f4.surface_normal.D.i = 0;
    local_f4.surface_normal.C.i = 0;
    local_f4.surface_normal.B.i = 0;
    local_f4.surface_normal.A.i = 0;
    local_dc = 0;
    local_d8 = 1;
    local_d4 = 2;
    local_d0 = 3;
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0(DAT_005f2afc,1);
    engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0(DAT_005f2afc,0x8000);
    uVar5 = 0;
    if (0 < (int)this_ptr[1].weather_type) {
      world_position = (CVector3f *)&DAT_02d0c208;
      do {
        vertex_ptr = DAT_005f2afc->vertex_buffer_ptr;
        local_c0.x = (int)ROUND(world_position->x * _DAT_005e6360);
        local_c0.y = (int)ROUND(world_position->y * _DAT_005e6360);
        local_c0.z = (int)ROUND(world_position->z * _DAT_005e6360);
        engine_special_cpp_FUN_0056356c(&vertex_ptr->projected_vertex,&local_c0);
        iVar3 = engine_drender_cpp_CDemonRenderer_depthTest_FUN_0046e6b0(DAT_005f2afc,vertex_ptr);
        if (iVar3 != 0) {
          engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90
                    (DAT_005f2afc,world_position);
          engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30
                    (DAT_005f2afc,&local_84,(CVector3f *)0x0);
          local_48.x = (int)ROUND(world_position->x * _DAT_005e6360);
          local_48.y = (int)ROUND(world_position->y * _DAT_005e6360);
          local_48.z = (int)ROUND(world_position->z * _DAT_005e6360);
          core_set_cpp_CDemonSet_computeLighting_FUN_00538400
                    (g_CDemonSetPtr,&local_48,(CVector3i *)0x0,0,4);
          pCVar2 = DAT_005f2afc;
          if (this_ptr->weather_type == WEATHER_TYPE_SNOW) {
            local_18 = ((int)(uVar5 & 0xc) >> 2) * 0x400000;
            iVar4 = (uVar5 & 3) * 0x400000;
            iVar3 = iVar4 + 0x80000;
            DAT_005f2afc->vertex_buffer_ptr->u = iVar3;
            pCVar2->vertex_buffer_ptr->v = local_18 + 0x80000;
            iVar4 = iVar4 + 0x380000;
            pCVar2->vertex_buffer_ptr[1].u = iVar4;
            pCVar2->vertex_buffer_ptr[1].v = local_18 + 0x80000;
            pCVar2->vertex_buffer_ptr[2].u = iVar4;
            pCVar2->vertex_buffer_ptr[2].v = local_18 + 0x380000;
            pCVar2->vertex_buffer_ptr[3].u = iVar3;
            pCVar2->vertex_buffer_ptr[3].v = local_18 + 0x380000;
          }
          local_20 = -local_14;
          local_24 = local_10;
          local_1c = 0.0;
          local_54.x = (int)ROUND(local_10 * _DAT_005e6360);
          local_54.y = (int)ROUND(local_20 * _DAT_005e6360);
          local_54.z = (int)ROUND(_DAT_005e6360 * 0.0);
          engine_special_cpp_FUN_005632a3
                    (&DAT_005f2afc->vertex_buffer_ptr->projected_vertex,&local_54);
          local_24 = -local_24;
          local_a8.x = (int)ROUND(local_24 * _DAT_005e6360);
          local_a8.y = (int)ROUND(local_20 * _DAT_005e6360);
          local_a8.z = (int)ROUND(local_1c * _DAT_005e6360);
          engine_special_cpp_FUN_005632a3
                    (&DAT_005f2afc->vertex_buffer_ptr[1].projected_vertex,&local_a8);
          local_20 = -local_20;
          local_60.x = (int)ROUND(local_24 * _DAT_005e6360);
          local_60.y = (int)ROUND(local_20 * _DAT_005e6360);
          local_60.z = (int)ROUND(local_1c * _DAT_005e6360);
          engine_special_cpp_FUN_005632a3
                    (&DAT_005f2afc->vertex_buffer_ptr[2].projected_vertex,&local_60);
          local_24 = -local_24;
          local_9c.x = (int)ROUND(local_24 * _DAT_005e6360);
          local_9c.y = (int)ROUND(local_20 * _DAT_005e6360);
          local_9c.z = (int)ROUND(local_1c * _DAT_005e6360);
          engine_special_cpp_FUN_005632a3
                    (&DAT_005f2afc->vertex_buffer_ptr[3].projected_vertex,&local_9c);
          engine_drender_cpp_CDemonRenderer_renderBlendedDirect_FUN_0046c730(DAT_005f2afc,&local_f4)
          ;
          engine_matrix_c_pop_FUN_0046d080();
        }
        uVar5 = uVar5 + 1;
        world_position = world_position + 1;
      } while ((int)uVar5 < (int)this_ptr[1].weather_type);
    }
    if ((this_ptr->weather_type == WEATHER_TYPE_RAIN) || (this_ptr->weather_type == 5)) {
      engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046e5e0
                (DAT_005f2afc,(SMRGLTextureBasic *)&DAT_0060720c);
      pCVar2 = DAT_005f2afc;
      DAT_005f2afc->vertex_buffer_ptr->u = 0x80000;
      pCVar2->vertex_buffer_ptr->v = 0x80000;
      pCVar2->vertex_buffer_ptr[1].u = 0x780000;
      pCVar2->vertex_buffer_ptr[1].v = 0x80000;
      pCVar2->vertex_buffer_ptr[2].u = 0x780000;
      pCVar2->vertex_buffer_ptr[2].v = 0xf80000;
      pCVar2->vertex_buffer_ptr[3].u = 0x80000;
      pCVar2->vertex_buffer_ptr[3].v = 0xf80000;
      iVar3 = 0;
      if (0 < (int)this_ptr[1].weather_type) {
        local_8 = 0;
        local_c = 0;
        do {
          if (*(char *)(iVar3 + 0x2d1fa88) != '\0') {
            fVar1 = *(float *)(local_8 + 0x2d1db48);
            iVar4 = (uint)bVar6 * -8 + local_c;
            local_90.x = *(float *)(&DAT_02d0c208 + local_c);
            *(uint *)((int)&local_90 + (uint)bVar6 * -8 + 4) =
                 *(uint *)(&DAT_02d0c20c + iVar4);
            *(uint *)((int)&local_90 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
                 *(uint *)((int)(&DAT_02d0c20c + iVar4) + ((uint)bVar6 * -2 + 1) * 4);
            local_90.y = fVar1;
            engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90
                      (DAT_005f2afc,&local_90);
            engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30
                      (DAT_005f2afc,&local_84,(CVector3f *)0x0);
            local_30 = 0.2;
            local_2c = 0.0;
            local_28 = 0.0;
            local_b4.x = (int)ROUND(_DAT_005e6360 * 0.2);
            local_b4.y = (int)ROUND(_DAT_005e6360 * 0.0);
            local_b4.z = (int)ROUND(_DAT_005e6360 * 0.0);
            engine_special_cpp_FUN_005632a3
                      (&DAT_005f2afc->vertex_buffer_ptr->projected_vertex,&local_b4);
            local_30 = -local_30;
            local_cc.x = (int)ROUND(local_30 * _DAT_005e6360);
            local_cc.y = (int)ROUND(local_2c * _DAT_005e6360);
            local_cc.z = (int)ROUND(local_28 * _DAT_005e6360);
            engine_special_cpp_FUN_005632a3
                      (&DAT_005f2afc->vertex_buffer_ptr[1].projected_vertex,&local_cc);
            local_2c = 0.4;
            local_6c.x = (int)ROUND(local_30 * _DAT_005e6360);
            local_6c.y = (int)ROUND(_DAT_005e6360 * 0.4);
            local_6c.z = (int)ROUND(local_28 * _DAT_005e6360);
            engine_special_cpp_FUN_005632a3
                      (&DAT_005f2afc->vertex_buffer_ptr[2].projected_vertex,&local_6c);
            local_30 = -local_30;
            local_3c.x = (int)ROUND(local_30 * _DAT_005e6360);
            local_3c.y = (int)ROUND(local_2c * _DAT_005e6360);
            local_3c.z = (int)ROUND(local_28 * _DAT_005e6360);
            engine_special_cpp_FUN_005632a3
                      (&DAT_005f2afc->vertex_buffer_ptr[3].projected_vertex,&local_3c);
            engine_drender_cpp_CDemonRenderer_renderBlendedDirect_FUN_0046c730
                      (DAT_005f2afc,&local_f4);
            engine_matrix_c_pop_FUN_0046d080();
          }
          local_8 = local_8 + 4;
          iVar3 = iVar3 + 1;
          local_c = local_c + 0xc;
        } while (iVar3 < (int)this_ptr[1].weather_type);
      }
    }
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0(DAT_005f2afc,0);
    return;
  }
  return;
}
