// Name: core_dcube.cpp_CDemonCubeTriangle_calculateNormalAndPlane_FUN_00448fb0
// Address: 00448fb0
// Address Range: [[00448fb0, 00449114]]
// Convention: __cdecl
// Signature: void __cdecl core_dcube_cpp_CDemonCubeTriangle_calculateNormalAndPlane_FUN_00448fb0(CDemonCubeTriangle *this_ptr)

#include "nocturne.h"

void __cdecl core_dcube_cpp_CDemonCubeTriangle_calculateNormalAndPlane_FUN_00448fb0(CDemonCubeTriangle *this_ptr)

{
  float fVar1;
  float fVar2;
  CVector3f *pCVar3;
  CVector3f *pCVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float local_10;
  
  pCVar3 = (this_ptr->triangle).vertices[1];
  pCVar4 = (this_ptr->triangle).vertices[0];
  fVar5 = pCVar3->x - pCVar4->x;
  fVar1 = pCVar3->z - pCVar4->z;
  fVar9 = pCVar3->y - pCVar4->y;
  pCVar4 = (this_ptr->triangle).vertices[2];
  fVar2 = pCVar4->z - pCVar3->z;
  fVar10 = pCVar4->y - pCVar3->y;
  fVar8 = pCVar4->x - pCVar3->x;
  fVar6 = fVar9 * fVar2 - fVar10 * fVar1;
  fVar7 = fVar8 * fVar1 - fVar5 * fVar2;
  (this_ptr->triangle).normal.x = fVar6;
  fVar1 = (this_ptr->triangle).normal.x;
  (this_ptr->triangle).normal.y = fVar7;
  fVar2 = (this_ptr->triangle).normal.y;
  fVar5 = fVar5 * fVar10 - fVar8 * fVar9;
  (this_ptr->triangle).normal.z = fVar5;
  local_10 = SQRT(fVar5 * (this_ptr->triangle).normal.z + fVar7 * fVar2 + fVar6 * fVar1);
  if (ABS(local_10) == 0.0) {
    local_10 = 1.0;
  }
  local_10 = 1.0 / local_10;
  fVar1 = (this_ptr->triangle).normal.y;
  fVar2 = (this_ptr->triangle).normal.z;
  pCVar3 = (this_ptr->triangle).vertices[0];
  (this_ptr->triangle).normal.x = -(this_ptr->triangle).normal.x * local_10;
  (this_ptr->triangle).normal.y = -fVar1 * local_10;
  (this_ptr->triangle).normal.z = -fVar2 * local_10;
  fVar2 = ABS((this_ptr->triangle).normal.x);
  fVar1 = (this_ptr->triangle).normal.y;
  (this_ptr->triangle).plane_distance =
       (-(pCVar3->x * (this_ptr->triangle).normal.x) - pCVar3->y * (this_ptr->triangle).normal.y) -
       pCVar3->z * (this_ptr->triangle).normal.z;
  if ((ABS(fVar1) < fVar2) && (ABS((this_ptr->triangle).normal.z) < fVar2)) {
    this_ptr->dominant_axis = 0;
    return;
  }
  fVar1 = ABS((this_ptr->triangle).normal.y);
  if ((ABS((this_ptr->triangle).normal.x) < fVar1) && (ABS((this_ptr->triangle).normal.z) < fVar1))
  {
    this_ptr->dominant_axis = 1;
    return;
  }
  this_ptr->dominant_axis = 2;
  return;
}
