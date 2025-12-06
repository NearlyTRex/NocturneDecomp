// Name: core_set.cpp_CDemonSet_lightVertexColor_FUN_0056ddb0
// Address: 0056ddb0
// Address Range: [[0056ddb0, 0056e10e]]
// Convention: __cdecl
// Signature: void core_set.cpp_CDemonSet_lightVertexColor_FUN_0056ddb0(CDemonSet * this_ptr, CVector3i * world_position, CVector3i * surface_normal, int vertex_index, int skip_lighting_calculation)

#include "nocturne.h"

void __cdecl
core_set_cpp_CDemonSet_lightVertexColor_FUN_0056ddb0
          (CDemonSet *this_ptr,CVector3i *world_position,CVector3i *surface_normal,int vertex_index,
          int skip_lighting_calculation)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int unaff_EBP;
  uint uVar10;
  int in_stack_00000018;
  uint local_14;
  
  if (this_ptr->rendering_mode != 0) {
    if (surface_normal == (CVector3i *)0x0) {
      g_CurrentFilename = "..\\core\\set.cpp";
      g_CurrentLineNumber = 0xba3;
      core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonSet::lightVertexColor - Quick light mode with no normal");
    }
    lVar1 = (longlong)(this_ptr->light_direction).x * (longlong)surface_normal->x;
    lVar2 = (longlong)(this_ptr->light_direction).y * (longlong)surface_normal->y;
    lVar3 = (longlong)(this_ptr->light_direction).z * (longlong)surface_normal->z;
    iVar8 = ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
            ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
            ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10);
    iVar9 = -iVar8;
    if (0 < iVar8) {
      iVar9 = 0;
    }
    iVar9 = iVar9 + this_ptr->ambient_base_quick;
    if (0xffff < iVar9) {
      iVar9 = 0xffff;
    }
    lVar1 = (longlong)this_ptr->light_scale_factor * (longlong)iVar9;
    g_RenderVertexBuffer[skip_lighting_calculation].light =
         (float)((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    lVar1 = (longlong)this_ptr->color_scale_factor * (longlong)iVar9;
    g_RenderVertexBuffer[skip_lighting_calculation].color =
         (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    lVar1 = (longlong)this_ptr->fog_scale_factor * (longlong)iVar9;
    g_RenderVertexBuffer[skip_lighting_calculation].fog =
         (float)((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    g_RenderVertexBuffer[skip_lighting_calculation].w_recip = g_PerspectiveReciprocal;
    return;
  }
  if (skip_lighting_calculation == 0) {
    iVar8 = core_set_cpp_CDemonSet_calculateSpatialLighting_FUN_0056db80
                      (this_ptr,world_position,surface_normal);
    unaff_EBP = g_CDemonCameraInstance.corona_blend_factor;
    if ((0 < g_CDemonCameraInstance.corona_blend_factor) && (surface_normal != (CVector3i *)0x0)) {
      iVar9 = g_CDemonCameraInstance.corona_blend_factor;
      if (0x1000 < g_CDemonCameraInstance.corona_blend_factor) {
        iVar9 = 0x1000;
      }
      if (g_CameraOriginX < 0) {
        lVar1 = (longlong)iVar9 * (longlong)surface_normal->x;
        uVar4 = -((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
      }
      else {
        lVar1 = (longlong)iVar9 * (longlong)surface_normal->x;
        uVar4 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
      }
      if (g_CameraOriginZ < 0) {
        lVar1 = (longlong)iVar9 * (longlong)surface_normal->z;
        iVar8 = (iVar8 + uVar4) - ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
        if (iVar8 < 0) {
          iVar8 = 0;
        }
      }
      else {
        lVar1 = (longlong)iVar9 * (longlong)surface_normal->z;
        iVar8 = iVar8 + uVar4 + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
        if (iVar8 < 0) {
          iVar8 = 0;
        }
      }
    }
  }
  else {
    iVar8 = 0xffff;
  }
  if (g_ColorCorrectionEnabled < 1) {
    iVar8 = iVar8 + unaff_EBP;
    lVar1 = (longlong)iVar8 * (longlong)this_ptr->light_scale_factor;
    local_14 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    lVar1 = (longlong)iVar8 * (longlong)this_ptr->color_scale_factor;
    uVar4 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    iVar9 = this_ptr->fog_scale_factor;
  }
  else {
    lVar1 = (longlong)
            (int)(((uint)((longlong)iVar8 * (longlong)g_ColorCorrectionLightMultiplier) >> 0x10 |
                  (int)((ulonglong)((longlong)iVar8 * (longlong)g_ColorCorrectionLightMultiplier) >>
                       0x20) << 0x10) + unaff_EBP) * (longlong)this_ptr->light_scale_factor;
    local_14 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    lVar1 = (longlong)
            (int)(((uint)((longlong)iVar8 * (longlong)g_ColorCorrectionColorMultiplier) >> 0x10 |
                  (int)((ulonglong)((longlong)iVar8 * (longlong)g_ColorCorrectionColorMultiplier) >>
                       0x20) << 0x10) + unaff_EBP) * (longlong)this_ptr->color_scale_factor;
    uVar4 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    iVar9 = this_ptr->fog_scale_factor;
    iVar8 = ((uint)((longlong)iVar8 * (longlong)g_ColorCorrectionFogMultiplier) >> 0x10 |
            (int)((ulonglong)((longlong)iVar8 * (longlong)g_ColorCorrectionFogMultiplier) >> 0x20)
            << 0x10) + unaff_EBP;
  }
  uVar5 = (uint)((longlong)iVar8 * (longlong)iVar9) >> 0x10 |
          (int)((ulonglong)((longlong)iVar8 * (longlong)iVar9) >> 0x20) << 0x10;
  if ((this_ptr->rendering_flags_ptr != (int *)0x0) && (in_stack_00000018 == 0)) {
    iVar8 = core_set_cpp_CDemonSet_calculateSpatialLighting_FUN_0056db80
                      (this_ptr,surface_normal,(CVector3i *)0x0);
    uVar10 = unaff_EBP + iVar8;
    if (0 < (int)uVar10) {
      uVar6 = local_14 ^ (int)local_14 >> 0x1f;
      uVar7 = uVar6 / uVar10;
      if (0x7ffe < uVar7) {
        uVar7 = 0x7fff;
      }
      local_14 = ((uint)(((ulonglong)uVar6 % (ulonglong)uVar10 << 0x20) / (ulonglong)uVar10) >> 0x10
                 | uVar7 << 0x10) ^ (int)local_14 >> 0x1f;
      uVar6 = uVar4 ^ (int)uVar4 >> 0x1f;
      uVar7 = uVar6 / uVar10;
      if (0x7ffe < uVar7) {
        uVar7 = 0x7fff;
      }
      uVar4 = ((uint)(((ulonglong)uVar6 % (ulonglong)uVar10 << 0x20) / (ulonglong)uVar10) >> 0x10 |
              uVar7 << 0x10) ^ (int)uVar4 >> 0x1f;
      uVar6 = uVar5 ^ (int)uVar5 >> 0x1f;
      uVar7 = uVar6 / uVar10;
      if (0x7ffe < uVar7) {
        uVar7 = 0x7fff;
      }
      uVar5 = ((uint)(((ulonglong)uVar6 % (ulonglong)uVar10 << 0x20) / (ulonglong)uVar10) >> 0x10 |
              uVar7 << 0x10) ^ (int)uVar5 >> 0x1f;
    }
  }
  if (0xffff < (int)local_14) {
    local_14 = 0xffff;
  }
  if (0xffff < (int)uVar4) {
    uVar4 = 0xffff;
  }
  if (0xffff < (int)uVar5) {
    uVar5 = 0xffff;
  }
  g_RenderVertexBuffer[skip_lighting_calculation].light =
       (float)g_IntensityToValueLookupTable[local_14];
  g_RenderVertexBuffer[skip_lighting_calculation].color = g_IntensityToValueLookupTable[uVar4];
  g_RenderVertexBuffer[skip_lighting_calculation].fog = (float)g_IntensityToValueLookupTable[uVar5];
  return;
}
