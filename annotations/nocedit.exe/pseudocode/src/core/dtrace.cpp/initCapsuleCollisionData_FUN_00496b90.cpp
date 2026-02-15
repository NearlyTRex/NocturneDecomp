// Name: core_dtrace.cpp_initCapsuleCollisionData_FUN_00496b90
// Address: 00496b90
// Address Range: [[00496b90, 00496c51]]
// Convention: __cdecl
// Signature: void __cdecl core_dtrace_cpp_initCapsuleCollisionData_FUN_00496b90(SCapsuleCollision *out_data,float start_x,float start_z,float dir_x,float dir_z,float radius,void *user_data1,void *user_data2)

#include "nocturne.h"

void __cdecl core_dtrace_cpp_initCapsuleCollisionData_FUN_00496b90(SCapsuleCollision *out_data,float start_x,float start_z,float dir_x,float dir_z,float radius,void *user_data1,void *user_data2)

{
  float fVar1;
  float fVar2;
  
  out_data->start_x = start_x;
  out_data->start_z = start_z;
  out_data->dir_x = dir_x;
  out_data->dir_z = dir_z;
  out_data->radius = radius;
  out_data->top_y = user_data2;
  out_data->bottom_y = user_data1;
  fVar1 = SQRT(dir_z * dir_z + dir_x * dir_x);
  fVar2 = radius / fVar1 + 1.0;
  out_data->sweep_slab_near = start_z * dir_z + start_x * dir_x;
  out_data->closest_t = 1.01;
  out_data->sweep_slab_far =
       fVar2 * dir_z * dir_z + fVar2 * dir_x * dir_x + out_data->sweep_slab_near;
  if (0.0 < fVar1) {
    out_data->normal_x = dir_x * (1.0 / fVar1);
    out_data->normal_z = dir_z * (1.0 / fVar1);
    return;
  }
  out_data->normal_z = 0.0;
  out_data->normal_x = 0.0;
  return;
}
