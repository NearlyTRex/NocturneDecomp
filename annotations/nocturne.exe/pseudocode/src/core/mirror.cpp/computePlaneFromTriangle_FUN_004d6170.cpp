// Name: core_mirror.cpp_computePlaneFromTriangle_FUN_004d6170
// Address: 004d6170
// Address Range: [[004d6170, 004d62e7]]
// Convention: __cdecl
// Signature: void __cdecl core_mirror_cpp_computePlaneFromTriangle_FUN_004d6170(float *param_1,float *param_2,float *param_3,float *param_4)

#include "nocturne.h"

void __cdecl core_mirror_cpp_computePlaneFromTriangle_FUN_004d6170(float *param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float local_54;
  float local_50;
  float local_4c;
  float local_48 [3];
  float local_3c;
  float local_38;
  float local_34;
  float local_30 [3];
  float local_24 [5];
  
  if (&local_3c != local_30) {
    local_3c = *param_3 - *param_2;
    local_38 = param_3[1] - param_2[1];
    local_34 = param_3[2] - param_2[2];
  }
  if (&local_54 != local_24) {
    local_54 = *param_4 - *param_3;
    local_50 = param_4[1] - param_3[1];
    local_4c = param_4[2] - param_3[2];
  }
  if (param_1 != local_48) {
    *param_1 = local_38 * local_4c - local_34 * local_50;
    param_1[1] = local_34 * local_54 - local_3c * local_4c;
    param_1[2] = local_3c * local_50 - local_38 * local_54;
  }
  fVar1 = SQRT(param_1[2] * param_1[2] + *param_1 * *param_1 + param_1[1] * param_1[1]);
  if (fVar1 <= 0.0) {
    param_1[2] = 0.0;
    param_1[1] = param_1[2];
    *param_1 = param_1[1];
  }
  else {
    fVar1 = 1.0 / fVar1;
    *param_1 = *param_1 * fVar1;
    param_1[1] = param_1[1] * fVar1;
    param_1[2] = param_1[2] * fVar1;
  }
  param_1[3] = -(param_1[2] * param_2[2] + *param_1 * *param_2 + param_1[1] * param_2[1]);
  return;
}
