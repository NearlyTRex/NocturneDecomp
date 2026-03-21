// Name: shape_superopt.cpp_closestPointOnSegment3D_FUN_005d6020
// Address: 005d6020
// Address Range: [[005d6020, 005d63cb]]
// Convention: __stack3_esi
// Signature: CVector2d * __stack3_esi shape_superopt_cpp_closestPointOnSegment3D_FUN_005d6020(CVector3d *segment_start,CVector3d *segment_end,CVector3d *query_point,CVector2d *out_point)

#include "nocturne.h"

CVector2d * __stack3_esi shape_superopt_cpp_closestPointOnSegment3D_FUN_005d6020(CVector3d *segment_start,CVector3d *segment_end,CVector3d *query_point,CVector2d *out_point)

{
  CVector3d direction;
  CVector3d to_point;
  double len_sq;
  double t;

  direction.x = segment_end->x - segment_start->x;
  direction.y = segment_end->y - segment_start->y;
  direction.z = 0.0;

  to_point.x = query_point->x - segment_start->x;
  to_point.y = query_point->y - segment_start->y;
  to_point.z = 0.0;

  len_sq = direction.x * direction.x + direction.y * direction.y + direction.z * direction.z;

  t = 0.0;
  if (len_sq != 0.0) {
    t = (to_point.x * direction.x + to_point.y * direction.y + to_point.z * direction.z) / len_sq;
  }
  if (t < 0.0) {
    t = 0.0;
  }
  else if (t >= 1.0) {
    t = 1.0;
  }

  out_point->x = segment_start->x + direction.x * t;
  out_point->y = segment_start->y + direction.y * t;
  return out_point;
}
