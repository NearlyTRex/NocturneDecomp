// Name: core_set.cpp_CDemonSet_calculateSpatialLighting_FUN_0050b5c0
// Address: 0050b5c0
// Address Range: [[0050b5c0, 0050b7e4]]
// Convention: __cdecl
// Signature: int __cdecl core_set_cpp_CDemonSet_calculateSpatialLighting_FUN_0050b5c0(CDemonSet *this_ptr,CVector3i *world_position,CVector3i *surface_normal)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_set_cpp_CDemonSet_calculateSpatialLighting_FUN_0050b5c0(CDemonSet *this_ptr,CVector3i *world_position,CVector3i *surface_normal)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  int aiStackY_1030 [1012];
  CVector3f *position;
  CVector3f *orientation;
  CVector3f *aabb_min;
  CVector3f *aabb_max;
  CDemonLight *light_source;
  CMatrix3x3f *rotation_matrix;
  CVector3i *light_direction;
  CVector3i local_48;
  CVector3i local_3c;
  CVector3i local_30;
  CVector3i local_24;
  int local_18;
  CDemonSet *local_14;
  
  bVar6 = 0;
  if (_DAT_01fff548 != 0) {
    if (_DAT_01fff548 == 1) {
      rotation_matrix = (CMatrix3x3f *)0x0;
      aabb_max = (CVector3f *)0x0;
      aabb_min = (CVector3f *)0x0;
      orientation = (CVector3f *)0x0;
      position = (CVector3f *)0x0;
    }
    else {
      rotation_matrix = (CMatrix3x3f *)&DAT_01fff57c;
      aabb_max = (CVector3f *)&DAT_01fff570;
      aabb_min = (CVector3f *)&DAT_01fff564;
      orientation = (CVector3f *)&DAT_01fff558;
      position = (CVector3f *)&DAT_01fff54c;
    }
    core_set_cpp_CDemonSet_gatherVisibleLights_FUN_0050aee0
              (this_ptr,position,orientation,aabb_min,aabb_max,rotation_matrix);
    _DAT_01fff548 = 0;
  }
  iVar4 = 0;
  iVar3 = 0;
  if (0 < _DAT_01fff07c) {
    iVar5 = 0;
    do {
      puVar1 = (uint *)(&DAT_01fff080 + iVar5);
      iVar5 = iVar5 + 4;
      iVar4 = iVar4 + 1;
      iVar2 = core_dcamera_cpp_CDemonCamera_calculateAttenuatedDirectionalLight_FUN_00442c50
                        (&g_CDemonCamera_01fb8508,world_position,(CDemonLight *)*puVar1,
                         surface_normal);
      iVar3 = iVar3 + iVar2;
    } while (iVar4 < _DAT_01fff07c);
  }
  iVar4 = 0;
  if (0 < _DAT_01ffeef8) {
    iVar5 = 0;
    do {
      puVar1 = (uint *)(&DAT_01ffeefc + iVar5);
      iVar5 = iVar5 + 4;
      iVar4 = iVar4 + 1;
      iVar2 = core_dcamera_cpp_CDemonCamera_calculateAttenuatedDirectionalLight_FUN_00442c50
                        (&g_CDemonCamera_01fb8508,world_position,(CDemonLight *)*puVar1,
                         surface_normal);
      iVar3 = iVar3 + iVar2;
    } while (iVar4 < _DAT_01ffeef8);
  }
  iVar4 = 0;
  if (0 < _DAT_01fff090) {
    iVar5 = 0;
    do {
      puVar1 = (uint *)(&DAT_01fff094 + iVar5);
      iVar5 = iVar5 + 4;
      iVar4 = iVar4 + 1;
      iVar2 = core_dglobe_cpp_CDemonGlobe_getAttenuationAtVertex_FUN_0044d2d0
                        ((CDemonGlobe *)*puVar1,world_position,surface_normal);
      iVar3 = iVar3 + iVar2;
    } while (iVar4 < _DAT_01fff090);
  }
  local_18 = 0;
  if (0 < this_ptr->mirror_glass_actor_count) {
    local_14 = this_ptr;
    do {
      core_mirror_cpp_CMirrorReflection_transformMirrorVertex_FUN_004d7b30
                (&(local_14->mirror_glass_actors[0]->mirror).reflection,world_position,&local_3c);
      local_48.x = local_3c.x;
      *(uint *)((int)&local_48 + (uint)bVar6 * -8 + 4) =
           *(uint *)((int)&local_3c + (uint)bVar6 * -8 + 4);
      *(uint *)((int)&local_48 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
           *(uint *)((int)&local_3c + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
      if (surface_normal != (CVector3i *)0x0) {
        core_mirror_cpp_CMirrorReflection_transformMirrorEdgeToIntegerSpace_FUN_004d7bd0
                  (&(local_14->mirror_glass_actors[0]->mirror).reflection,world_position,
                   surface_normal,&local_30);
        local_24.x = local_30.x;
        *(uint *)((int)&local_24 + (uint)bVar6 * -8 + 4) =
             *(uint *)((int)&local_30 + (uint)bVar6 * -8 + 4);
        *(uint *)((int)&local_24 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
             *(uint *)((int)&local_30 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
      }
      iVar4 = 0;
      if (0 < _DAT_01fba2d8) {
        iVar5 = 0;
        do {
          if (surface_normal == (CVector3i *)0x0) {
            light_source = *(CDemonLight **)(iVar5 + 0x1fba2dc);
            light_direction = (CVector3i *)0x0;
          }
          else {
            light_direction = &local_24;
            light_source = *(CDemonLight **)(iVar5 + 0x1fba2dc);
          }
          iVar2 = core_dcamera_cpp_CDemonCamera_calculateAttenuatedDirectionalLight_FUN_00442c50
                            (&g_CDemonCamera_01fb8508,&local_48,light_source,light_direction);
          iVar3 = iVar3 + iVar2;
          iVar4 = iVar4 + 1;
          iVar5 = iVar5 + 4;
        } while (iVar4 < _DAT_01fba2d8);
      }
      local_14 = (CDemonSet *)local_14->cameras;
      local_18 = local_18 + 1;
    } while (local_18 < this_ptr->mirror_glass_actor_count);
  }
  return iVar3;
}
