// Name: core_set.cpp_CDemonSet_lightVertexColor_FUN_005380a0
// Address: 005380a0
// Address Range: [[005380a0, 005383fc]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_lightVertexColor_FUN_005380a0(CDemonSet *this_ptr,CVector3i *world_position,CVector3i *surface_normal,int vertex_index,int skip_lighting_calculation)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_set_cpp_CDemonSet_lightVertexColor_FUN_005380a0(CDemonSet *this_ptr,CVector3i *world_position,CVector3i *surface_normal,int vertex_index,int skip_lighting_calculation)

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
  
  if (*(int *)&this_ptr->field_0x15ae84 != 0) {
    if (surface_normal == (CVector3i *)0x0) {
      _DAT_01d71de0 = "..\\core\\set.cpp";
      _DAT_01d71de4 = 0xcb8;
      core_main_c_FUN_004e4330("CDemonSet::lightVertexColor - Quick light mode with no normal");
    }
    lVar1 = (longlong)*(int *)&this_ptr->field_0x15ae88 * (longlong)*(int *)surface_normal;
    lVar2 = (longlong)*(int *)&this_ptr->field_0x15ae8c * (longlong)*(int *)(surface_normal + 4);
    lVar3 = (longlong)*(int *)&this_ptr->field_0x15ae90 * (longlong)*(int *)(surface_normal + 8);
    iVar8 = -(((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
              ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
             ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10));
    if (iVar8 < 0) {
      iVar8 = 0;
    }
    iVar8 = iVar8 + *(int *)&this_ptr->field_0x15ae94;
    if (0xffff < iVar8) {
      iVar8 = 0xffff;
    }
    lVar1 = (longlong)*(int *)&this_ptr->field_0x15ae9c * (longlong)iVar8;
    (&DAT_0060b034)[vertex_index * 0xc] =
         (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    lVar1 = (longlong)*(int *)&this_ptr->field_0x15aea0 * (longlong)iVar8;
    (&DAT_0060b038)[vertex_index * 0xc] =
         (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    lVar1 = (longlong)*(int *)&this_ptr->field_0x15aea4 * (longlong)iVar8;
    (&DAT_0060b03c)[vertex_index * 0xc] =
         (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    (&DAT_0060b040)[vertex_index * 0xc] = _DAT_01c6e24c;
    return;
  }
  if (skip_lighting_calculation == 0) {
    iVar8 = core_set_cpp_CDemonSet_calculateSpatialLighting_FUN_00537e20
                      (this_ptr,world_position,surface_normal);
    local_18 = g_CDemonCameraInstance._4584_4_;
    if ((0 < (int)g_CDemonCameraInstance._4584_4_) && (surface_normal != (CVector3i *)0x0)) {
      iVar10 = g_CDemonCameraInstance._4584_4_;
      if (0x1000 < (int)g_CDemonCameraInstance._4584_4_) {
        iVar10 = 0x1000;
      }
      if (_DAT_01c6e2d8 < 0) {
        uVar4 = -((uint)((longlong)iVar10 * (longlong)*(int *)surface_normal) >> 0x10 |
                 (int)((ulonglong)((longlong)iVar10 * (longlong)*(int *)surface_normal) >> 0x20) <<
                 0x10);
      }
      else {
        uVar4 = (uint)((longlong)iVar10 * (longlong)*(int *)surface_normal) >> 0x10 |
                (int)((ulonglong)((longlong)iVar10 * (longlong)*(int *)surface_normal) >> 0x20) <<
                0x10;
      }
      if (_DAT_01c6e2e0 < 0) {
        iVar8 = (iVar8 + uVar4) -
                ((uint)((longlong)iVar10 * (longlong)*(int *)(surface_normal + 8)) >> 0x10 |
                (int)((ulonglong)((longlong)iVar10 * (longlong)*(int *)(surface_normal + 8)) >> 0x20
                     ) << 0x10);
        if (iVar8 < 0) {
          iVar8 = 0;
        }
      }
      else {
        iVar8 = iVar8 + uVar4 +
                ((uint)((longlong)iVar10 * (longlong)*(int *)(surface_normal + 8)) >> 0x10 |
                (int)((ulonglong)((longlong)iVar10 * (longlong)*(int *)(surface_normal + 8)) >> 0x20
                     ) << 0x10);
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
  if (_DAT_0207fc84 < 1) {
    iVar8 = iVar8 + local_18;
    lVar1 = (longlong)iVar8 * (longlong)*(int *)&this_ptr->field_0x15ae9c;
    local_14 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    lVar1 = (longlong)iVar8 * (longlong)*(int *)&this_ptr->field_0x15aea0;
    uVar4 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    iVar10 = *(int *)&this_ptr->field_0x15aea4;
  }
  else {
    lVar1 = (longlong)
            (int)(((uint)((longlong)iVar8 * (longlong)_DAT_02080004) >> 0x10 |
                  (int)((ulonglong)((longlong)iVar8 * (longlong)_DAT_02080004) >> 0x20) << 0x10) +
                 local_18) * (longlong)*(int *)&this_ptr->field_0x15ae9c;
    local_14 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    lVar1 = (longlong)
            (int)(((uint)((longlong)iVar8 * (longlong)_DAT_02080008) >> 0x10 |
                  (int)((ulonglong)((longlong)iVar8 * (longlong)_DAT_02080008) >> 0x20) << 0x10) +
                 local_18) * (longlong)*(int *)&this_ptr->field_0x15aea0;
    uVar4 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    iVar10 = *(int *)&this_ptr->field_0x15aea4;
    iVar8 = ((uint)((longlong)iVar8 * (longlong)_DAT_0208000c) >> 0x10 |
            (int)((ulonglong)((longlong)iVar8 * (longlong)_DAT_0208000c) >> 0x20) << 0x10) +
            local_18;
  }
  uVar5 = (uint)((longlong)iVar8 * (longlong)iVar10) >> 0x10 |
          (int)((ulonglong)((longlong)iVar8 * (longlong)iVar10) >> 0x20) << 0x10;
  if ((*(int *)&this_ptr->field_0x15f6f8 != 0) && (skip_lighting_calculation == 0)) {
    iVar8 = core_set_cpp_CDemonSet_calculateSpatialLighting_FUN_00537e20
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
  (&DAT_0060b034)[vertex_index * 0xc] = *(uint *)(local_14 * 4 + 0x203baa4);
  (&DAT_0060b038)[vertex_index * 0xc] = *(uint *)(uVar4 * 4 + 0x203baa4);
  (&DAT_0060b03c)[vertex_index * 0xc] = *(uint *)(uVar5 * 4 + 0x203baa4);
  return;
}
