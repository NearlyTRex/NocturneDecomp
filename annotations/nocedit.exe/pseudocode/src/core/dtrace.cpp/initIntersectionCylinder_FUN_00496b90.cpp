// Name: core_dtrace.cpp_initIntersectionCylinder_FUN_00496b90
// Address: 00496b90
// Address Range: [[00496b90, 00496c51]]
// Convention: __cdecl
// Signature: void __cdecl core_dtrace_cpp_initIntersectionCylinder_FUN_00496b90(SIntersectXZCylinder *this_ptr,float start_x,float start_z,float dir_x,float dir_z,float radius,float bottom_y,float top_y)

#include "nocturne.h"

void __cdecl core_dtrace_cpp_initIntersectionCylinder_FUN_00496b90(SIntersectXZCylinder *this_ptr,float start_x,float start_z,float dir_x,float dir_z,float radius,float bottom_y,float top_y)

{
  float fVar1;
  float fVar2;
  
  this_ptr->center_x = start_x;
  this_ptr->center_z = start_z;
  this_ptr->dir_x = dir_x;
  this_ptr->dir_z = dir_z;
  this_ptr->radius = radius;
  this_ptr->top_y = top_y;
  this_ptr->bottom_y = bottom_y;
  fVar1 = SQRT(dir_z * dir_z + dir_x * dir_x);
  fVar2 = radius / fVar1 + 1.0;
  this_ptr->sweep_slab_near = start_z * dir_z + start_x * dir_x;
  this_ptr->closest_t = 1.01;
  this_ptr->sweep_slab_far =
       fVar2 * dir_z * dir_z + fVar2 * dir_x * dir_x + this_ptr->sweep_slab_near;
  if (0.0 < fVar1) {
    this_ptr->normal_x = dir_x * (1.0 / fVar1);
    this_ptr->normal_z = dir_z * (1.0 / fVar1);
    return;
  }
  this_ptr->normal_z = 0.0;
  this_ptr->normal_x = 0.0;
  return;
}
