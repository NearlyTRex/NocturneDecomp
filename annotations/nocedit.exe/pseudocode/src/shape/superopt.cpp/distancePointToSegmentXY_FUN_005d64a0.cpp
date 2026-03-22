// Name: shape_superopt.cpp_distancePointToSegmentXY_FUN_005d64a0
// Address: 005d64a0
// Address Range: [[005d64a0, 005d64f7] [00604f0e, 00604f30]]
// Convention: __cdecl
// Signature: double __cdecl shape_superopt_cpp_distancePointToSegmentXY_FUN_005d64a0(CVector3d *segStart,CVector3d *segEnd,CVector3d *point)

#include "nocturne.h"

double __cdecl shape_superopt_cpp_distancePointToSegmentXY_FUN_005d64a0(CVector3d *segStart,CVector3d *segEnd,CVector3d *point)

{
  double dVar1;
  double dVar2;
  CVector2d local_48;
  double local_30 [4];
  
  shape_superopt_cpp_closestPointOnSegment3D_FUN_005d6020(segStart,segEnd,point,&local_48);
  dVar1 = point->x - __BITCAST_DOUBLE(CONCAT44(local_48.x._4_4_,local_48.x._0_4_));
  dVar2 = point->y - __BITCAST_DOUBLE(CONCAT44(local_48.y._4_4_,local_48.y._0_4_));
  return SQRT(dVar2 * dVar2 + dVar1 * dVar1);
}
