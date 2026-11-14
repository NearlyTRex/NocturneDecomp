// Name: core_setcolid.cpp_FUN_005360a0
// Address: 005360a0
// Address Range: [[005360a0, 0053620c]]
// Convention: unknown
// Signature: float core_setcolid_cpp_FUN_005360a0(CDemonSet *param_1)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

float core_setcolid_cpp_FUN_005360a0(CDemonSet *param_1)

{
  CVector3f *ray_origin;
  float *pfVar1;
  byte bVar2;
  float afStackY_1040 [1011];
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_c;
  
  bVar2 = 0;
  if (param_1->raycast_distance < param_1->voxel_distance) {
    if (&param_1->collision_normal != &param_1->voxel_hit_point) {
      (param_1->collision_normal).x = (param_1->voxel_hit_point).x;
      (param_1->collision_normal).y = (param_1->voxel_hit_point).y;
      (param_1->collision_normal).z = (param_1->voxel_hit_point).z;
    }
    ray_origin = &param_1->ray_origin;
    param_1->ground_type = param_1->voxel_surface_type;
    fStack_c = core_setcolid_cpp_CDemonSet_raycastAgainstActors_FUN_00536490
                         (param_1,param_1->raycast_distance,ray_origin,&param_1->ray_target,
                          param_1->voxel_distance);
    param_1->raycast_distance = fStack_c;
    if (param_1->raycast_distance <= 1.0) {
      fStack_40 = (param_1->ray_target).x - ray_origin->x;
      fStack_3c = (param_1->ray_target).y - (param_1->ray_origin).y;
      fStack_38 = (param_1->ray_target).z - (param_1->ray_origin).z;
      fStack_1c = fStack_40;
      *(uint *)((int)&stack0xffffffe8 + (uint)bVar2 * -8) =
           *(uint *)((int)&stack0xffffffc4 + (uint)bVar2 * -8);
      *(uint *)((int)&stack0xffffffec + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
           *(uint *)((int)&stack0xffffffc8 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
      pfVar1 = &param_1->raycast_distance;
      fStack_28 = fStack_1c * *pfVar1;
      fStack_24 = fStack_18 * *pfVar1;
      fStack_20 = fStack_14 * *pfVar1;
      fStack_34 = fStack_1c * *pfVar1;
      *(uint *)((int)&stack0xffffffd0 + (uint)bVar2 * -8) =
           *(uint *)((int)&stack0xffffffdc + (uint)bVar2 * -8);
      *(uint *)((int)&stack0xffffffd4 + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
           *(uint *)((int)&stack0xffffffe0 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
      fStack_58 = ray_origin->x + fStack_34;
      fStack_54 = (param_1->ray_origin).y + fStack_30;
      fStack_50 = (param_1->ray_origin).z + fStack_2c;
      fStack_4c = fStack_58;
      (&stack0xffffffb8)[(uint)bVar2 * 0xfffffffe] =
           (float)*(uint *)((int)&stack0xffffffac + (uint)bVar2 * -8);
      *(uint *)((int)&stack0xffffffbc + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
           *(uint *)((int)&stack0xffffffb0 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
      if (&param_1->collision_impact_position != (CVector3f *)&stack0xffffffb4) {
        (param_1->collision_impact_position).x = fStack_4c;
        (param_1->collision_impact_position).y = fStack_48;
        (param_1->collision_impact_position).z = fStack_44;
      }
    }
    return param_1->raycast_distance;
  }
  return 2.0;
}
