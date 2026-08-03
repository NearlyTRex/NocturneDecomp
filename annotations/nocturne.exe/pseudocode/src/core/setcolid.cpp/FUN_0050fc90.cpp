// Name: core_setcolid.cpp_FUN_0050fc90
// Address: 0050fc90
// Address Range: [[0050fc90, 0050fdcc]]
// Convention: unknown
// Signature: float core_setcolid_cpp_FUN_0050fc90(CDemonSet *param_1)

#include "nocturne.h"

float core_setcolid_cpp_FUN_0050fc90(CDemonSet *param_1)

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
  float afStack_30 [11];
  
  if (param_1->raycast_distance < param_1->voxel_distance) {
    if (&param_1->collision_normal != &param_1->voxel_hit_point) {
      (param_1->collision_normal).x = (param_1->voxel_hit_point).x;
      (param_1->collision_normal).y = (param_1->voxel_hit_point).y;
      (param_1->collision_normal).z = (param_1->voxel_hit_point).z;
    }
    ray_origin = &param_1->ray_origin;
    param_1->ground_type = param_1->voxel_surface_type;
    fVar9 = core_setcolid_cpp_CDemonSet_raycastAgainstActors_FUN_0050ffe0
                      (param_1,param_1->raycast_distance,ray_origin,&param_1->ray_target,
                       param_1->voxel_distance);
    param_1->raycast_distance = fVar9;
    if (param_1->raycast_distance <= 1.0) {
      fVar9 = (param_1->ray_target).y;
      fVar2 = (param_1->ray_origin).y;
      pfVar1 = &param_1->raycast_distance;
      fVar3 = (param_1->ray_target).z;
      fVar4 = (param_1->ray_origin).z;
      fVar5 = *pfVar1;
      fVar6 = *pfVar1;
      fVar7 = (param_1->ray_origin).y;
      fVar8 = (param_1->ray_origin).z;
      if (&param_1->collision_impact_position != (CVector3f *)afStack_30) {
        (param_1->collision_impact_position).x =
             ray_origin->x + ((param_1->ray_target).x - ray_origin->x) * *pfVar1;
        (param_1->collision_impact_position).y = fVar7 + (fVar9 - fVar2) * fVar5;
        (param_1->collision_impact_position).z = fVar8 + (fVar3 - fVar4) * fVar6;
      }
    }
    return param_1->raycast_distance;
  }
  return 2.0;
}
