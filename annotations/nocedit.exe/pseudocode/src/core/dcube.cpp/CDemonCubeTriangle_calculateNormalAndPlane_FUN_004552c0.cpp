// Name: core_dcube.cpp_CDemonCubeTriangle_calculateNormalAndPlane_FUN_004552c0
// Address: 004552c0
// Address Range: [[004552c0, 00455424]]
// Convention: __cdecl
// Signature: void __cdecl core_dcube_cpp_CDemonCubeTriangle_calculateNormalAndPlane_FUN_004552c0(CDemonCubeTriangle *this_ptr)

#include "nocturne.h"

void __cdecl core_dcube_cpp_CDemonCubeTriangle_calculateNormalAndPlane_FUN_004552c0(CDemonCubeTriangle *this_ptr)

{
  float fVar3;
  float fVar4;
  CVector3f *pCVar5;
  float fVar11;
  float local_10;
  float fVar10;
  float fVar1;
  CVector3f *pCVar3;
  float fVar2;
  float fVar5;
  CVector3f *pCVar4;
  float fVar7;
  float fVar6;
  float fVar9;
  float fVar8;
  
  pCVar3 = (this_ptr->triangle).vertices[1];
  pCVar4 = (this_ptr->triangle).vertices[0];
  fVar5 = pCVar3->x - pCVar4->x;
  fVar3 = pCVar3->z - pCVar4->z;
  fVar9 = pCVar3->y - pCVar4->y;
  pCVar5 = (this_ptr->triangle).vertices[2];
  fVar4 = pCVar5->z - pCVar3->z;
  fVar10 = pCVar5->y - pCVar3->y;
  fVar8 = pCVar5->x - pCVar3->x;
  fVar6 = fVar9 * fVar4 - fVar10 * fVar3;
  fVar7 = fVar8 * fVar3 - fVar5 * fVar4;
  (this_ptr->triangle).normal.x = fVar6;
  fVar1 = (this_ptr->triangle).normal.x;
  (this_ptr->triangle).normal.y = fVar7;
  fVar2 = (this_ptr->triangle).normal.y;
  fVar3 = fVar5 * fVar10 - fVar8 * fVar9;
  (this_ptr->triangle).normal.z = fVar3;
  local_10 = SQRT(fVar3 * (this_ptr->triangle).normal.z + fVar7 * fVar2 + fVar6 * fVar1);
  if (ABS(local_10) == 0.0) {
    local_10 = 1.0;
  }
  fVar11 = 1.0 / local_10;
  fVar3 = (this_ptr->triangle).normal.y;
  fVar4 = (this_ptr->triangle).normal.z;
  pCVar5 = (this_ptr->triangle).vertices[0];
  (this_ptr->triangle).normal.x = -(this_ptr->triangle).normal.x * fVar11;
  (this_ptr->triangle).normal.y = -fVar3 * fVar11;
  (this_ptr->triangle).normal.z = -fVar4 * fVar11;
  fVar4 = ABS((this_ptr->triangle).normal.x);
  fVar3 = (this_ptr->triangle).normal.y;
  (this_ptr->triangle).plane_distance =
       (-(pCVar5->x * (this_ptr->triangle).normal.x) - pCVar5->y * (this_ptr->triangle).normal.y) -
       pCVar5->z * (this_ptr->triangle).normal.z;
  if ((ABS(fVar3) < fVar4) && (ABS((this_ptr->triangle).normal.z) < fVar4)) {
    this_ptr->dominant_axis = 0;
    return;
  }
  fVar3 = ABS((this_ptr->triangle).normal.y);
  if ((ABS((this_ptr->triangle).normal.x) < fVar3) && (ABS((this_ptr->triangle).normal.z) < fVar3))
  {
    this_ptr->dominant_axis = 1;
    return;
  }
  this_ptr->dominant_axis = 2;
  return;
}
