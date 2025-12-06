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
  BADSPACEBASE *in_ESP;
  float10 fVar2;
  int in_stack_00000010;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  CDemonSet *in_stack_ffffffa4;
  float fVar7;
  float fVar8;
  float local_48;
  CVector3i local_44;
  CVector3i local_30;
  float fStack_24;
  CDemonSet *pCStack_20;
  CVector3i local_1c;
  
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
    local_1c.y = 0;
    if (0 < g_VisibleWaterTileCount) {
      local_1c.z = 0;
      do {
        iVar1 = *(int *)((int)g_VisibleWaterTilesX + local_1c.z);
        fVar3 = (float)iVar1 * this_ptr->tile_size + _DAT_03f875f0;
        fVar4 = this_ptr->water_level_y + _DAT_03f875f4;
        fVar5 = (float)*(int *)((int)g_VisibleWaterTilesY + local_1c.z) * this_ptr->tile_size +
                _DAT_03f875f8;
        engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
                  (g_CDemonRendererPtr,(CVector3f *)&stack0xffffff98);
        fVar6 = 0.0;
        if (this_ptr->wave_animation_enabled != 0) {
          fVar2 = (float10)fsin((float10)(int)fVar3 * (float10)3.1415926535000001 *
                                (float10)0.5 + (float10)iVar1 * (float10)3.1415926535000001
                                + (float10)g_WaterAnimationPhase);
          fVar6 = (float)(fVar2 * (float10)0.25);
        }
        fVar3 = (float)(int)ROUND(256f * 0.0);
        fVar7 = (float)(int)ROUND(fVar6 * 256f);
        fVar8 = (float)(int)ROUND(256f * 0.0);
        local_30.z = (int)fVar4;
        fStack_24 = fVar5;
        pCStack_20 = in_stack_ffffffa4;
        wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                  (&g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex,
                   (CVector3i *)&stack0xffffffa8);
        core_set_cpp_CDemonSet_FUN_0056e3e0(g_CDemonSetPtr);
        if (this_ptr->wave_animation_enabled != 0) {
          fVar2 = (float10)fsin((float10)(int)fVar6 * (float10)3.1415926535000001 *
                                (float10)0.5 +
                                (float10)(iVar1 + 1) * (float10)3.1415926535000001 +
                                (float10)g_WaterAnimationPhase);
          fVar3 = (float)(fVar2 * (float10)0.25);
        }
        local_44.x = (int)ROUND(this_ptr->tile_size * 256f);
        local_44.y = (int)ROUND(fVar3 * 256f);
        local_44.z = (int)ROUND(fVar7 * 256f);
        wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                  (&g_CDemonRendererPtr->vertex_buffer_ptr[1].projected_vertex,&local_44);
        core_set_cpp_CDemonSet_FUN_0056e3e0(g_CDemonSetPtr);
        if (this_ptr->wave_animation_enabled != 0) {
          fVar2 = (float10)fsin((float10)((int)fVar3 + 1) * (float10)3.1415926535000001 *
                                (float10)0.5 +
                                (float10)(iVar1 + 1) * (float10)3.1415926535000001 +
                                (float10)g_WaterAnimationPhase);
          fVar8 = (float)(fVar2 * (float10)0.25);
        }
        local_30.x = (int)ROUND(fVar7 * 256f);
        local_30.y = (int)ROUND(fVar8 * 256f);
        local_30.z = (int)ROUND(this_ptr->tile_size * 256f);
        wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                  (&g_CDemonRendererPtr->vertex_buffer_ptr[2].projected_vertex,&local_30);
        core_set_cpp_CDemonSet_FUN_0056e3e0(g_CDemonSetPtr);
        if (this_ptr->wave_animation_enabled != 0) {
          fVar2 = (float10)fsin((float10)((int)fVar8 + 1) * (float10)3.1415926535000001 *
                                (float10)0.5 + (float10)iVar1 * (float10)3.1415926535000001
                                + (float10)g_WaterAnimationPhase);
          local_48 = (float)(fVar2 * (float10)0.25);
        }
        local_1c.x = (int)ROUND(256f * 0.0);
        local_1c.y = (int)ROUND(local_48 * 256f);
        local_1c.z = (int)ROUND((float)local_44.x * 256f);
        wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                  (&g_CDemonRendererPtr->vertex_buffer_ptr[3].projected_vertex,&local_1c);
        in_stack_ffffffa4 = g_CDemonSetPtr;
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
        in_stack_00000010 = in_stack_00000010 + 1;
      } while (in_stack_00000010 < g_VisibleWaterTileCount);
    }
  }
  return;
}
