// Name: core_xform.cpp_normalizeMatrix_FUN_005b54d0
// Address: 005b54d0
// Address Range: [[005b54d0, 005b55f2]]
// Convention: __cdecl
// Signature: void __cdecl core_xform_cpp_normalizeMatrix_FUN_005b54d0(CMatrix3x4f *matrix)

#include "nocturne.h"

void __cdecl core_xform_cpp_normalizeMatrix_FUN_005b54d0(CMatrix3x4f *matrix)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = matrix->m[0].x;
  fVar2 = matrix->m[0].w;
  fVar3 = matrix->m[0].y;
  fVar1 = fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1;
  if ((0.0 < fVar1) && (fVar1 != 1.0)) {
    fVar1 = 1.0 / SQRT(fVar1);
    matrix->m[0].w = matrix->m[0].w * fVar1;
    matrix->m[0].x = matrix->m[0].x * fVar1;
    matrix->m[0].y = matrix->m[0].y * fVar1;
  }
  fVar1 = matrix->m[1].w;
  fVar2 = matrix->m[1].x;
  fVar3 = matrix->m[1].y;
  fVar1 = fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1;
  if ((0.0 < fVar1) && (fVar1 != 1.0)) {
    fVar3 = 1.0 / SQRT(fVar1);
    fVar1 = matrix->m[1].x;
    fVar2 = matrix->m[1].y;
    matrix->m[1].w = matrix->m[1].w * fVar3;
    matrix->m[1].x = fVar1 * fVar3;
    matrix->m[1].y = fVar2 * fVar3;
  }
  fVar1 = matrix->m[2].w;
  fVar2 = matrix->m[2].x;
  fVar3 = matrix->m[2].y;
  fVar1 = fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1;
  if ((0.0 < fVar1) && (fVar1 != 1.0)) {
    fVar3 = 1.0 / SQRT(fVar1);
    fVar1 = matrix->m[2].x;
    fVar2 = matrix->m[2].y;
    matrix->m[2].w = matrix->m[2].w * fVar3;
    matrix->m[2].x = fVar1 * fVar3;
    matrix->m[2].y = fVar2 * fVar3;
    return;
  }
  return;
}
