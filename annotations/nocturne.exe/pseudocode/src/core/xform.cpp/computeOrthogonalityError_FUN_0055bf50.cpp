// Name: core_xform.cpp_computeOrthogonalityError_FUN_0055bf50
// Address: 0055bf50
// Address Range: [[0055bf50, 0055c176]]
// Convention: unknown
// Signature: float core_xform_cpp_computeOrthogonalityError_FUN_0055bf50(float *param_1)

#include "nocturne.h"

float core_xform_cpp_computeOrthogonalityError_FUN_0055bf50(float *param_1)

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
  double dStack_68;
  double dStack_60;
  double dStack_58;
  
  fVar1 = *param_1;
  fVar2 = param_1[1];
  fVar3 = param_1[2];
  dVar9 = (double)param_1[6];
  fVar4 = param_1[8];
  fVar5 = param_1[9];
  dVar7 = (double)param_1[4];
  fVar6 = param_1[10];
  dVar8 = (double)param_1[5];
  dStack_60 = SQRT(dVar9 * dVar9 + dVar8 * dVar8 + dVar7 * dVar7);
  dStack_58 = (double)SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
  dStack_68 = (double)SQRT(fVar6 * fVar6 + fVar5 * fVar5 + fVar4 * fVar4);
  if (dStack_58 <= 0.0) {
    dStack_58 = 1.0;
  }
  if (dStack_60 <= 0.0) {
    dStack_60 = 1.0;
  }
  if (dStack_68 <= 0.0) {
    dStack_68 = 1.0;
  }
  dStack_58 = 1.0 / dStack_58;
  dStack_60 = 1.0 / dStack_60;
  dStack_68 = 1.0 / dStack_68;
  fVar10 = (float10)((double)fVar3 * dStack_58) * (float10)(dVar9 * dStack_60) +
           (float10)((double)fVar2 * dStack_58) * (float10)(dVar8 * dStack_60) +
           (float10)((double)fVar1 * dStack_58) * (float10)(dVar7 * dStack_60);
  fVar10 = (float10)((double)fVar2 * dStack_58) * (float10)((double)fVar5 * dStack_68) +
           (float10)((double)fVar1 * dStack_58) * (float10)((double)fVar4 * dStack_68) +
           (float10)((double)fVar3 * dStack_58) * (float10)((double)fVar6 * dStack_68);
  fVar10 = (float10)(dVar8 * dStack_60) * (float10)((double)fVar5 * dStack_68) +
           (float10)(dVar7 * dStack_60) * (float10)((double)fVar4 * dStack_68) +
           (float10)(dVar9 * dStack_60) * (float10)((double)fVar6 * dStack_68);
  return (float)(fVar10 * fVar10 + fVar10 * fVar10 + fVar10 * fVar10);
}
