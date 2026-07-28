// Name: core_spline.cpp_evaluateSplineTangent3D_FUN_005340d0
// Address: 005340d0
// Address Range: [[005340d0, 005341e3]]
// Convention: __cdecl
// Signature: CVector3f * __cdecl core_spline_cpp_evaluateSplineTangent3D_FUN_005340d0(float *basis,CVector3f *out,CVector3f *p0,CVector3f *p1,CVector3f *p2,CVector3f *p3)

#include "nocturne.h"

CVector3f * __cdecl core_spline_cpp_evaluateSplineTangent3D_FUN_005340d0(float *basis,CVector3f *out,CVector3f *p0,CVector3f *p1,CVector3f *p2,CVector3f *p3)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  
  pfVar1 = basis + 7;
  fVar5 = p3->y;
  fVar6 = *pfVar1;
  fVar7 = p3->z;
  fVar8 = *pfVar1;
  pfVar2 = basis + 6;
  fVar9 = p2->y;
  fVar10 = *pfVar2;
  fVar11 = p2->z;
  fVar12 = *pfVar2;
  pfVar3 = basis + 5;
  fVar13 = p1->y;
  fVar14 = *pfVar3;
  fVar15 = p1->z;
  fVar16 = *pfVar3;
  pfVar4 = basis + 4;
  fVar17 = p0->y;
  fVar18 = *pfVar4;
  fVar19 = p0->z;
  fVar20 = *pfVar4;
  out->x = p0->x * *pfVar4 + p1->x * *pfVar3 + p2->x * *pfVar2 + p3->x * *pfVar1;
  out->y = fVar17 * fVar18 + fVar13 * fVar14 + fVar9 * fVar10 + fVar5 * fVar6;
  out->z = fVar19 * fVar20 + fVar15 * fVar16 + fVar11 * fVar12 + fVar7 * fVar8;
  return out;
}
