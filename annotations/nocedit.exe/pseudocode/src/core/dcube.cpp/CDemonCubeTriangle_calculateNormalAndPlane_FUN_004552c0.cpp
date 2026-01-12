// Name: core_dcube.cpp_CDemonCubeTriangle_calculateNormalAndPlane_FUN_004552c0
// Address: 004552c0
// Address Range: [[004552c0, 00455424]]
// Convention: __cdecl
// Signature: void core_dcube.cpp_CDemonCubeTriangle_calculateNormalAndPlane_FUN_004552c0(CDemonCubeTriangle * this_ptr)

#include "nocturne.h"

void __cdecl
core_dcube_cpp_CDemonCubeTriangle_calculateNormalAndPlane_FUN_004552c0(CDemonCubeTriangle *this_ptr)

{
  float fVar1;
  CVector3f *pCVar2;
  CVector3f *pCVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fStack_c;
  
  pCVar2 = this_ptr->vertices[1];
  pCVar3 = this_ptr->vertices[0];
  fVar1 = pCVar2->x - pCVar3->x;
  fVar5 = pCVar2->z - pCVar3->z;
  fVar7 = pCVar2->y - pCVar3->y;
  pCVar3 = this_ptr->vertices[2];
  fVar9 = pCVar3->z - pCVar2->z;
  fVar8 = pCVar3->y - pCVar2->y;
  fVar6 = pCVar3->x - pCVar2->x;
  fVar4 = fVar7 * fVar9 - fVar8 * fVar5;
  fVar5 = fVar6 * fVar5 - fVar1 * fVar9;
  (this_ptr->normal).x = fVar4;
  (this_ptr->normal).y = fVar5;
  fVar1 = fVar1 * fVar8 - fVar6 * fVar7;
  (this_ptr->normal).z = fVar1;
  fStack_c = SQRT(fVar1 * (this_ptr->normal).z +
                  fVar5 * (this_ptr->normal).y + fVar4 * (this_ptr->normal).x);
  if (ABS(fStack_c) == 0.0) {
    fStack_c = 1.0;
  }
  fStack_c = 1.0 / fStack_c;
  pCVar2 = this_ptr->vertices[0];
  (this_ptr->normal).x = -(this_ptr->normal).x * fStack_c;
  (this_ptr->normal).y = -(this_ptr->normal).y * fStack_c;
  (this_ptr->normal).z = -(this_ptr->normal).z * fStack_c;
  fVar4 = ABS((this_ptr->normal).x);
  fVar1 = (this_ptr->normal).y;
  this_ptr->plane_distance =
       (-(pCVar2->x * (this_ptr->normal).x) - pCVar2->y * (this_ptr->normal).y) -
       pCVar2->z * (this_ptr->normal).z;
  if ((ABS(fVar1) < fVar4) && (ABS((this_ptr->normal).z) < fVar4)) {
    this_ptr->dominant_axis = 0;
    return;
  }
  fVar1 = ABS((this_ptr->normal).y);
  if ((ABS((this_ptr->normal).x) < fVar1) && (ABS((this_ptr->normal).z) < fVar1)) {
    this_ptr->dominant_axis = 1;
    return;
  }
  this_ptr->dominant_axis = 2;
  return;
}
