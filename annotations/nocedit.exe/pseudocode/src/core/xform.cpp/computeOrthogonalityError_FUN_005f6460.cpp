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
  double local_68;
  double local_60;
  double local_58;
  
  fVar1 = matrix->m[0].w;
  fVar2 = matrix->m[0].x;
  fVar3 = matrix->m[0].y;
  dVar9 = (double)matrix->m[1].y;
  fVar4 = matrix->m[2].w;
  fVar5 = matrix->m[2].x;
  dVar7 = (double)matrix->m[1].w;
  fVar6 = matrix->m[2].y;
  dVar8 = (double)matrix->m[1].x;
  local_60 = SQRT(dVar9 * dVar9 + dVar8 * dVar8 + dVar7 * dVar7);
  local_58 = (double)SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
  local_68 = (double)SQRT(fVar6 * fVar6 + fVar5 * fVar5 + fVar4 * fVar4);
  if (local_58 <= 0.0) {
    local_58 = 1.0;
  }
  if (local_60 <= 0.0) {
    local_60 = 1.0;
  }
  if (local_68 <= 0.0) {
    local_68 = 1.0;
  }
  local_58 = 1.0 / local_58;
  local_60 = 1.0 / local_60;
  local_68 = 1.0 / local_68;
  fVar10 = (float10)((double)fVar3 * local_58) * (float10)(dVar9 * local_60) +
           (float10)((double)fVar2 * local_58) * (float10)(dVar8 * local_60) +
           (float10)((double)fVar1 * local_58) * (float10)(dVar7 * local_60);
  fVar10 = (float10)((double)fVar2 * local_58) * (float10)((double)fVar5 * local_68) +
           (float10)((double)fVar1 * local_58) * (float10)((double)fVar4 * local_68) +
           (float10)((double)fVar3 * local_58) * (float10)((double)fVar6 * local_68);
  fVar10 = (float10)(dVar8 * local_60) * (float10)((double)fVar5 * local_68) +
           (float10)(dVar7 * local_60) * (float10)((double)fVar4 * local_68) +
           (float10)(dVar9 * local_60) * (float10)((double)fVar6 * local_68);
  return (float)(fVar10 * fVar10 + fVar10 * fVar10 + fVar10 * fVar10);
}
