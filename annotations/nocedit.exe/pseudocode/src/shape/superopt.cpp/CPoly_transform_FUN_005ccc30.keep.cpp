// Name: shape_superopt.cpp_CPoly_transform_FUN_005ccc30
// Address: 005ccc30
// MANUAL RECONSTRUCTION
// Address Range: [[005ccc30, 005cd0aa]]
// Convention: __cdecl
// Signature: void __cdecl shape_superopt_cpp_CPoly_transform_FUN_005ccc30(CPoly *this_ptr,CMatrix3x3d *matrix,CVector3d *pivot)

#include "nocturne.h"

void __cdecl shape_superopt_cpp_CPoly_transform_FUN_005ccc30(CPoly *this_ptr,CMatrix3x3d *matrix,CVector3d *pivot)

{
  double dx;
  double dy;
  double dz;
  CVert *local_20;
  CVert *local_1c;
  CVert *local_18;

  local_20 = this_ptr->parent_obj->vertex_data;
  local_18 = local_20 + this_ptr->vertex_idx_0;
  dx = (local_18->position).x - pivot->x;
  dy = (local_18->position).y - pivot->y;
  dz = (local_18->position).z - pivot->z;
  (local_18->position).x = matrix->m[0].z * dz + matrix->m[0].x * dx + matrix->m[0].y * dy + pivot->x;
  (local_18->position).y = matrix->m[1].z * dz + matrix->m[1].x * dx + matrix->m[1].y * dy + pivot->y;
  (local_18->position).z = matrix->m[2].z * dz + matrix->m[2].x * dx + matrix->m[2].y * dy + pivot->z;
  local_18 = local_20 + this_ptr->vertex_idx_1;
  dx = (local_18->position).x - pivot->x;
  dy = (local_18->position).y - pivot->y;
  dz = (local_18->position).z - pivot->z;
  (local_18->position).x = matrix->m[0].z * dz + matrix->m[0].x * dx + matrix->m[0].y * dy + pivot->x;
  (local_18->position).y = matrix->m[1].z * dz + matrix->m[1].x * dx + matrix->m[1].y * dy + pivot->y;
  (local_18->position).z = matrix->m[2].z * dz + matrix->m[2].x * dx + matrix->m[2].y * dy + pivot->z;
  local_1c = local_20 + this_ptr->vertex_idx_2;
  dx = (local_1c->position).x - pivot->x;
  dy = (local_1c->position).y - pivot->y;
  dz = (local_1c->position).z - pivot->z;
  (local_1c->position).x = matrix->m[0].z * dz + matrix->m[0].x * dx + matrix->m[0].y * dy + pivot->x;
  (local_1c->position).y = matrix->m[1].z * dz + matrix->m[1].x * dx + matrix->m[1].y * dy + pivot->y;
  (local_1c->position).z = matrix->m[2].z * dz + matrix->m[2].x * dx + matrix->m[2].y * dy + pivot->z;
  return;
}
