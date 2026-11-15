// Name: core_set.cpp_CDemonSet_calculateSpatialLighting_FUN_005311e0
// Address: 005311e0
// Address Range: [[005311e0, 00531457]]
// Convention: __cdecl
// Signature: int __cdecl core_set_cpp_CDemonSet_calculateSpatialLighting_FUN_005311e0(CDemonSet *this_ptr,CVector3i *world_position,CVector3i *surface_normal)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_set_cpp_CDemonSet_calculateSpatialLighting_FUN_005311e0(CDemonSet *this_ptr,CVector3i *world_position,CVector3i *surface_normal)

{
  uint *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  byte bVar9;
  int aiStackY_1030 [1012];
  CVector3f *position;
  CVector3f *orientation;
  CVector3f *aabb_min;
  CVector3f *aabb_max;
  uint uVar10;
  CMatrix3x3f *rotation_matrix;
  int *piVar11;
  CVector3i local_48;
  int local_3c;
  int aiStack_38 [5];
  CVector3i local_24;
  int local_18;
  CDemonSet *local_14;
  
  bVar9 = 0;
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
  iVar7 = 0;
  iVar6 = 0;
  if (0 < _DAT_0200e3c0) {
    iVar8 = 0;
    do {
      puVar1 = (uint *)(&DAT_0200e3c4 + iVar8);
      iVar8 = iVar8 + 4;
      iVar7 = iVar7 + 1;
      iVar5 = core_dcamera_cpp_FUN_0043e300
                        (&g_CDemonCameraInstance,world_position,*puVar1,surface_normal);
      iVar6 = iVar6 + iVar5;
    } while (iVar7 < _DAT_0200e3c0);
  }
  iVar7 = 0;
  if (0 < _DAT_0200e23c) {
    iVar8 = 0;
    do {
      puVar1 = (uint *)(&DAT_0200e240 + iVar8);
      iVar8 = iVar8 + 4;
      iVar7 = iVar7 + 1;
      iVar5 = core_dcamera_cpp_FUN_0043e300
                        (&g_CDemonCameraInstance,world_position,*puVar1,surface_normal);
      iVar6 = iVar6 + iVar5;
    } while (iVar7 < _DAT_0200e23c);
  }
  iVar7 = 0;
  if (0 < _DAT_0200e3d4) {
    iVar8 = 0;
    do {
      puVar1 = (uint *)(&DAT_0200e3d8 + iVar8);
      iVar8 = iVar8 + 4;
      iVar7 = iVar7 + 1;
      iVar5 = core_dglobe_cpp_CDemonGlobe_getAttenuationAtVertex_FUN_00448da0
                        ((CDemonGlobe *)*puVar1,world_position,surface_normal);
      iVar6 = iVar6 + iVar5;
    } while (iVar7 < _DAT_0200e3d4);
  }
  if (((ABS(this_ptr->directional_light_intensity) != 0.0) && (surface_normal != (CVector3i *)0x0))
     && (lVar2 = (longlong)_DAT_0200a398 * (longlong)surface_normal->x,
        lVar3 = (longlong)_DAT_0200a39c * (longlong)surface_normal->y,
        lVar4 = (longlong)_DAT_0200a3a0 * (longlong)surface_normal->z,
        iVar7 = ((uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10) +
                ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
                ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10), iVar7 < 0)) {
    iVar6 = iVar6 - iVar7;
  }
  local_18 = 0;
  if (0 < this_ptr->mirror_glass_actor_count) {
    local_14 = this_ptr;
    do {
      core_mirror_cpp_CMirrorReflection_transformMirrorVertex_FUN_004fb0a0
                (&(local_14->mirror_glass_actors[0]->mirror).reflection,world_position,&local_48);
      local_3c = local_48.x;
      aiStack_38[(uint)bVar9 * -2] = *(int *)((int)&local_48 + (uint)bVar9 * -8 + 4);
      aiStack_38[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
           *(int *)((int)&local_48 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
      if (surface_normal != (CVector3i *)0x0) {
        core_mirror_cpp_CMirrorReflection_transformMirrorEdgeToIntegerSpace_FUN_004fb150
                  (&(local_14->mirror_glass_actors[0]->mirror).reflection,world_position,
                   surface_normal,&local_24);
        aiStack_38[2] = local_24.x;
        aiStack_38[(uint)bVar9 * -2 + 3] = *(int *)((int)&local_24 + (uint)bVar9 * -8 + 4);
        aiStack_38[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4] =
             *(int *)((int)&local_24 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
      }
      iVar7 = 0;
      if (0 < _DAT_01fc9608) {
        iVar8 = 0;
        do {
          if (surface_normal == (CVector3i *)0x0) {
            uVar10 = *(uint *)(iVar8 + 0x1fc960c);
            piVar11 = (int *)0x0;
          }
          else {
            piVar11 = aiStack_38 + 2;
            uVar10 = *(uint *)(iVar8 + 0x1fc960c);
          }
          iVar5 = core_dcamera_cpp_FUN_0043e300(&g_CDemonCameraInstance,&local_3c,uVar10,piVar11);
          iVar6 = iVar6 + iVar5;
          iVar7 = iVar7 + 1;
          iVar8 = iVar8 + 4;
        } while (iVar7 < _DAT_01fc9608);
      }
      local_14 = (CDemonSet *)local_14->cameras;
      local_18 = local_18 + 1;
    } while (local_18 < this_ptr->mirror_glass_actor_count);
  }
  return iVar6;
}
