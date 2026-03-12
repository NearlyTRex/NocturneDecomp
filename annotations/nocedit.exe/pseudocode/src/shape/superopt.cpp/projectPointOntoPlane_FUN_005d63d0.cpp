// Name: shape_superopt.cpp_projectPointOntoPlane_FUN_005d63d0
// Address: 005d63d0
// Address Range: [[005d63d0, 005d6492]]
// Convention: __cdecl
// Signature: CVector3d * __cdecl shape_superopt_cpp_projectPointOntoPlane_FUN_005d63d0(CVector3d *point,CVector3d *plane_point,CVector3d *plane_normal)

#include "nocturne.h"

CVector3d * __cdecl shape_superopt_cpp_projectPointOntoPlane_FUN_005d63d0(CVector3d *point,CVector3d *plane_point,CVector3d *plane_normal)

{
  double dVar4;
  int iVar4;
  CVector3d *unaff_ESI;
  double *pdVar5;
  CVector3d *pCVar6;
  byte bVar7;
  CVector3d local_70;
  double local_58;
  double local_50;
  double local_48;
  double local_40;
  double local_38;
  double local_30;
  double local_18;
  double dVar1;
  double dVar3;
  double dVar2;
  
  bVar7 = 0;
  local_70.x = -plane_normal->x;
  local_70.y = -plane_normal->y;
  local_70.z = -plane_normal->z;
  local_18 = shape_superopt_cpp_rayPlaneIntersect_FUN_005d6500
                       (point,&local_70,plane_point,plane_normal);
  dVar1 = -plane_normal->x;
  dVar2 = -plane_normal->y;
  dVar3 = -plane_normal->z;
  dVar4 = local_18 / SQRT(dVar3 * dVar3 + dVar1 * dVar1 + dVar2 * dVar2);
  local_40 = dVar1 * dVar4;
  local_38 = dVar2 * dVar4;
  local_30 = dVar3 * dVar4;
  local_58 = point->x + dVar1 * dVar4;
  local_50 = point->y + dVar2 * dVar4;
  local_48 = point->z + dVar3 * dVar4;
  pdVar5 = &local_58;
  pCVar6 = unaff_ESI;
  for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
    pCVar6 = (CVector3d *)((int)pCVar6 + (uint)bVar7 * -8 + 4);
    pdVar5 = (double *)((int)pdVar5 + (uint)bVar7 * -8 + 4);
    *(uint *)&pCVar6->x = *(uint *)pdVar5;
    pdVar5 = pdVar5;
    pCVar6 = pCVar6;
  }
  return unaff_ESI;
}
