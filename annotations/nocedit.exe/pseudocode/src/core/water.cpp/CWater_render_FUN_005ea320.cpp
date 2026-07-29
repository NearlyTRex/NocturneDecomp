// Name: core_water.cpp_CWater_render_FUN_005ea320
// Address: 005ea320
// Address Range: [[005ea320, 005ea80a]]
// Convention: __cdecl
// Signature: void __cdecl core_water_cpp_CWater_render_FUN_005ea320(CWater *this_ptr,int render_mode)

#include "nocturne.h"

void __cdecl core_water_cpp_CWater_render_FUN_005ea320(CWater *this_ptr,int render_mode)

{
  int iVar3;
  int iVar4;
  float10 fVar3;
  float10 fVar5;
  CVector3f local_6c;
  CVector3i local_60;
  CVector3i local_54;
  CVector3i local_48;
  CVector3i local_3c;
  CVector3f local_30;
  int local_1c;
  int local_18;
  int local_14;
  int iVar2;
  int iVar1;
  
  if (ABS(this_ptr->water_level_y) != 0.0) {
    g_WaterAnimationTimer = g_WaterAnimationTimer + g_GlobalDeltaTimeInt;
    if (INT_006844f4 < g_WaterAnimationTimer) {
      g_WaterAnimationTimer = g_WaterAnimationTimer - INT_006844f4;
      g_WaterCurrentFrame = g_WaterCurrentFrame + 1;
      if (0xf < g_WaterCurrentFrame) {
        g_WaterCurrentFrame = 0;
      }
    }
    INT_03f8f62c = (int)(((longlong)g_WaterAnimationTimer * 0xffff) / (longlong)INT_006844f4);
    if (INT_03f8f62c < 0x10000) {
      if (INT_03f8f62c < 0) {
        INT_03f8f62c = 0;
      }
    }
    else {
      INT_03f8f62c = 0xffff;
    }
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
              (g_CDemonRendererPtr2,g_WaterTextures + g_WaterCurrentFrame);
    g_PerspectiveReciprocal = 0;
    g_WaterAnimationPhase =
         g_CGamePtr->delta_time_float * (float)3.1415926535000001 * (float)0.5 *
         (float)2 + g_WaterAnimationPhase;
    local_1c = 0;
    if (0 < g_VisibleWaterTileCount) {
      local_18 = 0;
      do {
        iVar3 = *(int *)((int)g_VisibleWaterTilesX + local_18);
        iVar4 = *(int *)((int)g_VisibleWaterTilesY + local_18);
        local_6c.x = (float)iVar3 * this_ptr->tile_size + FLOAT_03f875f0;
        local_6c.y = this_ptr->water_level_y + FLOAT_03f875f4;
        local_6c.z = (float)iVar4 * this_ptr->tile_size + FLOAT_03f875f8;
        engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
                  (g_CDemonRendererPtr2,&local_6c);
        local_30.x = local_6c.x;
        local_30.y = local_6c.y;
        local_30.z = local_6c.z;
        local_6c.x = 0.0;
        local_6c.y = 0.0;
        local_6c.z = 0.0;
        if (this_ptr->wave_animation_enabled != 0) {
          fVar3 = (float10)fsin((float10)iVar4 * (float10)3.1415926535000001 * (float10)0.5
                                + (float10)iVar3 * (float10)3.1415926535000001 +
                                (float10)g_WaterAnimationPhase);
          local_6c.y = (float)(fVar3 * (float10)0.25);
        }
        local_60.x = (int)ROUND(256.0f * 0.0);
        local_60.y = (int)ROUND(local_6c.y * 256.0f);
        local_60.z = (int)ROUND(256.0f * 0.0);
        engine_special_cpp_transformAndProjectPoint_FUN_005b575c
                  (&g_CDemonRendererPtr2->vertex_buffer_ptr->projected_vertex,&local_60);
        core_set_cpp_CDemonSet_computeVertexOmniLighting_FUN_0056e3e0
                  (g_CDemonSetPtr,&local_6c,&local_30,0);
        local_6c.x = this_ptr->tile_size;
        if (this_ptr->wave_animation_enabled != 0) {
          fVar5 = (float10)fsin((float10)iVar4 * (float10)3.1415926535000001 * (float10)0.5
                                + (float10)(iVar3 + 1) * (float10)3.1415926535000001 +
                                (float10)g_WaterAnimationPhase);
          local_6c.y = (float)(fVar5 * (float10)0.25);
        }
        local_54.x = (int)ROUND(local_6c.x * 256.0f);
        local_54.y = (int)ROUND(local_6c.y * 256.0f);
        local_54.z = (int)ROUND(local_6c.z * 256.0f);
        engine_special_cpp_transformAndProjectPoint_FUN_005b575c
                  (&g_CDemonRendererPtr2->vertex_buffer_ptr[1].projected_vertex,&local_54);
        core_set_cpp_CDemonSet_computeVertexOmniLighting_FUN_0056e3e0
                  (g_CDemonSetPtr,&local_6c,&local_30,1);
        local_6c.z = this_ptr->tile_size;
        if (this_ptr->wave_animation_enabled != 0) {
          fVar5 = (float10)fsin((float10)(iVar4 + 1) * (float10)3.1415926535000001 *
                                (float10)0.5 +
                                (float10)(iVar3 + 1) * (float10)3.1415926535000001 +
                                (float10)g_WaterAnimationPhase);
          local_6c.y = (float)(fVar5 * (float10)0.25);
        }
        local_48.x = (int)ROUND(local_6c.x * 256.0f);
        local_48.y = (int)ROUND(local_6c.y * 256.0f);
        local_48.z = (int)ROUND(local_6c.z * 256.0f);
        engine_special_cpp_transformAndProjectPoint_FUN_005b575c
                  (&g_CDemonRendererPtr2->vertex_buffer_ptr[2].projected_vertex,&local_48);
        core_set_cpp_CDemonSet_computeVertexOmniLighting_FUN_0056e3e0
                  (g_CDemonSetPtr,&local_6c,&local_30,2);
        local_6c.x = 0.0;
        if (this_ptr->wave_animation_enabled != 0) {
          fVar5 = (float10)fsin((float10)(iVar4 + 1) * (float10)3.1415926535000001 *
                                (float10)0.5 + (float10)iVar3 * (float10)3.1415926535000001
                                + (float10)g_WaterAnimationPhase);
          local_6c.y = (float)(fVar5 * (float10)0.25);
        }
        local_3c.x = (int)ROUND(256.0f * 0.0);
        local_3c.y = (int)ROUND(local_6c.y * 256.0f);
        local_3c.z = (int)ROUND(local_6c.z * 256.0f);
        engine_special_cpp_transformAndProjectPoint_FUN_005b575c
                  (&g_CDemonRendererPtr2->vertex_buffer_ptr[3].projected_vertex,&local_3c);
        core_set_cpp_CDemonSet_computeVertexOmniLighting_FUN_0056e3e0
                  (g_CDemonSetPtr,&local_6c,&local_30,3);
        if (this_ptr->wave_animation_enabled == 0) {
          if (g_UseExternalRenderer == 0) {
            if (render_mode == 0) {
              engine_drender_cpp_CDemonRenderer_renderDecalPoly_FUN_0048b420
                        (g_CDemonRendererPtr2,(SMRGLPrimitivePoly *)&g_WaterRenderQuad);
            }
            else {
              engine_drender_cpp_CDemonRenderer_renderAlphaBlendedPoly_FUN_0048b1e0
                        (g_CDemonRendererPtr2,(SMRGLPrimitivePoly *)&g_WaterRenderQuad);
            }
          }
          else {
            engine_drender_cpp_CDemonRenderer_setCurrentPolygonColor_FUN_0048c960
                      (g_CDemonRendererPtr2,1);
            engine_drender_cpp_CDemonRenderer_renderSolidColorPoly_FUN_0048a8a0
                      (g_CDemonRendererPtr2,(SMRGLPrimitivePoly *)&g_WaterRenderQuad);
          }
        }
        else {
          engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60(g_CDemonRendererPtr2,0xa000)
          ;
          engine_drender_cpp_CDemonRenderer_renderBlendedPoly_FUN_0048bdc0
                    (g_CDemonRendererPtr2,(SMRGLPrimitivePoly *)&g_WaterRenderQuad);
        }
        local_18 = local_18 + 4;
        local_1c = local_1c + 1;
      } while (local_1c < g_VisibleWaterTileCount);
    }
  }
  return;
}
