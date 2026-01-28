// Name: core_skeleton.cpp_CDeformableModelInstance_rayIntersect_FUN_005a10e0
// Address: 005a10e0
// Address Range: [[005a10e0, 005a1155]]
// Convention: __cdecl
// Signature: float __cdecl core_skeleton_cpp_CDeformableModelInstance_rayIntersect_FUN_005a10e0 (CDeformableModelInstance *this_ptr,CVector3f *ray_origin,CVector3f *ray_direction)

#include "nocturne.h"

float __cdecl
core_skeleton_cpp_CDeformableModelInstance_rayIntersect_FUN_005a10e0
          (CDeformableModelInstance *this_ptr,CVector3f *ray_origin,CVector3f *ray_direction)

{
  CDeformableModel *pCVar1;
  float fVar2;
  int lod_index;
  CVector3i *skinned_vertices;
  int *part_visibility_flags;
  
  pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0(this_ptr);
  lod_index = pCVar1->num_lods + -2;
  if (lod_index < 0) {
    lod_index = 0;
  }
  if (lod_index != this_ptr->cached_skinned_lod_index) {
    core_skeleton_cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_005a01d0(this_ptr,lod_index);
  }
  part_visibility_flags = this_ptr->part_visibility_flags;
  skinned_vertices = this_ptr->skinned_vertices_buffer;
  pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0(this_ptr);
  fVar2 = core_skeleton_cpp_CDeformableModel_exactRayTrace_FUN_0059cba0
                    (pCVar1,lod_index,ray_origin,ray_direction,skinned_vertices,
                     (byte *)part_visibility_flags);
  return fVar2;
}
