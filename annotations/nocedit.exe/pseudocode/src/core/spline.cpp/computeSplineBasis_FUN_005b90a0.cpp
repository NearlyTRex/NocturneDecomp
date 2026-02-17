// Name: core_spline.cpp_computeSplineBasis_FUN_005b90a0
// Address: 005b90a0
// Address Range: [[005b90a0, 005b922b]]
// Convention: __cdecl
// Signature: void __cdecl core_spline_cpp_computeSplineBasis_FUN_005b90a0(float *out_basis,float t,float tension)

#include "nocturne.h"

void __cdecl core_spline_cpp_computeSplineBasis_FUN_005b90a0(float *out_basis,float t,float tension)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  fVar1 = t * t;
  fVar3 = (1.0 - tension) * (float)0.5;
  fVar2 = fVar1 * t;
  fVar4 = fVar3 * 2.0f;
  fVar7 = fVar3 * -3.0f;
  fVar6 = 2.0f - fVar3;
  fVar5 = fVar3 + -3.0f;
  fVar9 = 3.0f - fVar4;
  out_basis[1] = fVar5 * fVar1 + fVar6 * fVar2 + 1.0;
  fVar8 = fVar3 * 4.0f;
  fVar10 = fVar3 + -2.0f;
  out_basis[3] = fVar3 * fVar2 - fVar3 * fVar1;
  fVar11 = fVar3 * 3.0f;
  fVar6 = fVar6 * 3.0f;
  out_basis[4] = (fVar8 * t + fVar7 * fVar1) - fVar3;
  fVar7 = fVar9 * 2.0f;
  out_basis[5] = fVar5 * 2.0f * t + fVar6 * fVar1;
  fVar5 = fVar10 * 3.0f;
  out_basis[7] = fVar11 * fVar1 - fVar4 * t;
  *out_basis = (-fVar3 * fVar2 + fVar4 * fVar1) - fVar3 * t;
  out_basis[2] = fVar9 * fVar1 + fVar10 * fVar2 + fVar3 * t;
  out_basis[6] = fVar5 * fVar1 + fVar7 * t + fVar3;
  return;
}
