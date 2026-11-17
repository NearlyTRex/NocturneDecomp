// Name: core_set.cpp_CDemonSet_calculateSpatialLighting_FUN_00552490
// Address: 00552490
// Address Range: [[00552490, 00552707]]
// Convention: __cdecl
// Signature: int __cdecl core_set_cpp_CDemonSet_calculateSpatialLighting_FUN_00552490(CDemonSet *this_ptr,CVector3i *world_position,CVector3i *surface_normal)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_set_cpp_CDemonSet_calculateSpatialLighting_FUN_00552490(CDemonSet *this_ptr,CVector3i *world_position,CVector3i *surface_normal)

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
  float *position;
  float *orientation;
  float *aabb_min;
  float *aabb_max;
  CDemonLight *light_source;
  CMatrix3x3f *rotation_matrix;
  CVector3i *light_direction;
  CVector3i local_48;
  CVector3i local_3c;
  CVector3i local_30;
  CVector3i local_24;
  int local_18;
  CDemonSet *local_14;
  
  bVar9 = 0;
  if (g_INT_0202a840 != 0) {
    if (g_INT_0202a840 == 1) {
      rotation_matrix = (CMatrix3x3f *)0x0;
      aabb_max = (float *)0x0;
      aabb_min = (float *)0x0;
      orientation = (float *)0x0;
      position = (float *)0x0;
    }
    else {
      rotation_matrix = &g_CMatrix3x3f_0202a874;
      aabb_max = &g_FLOAT_0202a868;
      aabb_min = &g_FLOAT_0202a85c;
      orientation = &g_FLOAT_0202a850;
      position = &g_FLOAT_0202a844;
    }
    core_set_cpp_CDemonSet_gatherVisibleLights_FUN_00551d50
              (this_ptr,(CVector3f *)position,(CVector3f *)orientation,(CVector3f *)aabb_min,
               (CVector3f *)aabb_max,rotation_matrix);
    g_INT_0202a840 = 0;
  }
  iVar7 = 0;
  iVar6 = 0;
  if (0 < g_INT_0202a374) {
    iVar8 = 0;
    do {
      puVar1 = (uint *)((int)g_CDemonLight_PTR_ARRAY_0202a378 + iVar8);
      iVar8 = iVar8 + 4;
      iVar7 = iVar7 + 1;
      iVar5 = core_dcamera_cpp_CDemonCamera_calculateAttenuatedDirectionalLight_FUN_0044f9c0
                        (&g_CDemonCameraInstance,world_position,(CDemonLight *)*puVar1,
                         surface_normal);
      iVar6 = iVar6 + iVar5;
    } while (iVar7 < g_INT_0202a374);
  }
  iVar7 = 0;
  if (0 < g_INT_0202a1f0) {
    iVar8 = 0;
    do {
      puVar1 = (uint *)((int)g_CDemonLight_PTR_ARRAY_0202a1f4 + iVar8);
      iVar8 = iVar8 + 4;
      iVar7 = iVar7 + 1;
      iVar5 = core_dcamera_cpp_CDemonCamera_calculateAttenuatedDirectionalLight_FUN_0044f9c0
                        (&g_CDemonCameraInstance,world_position,(CDemonLight *)*puVar1,
                         surface_normal);
      iVar6 = iVar6 + iVar5;
    } while (iVar7 < g_INT_0202a1f0);
  }
  iVar7 = 0;
  if (0 < g_INT_0202a388) {
    iVar8 = 0;
    do {
      puVar1 = (uint *)((int)&g_INT_0202a38c + iVar8);
      iVar8 = iVar8 + 4;
      iVar7 = iVar7 + 1;
      iVar5 = core_dglobe_cpp_CDemonGlobe_getAttenuationAtVertex_FUN_0045ef00
                        ((CDemonGlobe *)*puVar1,world_position,surface_normal);
      iVar6 = iVar6 + iVar5;
    } while (iVar7 < g_INT_0202a388);
  }
  if (((ABS(this_ptr->directional_light_intensity) != 0.0) && (surface_normal != (CVector3i *)0x0))
     && (lVar2 = (longlong)_DAT_0202634c * (longlong)surface_normal->x,
        lVar3 = (longlong)_DAT_02026350 * (longlong)surface_normal->y,
        lVar4 = (longlong)_DAT_02026354 * (longlong)surface_normal->z,
        iVar7 = ((uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10) +
                ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
                ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10), iVar7 < 0)) {
    iVar6 = iVar6 - iVar7;
  }
  local_18 = 0;
  if (0 < this_ptr->mirror_glass_actor_count) {
    local_14 = this_ptr;
    do {
      core_mirror_cpp_CMirrorReflection_transformMirrorVertex_FUN_00519ff0
                (&(local_14->mirror_glass_actors[0]->mirror).reflection,world_position,&local_48);
      local_3c.x = local_48.x;
      *(uint *)((int)&local_3c + (uint)bVar9 * -8 + 4) =
           *(uint *)((int)&local_48 + (uint)bVar9 * -8 + 4);
      *(uint *)((int)&local_3c + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) =
           *(uint *)((int)&local_48 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
      if (surface_normal != (CVector3i *)0x0) {
        core_mirror_cpp_CMirrorReflection_transformMirrorEdgeToIntegerSpace_FUN_0051a0a0
                  (&(local_14->mirror_glass_actors[0]->mirror).reflection,world_position,
                   surface_normal,&local_24);
        local_30.x = local_24.x;
        *(uint *)((int)&local_30 + (uint)bVar9 * -8 + 4) =
             *(uint *)((int)&local_24 + (uint)bVar9 * -8 + 4);
        *(uint *)((int)&local_30 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) =
             *(uint *)((int)&local_24 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
      }
      iVar7 = 0;
      if (0 < g_INT_01fe55bc) {
        iVar8 = 0;
        do {
          if (surface_normal == (CVector3i *)0x0) {
            light_source = *(CDemonLight **)((int)g_CDemonLight_PTR_ARRAY_01fe55c0 + iVar8);
            light_direction = (CVector3i *)0x0;
          }
          else {
            light_direction = &local_30;
            light_source = *(CDemonLight **)((int)g_CDemonLight_PTR_ARRAY_01fe55c0 + iVar8);
          }
          iVar5 = core_dcamera_cpp_CDemonCamera_calculateAttenuatedDirectionalLight_FUN_0044f9c0
                            (&g_CDemonCameraInstance,&local_3c,light_source,light_direction);
          iVar6 = iVar6 + iVar5;
          iVar7 = iVar7 + 1;
          iVar8 = iVar8 + 4;
        } while (iVar7 < g_INT_01fe55bc);
      }
      local_14 = (CDemonSet *)local_14->cameras;
      local_18 = local_18 + 1;
    } while (local_18 < this_ptr->mirror_glass_actor_count);
  }
  return iVar6;
}
