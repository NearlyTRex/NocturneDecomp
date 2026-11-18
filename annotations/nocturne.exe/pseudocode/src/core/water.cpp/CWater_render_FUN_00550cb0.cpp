// Name: core_water.cpp_CWater_render_FUN_00550cb0
// Address: 00550cb0
// Address Range: [[00550cb0, 0055119a]]
// Convention: __cdecl
// Signature: void __cdecl core_water_cpp_CWater_render_FUN_00550cb0(CWater *this_ptr,int render_mode)

#include "nocturne.h"

void __cdecl core_water_cpp_CWater_render_FUN_00550cb0(CWater *this_ptr,int render_mode)

{
  int iVar1;
  int iVar2;
  float10 fVar3;
  CVector3f local_6c;
  CVector3i local_60;
  CVector3i local_54;
  CVector3i local_48;
  CVector3i local_3c;
  CVector3f local_30;
  int local_1c;
  int local_18;
  int local_14;
  
  if (ABS(this_ptr->water_level_y) != 0.0) {
    g_WaterAnimationTimer = g_WaterAnimationTimer + g_GlobalDeltaTimeInt;
    if (g_WaterFrameDuration < g_WaterAnimationTimer) {
      g_WaterAnimationTimer = g_WaterAnimationTimer - g_WaterFrameDuration;
      g_WaterCurrentFrame = g_WaterCurrentFrame + 1;
      if (0xf < g_WaterCurrentFrame) {
        g_WaterCurrentFrame = 0;
      }
    }
    g_WaterAnimationBlend =
         (int)(((longlong)g_WaterAnimationTimer * 0xffff) / (longlong)g_WaterFrameDuration);
    if (g_WaterAnimationBlend < 0x10000) {
      if (g_WaterAnimationBlend < 0) {
        g_WaterAnimationBlend = 0;
      }
    }
    else {
      g_WaterAnimationBlend = 0xffff;
    }
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00461eb0
              (g_CDemonRenderer_PTR_005ae704,g_WaterTextures + g_WaterCurrentFrame);
    g_INT_01c038f4 = 0;
    g_WaterAnimationPhase =
         g_CGamePtr->delta_time_float * (float)3.1415926535000001 * (float)0.5 *
         (float)2 + g_WaterAnimationPhase;
    local_1c = 0;
    if (0 < g_VisibleWaterTileCount) {
      local_18 = 0;
      do {
        iVar1 = *(int *)((int)g_VisibleWaterTilesX + local_18);
        iVar2 = *(int *)((int)g_VisibleWaterTilesY + local_18);
        local_6c.x = (float)iVar1 * this_ptr->tile_size + g_FLOAT_02dd1220;
        local_6c.y = this_ptr->water_level_y + g_FLOAT_02dd1224;
        local_6c.z = (float)iVar2 * this_ptr->tile_size + g_FLOAT_02dd1228;
        local_14 = iVar2;
        engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00
                  (g_CDemonRenderer_PTR_005ae704,&local_6c);
        local_30.x = local_6c.x;
        local_30.y = local_6c.y;
        local_30.z = local_6c.z;
        local_6c.x = 0.0;
        local_6c.y = 0.0;
        local_6c.z = 0.0;
        if (this_ptr->wave_animation_enabled != 0) {
          fVar3 = (float10)fsin((float10)iVar2 * (float10)3.1415926535000001 * (float10)0.5
                                + (float10)iVar1 * (float10)3.1415926535000001 +
                                (float10)g_WaterAnimationPhase);
          local_6c.y = (float)(fVar3 * (float10)0.25);
          local_14 = iVar1;
        }
        local_60.x = (int)ROUND(256.0f * 0.0);
        local_60.y = (int)ROUND(local_6c.y * 256.0f);
        local_60.z = (int)ROUND(256.0f * 0.0);
        engine_special_cpp_transformAndProjectPoint_FUN_0053075c
                  (&g_CDemonRenderer_PTR_005ae704->vertex_buffer_ptr->projected_vertex,&local_60);
        core_set_cpp_CDemonSet_computeVertexOmniLighting_FUN_0050be20
                  (g_CDemonSetPtr,&local_6c,&local_30,0);
        local_6c.x = this_ptr->tile_size;
        if (this_ptr->wave_animation_enabled != 0) {
          local_14 = iVar1 + 1;
          fVar3 = (float10)fsin((float10)iVar2 * (float10)3.1415926535000001 * (float10)0.5
                                + (float10)local_14 * (float10)3.1415926535000001 +
                                (float10)g_WaterAnimationPhase);
          local_6c.y = (float)(fVar3 * (float10)0.25);
        }
        local_54.x = (int)ROUND(local_6c.x * 256.0f);
        local_54.y = (int)ROUND(local_6c.y * 256.0f);
        local_54.z = (int)ROUND(local_6c.z * 256.0f);
        engine_special_cpp_transformAndProjectPoint_FUN_0053075c
                  (&g_CDemonRenderer_PTR_005ae704->vertex_buffer_ptr[1].projected_vertex,&local_54);
        core_set_cpp_CDemonSet_computeVertexOmniLighting_FUN_0050be20
                  (g_CDemonSetPtr,&local_6c,&local_30,1);
        local_6c.z = this_ptr->tile_size;
        if (this_ptr->wave_animation_enabled != 0) {
          local_14 = iVar1 + 1;
          fVar3 = (float10)fsin((float10)(iVar2 + 1) * (float10)3.1415926535000001 *
                                (float10)0.5 +
                                (float10)local_14 * (float10)3.1415926535000001 +
                                (float10)g_WaterAnimationPhase);
          local_6c.y = (float)(fVar3 * (float10)0.25);
        }
        local_48.x = (int)ROUND(local_6c.x * 256.0f);
        local_48.y = (int)ROUND(local_6c.y * 256.0f);
        local_48.z = (int)ROUND(local_6c.z * 256.0f);
        engine_special_cpp_transformAndProjectPoint_FUN_0053075c
                  (&g_CDemonRenderer_PTR_005ae704->vertex_buffer_ptr[2].projected_vertex,&local_48);
        core_set_cpp_CDemonSet_computeVertexOmniLighting_FUN_0050be20
                  (g_CDemonSetPtr,&local_6c,&local_30,2);
        local_6c.x = 0.0;
        if (this_ptr->wave_animation_enabled != 0) {
          fVar3 = (float10)fsin((float10)(iVar2 + 1) * (float10)3.1415926535000001 *
                                (float10)0.5 + (float10)iVar1 * (float10)3.1415926535000001
                                + (float10)g_WaterAnimationPhase);
          local_6c.y = (float)(fVar3 * (float10)0.25);
          local_14 = iVar1;
        }
        local_3c.x = (int)ROUND(256.0f * 0.0);
        local_3c.y = (int)ROUND(local_6c.y * 256.0f);
        local_3c.z = (int)ROUND(local_6c.z * 256.0f);
        engine_special_cpp_transformAndProjectPoint_FUN_0053075c
                  (&g_CDemonRenderer_PTR_005ae704->vertex_buffer_ptr[3].projected_vertex,&local_3c);
        core_set_cpp_CDemonSet_computeVertexOmniLighting_FUN_0050be20
                  (g_CDemonSetPtr,&local_6c,&local_30,3);
        if (this_ptr->wave_animation_enabled == 0) {
          if (g_UseExternalRenderer == 0) {
            if (render_mode == 0) {
              engine_drender_cpp_CDemonRenderer_renderDecalPoly_FUN_0045f9d0
                        (g_CDemonRenderer_PTR_005ae704,(SMRGLPrimitivePoly *)&g_WaterRenderQuad);
            }
            else {
              engine_drender_cpp_CDemonRenderer_renderAlphaBlendedPoly_FUN_0045f790
                        (g_CDemonRenderer_PTR_005ae704,(SMRGLPrimitivePoly *)&g_WaterRenderQuad);
            }
          }
          else {
            engine_drender_cpp_CDemonRenderer_setCurrentPolygonColor_FUN_00460f10
                      (g_CDemonRenderer_PTR_005ae704,1);
            engine_drender_cpp_CDemonRenderer_renderSolidColorPoly_FUN_0045eee0
                      (g_CDemonRenderer_PTR_005ae704,(SMRGLPrimitivePoly *)&g_WaterRenderQuad);
          }
        }
        else {
          engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_00461010
                    (g_CDemonRenderer_PTR_005ae704,0xa000);
          engine_drender_cpp_CDemonRenderer_renderBlendedPoly_FUN_00460370
                    (g_CDemonRenderer_PTR_005ae704,(SMRGLPrimitivePoly *)&g_WaterRenderQuad);
        }
        local_18 = local_18 + 4;
        local_1c = local_1c + 1;
      } while (local_1c < g_VisibleWaterTileCount);
    }
  }
  return;
}
