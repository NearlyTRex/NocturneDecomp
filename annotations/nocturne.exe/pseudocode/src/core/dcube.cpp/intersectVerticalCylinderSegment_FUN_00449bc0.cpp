// Name: core_dcube.cpp_intersectVerticalCylinderSegment_FUN_00449bc0
// Address: 00449bc0
// Address Range: [[00449bc0, 00449d2c]]
// Convention: __cdecl
// Signature: undefined4 __cdecl core_dcube_cpp_intersectVerticalCylinderSegment_FUN_00449bc0(float *param_1,float *param_2,float param_3,float *param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl core_dcube_cpp_intersectVerticalCylinderSegment_FUN_00449bc0(float *param_1,float *param_2,float param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  
  fVar3 = *param_2 - *param_1;
  fVar1 = param_2[2] - param_1[2];
  fVar2 = fVar1 * fVar1 + fVar3 * fVar3;
  if (0.0 < fVar2) {
    fVar1 = (*param_1 * fVar3 + param_1[2] * fVar1) * (float)_DAT_0057bb9b;
    fVar3 = fVar1 * fVar1 -
            fVar2 * (float)_DAT_0057bba3 *
            ((*param_1 * *param_1 + param_1[2] * param_1[2]) - param_3 * param_3);
    if (0.0 <= fVar3) {
      fVar4 = (-fVar1 - SQRT(fVar3)) / (fVar2 * (float)_DAT_0057bb9b);
      uVar5 = 0;
      if (((0.0 <= fVar4) && (fVar4 <= 1.0)) &&
         (fVar4 = (param_2[1] - param_1[1]) * fVar4 + param_1[1], *param_4 < fVar4)) {
        uVar5 = 1;
        *param_4 = fVar4;
      }
      fVar1 = (SQRT(fVar3) - fVar1) / (fVar2 * (float)_DAT_0057bb9b);
      if (((0.0 <= fVar1) && (fVar1 <= 1.0)) &&
         (fVar1 = (param_2[1] - param_1[1]) * fVar1 + param_1[1], *param_4 < fVar1)) {
        uVar5 = 1;
        *param_4 = fVar1;
      }
      return uVar5;
    }
  }
  return 0;
}
