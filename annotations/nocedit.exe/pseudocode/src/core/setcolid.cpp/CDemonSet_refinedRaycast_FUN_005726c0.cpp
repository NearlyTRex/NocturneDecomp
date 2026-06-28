// Name: core_setcolid.cpp_CDemonSet_refinedRaycast_FUN_005726c0
// Address: 005726c0
// Address Range: [[005726c0, 005727fc]]
// Convention: __cdecl
// Signature: float __cdecl core_setcolid_cpp_CDemonSet_refinedRaycast_FUN_005726c0(CDemonSet *this_ptr)

#include "nocturne.h"

float __cdecl core_setcolid_cpp_CDemonSet_refinedRaycast_FUN_005726c0(CDemonSet *this_ptr)

{
  float fVar1;
  float fVar9;
  float local_30 [11];
  float fVar7;
  float fVar2;
  CVector3f *ray_origin;
  float *pfVar1;
  float fVar5;
  float fVar6;
  float fVar3;
  float fVar4;
  float fVar8;
  
  if (this_ptr->raycast_distance < this_ptr->voxel_distance) {
    if (&this_ptr->collision_normal != &this_ptr->voxel_hit_point) {
      (this_ptr->collision_normal).x = (this_ptr->voxel_hit_point).x;
      (this_ptr->collision_normal).y = (this_ptr->voxel_hit_point).y;
      (this_ptr->collision_normal).z = (this_ptr->voxel_hit_point).z;
    }
    ray_origin = &this_ptr->ray_origin;
    this_ptr->ground_type = this_ptr->voxel_surface_type;
    fVar9 = core_setcolid_cpp_CDemonSet_raycastAgainstActors_FUN_00572a10
                      (this_ptr,this_ptr->raycast_distance,ray_origin,&this_ptr->ray_target,
                       this_ptr->voxel_distance);
    this_ptr->raycast_distance = fVar9;
    if (this_ptr->raycast_distance <= 1.0) {
      fVar1 = (this_ptr->ray_target).y;
      fVar2 = (this_ptr->ray_origin).y;
      pfVar1 = &this_ptr->raycast_distance;
      fVar3 = (this_ptr->ray_target).z;
      fVar4 = (this_ptr->ray_origin).z;
      fVar5 = *pfVar1;
      fVar6 = *pfVar1;
      fVar7 = (this_ptr->ray_origin).y;
      fVar8 = (this_ptr->ray_origin).z;
      if (&this_ptr->collision_impact_position != (CVector3f *)local_30) {
        (this_ptr->collision_impact_position).x =
             ray_origin->x + ((this_ptr->ray_target).x - ray_origin->x) * *pfVar1;
        (this_ptr->collision_impact_position).y = fVar7 + (fVar1 - fVar2) * fVar5;
        (this_ptr->collision_impact_position).z = fVar8 + (fVar3 - fVar4) * fVar6;
      }
    }
    return this_ptr->raycast_distance;
  }
  return 2.0;
}
