// Name: core_set.cpp_CDemonSet_calculateSpatialLighting_FUN_0056db80
// Address: 0056db80
// MANUAL RECONSTRUCTION
// Address Range: [[0056db80, 0056dda4] [0060ca61, 0060ca9b]]
// Convention: __cdecl
// Signature: int __cdecl core_set_cpp_CDemonSet_calculateSpatialLighting_FUN_0056db80(CDemonSet *this_ptr,CVector3i *world_position,CVector3i *surface_normal)

#include "nocturne.h"

int __cdecl core_set_cpp_CDemonSet_calculateSpatialLighting_FUN_0056db80(CDemonSet *this_ptr,CVector3i *world_position,CVector3i *surface_normal)

{
  int iVar2;
  int iVar6;
  int iVar3;
  int iVar4;
  int iVar8;
  byte bVar6;
  CVector3i local_48;
  CVector3f local_3c;
  CVector3i local_30;
  CVector3i local_24;
  int local_18;
  CDemonSet *local_14;
  CVector3i *light_direction;
  CVector3f *orientation;
  CVector3f *aabb_max;
  CVector3f *aabb_min;
  CMatrix3x3f *rotation_matrix;
  CDemonLight *light_source;
  CVector3f *position;
  
  if (g_LightingSystemDirty != 0) {
    if (g_LightingSystemDirty == 1) {
      rotation_matrix = (CMatrix3x3f *)0x0;
      aabb_max = (CVector3f *)0x0;
      aabb_min = (CVector3f *)0x0;
      orientation = (CVector3f *)0x0;
      position = (CVector3f *)0x0;
    }
    else {
      rotation_matrix = &g_LightingRotationMatrix;
      aabb_max = &g_LightingAABBMax;
      aabb_min = &g_LightingAABBMin;
      orientation = &g_LightingOrientation;
      position = &g_LightingReferencePosition;
    }
    core_set_cpp_CDemonSet_gatherVisibleLights_FUN_0056d4a0
              (this_ptr,position,orientation,aabb_min,aabb_max,rotation_matrix);
    g_LightingSystemDirty = 0;
  }
  iVar3 = 0;
  for (iVar4 = 0; iVar4 < g_PrimaryDirectionalLightCount; iVar4 = iVar4 + 1) {
    iVar2 = core_dcamera_cpp_CDemonCamera_calculateAttenuatedDirectionalLight_FUN_0044edf0
                      (&g_CDemonCameraInstance,world_position,g_PrimaryDirectionalLights[iVar4],
                       surface_normal);
    iVar3 = iVar3 + iVar2;
  }
  for (iVar8 = 0; iVar8 < g_SecondaryDirectionalLightCount; iVar8 = iVar8 + 1) {
    iVar6 = core_dcamera_cpp_CDemonCamera_calculateAttenuatedDirectionalLight_FUN_0044edf0
                      (&g_CDemonCameraInstance,world_position,g_SecondaryDirectionalLights[iVar8],
                       surface_normal);
    iVar3 = iVar3 + iVar6;
  }
  for (iVar8 = 0; iVar8 < g_GlobeLightCount; iVar8 = iVar8 + 1) {
    iVar6 = core_dglobe_cpp_CDemonGlobe_getAttenuationAtVertex_FUN_00471850
                      (g_GlobeLights[iVar8],world_position,surface_normal);
    iVar3 = iVar3 + iVar6;
  }
  local_18 = 0;
  if (0 < this_ptr->mirror_glass_actor_count) {
    local_14 = this_ptr;
    do {
      core_mirror_cpp_CMirrorReflection_transformMirrorVertex_FUN_005229b0
                (&(local_14->mirror_glass_actors[0]->mirror).reflection,(CVector3f *)world_position,
                 &local_3c);
      if (surface_normal != (CVector3i *)0x0) {
        core_mirror_cpp_CMirrorReflection_transformMirrorEdgeToIntegerSpace_FUN_00522a50
                  (&(local_14->mirror_glass_actors[0]->mirror).reflection,world_position,
                   surface_normal,&local_30);
      }
      for (iVar8 = 0; iVar8 < g_DynamicLightCount; iVar8 = iVar8 + 1) {
        light_source = g_DynamicLights[iVar8];
        if (surface_normal == (CVector3i *)0x0) {
          light_direction = (CVector3i *)0x0;
        }
        else {
          light_direction = &local_24;
        }
        iVar6 = core_dcamera_cpp_CDemonCamera_calculateAttenuatedDirectionalLight_FUN_0044edf0
                          (&g_CDemonCameraInstance,&local_48,light_source,light_direction);
        iVar3 = iVar3 + iVar6;
      }
      local_14 = (CDemonSet *)local_14->cameras;
      local_18 = local_18 + 1;
    } while (local_18 < this_ptr->mirror_glass_actor_count);
  }
  return iVar3;
}
