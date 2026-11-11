// Name: core_skeleton.cpp_CDeformableModelInstance_rayIntersect_FUN_0054f400
// Address: 0054f400
// Address Range: [[0054f400, 0054f475]]
// Convention: __cdecl
// Signature: float __cdecl core_skeleton_cpp_CDeformableModelInstance_rayIntersect_FUN_0054f400(CDeformableModelInstance *this_ptr,CVector3f *ray_origin,CVector3f *ray_direction)

#include "nocturne.h"

float __cdecl core_skeleton_cpp_CDeformableModelInstance_rayIntersect_FUN_0054f400(CDeformableModelInstance *this_ptr,CVector3f *ray_origin,CVector3f *ray_direction)

{
  CDeformableModel *pCVar1;
  float fVar2;
  int lod_index;
  CVector3i *pCVar3;
  SPartInstanceData *pSVar4;
  
  pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_0054ea40(this_ptr);
  lod_index = pCVar1->num_lods + -2;
  if (lod_index < 0) {
    lod_index = 0;
  }
  if (lod_index != this_ptr->cached_skinned_lod_index) {
    core_skeleton_cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_0054e420(this_ptr,lod_index);
  }
  pSVar4 = &this_ptr->part_data;
  pCVar3 = this_ptr->skinned_vertices_buffer;
  pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_0054ea40(this_ptr);
  fVar2 = (float)core_skeleton_cpp_FUN_0054ac50
                           (pCVar1,lod_index,ray_origin,ray_direction,pCVar3,pSVar4);
  return fVar2;
}
