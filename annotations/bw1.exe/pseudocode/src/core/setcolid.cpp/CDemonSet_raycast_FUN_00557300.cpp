// Name: core_setcolid.cpp_CDemonSet_raycast_FUN_00557300
// Address: 00557300
// Address Range: [[00557300, 005574bf]]
// Convention: __cdecl
// Signature: float __cdecl core_setcolid_cpp_CDemonSet_raycast_FUN_00557300(CDemonSet *this_ptr,CVector3f *ray_origin,CVector3f *ray_target)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

float __cdecl core_setcolid_cpp_CDemonSet_raycast_FUN_00557300(CDemonSet *this_ptr,CVector3f *ray_origin,CVector3f *ray_target)

{
  CVector3f *out_intersection_point;
  float *pfVar1;
  byte bVar2;
  float afStackY_1044 [1013];
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  bVar2 = 0;
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
  local_14 = core_dtrace_cpp_CDemonRaytrace_rayVoxelIntersection_FUN_0048b150
                       (&g_CDemonRaytraceInstance,ray_origin,ray_target,out_intersection_point,
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
  local_14 = core_setcolid_cpp_CDemonSet_raycastAgainstActors_FUN_005578b0
                       (this_ptr,-1.0,ray_origin,ray_target,this_ptr->voxel_distance);
  this_ptr->raycast_distance = local_14;
  if (this_ptr->raycast_distance <= 1.0) {
    local_2c = ray_target->x - ray_origin->x;
    local_28 = ray_target->y - ray_origin->y;
    local_24 = ray_target->z - ray_origin->z;
    local_38 = local_2c;
    *(uint *)((int)&stack0xffffffcc + (uint)bVar2 * -8) =
         *(uint *)((int)&stack0xffffffd8 + (uint)bVar2 * -8);
    *(uint *)((int)&stack0xffffffd0 + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
         *(uint *)((int)&stack0xffffffdc + (uint)bVar2 * -8 + (uint)bVar2 * -8);
    pfVar1 = &this_ptr->raycast_distance;
    local_20 = local_38 * *pfVar1;
    local_1c = local_34 * *pfVar1;
    local_18 = local_30 * *pfVar1;
    local_50 = local_38 * *pfVar1;
    *(uint *)((int)&stack0xffffffb4 + (uint)bVar2 * -8) =
         *(uint *)((int)&stack0xffffffe4 + (uint)bVar2 * -8);
    *(uint *)((int)&stack0xffffffb8 + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
         *(uint *)((int)&stack0xffffffe8 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
    local_44 = ray_origin->x + local_50;
    local_40 = ray_origin->y + local_4c;
    local_3c = ray_origin->z + local_48;
    local_5c = local_44;
    (&stack0xffffffa8)[(uint)bVar2 * 0xfffffffe] =
         (float)*(uint *)((int)&stack0xffffffc0 + (uint)bVar2 * -8);
    *(uint *)((int)&stack0xffffffac + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
         *(uint *)((int)&stack0xffffffc4 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
    if (&this_ptr->collision_impact_position != (CVector3f *)&stack0xffffffa4) {
      (this_ptr->collision_impact_position).x = local_5c;
      (this_ptr->collision_impact_position).y = local_58;
      (this_ptr->collision_impact_position).z = local_54;
      return this_ptr->raycast_distance;
    }
  }
  return this_ptr->raycast_distance;
}
