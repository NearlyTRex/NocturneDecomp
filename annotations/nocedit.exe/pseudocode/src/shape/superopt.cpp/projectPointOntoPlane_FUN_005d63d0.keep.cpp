// Name: shape_superopt.cpp_projectPointOntoPlane_FUN_005d63d0
// Address: 005d63d0
// MANUAL RECONSTRUCTION
// Address Range: [[005d63d0, 005d6492]]
// Convention: __stack3_esi
// Signature: CVector3d * __stack3_esi shape_superopt_cpp_projectPointOntoPlane_FUN_005d63d0(CVector3d *point,CVector3d *plane_point,CVector3d *plane_normal,CVector3d *out_point)

#include "nocturne.h"

CVector3d * __stack3_esi shape_superopt_cpp_projectPointOntoPlane_FUN_005d63d0(CVector3d *point,CVector3d *plane_point,CVector3d *plane_normal,CVector3d *out_point)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  CVector3d local_70;
  double local_58;
  double local_50;
  double local_48;
  double local_40;
  double local_38;
  double local_30;
  double local_18;
  CVector3d *pCStack_10;
  
  local_70.x = -plane_normal->x;
  local_70.y = -plane_normal->y;
  local_70.z = -plane_normal->z;
  pCStack_10 = out_point;
  local_18 = shape_superopt_cpp_rayPlaneIntersect_FUN_005d6500
                       (point,&local_70,plane_point,plane_normal);
  dVar1 = -plane_normal->x;
  dVar2 = -plane_normal->y;
  dVar4 = -plane_normal->z;
  dVar3 = local_18 / SQRT(dVar4 * dVar4 + dVar1 * dVar1 + dVar2 * dVar2);
  local_40 = dVar1 * dVar3;
  local_38 = dVar2 * dVar3;
  local_30 = dVar4 * dVar3;
  local_58 = point->x + dVar1 * dVar3;
  local_50 = point->y + dVar2 * dVar3;
  local_48 = point->z + dVar4 * dVar3;
  pCStack_10->x = local_58;
  pCStack_10->y = local_50;
  pCStack_10->z = local_48;
  return pCStack_10;
}
