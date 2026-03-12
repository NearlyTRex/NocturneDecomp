// Name: core_spline.cpp_evaluateSplinePoint3D_FUN_005b92d0
// Address: 005b92d0
// Address Range: [[005b92d0, 005b93e0]]
// Convention: __cdecl
// Signature: CVector3f * __cdecl core_spline_cpp_evaluateSplinePoint3D_FUN_005b92d0(float *basis,CVector3f *out,CVector3f *p0,CVector3f *p1,CVector3f *p2,CVector3f *p3)

#include "nocturne.h"

CVector3f * __cdecl core_spline_cpp_evaluateSplinePoint3D_FUN_005b92d0(float *basis,CVector3f *out,CVector3f *p0,CVector3f *p1,CVector3f *p2,CVector3f *p3)

{
  float fVar12;
  float fVar11;
  float fVar10;
  float fVar9;
  float fVar8;
  float fVar7;
  float fVar6;
  float fVar5;
  float fVar19;
  float fVar18;
  float fVar17;
  float fVar16;
  float fVar15;
  float fVar14;
  float fVar13;
  float fVar4;
  float *pfVar3;
  float *pfVar2;
  float *pfVar1;
  
  pfVar1 = basis + 3;
  fVar4 = p3->y;
  fVar5 = *pfVar1;
  fVar6 = p3->z;
  fVar7 = *pfVar1;
  pfVar2 = basis + 2;
  fVar8 = p2->y;
  fVar9 = *pfVar2;
  fVar10 = p2->z;
  fVar11 = *pfVar2;
  pfVar3 = basis + 1;
  fVar12 = p1->y;
  fVar13 = *pfVar3;
  fVar14 = p1->z;
  fVar15 = *pfVar3;
  fVar16 = p0->y;
  fVar17 = *basis;
  fVar18 = p0->z;
  fVar19 = *basis;
  out->x = p0->x * *basis + p1->x * *pfVar3 + p2->x * *pfVar2 + p3->x * *pfVar1;
  out->y = fVar16 * fVar17 + fVar12 * fVar13 + fVar8 * fVar9 + fVar4 * fVar5;
  out->z = fVar18 * fVar19 + fVar14 * fVar15 + fVar10 * fVar11 + fVar6 * fVar7;
  return out;
}
