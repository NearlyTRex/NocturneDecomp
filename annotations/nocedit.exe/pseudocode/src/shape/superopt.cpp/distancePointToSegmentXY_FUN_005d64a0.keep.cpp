// Name: shape_superopt.cpp_distancePointToSegmentXY_FUN_005d64a0
// Address: 005d64a0
// Address Range: [[005d64a0, 005d64f7]]
// Convention: __cdecl
// Signature: double __cdecl shape_superopt_cpp_distancePointToSegmentXY_FUN_005d64a0(CVector3d *segStart,CVector3d *segEnd,CVector3d *point)

#include "nocturne.h"

double __cdecl shape_superopt_cpp_distancePointToSegmentXY_FUN_005d64a0(CVector3d *segStart,CVector3d *segEnd,CVector3d *point)

{
  CVector2d closest;
  double dx;
  double dy;

  shape_superopt_cpp_closestPointOnSegment3D_FUN_005d6020(segStart,segEnd,point,&closest);
  dx = point->x - closest.x;
  dy = point->y - closest.y;
  return SQRT(dx * dx + dy * dy);
}
