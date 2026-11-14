// Name: core_setcolid.cpp_FUN_0053ccc0
// Address: 0053ccc0
// Address Range: [[0053ccc0, 0053ce7f]]
// Convention: unknown
// Signature: float core_setcolid_cpp_FUN_0053ccc0(CDemonSet *param_1,CVector3f *param_2,CVector3f *param_3)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

float core_setcolid_cpp_FUN_0053ccc0(CDemonSet *param_1,CVector3f *param_2,CVector3f *param_3)

{
  CVector3f *pCVar1;
  float *pfVar2;
  byte bVar3;
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
  
  bVar3 = 0;
  if (&param_1->ray_origin != param_2) {
    (param_1->ray_origin).x = param_2->x;
    (param_1->ray_origin).y = param_2->y;
    (param_1->ray_origin).z = param_2->z;
  }
  if (&param_1->ray_target != param_3) {
    (param_1->ray_target).x = param_3->x;
    (param_1->ray_target).y = param_3->y;
    (param_1->ray_target).z = param_3->z;
  }
  pCVar1 = &param_1->voxel_hit_point;
  local_14 = (float)core_dtrace_cpp_FUN_00473cd0
                              (&g_CDemonRaytraceInstance,param_2,param_3,pCVar1,
                               &param_1->voxel_surface_type);
  param_1->voxel_distance = local_14;
  if (&param_1->collision_normal != pCVar1) {
    (param_1->collision_normal).x = pCVar1->x;
    (param_1->collision_normal).y = (param_1->voxel_hit_point).y;
    (param_1->collision_normal).z = (param_1->voxel_hit_point).z;
  }
  param_1->ground_type = param_1->voxel_surface_type;
  if (param_1->voxel_distance < 0.0) {
    param_1->voxel_distance = 1.01;
  }
  local_14 = core_setcolid_cpp_CDemonSet_raycastAgainstActors_FUN_0053d270
                       (param_1,-1.0,param_2,param_3,param_1->voxel_distance);
  param_1->raycast_distance = local_14;
  if (param_1->raycast_distance <= 1.0) {
    local_2c = param_3->x - param_2->x;
    local_28 = param_3->y - param_2->y;
    local_24 = param_3->z - param_2->z;
    local_38 = local_2c;
    *(uint *)((int)&stack0xffffffcc + (uint)bVar3 * -8) =
         *(uint *)((int)&stack0xffffffd8 + (uint)bVar3 * -8);
    *(uint *)((int)&stack0xffffffd0 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
         *(uint *)((int)&stack0xffffffdc + (uint)bVar3 * -8 + (uint)bVar3 * -8);
    pfVar2 = &param_1->raycast_distance;
    local_20 = local_38 * *pfVar2;
    local_1c = local_34 * *pfVar2;
    local_18 = local_30 * *pfVar2;
    local_50 = local_38 * *pfVar2;
    *(uint *)((int)&stack0xffffffb4 + (uint)bVar3 * -8) =
         *(uint *)((int)&stack0xffffffe4 + (uint)bVar3 * -8);
    *(uint *)((int)&stack0xffffffb8 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
         *(uint *)((int)&stack0xffffffe8 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
    local_44 = param_2->x + local_50;
    local_40 = param_2->y + local_4c;
    local_3c = param_2->z + local_48;
    local_5c = local_44;
    (&stack0xffffffa8)[(uint)bVar3 * 0xfffffffe] =
         (float)*(uint *)((int)&stack0xffffffc0 + (uint)bVar3 * -8);
    *(uint *)((int)&stack0xffffffac + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
         *(uint *)((int)&stack0xffffffc4 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
    if (&param_1->collision_impact_position != (CVector3f *)&stack0xffffffa4) {
      (param_1->collision_impact_position).x = local_5c;
      (param_1->collision_impact_position).y = local_58;
      (param_1->collision_impact_position).z = local_54;
      return param_1->raycast_distance;
    }
  }
  return param_1->raycast_distance;
}
