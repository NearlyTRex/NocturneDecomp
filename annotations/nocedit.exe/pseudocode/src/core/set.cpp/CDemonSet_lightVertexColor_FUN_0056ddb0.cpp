// Name: core_set.cpp_CDemonSet_lightVertexColor_FUN_0056ddb0
// Address: 0056ddb0
// Address Range: [[0056ddb0, 0056e10e]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_lightVertexColor_FUN_0056ddb0(CDemonSet *this_ptr,CVector3i *world_position,CVector3i *surface_normal,int vertex_index,int skip_lighting_calculation)

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_lightVertexColor_FUN_0056ddb0(CDemonSet *this_ptr,CVector3i *world_position,CVector3i *surface_normal,int vertex_index,int skip_lighting_calculation)

{
  longlong lVar4;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar10;
  int iVar8;
  int iVar11;
  int iVar12;
  uint uVar9;
  int iVar10;
  uint local_18;
  int local_14;
  longlong lVar2;
  longlong lVar1;
  longlong lVar3;
  
  if (this_ptr->rendering_mode != 0) {
    if (surface_normal == (CVector3i *)0x0) {
      g_CurrentFilename = "..\\core\\set.cpp";
      g_CurrentLineNumber = 0xba3;
      core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonSet::lightVertexColor - Quick light mode with no normal");
    }
    lVar1 = (longlong)(this_ptr->light_direction).x * (longlong)surface_normal->x;
    lVar2 = (longlong)(this_ptr->light_direction).y * (longlong)surface_normal->y;
    lVar3 = (longlong)(this_ptr->light_direction).z * (longlong)surface_normal->z;
    iVar8 = -(((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
              ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
             ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10));
    if (iVar8 < 0) {
      iVar8 = 0;
    }
    iVar11 = iVar8 + this_ptr->ambient_base_quick;
    if (0xffff < iVar11) {
      iVar11 = 0xffff;
    }
    lVar4 = (longlong)(this_ptr->flat_color).r * (longlong)iVar11;
    g_RenderVertexBuffer[vertex_index].r =
         (uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10;
    lVar4 = (longlong)(this_ptr->flat_color).g * (longlong)iVar11;
    g_RenderVertexBuffer[vertex_index].g =
         (uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10;
    lVar4 = (longlong)(this_ptr->flat_color).b * (longlong)iVar11;
    g_RenderVertexBuffer[vertex_index].b =
         (uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10;
    g_RenderVertexBuffer[vertex_index].a = g_PerspectiveReciprocal;
    return;
  }
  if (skip_lighting_calculation == 0) {
    iVar11 = core_set_cpp_CDemonSet_calculateSpatialLighting_FUN_0056db80
                       (this_ptr,world_position,surface_normal);
    local_14 = g_CDemonCameraInstance.corona_blend_factor;
    if ((0 < g_CDemonCameraInstance.corona_blend_factor) && (surface_normal != (CVector3i *)0x0)) {
      iVar10 = g_CDemonCameraInstance.corona_blend_factor;
      if (0x1000 < g_CDemonCameraInstance.corona_blend_factor) {
        iVar10 = 0x1000;
      }
      if (g_CameraOriginX < 0) {
        lVar4 = (longlong)iVar10 * (longlong)surface_normal->x;
        uVar8 = -((uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10);
      }
      else {
        lVar4 = (longlong)iVar10 * (longlong)surface_normal->x;
        uVar8 = (uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10;
      }
      if (g_CameraOriginZ < 0) {
        lVar4 = (longlong)iVar10 * (longlong)surface_normal->z;
        iVar11 = (iVar11 + uVar8) - ((uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10);
        if (iVar11 < 0) {
          iVar11 = 0;
        }
      }
      else {
        lVar4 = (longlong)iVar10 * (longlong)surface_normal->z;
        iVar11 = iVar11 + uVar8 + ((uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10);
        if (iVar11 < 0) {
          iVar11 = 0;
        }
      }
    }
  }
  else {
    iVar11 = 0xffff;
    local_14 = 0;
  }
  if (g_ColorCorrectionCount < 1) {
    iVar11 = iVar11 + local_14;
    lVar4 = (longlong)iVar11 * (longlong)(this_ptr->flat_color).r;
    local_18 = (uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10;
    lVar4 = (longlong)iVar11 * (longlong)(this_ptr->flat_color).g;
    uVar4 = (uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10;
    iVar12 = (this_ptr->flat_color).b;
  }
  else {
    lVar4 = (longlong)
            (int)(((uint)((longlong)iVar11 * (longlong)g_ColorCorrectionLightMultiplier) >> 0x10 |
                  (int)((ulonglong)((longlong)iVar11 * (longlong)g_ColorCorrectionLightMultiplier)
                       >> 0x20) << 0x10) + local_14) * (longlong)(this_ptr->flat_color).r;
    local_18 = (uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10;
    lVar4 = (longlong)
            (int)(((uint)((longlong)iVar11 * (longlong)g_ColorCorrectionColorMultiplier) >> 0x10 |
                  (int)((ulonglong)((longlong)iVar11 * (longlong)g_ColorCorrectionColorMultiplier)
                       >> 0x20) << 0x10) + local_14) * (longlong)(this_ptr->flat_color).g;
    uVar4 = (uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10;
    iVar12 = (this_ptr->flat_color).b;
    iVar11 = ((uint)((longlong)iVar11 * (longlong)g_ColorCorrectionFogMultiplier) >> 0x10 |
             (int)((ulonglong)((longlong)iVar11 * (longlong)g_ColorCorrectionFogMultiplier) >> 0x20)
             << 0x10) + local_14;
  }
  uVar5 = (uint)((longlong)iVar11 * (longlong)iVar12) >> 0x10 |
          (int)((ulonglong)((longlong)iVar11 * (longlong)iVar12) >> 0x20) << 0x10;
  if ((this_ptr->directional_light_ratio_enabled != 0) && (skip_lighting_calculation == 0)) {
    iVar11 = core_set_cpp_CDemonSet_calculateSpatialLighting_FUN_0056db80
                       (this_ptr,world_position,(CVector3i *)0x0);
    uVar9 = local_14 + iVar11;
    if (0 < (int)uVar9) {
      uVar6 = local_18 ^ (int)local_18 >> 0x1f;
      uVar7 = uVar6 / uVar9;
      if (0x7ffe < uVar7) {
        uVar7 = 0x7fff;
      }
      local_18 = ((uint)(((ulonglong)uVar6 % (ulonglong)uVar9 << 0x20) / (ulonglong)uVar9) >> 0x10 |
                 uVar7 << 0x10) ^ (int)local_18 >> 0x1f;
      uVar8 = uVar4 ^ (int)uVar4 >> 0x1f;
      uVar10 = uVar8 / uVar9;
      if (0x7ffe < uVar10) {
        uVar10 = 0x7fff;
      }
      uVar4 = ((uint)(((ulonglong)uVar8 % (ulonglong)uVar9 << 0x20) / (ulonglong)uVar9) >> 0x10 |
              uVar10 << 0x10) ^ (int)uVar4 >> 0x1f;
      uVar8 = uVar5 ^ (int)uVar5 >> 0x1f;
      uVar10 = uVar8 / uVar9;
      if (0x7ffe < uVar10) {
        uVar10 = 0x7fff;
      }
      uVar5 = ((uint)(((ulonglong)uVar8 % (ulonglong)uVar9 << 0x20) / (ulonglong)uVar9) >> 0x10 |
              uVar10 << 0x10) ^ (int)uVar5 >> 0x1f;
    }
  }
  if (0xffff < (int)local_18) {
    local_18 = 0xffff;
  }
  if (0xffff < (int)uVar4) {
    uVar4 = 0xffff;
  }
  if (0xffff < (int)uVar5) {
    uVar5 = 0xffff;
  }
  g_RenderVertexBuffer[vertex_index].r = g_IntensityToValueLookupTable[local_18];
  g_RenderVertexBuffer[vertex_index].g = g_IntensityToValueLookupTable[uVar4];
  g_RenderVertexBuffer[vertex_index].b = g_IntensityToValueLookupTable[uVar5];
  return;
}
