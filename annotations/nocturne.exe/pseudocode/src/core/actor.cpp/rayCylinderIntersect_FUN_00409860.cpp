// Name: core_actor.cpp_rayCylinderIntersect_FUN_00409860
// Address: 00409860
// Address Range: [[00409860, 00409cc1]]
// Convention: unknown
// Signature: float core_actor_cpp_rayCylinderIntersect_FUN_00409860(int param_1,float *param_2,float *param_3,float *param_4)

#include "nocturne.h"

float core_actor_cpp_rayCylinderIntersect_FUN_00409860(int param_1,float *param_2,float *param_3,float *param_4)

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
  float local_60 [21];
  
  fVar1 = *(float *)(param_1 + 0x1c) * *(float *)(param_1 + 0x1c);
  if (fVar1 <= *param_2 * *param_2 + param_2[2] * param_2[2]) {
    fVar2 = SQRT(*param_3 * *param_3 + param_3[2] * param_3[2]);
    if (0.0 < fVar2) {
      fVar10 = 1.0 / fVar2;
      fVar3 = *param_3;
      fVar7 = fVar3 * fVar10;
      fVar4 = param_3[2];
      fVar8 = fVar4 * fVar10;
      fVar5 = param_2[2];
      fVar6 = *param_2;
      fVar9 = -(fVar6 * fVar7 + fVar5 * fVar8);
      if (0.0 < fVar9) {
        fVar11 = fVar7 * fVar9 + fVar6;
        fVar7 = fVar8 * fVar9 + fVar5;
        fVar7 = fVar7 * fVar7 + fVar11 * fVar11;
        if ((fVar1 <= fVar7) || (fVar9 = fVar9 - SQRT(fVar1 - fVar7), fVar2 < fVar9)) {
          return 2.0;
        }
        fVar9 = fVar9 * fVar10;
        fVar2 = param_3[1] * fVar9 + param_2[1];
        if ((*(float *)(param_1 + 0x14) <= fVar2) && (fVar2 <= *(float *)(param_1 + 0x18))) {
          param_4[1] = 0.0;
          fVar6 = fVar3 * fVar9 + fVar6;
          *param_4 = fVar6;
          fVar5 = fVar4 * fVar9 + fVar5;
          param_4[2] = fVar5;
          fVar1 = SQRT(fVar5 * param_4[2] + fVar6 * *param_4 + param_4[1] * param_4[1]);
          if (fVar1 <= 0.0) {
            param_4[2] = 0.0;
            param_4[1] = param_4[2];
            *param_4 = param_4[1];
          }
          else {
            fVar1 = 1.0 / fVar1;
            *param_4 = *param_4 * fVar1;
            param_4[1] = param_4[1] * fVar1;
            param_4[2] = param_4[2] * fVar1;
          }
          return fVar9;
        }
      }
    }
  }
  else if ((*(float *)(param_1 + 0x14) <= param_2[1]) && (param_2[1] <= *(float *)(param_1 + 0x18)))
  {
    fVar1 = param_3[1];
    fVar2 = param_3[2];
    if (param_4 != local_60) {
      *param_4 = -*param_3;
      param_4[1] = -fVar1;
      param_4[2] = -fVar2;
    }
    fVar1 = SQRT(param_4[2] * param_4[2] + *param_4 * *param_4 + param_4[1] * param_4[1]);
    if (fVar1 <= 0.0) {
      param_4[2] = 0.0;
      param_4[1] = param_4[2];
      *param_4 = param_4[1];
    }
    else {
      fVar1 = 1.0 / fVar1;
      *param_4 = *param_4 * fVar1;
      param_4[1] = param_4[1] * fVar1;
      param_4[2] = param_4[2] * fVar1;
    }
    return 0.0;
  }
  if (*(float *)(param_1 + 0x14) <= param_2[1]) {
    if ((((*(float *)(param_1 + 0x18) < param_2[1]) && (fVar2 = param_3[1], fVar2 < 0.0)) &&
        (fVar3 = *(float *)(param_1 + 0x18) - param_2[1], fVar2 < fVar3)) &&
       (fVar3 = fVar3 / fVar2, fVar2 = *param_2 + *param_3 * fVar3,
       fVar4 = param_3[2] * fVar3 + param_2[2], fVar4 * fVar4 + fVar2 * fVar2 <= fVar1)) {
      param_4[1] = 1.0;
      param_4[2] = 0.0;
      *param_4 = 0.0;
      return fVar3;
    }
  }
  else {
    fVar2 = param_3[1];
    if ((0.0 < fVar2) && (fVar3 = *(float *)(param_1 + 0x14) - param_2[1], fVar3 < fVar2)) {
      fVar3 = fVar3 / fVar2;
      fVar2 = *param_2 + *param_3 * fVar3;
      fVar4 = param_3[2] * fVar3 + param_2[2];
      if (fVar1 < fVar4 * fVar4 + fVar2 * fVar2) {
        return 2.0;
      }
      param_4[1] = -1.0;
      param_4[2] = 0.0;
      *param_4 = 0.0;
      return fVar3;
    }
  }
  return 2.0;
}
