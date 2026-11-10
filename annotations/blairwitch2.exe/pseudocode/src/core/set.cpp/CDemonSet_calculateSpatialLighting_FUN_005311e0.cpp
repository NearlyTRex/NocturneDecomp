// Name: core_set.cpp_CDemonSet_calculateSpatialLighting_FUN_005311e0
// Address: 005311e0
// Address Range: [[005311e0, 00531457]]
// Convention: __cdecl
// Signature: int __cdecl core_set_cpp_CDemonSet_calculateSpatialLighting_FUN_005311e0(CDemonSet *this_ptr,CVector3i *world_position,CVector3i *surface_normal)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_set_cpp_CDemonSet_calculateSpatialLighting_FUN_005311e0(CDemonSet *this_ptr,CVector3i *world_position,CVector3i *surface_normal)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  byte bVar8;
  int aiStackY_1030 [1012];
  CVector3f *position;
  CVector3f *orientation;
  CVector3f *aabb_min;
  CVector3f *aabb_max;
  uint uVar9;
  CMatrix3x3f *rotation_matrix;
  uint *puVar10;
  uint local_48;
  uint local_3c;
  uint local_30;
  uint local_24;
  int local_18;
  CDemonSet *local_14;
  
  bVar8 = 0;
  if (_DAT_0200e88c != 0) {
    if (_DAT_0200e88c == 1) {
      rotation_matrix = (CMatrix3x3f *)0x0;
      aabb_max = (CVector3f *)0x0;
      aabb_min = (CVector3f *)0x0;
      orientation = (CVector3f *)0x0;
      position = (CVector3f *)0x0;
    }
    else {
      rotation_matrix = (CMatrix3x3f *)&DAT_0200e8c0;
      aabb_max = (CVector3f *)&DAT_0200e8b4;
      aabb_min = (CVector3f *)&DAT_0200e8a8;
      orientation = (CVector3f *)&DAT_0200e89c;
      position = (CVector3f *)&DAT_0200e890;
    }
    core_set_cpp_CDemonSet_gatherVisibleLights_FUN_00530aa0
              (this_ptr,position,orientation,aabb_min,aabb_max,rotation_matrix);
    _DAT_0200e88c = 0;
  }
  iVar6 = 0;
  iVar5 = 0;
  if (0 < _DAT_0200e3c0) {
    iVar7 = 0;
    do {
      puVar10 = (uint *)(&DAT_0200e3c4 + iVar7);
      iVar7 = iVar7 + 4;
      iVar6 = iVar6 + 1;
      iVar4 = core_dcamera_cpp_FUN_0043e300
                        (&g_CDemonCameraInstance,world_position,*puVar10,surface_normal);
      iVar5 = iVar5 + iVar4;
    } while (iVar6 < _DAT_0200e3c0);
  }
  iVar6 = 0;
  if (0 < _DAT_0200e23c) {
    iVar7 = 0;
    do {
      puVar10 = (uint *)(&DAT_0200e240 + iVar7);
      iVar7 = iVar7 + 4;
      iVar6 = iVar6 + 1;
      iVar4 = core_dcamera_cpp_FUN_0043e300
                        (&g_CDemonCameraInstance,world_position,*puVar10,surface_normal);
      iVar5 = iVar5 + iVar4;
    } while (iVar6 < _DAT_0200e23c);
  }
  iVar6 = 0;
  if (0 < _DAT_0200e3d4) {
    iVar7 = 0;
    do {
      puVar10 = (uint *)(&DAT_0200e3d8 + iVar7);
      iVar7 = iVar7 + 4;
      iVar6 = iVar6 + 1;
      iVar4 = core_dglobe_cpp_FUN_00448da0(*puVar10,world_position,surface_normal);
      iVar5 = iVar5 + iVar4;
    } while (iVar6 < _DAT_0200e3d4);
  }
  if ((((*(uint *)&this_ptr->field_0x14d160 & 0x7fffffff) != 0) &&
      (surface_normal != (CVector3i *)0x0)) &&
     (lVar1 = (longlong)_DAT_0200a398 * (longlong)surface_normal->x,
     lVar2 = (longlong)_DAT_0200a39c * (longlong)surface_normal->y,
     lVar3 = (longlong)_DAT_0200a3a0 * (longlong)surface_normal->z,
     iVar6 = ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10) +
             ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
             ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10), iVar6 < 0)) {
    iVar5 = iVar5 - iVar6;
  }
  local_18 = 0;
  if (0 < this_ptr->mirror_glass_actor_count) {
    local_14 = this_ptr;
    do {
      core_mirror_cpp_FUN_004fb0a0(&local_14->mirror_glass_actors[0]->mirror,world_position);
      local_3c = local_48;
      *(uint *)((int)&stack0xffffffc8 + (uint)bVar8 * 0xfffffffe * 4) =
           *(uint *)(&stack0xffffffbc + (uint)bVar8 * -8);
      *(uint *)(&stack0xffffffcc + (uint)bVar8 * -8 + (uint)bVar8 * -8) =
           *(uint *)(&stack0xffffffc0 + (uint)bVar8 * -8 + (uint)bVar8 * -8);
      if (surface_normal != (CVector3i *)0x0) {
        core_mirror_cpp_FUN_004fb150
                  (&local_14->mirror_glass_actors[0]->mirror,world_position,surface_normal);
        local_30 = local_24;
        *(uint *)((int)&stack0xffffffd4 + (uint)bVar8 * 0xfffffffe * 4) =
             *(uint *)(&stack0xffffffe0 + (uint)bVar8 * -8);
        *(uint *)(&stack0xffffffd8 + (uint)bVar8 * -8 + (uint)bVar8 * -8) =
             *(uint *)(&stack0xffffffe4 + (uint)bVar8 * -8 + (uint)bVar8 * -8);
      }
      iVar6 = 0;
      if (0 < _DAT_01fc9608) {
        iVar7 = 0;
        do {
          if (surface_normal == (CVector3i *)0x0) {
            uVar9 = *(uint *)(iVar7 + 0x1fc960c);
            puVar10 = (uint *)0x0;
          }
          else {
            puVar10 = &stack0xffffffd0;
            uVar9 = *(uint *)(iVar7 + 0x1fc960c);
          }
          iVar4 = core_dcamera_cpp_FUN_0043e300
                            (&g_CDemonCameraInstance,&stack0xffffffc4,uVar9,puVar10);
          iVar5 = iVar5 + iVar4;
          iVar6 = iVar6 + 1;
          iVar7 = iVar7 + 4;
        } while (iVar6 < _DAT_01fc9608);
      }
      local_14 = (CDemonSet *)local_14->cameras;
      local_18 = local_18 + 1;
    } while (local_18 < this_ptr->mirror_glass_actor_count);
  }
  return iVar5;
}
