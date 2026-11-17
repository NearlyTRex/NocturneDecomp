// Name: core_water.cpp_CWater_render_FUN_005a9f10
// Address: 005a9f10
// Address Range: [[005a9f10, 005aa541]]
// Convention: __cdecl
// Signature: void __cdecl core_water_cpp_CWater_render_FUN_005a9f10(CWater *this_ptr,int render_mode)

#include "nocturne.h"

void __cdecl core_water_cpp_CWater_render_FUN_005a9f10(CWater *this_ptr,int render_mode)

{
  float fVar1;
  float fVar2;
  float fVar3;
  byte bVar4;
  float10 fVar5;
  double dVar6;
  double dVar7;
  int unaff_retaddr;
  int aiStackY_106c [1011];
  CVector3i CStack_90;
  CVector3f local_84;
  CVector3i local_78;
  CVector3i local_6c;
  CVector3i local_60;
  CVector3f local_54 [2];
  float fStack_34;
  float local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  
  bVar4 = 0;
  if (ABS(this_ptr->water_level_y) != 0.0) {
    g_WaterAnimationTimer = g_WaterAnimationTimer + g_GlobalDeltaTimeInt;
    if (g_INT_00625c98 < g_WaterAnimationTimer) {
      g_WaterAnimationTimer = g_WaterAnimationTimer - g_INT_00625c98;
      g_INT_02c8afd8 = g_INT_02c8afd8 + 1;
      if (0xf < g_INT_02c8afd8) {
        g_INT_02c8afd8 = 0;
      }
    }
    local_30 = g_CGamePtr->delta_time_float;
    fVar3 = g_FLOAT_02c8afc4 * local_30;
    fVar1 = (float)65536;
    fVar2 = (float)g_INT_02c93010;
    CStack_90.y = 0x5a9f9f;
    dVar6 = round
                      ((double)(g_FLOAT_02c8afc0 * local_30 * fVar1 + (float)g_INT_02c9300c));
    CStack_90.x = 0x5a9fa6;
    dVar7 = round((double)(fVar3 * fVar1 + fVar2));
    g_INT_02c9300c = (int)ROUND(dVar6);
    g_INT_02c93010 = (int)ROUND(dVar7);
    if (0xffffff < g_INT_02c9300c) {
      g_INT_02c9300c = g_INT_02c9300c + -0x1000000;
    }
    if (g_INT_02c9300c < 0) {
      g_INT_02c9300c._3_1_ = g_INT_02c9300c._3_1_ + '\x01';
    }
    if (0xffffff < g_INT_02c93010) {
      g_INT_02c93010 = g_INT_02c93010 + -0x1000000;
    }
    if (g_INT_02c93010 < 0) {
      g_INT_02c93010._3_1_ = g_INT_02c93010._3_1_ + '\x01';
    }
    g_WaterRenderQuad.vertices[0].texture_u = g_INT_02c9300c;
    g_WaterRenderQuad.vertices[0].texture_v = g_INT_02c93010;
    g_WaterRenderQuad.vertices[1].texture_u = g_INT_02c9300c + 0x1000000;
    g_WaterRenderQuad.vertices[1].texture_v = g_INT_02c93010;
    g_WaterRenderQuad.vertices[2].texture_v = g_INT_02c93010 + 0x1000000;
    g_WaterRenderQuad.vertices[3].texture_u = g_INT_02c9300c;
    g_WaterAnimationBlend =
         (int)(((longlong)g_WaterAnimationTimer * 0xffff) / (longlong)g_INT_00625c98);
    if (g_WaterAnimationBlend < 0x10000) {
      if (g_WaterAnimationBlend < 0) {
        g_WaterAnimationBlend = 0;
      }
    }
    else {
      g_WaterAnimationBlend = 0xffff;
    }
    g_WaterRenderQuad.vertices[2].texture_u = g_WaterRenderQuad.vertices[1].texture_u;
    g_WaterRenderQuad.vertices[3].texture_v = g_WaterRenderQuad.vertices[2].texture_v;
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00484f00
              (g_CDemonRenderer_PTR_00612560,g_WaterTextures + g_INT_02c8afd8);
    g_PerspectiveReciprocal = 0;
    g_WaterAnimationPhase =
         g_CGamePtr->delta_time_float * 3.141593f * (float)0.5 *
         (float)2 + g_WaterAnimationPhase;
    local_2c = 0;
    if (0 < g_VisibleWaterTileCount) {
      local_28 = 0;
      do {
        local_24 = *(int *)((int)g_VisibleWaterTilesX + local_28);
        local_20 = *(int *)((int)g_VisibleWaterTilesY + local_28);
        fStack_34 = (float)local_24;
        local_30 = (float)local_20;
        local_84.x = fStack_34 * this_ptr->tile_size + g_FLOAT_02c8afc8;
        local_84.y = this_ptr->water_level_y + g_FLOAT_02c8afcc;
        local_84.z = local_30 * this_ptr->tile_size + g_FLOAT_02c8afd0;
        local_1c = local_20;
        engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0
                  (g_CDemonRenderer_PTR_00612560,&local_84);
        local_54[0].x = local_84.x;
        *(uint *)((int)local_54 + (uint)bVar4 * -8 + 4) =
             *(uint *)((int)&local_84 + (uint)bVar4 * -8 + 4);
        *(uint *)((int)local_54 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
             *(uint *)((int)&local_84 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
        local_84.x = 0.0;
        local_84.y = 0.0;
        local_84.z = 0.0;
        if (this_ptr->wave_animation_enabled != 0) {
          fVar5 = (float10)fsin((float10)local_30 * (float10)3.141593f *
                                (float10)0.5 +
                                (float10)fStack_34 * (float10)3.141593f +
                                (float10)g_WaterAnimationPhase);
          local_84.y = (float)(fVar5 * (float10)g_FLOAT_00625c94);
        }
        local_6c.x = (int)ROUND(256.0f * 0.0);
        local_6c.y = (int)ROUND(local_84.y * 256.0f);
        local_6c.z = (int)ROUND(256.0f * 0.0);
        engine_special_cpp_transformAndProjectPoint_FUN_00580173
                  (&g_CDemonRenderer_PTR_00612560->vertex_buffer_ptr->projected_vertex,&local_6c);
        core_set_cpp_CDemonSet_computeVertexOmniLighting_FUN_00552d40
                  (g_CDemonSetPtr,&local_84,local_54,0);
        local_84.x = this_ptr->tile_size;
        if (this_ptr->wave_animation_enabled != 0) {
          local_1c = local_24 + 1;
          fVar5 = (float10)fsin((float10)local_20 * (float10)3.141593f *
                                (float10)0.5 +
                                (float10)local_1c * (float10)3.141593f +
                                (float10)g_WaterAnimationPhase);
          local_84.y = (float)(fVar5 * (float10)g_FLOAT_00625c94);
        }
        local_78.x = (int)ROUND(local_84.x * 256.0f);
        local_78.y = (int)ROUND(local_84.y * 256.0f);
        local_78.z = (int)ROUND(local_84.z * 256.0f);
        engine_special_cpp_transformAndProjectPoint_FUN_00580173
                  (&g_CDemonRenderer_PTR_00612560->vertex_buffer_ptr[1].projected_vertex,&local_78);
        core_set_cpp_CDemonSet_computeVertexOmniLighting_FUN_00552d40
                  (g_CDemonSetPtr,&local_84,local_54,1);
        local_84.z = this_ptr->tile_size;
        if (this_ptr->wave_animation_enabled != 0) {
          local_1c = local_24 + 1;
          fVar5 = (float10)fsin((float10)(local_20 + 1) * (float10)3.141593f *
                                (float10)0.5 +
                                (float10)local_1c * (float10)3.141593f +
                                (float10)g_WaterAnimationPhase);
          local_84.y = (float)(fVar5 * (float10)g_FLOAT_00625c94);
        }
        local_60.x = (int)ROUND(local_84.x * 256.0f);
        local_60.y = (int)ROUND(local_84.y * 256.0f);
        local_60.z = (int)ROUND(local_84.z * 256.0f);
        engine_special_cpp_transformAndProjectPoint_FUN_00580173
                  (&g_CDemonRenderer_PTR_00612560->vertex_buffer_ptr[2].projected_vertex,&local_60);
        core_set_cpp_CDemonSet_computeVertexOmniLighting_FUN_00552d40
                  (g_CDemonSetPtr,&local_84,local_54,2);
        local_84.x = 0.0;
        if (this_ptr->wave_animation_enabled != 0) {
          local_1c = local_24;
          fVar5 = (float10)fsin((float10)(local_20 + 1) * (float10)3.141593f *
                                (float10)0.5 +
                                (float10)local_24 * (float10)3.141593f +
                                (float10)g_WaterAnimationPhase);
          local_84.y = (float)(fVar5 * (float10)g_FLOAT_00625c94);
        }
        CStack_90.x = (int)ROUND(256.0f * 0.0);
        CStack_90.y = (int)ROUND(local_84.y * 256.0f);
        CStack_90.z = (int)ROUND(local_84.z * 256.0f);
        engine_special_cpp_transformAndProjectPoint_FUN_00580173
                  (&g_CDemonRenderer_PTR_00612560->vertex_buffer_ptr[3].projected_vertex,&CStack_90)
        ;
        core_set_cpp_CDemonSet_computeVertexOmniLighting_FUN_00552d40
                  (g_CDemonSetPtr,&local_84,local_54,3);
        if (this_ptr->wave_animation_enabled == 0) {
          if (g_INT_01c50948 == 0) {
            if (unaff_retaddr == 0) {
              engine_drender_cpp_CDemonRenderer_renderDecalPoly_FUN_00482780
                        (g_CDemonRenderer_PTR_00612560,(SMRGLPrimitivePoly *)&g_WaterRenderQuad);
            }
            else {
              engine_drender_cpp_CDemonRenderer_renderAlphaBlendedPoly_FUN_00482540
                        (g_CDemonRenderer_PTR_00612560,(SMRGLPrimitivePoly *)&g_WaterRenderQuad);
            }
          }
          else {
            engine_drender_cpp_CDemonRenderer_setCurrentPolygonColor_FUN_00483ce0
                      (g_CDemonRenderer_PTR_00612560,1);
            engine_drender_cpp_CDemonRenderer_renderSolidColorPoly_FUN_00481c00
                      (g_CDemonRenderer_PTR_00612560,(SMRGLPrimitivePoly *)&g_WaterRenderQuad);
          }
        }
        else {
          engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_00483de0
                    (g_CDemonRenderer_PTR_00612560,0xa000);
          engine_drender_cpp_CDemonRenderer_renderBlendedPoly_FUN_00483120
                    (g_CDemonRenderer_PTR_00612560,(SMRGLPrimitivePoly *)&g_WaterRenderQuad);
        }
        local_28 = local_28 + 4;
        local_2c = local_2c + 1;
      } while (local_2c < g_VisibleWaterTileCount);
    }
  }
  return;
}
