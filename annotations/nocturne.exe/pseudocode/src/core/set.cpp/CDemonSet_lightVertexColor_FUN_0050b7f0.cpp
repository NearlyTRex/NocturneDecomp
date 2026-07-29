// Name: core_set.cpp_CDemonSet_lightVertexColor_FUN_0050b7f0
// Address: 0050b7f0
// Address Range: [[0050b7f0, 0050bb4e]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_lightVertexColor_FUN_0050b7f0(CDemonSet *this_ptr,CVector3i *world_position,CVector3i *surface_normal,int vertex_index,int skip_lighting_calculation)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_set_cpp_CDemonSet_lightVertexColor_FUN_0050b7f0(CDemonSet *this_ptr,CVector3i *world_position,CVector3i *surface_normal,int vertex_index,int skip_lighting_calculation)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  char *pcVar9;
  CDemonActor *pCVar10;
  uint uVar11;
  int iVar12;
  uint local_18;
  int local_14;
  
  if (this_ptr->renderable_actors[0x766] != (CDemonActor *)0x0) {
    if (surface_normal == (CVector3i *)0x0) {
      PTR_01cc4800 = "..\\core\\set.cpp";
      INT_01cc4804 = 0xaf6;
      core_main_c_FUN_004c8440("CDemonSet::lightVertexColor - Quick light mode with no normal");
    }
    lVar1 = (longlong)(int)this_ptr->renderable_actors[0x767] * (longlong)surface_normal->x;
    lVar2 = (longlong)(int)this_ptr->renderable_actors[0x768] * (longlong)surface_normal->y;
    lVar3 = (longlong)(int)this_ptr->renderable_actors[0x769] * (longlong)surface_normal->z;
    iVar8 = -(((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
              ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
             ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10));
    if (iVar8 < 0) {
      iVar8 = 0;
    }
    pcVar9 = this_ptr->renderable_actors[0x76a]->actor_name + iVar8;
    if (0xffff < (int)pcVar9) {
      pcVar9 = (char *)0xffff;
    }
    lVar1 = (longlong)(int)this_ptr->renderable_actors[0x76c] * (longlong)(int)pcVar9;
    (&DAT_005c5034)[vertex_index * 0xc] =
         (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    lVar1 = (longlong)(int)this_ptr->renderable_actors[0x76d] * (longlong)(int)pcVar9;
    (&DAT_005c5038)[vertex_index * 0xc] =
         (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    lVar1 = (longlong)(int)this_ptr->renderable_actors[0x76e] * (longlong)(int)pcVar9;
    (&DAT_005c503c)[vertex_index * 0xc] =
         (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    (&DAT_005c5040)[vertex_index * 0xc] = _DAT_01c038f4;
    return;
  }
  if (skip_lighting_calculation == 0) {
    iVar8 = core_set_cpp_CDemonSet_calculateSpatialLighting_FUN_0050b5c0
                      (this_ptr,world_position,surface_normal);
    local_14 = _DAT_01fb96f0;
    if ((0 < _DAT_01fb96f0) && (surface_normal != (CVector3i *)0x0)) {
      iVar12 = _DAT_01fb96f0;
      if (0x1000 < _DAT_01fb96f0) {
        iVar12 = 0x1000;
      }
      if (_DAT_01c039c4 < 0) {
        lVar1 = (longlong)iVar12 * (longlong)surface_normal->x;
        uVar4 = -((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
      }
      else {
        lVar1 = (longlong)iVar12 * (longlong)surface_normal->x;
        uVar4 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
      }
      if (_DAT_01c039cc < 0) {
        lVar1 = (longlong)iVar12 * (longlong)surface_normal->z;
        iVar8 = (iVar8 + uVar4) - ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
        if (iVar8 < 0) {
          iVar8 = 0;
        }
      }
      else {
        lVar1 = (longlong)iVar12 * (longlong)surface_normal->z;
        iVar8 = iVar8 + uVar4 + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
        if (iVar8 < 0) {
          iVar8 = 0;
        }
      }
    }
  }
  else {
    iVar8 = 0xffff;
    local_14 = 0;
  }
  if (_DAT_01fff224 < 1) {
    iVar8 = iVar8 + local_14;
    lVar1 = (longlong)iVar8 * (longlong)(int)this_ptr->renderable_actors[0x76c];
    local_18 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    lVar1 = (longlong)iVar8 * (longlong)(int)this_ptr->renderable_actors[0x76d];
    uVar4 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    pCVar10 = this_ptr->renderable_actors[0x76e];
  }
  else {
    lVar1 = (longlong)
            (int)(((uint)((longlong)iVar8 * (longlong)_DAT_01fff5a4) >> 0x10 |
                  (int)((ulonglong)((longlong)iVar8 * (longlong)_DAT_01fff5a4) >> 0x20) << 0x10) +
                 local_14) * (longlong)(int)this_ptr->renderable_actors[0x76c];
    local_18 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    lVar1 = (longlong)
            (int)(((uint)((longlong)iVar8 * (longlong)_DAT_01fff5a8) >> 0x10 |
                  (int)((ulonglong)((longlong)iVar8 * (longlong)_DAT_01fff5a8) >> 0x20) << 0x10) +
                 local_14) * (longlong)(int)this_ptr->renderable_actors[0x76d];
    uVar4 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    pCVar10 = this_ptr->renderable_actors[0x76e];
    iVar8 = ((uint)((longlong)iVar8 * (longlong)_DAT_01fff5ac) >> 0x10 |
            (int)((ulonglong)((longlong)iVar8 * (longlong)_DAT_01fff5ac) >> 0x20) << 0x10) +
            local_14;
  }
  uVar5 = (uint)((longlong)iVar8 * (longlong)(int)pCVar10) >> 0x10 |
          (int)((ulonglong)((longlong)iVar8 * (longlong)(int)pCVar10) >> 0x20) << 0x10;
  if ((this_ptr->vdir_boxes[0xec].rotation_matrix.m[2].y != 0.0) && (skip_lighting_calculation == 0)
     ) {
    iVar8 = core_set_cpp_CDemonSet_calculateSpatialLighting_FUN_0050b5c0
                      (this_ptr,world_position,(CVector3i *)0x0);
    uVar11 = local_14 + iVar8;
    if (0 < (int)uVar11) {
      uVar6 = local_18 ^ (int)local_18 >> 0x1f;
      uVar7 = uVar6 / uVar11;
      if (0x7ffe < uVar7) {
        uVar7 = 0x7fff;
      }
      local_18 = ((uint)(((ulonglong)uVar6 % (ulonglong)uVar11 << 0x20) / (ulonglong)uVar11) >> 0x10
                 | uVar7 << 0x10) ^ (int)local_18 >> 0x1f;
      uVar6 = uVar4 ^ (int)uVar4 >> 0x1f;
      uVar7 = uVar6 / uVar11;
      if (0x7ffe < uVar7) {
        uVar7 = 0x7fff;
      }
      uVar4 = ((uint)(((ulonglong)uVar6 % (ulonglong)uVar11 << 0x20) / (ulonglong)uVar11) >> 0x10 |
              uVar7 << 0x10) ^ (int)uVar4 >> 0x1f;
      uVar6 = uVar5 ^ (int)uVar5 >> 0x1f;
      uVar7 = uVar6 / uVar11;
      if (0x7ffe < uVar7) {
        uVar7 = 0x7fff;
      }
      uVar5 = ((uint)(((ulonglong)uVar6 % (ulonglong)uVar11 << 0x20) / (ulonglong)uVar11) >> 0x10 |
              uVar7 << 0x10) ^ (int)uVar5 >> 0x1f;
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
  (&DAT_005c5034)[vertex_index * 0xc] = *(uint *)(local_18 * 4 + 0x1fbb060);
  (&DAT_005c5038)[vertex_index * 0xc] = *(uint *)(uVar4 * 4 + 0x1fbb060);
  (&DAT_005c503c)[vertex_index * 0xc] = *(uint *)(uVar5 * 4 + 0x1fbb060);
  return;
}
