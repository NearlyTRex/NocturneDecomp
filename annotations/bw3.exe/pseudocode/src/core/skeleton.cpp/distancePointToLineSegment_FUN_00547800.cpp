// Name: core_skeleton.cpp_distancePointToLineSegment_FUN_00547800
// Address: 00547800
// Address Range: [[00547800, 005479e3]]
// Convention: unknown
// Signature: float core_skeleton_cpp_distancePointToLineSegment_FUN_00547800(float *param_1,float *param_2,float *param_3)

#include "nocturne.h"

float core_skeleton_cpp_distancePointToLineSegment_FUN_00547800(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar1 = *param_2 - *param_1;
  fVar2 = param_2[1] - param_1[1];
  fVar3 = param_2[2] - param_1[2];
  fVar4 = SQRT(fVar3 * fVar3 + fVar1 * fVar1 + fVar2 * fVar2);
  if (0.0 < fVar4) {
    fVar5 = 1.0 / fVar4;
    fVar1 = fVar1 * fVar5;
    fVar2 = fVar2 * fVar5;
    fVar3 = fVar3 * fVar5;
    fVar5 = (param_3[2] * fVar3 + param_3[1] * fVar2 + *param_3 * fVar1) -
            (param_1[2] * fVar3 + *param_1 * fVar1 + param_1[1] * fVar2);
    if (0.0 < fVar5) {
      if (fVar5 < fVar4) {
        fVar1 = *param_3 - (*param_1 + fVar1 * fVar5);
        fVar2 = param_3[1] - (param_1[1] + fVar2 * fVar5);
        fVar1 = fVar2 * fVar2 + fVar1 * fVar1;
        fVar2 = param_3[2] - (param_1[2] + fVar3 * fVar5);
      }
      else {
        fVar1 = (param_3[1] - param_2[1]) * (param_3[1] - param_2[1]) +
                (*param_3 - *param_2) * (*param_3 - *param_2);
        fVar2 = param_3[2] - param_2[2];
      }
      goto LAB_00547914;
    }
  }
  fVar1 = (param_3[1] - param_1[1]) * (param_3[1] - param_1[1]) +
          (*param_3 - *param_1) * (*param_3 - *param_1);
  fVar2 = param_3[2] - param_1[2];
LAB_00547914:
  return SQRT(fVar2 * fVar2 + fVar1);
}
