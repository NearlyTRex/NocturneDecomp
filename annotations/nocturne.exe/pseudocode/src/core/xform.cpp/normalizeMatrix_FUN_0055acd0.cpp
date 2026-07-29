// Name: core_xform.cpp_normalizeMatrix_FUN_0055acd0
// Address: 0055acd0
// Address Range: [[0055acd0, 0055ae5a]]
// Convention: __cdecl
// Signature: void __cdecl core_xform_cpp_normalizeMatrix_FUN_0055acd0(CMatrix3x4f *matrix)

#include "nocturne.h"

void __cdecl core_xform_cpp_normalizeMatrix_FUN_0055acd0(CMatrix3x4f *matrix)

{
  float fVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  
  fVar1 = matrix->m[0].x;
  fVar2 = matrix->m[0].w;
  fVar3 = matrix->m[0].y;
  dVar4 = (double)(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
  if ((0.0 < dVar4) && (dVar4 != 1.0)) {
    dVar4 = 1.0 / SQRT(dVar4);
    matrix->m[0].w = matrix->m[0].w * (float)dVar4;
    matrix->m[0].x = matrix->m[0].x * (float)dVar4;
    matrix->m[0].y = matrix->m[0].y * (float)dVar4;
  }
  fVar1 = matrix->m[1].w;
  fVar2 = matrix->m[1].x;
  fVar3 = matrix->m[1].y;
  dVar4 = (double)(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
  if ((0.0 < dVar4) && (dVar4 != 1.0)) {
    dVar4 = 1.0 / SQRT(dVar4);
    fVar1 = matrix->m[1].x;
    fVar2 = matrix->m[1].y;
    matrix->m[1].w = matrix->m[1].w * (float)dVar4;
    matrix->m[1].x = fVar1 * (float)dVar4;
    matrix->m[1].y = fVar2 * (float)dVar4;
  }
  fVar1 = matrix->m[2].w;
  fVar2 = matrix->m[2].x;
  fVar3 = matrix->m[2].y;
  dVar4 = (double)(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
  if ((0.0 < dVar4) && (dVar4 != 1.0)) {
    dVar4 = 1.0 / SQRT(dVar4);
    fVar1 = matrix->m[2].x;
    fVar2 = matrix->m[2].y;
    matrix->m[2].w = matrix->m[2].w * (float)dVar4;
    matrix->m[2].x = fVar1 * (float)dVar4;
    matrix->m[2].y = fVar2 * (float)dVar4;
    return;
  }
  return;
}
