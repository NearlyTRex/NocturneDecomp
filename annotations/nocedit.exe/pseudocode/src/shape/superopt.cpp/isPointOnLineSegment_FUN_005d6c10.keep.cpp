// Name: shape_superopt.cpp_isPointOnLineSegment_FUN_005d6c10
// Address: 005d6c10
// MANUAL RECONSTRUCTION
// Address Range: [[005d6c10, 005d6f80]]
// Convention: __cdecl
// Signature: int __cdecl shape_superopt_cpp_isPointOnLineSegment_FUN_005d6c10(CVector3d *point,CVector3d *seg_start,CVector3d *seg_end)

#include "nocturne.h"

int __cdecl shape_superopt_cpp_isPointOnLineSegment_FUN_005d6c10(CVector3d *point,CVector3d *seg_start,CVector3d *seg_end)

{
  int iVar1;
  double local_f8;
  double local_f0;
  double local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  CVector3d local_88;
  CVector3d local_28;
  
  if (((point->x == seg_start->x) && (point->y == seg_start->y)) && (point->z == seg_start->z)) {
    return 1;
  }
  if (((point->x == seg_end->x) && (point->y == seg_end->y)) && (point->z == seg_end->z)) {
    return 1;
  }
  if (seg_start->x < seg_end->x) {
    local_b0 = seg_start->x;
  }
  else {
    local_b0 = seg_end->x;
  }
  if (seg_end->y <= seg_start->y) {
    local_c0 = seg_end->y;
  }
  else {
    local_c0 = seg_start->y;
  }
  if (seg_end->z <= seg_start->z) {
    local_f8 = seg_end->z;
  }
  else {
    local_f8 = seg_start->z;
  }
  if (seg_start->x <= seg_end->x) {
    local_a8 = seg_end->x;
  }
  else {
    local_a8 = seg_start->x;
  }
  if (seg_start->y <= seg_end->y) {
    local_f0 = seg_end->y;
  }
  else {
    local_f0 = seg_start->y;
  }
  if (seg_start->z <= seg_end->z) {
    local_b8 = seg_end->z;
  }
  else {
    local_b8 = seg_start->z;
  }
  if (((local_b0 + -0.0001 <= point->x) &&
      (point->x <= local_a8 + 0.0001)) &&
     ((local_c0 + -0.0001 <= point->y &&
      (((point->y <= local_f0 + 0.0001 &&
        (local_f8 + -0.0001 <= point->z)) &&
       (point->z <= local_b8 + 0.0001)))))) {
    local_88.x = point->x - seg_start->x;
    local_88.y = point->y - seg_start->y;
    local_88.z = point->z - seg_start->z;
    local_28.x = point->x - seg_end->x;
    local_28.y = point->y - seg_end->y;
    local_28.z = point->z - seg_end->z;
    iVar1 = shape_superopt_cpp_areVectorsCollinear_FUN_005d66e0(&local_88,&local_28);
    return iVar1;
  }
  return 0;
}
