// Name: core_set.cpp_CDemonSet_lightVertexColor_FUN_00552710
// Address: 00552710
// Address Range: [[00552710, 00552a6c]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_lightVertexColor_FUN_00552710(CDemonSet *this_ptr,CVector3i *world_position,CVector3i *surface_normal,int vertex_index,int skip_lighting_calculation)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_set_cpp_CDemonSet_lightVertexColor_FUN_00552710(CDemonSet *this_ptr,CVector3i *world_position,CVector3i *surface_normal,int vertex_index,int skip_lighting_calculation)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int local_18;
  uint local_14;
  
  if (this_ptr->rendering_mode != 0) {
    if (surface_normal == (CVector3i *)0x0) {
      _DAT_01d1d400 = "..\\core\\set.cpp";
      _DAT_01d1d404 = 0xca0;
      core_main_c_FUN_005030e0("CDemonSet::lightVertexColor - Quick light mode with no normal");
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
    iVar8 = iVar8 + this_ptr->ambient_base_quick;
    if (0xffff < iVar8) {
      iVar8 = 0xffff;
    }
    lVar1 = (longlong)(this_ptr->flat_color).r * (longlong)iVar8;
    (&DAT_00629034)[vertex_index * 0xc] =
         (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    lVar1 = (longlong)(this_ptr->flat_color).g * (longlong)iVar8;
    (&DAT_00629038)[vertex_index * 0xc] =
         (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    lVar1 = (longlong)(this_ptr->flat_color).b * (longlong)iVar8;
    (&DAT_0062903c)[vertex_index * 0xc] =
         (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    (&DAT_00629040)[vertex_index * 0xc] = _DAT_01c51cac;
    return;
  }
  if (skip_lighting_calculation == 0) {
    iVar8 = core_set_cpp_CDemonSet_calculateSpatialLighting_FUN_00552490
                      (this_ptr,world_position,surface_normal);
    local_18 = g_CDemonCameraInstance.corona_blend_factor;
    if ((0 < g_CDemonCameraInstance.corona_blend_factor) && (surface_normal != (CVector3i *)0x0)) {
      iVar10 = g_CDemonCameraInstance.corona_blend_factor;
      if (0x1000 < g_CDemonCameraInstance.corona_blend_factor) {
        iVar10 = 0x1000;
      }
      if (_DAT_01c51d38 < 0) {
        lVar1 = (longlong)iVar10 * (longlong)surface_normal->x;
        uVar4 = -((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
      }
      else {
        lVar1 = (longlong)iVar10 * (longlong)surface_normal->x;
        uVar4 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
      }
      if (_DAT_01c51d40 < 0) {
        lVar1 = (longlong)iVar10 * (longlong)surface_normal->z;
        iVar8 = (iVar8 + uVar4) - ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
        if (iVar8 < 0) {
          iVar8 = 0;
        }
      }
      else {
        lVar1 = (longlong)iVar10 * (longlong)surface_normal->z;
        iVar8 = iVar8 + uVar4 + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
        if (iVar8 < 0) {
          iVar8 = 0;
        }
      }
    }
  }
  else {
    iVar8 = 0xffff;
    local_18 = 0;
  }
  if (_DAT_0202a51c < 1) {
    iVar8 = iVar8 + local_18;
    lVar1 = (longlong)iVar8 * (longlong)(this_ptr->flat_color).r;
    local_14 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    lVar1 = (longlong)iVar8 * (longlong)(this_ptr->flat_color).g;
    uVar4 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    iVar10 = (this_ptr->flat_color).b;
  }
  else {
    lVar1 = (longlong)
            (int)(((uint)((longlong)iVar8 * (longlong)_DAT_0202a89c) >> 0x10 |
                  (int)((ulonglong)((longlong)iVar8 * (longlong)_DAT_0202a89c) >> 0x20) << 0x10) +
                 local_18) * (longlong)(this_ptr->flat_color).r;
    local_14 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    lVar1 = (longlong)
            (int)(((uint)((longlong)iVar8 * (longlong)_DAT_0202a8a0) >> 0x10 |
                  (int)((ulonglong)((longlong)iVar8 * (longlong)_DAT_0202a8a0) >> 0x20) << 0x10) +
                 local_18) * (longlong)(this_ptr->flat_color).g;
    uVar4 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    iVar10 = (this_ptr->flat_color).b;
    iVar8 = ((uint)((longlong)iVar8 * (longlong)_DAT_0202a8a4) >> 0x10 |
            (int)((ulonglong)((longlong)iVar8 * (longlong)_DAT_0202a8a4) >> 0x20) << 0x10) +
            local_18;
  }
  uVar5 = (uint)((longlong)iVar8 * (longlong)iVar10) >> 0x10 |
          (int)((ulonglong)((longlong)iVar8 * (longlong)iVar10) >> 0x20) << 0x10;
  if ((this_ptr->directional_light_ratio_enabled != 0) && (skip_lighting_calculation == 0)) {
    iVar8 = core_set_cpp_CDemonSet_calculateSpatialLighting_FUN_00552490
                      (this_ptr,world_position,(CVector3i *)0x0);
    uVar9 = local_18 + iVar8;
    if (0 < (int)uVar9) {
      uVar6 = local_14 ^ (int)local_14 >> 0x1f;
      uVar7 = uVar6 / uVar9;
      if (0x7ffe < uVar7) {
        uVar7 = 0x7fff;
      }
      local_14 = ((uint)(((ulonglong)uVar6 % (ulonglong)uVar9 << 0x20) / (ulonglong)uVar9) >> 0x10 |
                 uVar7 << 0x10) ^ (int)local_14 >> 0x1f;
      uVar6 = uVar4 ^ (int)uVar4 >> 0x1f;
      uVar7 = uVar6 / uVar9;
      if (0x7ffe < uVar7) {
        uVar7 = 0x7fff;
      }
      uVar4 = ((uint)(((ulonglong)uVar6 % (ulonglong)uVar9 << 0x20) / (ulonglong)uVar9) >> 0x10 |
              uVar7 << 0x10) ^ (int)uVar4 >> 0x1f;
      uVar6 = uVar5 ^ (int)uVar5 >> 0x1f;
      uVar7 = uVar6 / uVar9;
      if (0x7ffe < uVar7) {
        uVar7 = 0x7fff;
      }
      uVar5 = ((uint)(((ulonglong)uVar6 % (ulonglong)uVar9 << 0x20) / (ulonglong)uVar9) >> 0x10 |
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
  (&DAT_00629034)[vertex_index * 0xc] = *(uint *)(local_14 * 4 + 0x1fe6344);
  (&DAT_00629038)[vertex_index * 0xc] = *(uint *)(uVar4 * 4 + 0x1fe6344);
  (&DAT_0062903c)[vertex_index * 0xc] = *(uint *)(uVar5 * 4 + 0x1fe6344);
  return;
}
