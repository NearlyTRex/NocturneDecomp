// Name: core_xform.cpp_normalizeMatrix_FUN_005f51e0
// Address: 005f51e0
// Address Range: [[005f51e0, 005f536a]]
// Convention: __cdecl
// Signature: void __cdecl core_xform_cpp_normalizeMatrix_FUN_005f51e0(CMatrix3x4f *matrix)

#include "nocturne.h"

void __cdecl core_xform_cpp_normalizeMatrix_FUN_005f51e0(CMatrix3x4f *matrix)

{
  float fVar4;
  float fVar5;
  float fVar6;
  double dVar7;
  float fVar3;
  double dVar4;
  float fVar1;
  float fVar2;
  
  fVar1 = matrix->m[0].x;
  fVar2 = matrix->m[0].w;
  fVar3 = matrix->m[0].y;
  dVar4 = (double)(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
  if ((0.0 < dVar4) && (dVar4 != 1.0)) {
    dVar7 = 1.0 / SQRT(dVar4);
    matrix->m[0].w = matrix->m[0].w * (float)dVar7;
    matrix->m[0].x = matrix->m[0].x * (float)dVar7;
    matrix->m[0].y = matrix->m[0].y * (float)dVar7;
  }
  fVar4 = matrix->m[1].w;
  fVar5 = matrix->m[1].x;
  fVar6 = matrix->m[1].y;
  dVar7 = (double)(fVar6 * fVar6 + fVar5 * fVar5 + fVar4 * fVar4);
  if ((0.0 < dVar7) && (dVar7 != 1.0)) {
    dVar7 = 1.0 / SQRT(dVar7);
    fVar4 = matrix->m[1].x;
    fVar5 = matrix->m[1].y;
    matrix->m[1].w = matrix->m[1].w * (float)dVar7;
    matrix->m[1].x = fVar4 * (float)dVar7;
    matrix->m[1].y = fVar5 * (float)dVar7;
  }
  fVar4 = matrix->m[2].w;
  fVar5 = matrix->m[2].x;
  fVar6 = matrix->m[2].y;
  dVar7 = (double)(fVar6 * fVar6 + fVar5 * fVar5 + fVar4 * fVar4);
  if ((0.0 < dVar7) && (dVar7 != 1.0)) {
    dVar7 = 1.0 / SQRT(dVar7);
    fVar4 = matrix->m[2].x;
    fVar5 = matrix->m[2].y;
    matrix->m[2].w = matrix->m[2].w * (float)dVar7;
    matrix->m[2].x = fVar4 * (float)dVar7;
    matrix->m[2].y = fVar5 * (float)dVar7;
    return;
  }
  return;
}
