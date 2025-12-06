// Name: core_setcolid.cpp_CDemonSet_refinedRaycast_FUN_005726c0
// Address: 005726c0
// Address Range: [[005726c0, 005727fc]]
// Convention: __cdecl
// Signature: float core_setcolid.cpp_CDemonSet_refinedRaycast_FUN_005726c0(CDemonSet * this_ptr)

#include "nocturne.h"

float __cdecl core_setcolid_cpp_CDemonSet_refinedRaycast_FUN_005726c0(CDemonSet *this_ptr)

{
  CVector3f *ray_origin;
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  BADSPACEBASE *in_ESP;
  float local_2c [10];
  
  if (this_ptr->raycast_distance < (float)this_ptr->voxel_distance) {
    if (&this_ptr->collision_normal != &this_ptr->voxel_hit_point) {
      (this_ptr->collision_normal).x = (this_ptr->voxel_hit_point).x;
      (this_ptr->collision_normal).y = (this_ptr->voxel_hit_point).y;
      (this_ptr->collision_normal).z = (this_ptr->voxel_hit_point).z;
    }
    ray_origin = &this_ptr->collision_result_vec1;
    this_ptr->ground_type = this_ptr->voxel_surface_type;
    fVar9 = core_setcolid_cpp_CDemonSet_raycastAgainstActors_FUN_00572a10
                      (this_ptr,this_ptr->raycast_distance,ray_origin,
                       &this_ptr->collision_result_vec2,(float)this_ptr->voxel_distance);
    this_ptr->raycast_distance = fVar9;
    if (this_ptr->raycast_distance <= 1.0) {
      fVar9 = (this_ptr->collision_result_vec2).y;
      fVar2 = (this_ptr->collision_result_vec1).y;
      pfVar1 = &this_ptr->raycast_distance;
      fVar3 = (this_ptr->collision_result_vec2).z;
      fVar4 = (this_ptr->collision_result_vec1).z;
      fVar5 = *pfVar1;
      fVar6 = *pfVar1;
      fVar7 = (this_ptr->collision_result_vec1).y;
      fVar8 = (this_ptr->collision_result_vec1).z;
      if (&this_ptr->collision_impact_position != (CVector3f *)local_2c) {
        (this_ptr->collision_impact_position).x =
             ray_origin->x + ((this_ptr->collision_result_vec2).x - ray_origin->x) * *pfVar1;
        (this_ptr->collision_impact_position).y = fVar7 + (fVar9 - fVar2) * fVar5;
        (this_ptr->collision_impact_position).z = fVar8 + (fVar3 - fVar4) * fVar6;
      }
    }
    return this_ptr->raycast_distance;
  }
  return 2.0;
}
