// Name: core_xform.cpp_computeOrthogonalityError_FUN_005f6460
// Address: 005f6460
// Address Range: [[005f6460, 005f6686]]
// Convention: __cdecl
// Signature: float core_xform.cpp_computeOrthogonalityError_FUN_005f6460(CMatrix3x4f * matrix)

#include "nocturne.h"

float __cdecl core_xform_cpp_computeOrthogonalityError_FUN_005f6460(CMatrix3x4f *matrix)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  float10 fVar10;
  double dStack_64;
  double dStack_5c;
  double dStack_54;
  
  fVar1 = matrix->m[0].w;
  fVar2 = matrix->m[0].x;
  fVar3 = matrix->m[0].y;
  dVar9 = (double)matrix->m[1].y;
  fVar4 = matrix->m[2].w;
  fVar5 = matrix->m[2].x;
  dVar7 = (double)matrix->m[1].w;
  fVar6 = matrix->m[2].y;
  dVar8 = (double)matrix->m[1].x;
  dStack_5c = SQRT(dVar9 * dVar9 + dVar8 * dVar8 + dVar7 * dVar7);
  dStack_54 = (double)SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
  dStack_64 = (double)SQRT(fVar6 * fVar6 + fVar5 * fVar5 + fVar4 * fVar4);
  if (dStack_54 <= 0.0) {
    dStack_54 = 1.0;
  }
  if (dStack_5c <= 0.0) {
    dStack_5c = 1.0;
  }
  if (dStack_64 <= 0.0) {
    dStack_64 = 1.0;
  }
  dStack_54 = 1.0 / dStack_54;
  dStack_5c = 1.0 / dStack_5c;
  dStack_64 = 1.0 / dStack_64;
  fVar10 = (float10)((double)fVar3 * dStack_54) * (float10)(dVar9 * dStack_5c) +
           (float10)((double)fVar2 * dStack_54) * (float10)(dVar8 * dStack_5c) +
           (float10)((double)fVar1 * dStack_54) * (float10)(dVar7 * dStack_5c);
  fVar10 = (float10)((double)fVar2 * dStack_54) * (float10)((double)fVar5 * dStack_64) +
           (float10)((double)fVar1 * dStack_54) * (float10)((double)fVar4 * dStack_64) +
           (float10)((double)fVar3 * dStack_54) * (float10)((double)fVar6 * dStack_64);
  fVar10 = (float10)(dVar8 * dStack_5c) * (float10)((double)fVar5 * dStack_64) +
           (float10)(dVar7 * dStack_5c) * (float10)((double)fVar4 * dStack_64) +
           (float10)(dVar9 * dStack_5c) * (float10)((double)fVar6 * dStack_64);
  return (float)(fVar10 * fVar10 + fVar10 * fVar10 + fVar10 * fVar10);
}
