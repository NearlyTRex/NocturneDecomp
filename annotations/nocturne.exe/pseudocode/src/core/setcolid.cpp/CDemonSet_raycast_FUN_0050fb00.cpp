// Name: core_setcolid.cpp_CDemonSet_raycast_FUN_0050fb00
// Address: 0050fb00
// Address Range: [[0050fb00, 0050fc8f]]
// Convention: __cdecl
// Signature: float __cdecl core_setcolid_cpp_CDemonSet_raycast_FUN_0050fb00(CDemonSet *this_ptr,CVector3f *ray_origin,CVector3f *ray_target)

#include "nocturne.h"

float __cdecl core_setcolid_cpp_CDemonSet_raycast_FUN_0050fb00(CDemonSet *this_ptr,CVector3f *ray_origin,CVector3f *ray_target)

{
  CVector3f *out_intersection_point;
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float local_20 [3];
  float local_14;
  
  if (&this_ptr->ray_origin != ray_origin) {
    (this_ptr->ray_origin).x = ray_origin->x;
    (this_ptr->ray_origin).y = ray_origin->y;
    (this_ptr->ray_origin).z = ray_origin->z;
  }
  if (&this_ptr->ray_target != ray_target) {
    (this_ptr->ray_target).x = ray_target->x;
    (this_ptr->ray_target).y = ray_target->y;
    (this_ptr->ray_target).z = ray_target->z;
  }
  out_intersection_point = &this_ptr->voxel_hit_point;
  local_14 = core_dtrace_cpp_CDemonRaytrace_rayVoxelIntersection_FUN_00467a00
                       (&g_CDemonRaytrace_01fba938,ray_origin,ray_target,out_intersection_point,
                        &this_ptr->voxel_surface_type);
  this_ptr->voxel_distance = local_14;
  if (&this_ptr->collision_normal != out_intersection_point) {
    (this_ptr->collision_normal).x = out_intersection_point->x;
    (this_ptr->collision_normal).y = (this_ptr->voxel_hit_point).y;
    (this_ptr->collision_normal).z = (this_ptr->voxel_hit_point).z;
  }
  this_ptr->ground_type = this_ptr->voxel_surface_type;
  if (this_ptr->voxel_distance < 0.0) {
    this_ptr->voxel_distance = 1.01;
  }
  fVar9 = core_setcolid_cpp_CDemonSet_raycastAgainstActors_FUN_0050ffe0
                    (this_ptr,-1.0,ray_origin,ray_target,this_ptr->voxel_distance);
  this_ptr->raycast_distance = fVar9;
  if (this_ptr->raycast_distance <= 1.0) {
    fVar9 = ray_target->y;
    fVar2 = ray_origin->y;
    pfVar1 = &this_ptr->raycast_distance;
    fVar3 = ray_target->z;
    fVar4 = ray_origin->z;
    fVar5 = *pfVar1;
    fVar6 = *pfVar1;
    fVar7 = ray_origin->y;
    fVar8 = ray_origin->z;
    if (&this_ptr->collision_impact_position != (CVector3f *)local_20) {
      (this_ptr->collision_impact_position).x =
           ray_origin->x + (ray_target->x - ray_origin->x) * *pfVar1;
      (this_ptr->collision_impact_position).y = fVar7 + (fVar9 - fVar2) * fVar5;
      (this_ptr->collision_impact_position).z = fVar8 + (fVar3 - fVar4) * fVar6;
      return this_ptr->raycast_distance;
    }
  }
  return this_ptr->raycast_distance;
}
