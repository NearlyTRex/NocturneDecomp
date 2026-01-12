// Name: core_water.cpp_CWater_render_FUN_005ea320
// Address: 005ea320
// Address Range: [[005ea320, 005ea80a]]
// Convention: __cdecl
// Signature: void core_water.cpp_CWater_render_FUN_005ea320(CWater * this_ptr, int render_mode)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_water_cpp_CWater_render_FUN_005ea320(CWater *this_ptr,int render_mode)

{
  int iVar1;
  int iVar2;
  float fVar3;
  BADSPACEBASE *in_ESP;
  float10 fVar4;
  CVector3f *world_position;
  byte local_68 [12];
  int local_5c;
  int local_58;
  CVector3i local_54;
  CVector3i local_48;
  CVector3i local_3c;
  int local_30;
  float local_2c;
  float local_28;
  int local_18;
  int local_14;
  
  if (ABS(this_ptr->water_level_y) != 0.0) {
    g_WaterAnimationTimer = g_WaterAnimationTimer + g_GlobalDeltaTimeInt;
    if (DAT_006844f4 < g_WaterAnimationTimer) {
      g_WaterAnimationTimer = g_WaterAnimationTimer - DAT_006844f4;
      g_WaterCurrentFrame = g_WaterCurrentFrame + 1;
      if (0xf < g_WaterCurrentFrame) {
        g_WaterCurrentFrame = 0;
      }
    }
    _DAT_03f8f62c = (int)(((longlong)g_WaterAnimationTimer * 0xffff) / (longlong)DAT_006844f4);
    if (_DAT_03f8f62c < 0x10000) {
      if (_DAT_03f8f62c < 0) {
        _DAT_03f8f62c = 0;
      }
    }
    else {
      _DAT_03f8f62c = 0xffff;
    }
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
              (g_CDemonRendererPtr,g_WaterTextures + g_WaterCurrentFrame);
    g_PerspectiveReciprocal = 0.0;
    g_WaterAnimationPhase =
         g_CGamePtr->delta_time_float * (float)3.1415926535000001 * (float)0.5 *
         (float)2 + g_WaterAnimationPhase;
    local_18 = 0;
    if (0 < g_VisibleWaterTileCount) {
      local_14 = 0;
      do {
        iVar1 = *(int *)((int)g_VisibleWaterTilesX + local_14);
        iVar2 = *(int *)((int)g_VisibleWaterTilesY + local_14);
        local_68._0_4_ = (float)iVar1 * this_ptr->tile_size + _DAT_03f875f0;
        world_position = (CVector3f *)local_68;
        local_68._4_4_ = this_ptr->water_level_y + _DAT_03f875f4;
        local_68._8_4_ = (float)iVar2 * this_ptr->tile_size + _DAT_03f875f8;
        engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
                  (g_CDemonRendererPtr,world_position);
        local_2c = (float)local_68._0_4_;
        local_28 = (float)local_68._4_4_;
        local_68._0_4_ = 0.0;
        local_68._4_4_ = 0.0;
        if (this_ptr->wave_animation_enabled != 0) {
          fVar4 = (float10)fsin((float10)(int)world_position * (float10)3.1415926535000001 *
                                (float10)0.5 + (float10)iVar1 * (float10)3.1415926535000001
                                + (float10)g_WaterAnimationPhase);
          local_68._0_4_ = (uint)(fVar4 * (float10)0.25);
          local_14 = iVar1;
        }
        local_68._8_4_ = (uint)ROUND(256f * 0.0);
        local_5c = (int)ROUND((float)local_68._0_4_ * 256f);
        local_58 = (int)ROUND(256f * 0.0);
        local_30 = iVar2;
        wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                  (&g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex,
                   (CVector3i *)(local_68 + 8));
        core_set_cpp_CDemonSet_FUN_0056e3e0(g_CDemonSetPtr);
        fVar3 = this_ptr->tile_size;
        if (this_ptr->wave_animation_enabled != 0) {
          local_14 = iVar1 + 1;
          fVar4 = (float10)fsin((float10)(int)world_position * (float10)3.1415926535000001 *
                                (float10)0.5 +
                                (float10)local_14 * (float10)3.1415926535000001 +
                                (float10)g_WaterAnimationPhase);
          local_68._0_4_ = (uint)(fVar4 * (float10)0.25);
        }
        local_54.x = (int)ROUND(fVar3 * 256f);
        local_54.y = (int)ROUND((float)local_68._0_4_ * 256f);
        local_54.z = (int)ROUND((float)local_68._4_4_ * 256f);
        wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                  (&g_CDemonRendererPtr->vertex_buffer_ptr[1].projected_vertex,&local_54);
        core_set_cpp_CDemonSet_FUN_0056e3e0(g_CDemonSetPtr);
        local_68._4_4_ = this_ptr->tile_size;
        if (this_ptr->wave_animation_enabled != 0) {
          local_14 = iVar1 + 1;
          fVar4 = (float10)fsin((float10)(int)((int)&world_position->x + 1) *
                                (float10)3.1415926535000001 * (float10)0.5 +
                                (float10)local_14 * (float10)3.1415926535000001 +
                                (float10)g_WaterAnimationPhase);
          local_68._0_4_ = (uint)(fVar4 * (float10)0.25);
        }
        local_48.x = (int)ROUND(fVar3 * 256f);
        local_48.y = (int)ROUND((float)local_68._0_4_ * 256f);
        local_48.z = (int)ROUND((float)local_68._4_4_ * 256f);
        wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                  (&g_CDemonRendererPtr->vertex_buffer_ptr[2].projected_vertex,&local_48);
        core_set_cpp_CDemonSet_FUN_0056e3e0(g_CDemonSetPtr);
        if (this_ptr->wave_animation_enabled != 0) {
          fVar4 = (float10)fsin((float10)(int)((int)&world_position->x + 1) *
                                (float10)3.1415926535000001 * (float10)0.5 +
                                (float10)iVar1 * (float10)3.1415926535000001 +
                                (float10)g_WaterAnimationPhase);
          local_68._0_4_ = (uint)(fVar4 * (float10)0.25);
          local_14 = iVar1;
        }
        local_3c.x = (int)ROUND(256f * 0.0);
        local_3c.y = (int)ROUND((float)local_68._0_4_ * 256f);
        local_3c.z = (int)ROUND((float)local_68._4_4_ * 256f);
        wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                  (&g_CDemonRendererPtr->vertex_buffer_ptr[3].projected_vertex,&local_3c);
        core_set_cpp_CDemonSet_FUN_0056e3e0(g_CDemonSetPtr);
        if (this_ptr->wave_animation_enabled == 0) {
          if (g_UseExternalRenderer == 0) {
            if (render_mode == 0) {
              engine_drender_cpp_CDemonRenderer_renderSpecialDepth_FUN_0048b420
                        (g_CDemonRendererPtr,(SMRGLHeaderPrimitive *)&g_WaterTexturesEnd);
            }
            else {
              engine_drender_cpp_CDemonRenderer_renderPremium_FUN_0048b1e0
                        (g_CDemonRendererPtr,(SMRGLHeaderPrimitive *)&g_WaterTexturesEnd);
            }
          }
          else {
            engine_drender_cpp_CDemonRenderer_setCurrentPolygonColor_FUN_0048c960
                      (g_CDemonRendererPtr,1);
            engine_drender_cpp_CDemonRenderer_renderBasicTexturedVariant_FUN_0048a8a0
                      (g_CDemonRendererPtr,(SMRGLHeaderPrimitive *)&g_WaterTexturesEnd);
          }
        }
        else {
          engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60(g_CDemonRendererPtr,0xa000);
          engine_drender_cpp_CDemonRenderer_renderEnhancedQualityVariant_FUN_0048bdc0
                    (g_CDemonRendererPtr,(SMRGLHeaderPrimitive *)&g_WaterTexturesEnd);
        }
        local_14 = local_14 + 4;
        local_18 = local_18 + 1;
      } while (local_18 < g_VisibleWaterTileCount);
    }
  }
  return;
}
