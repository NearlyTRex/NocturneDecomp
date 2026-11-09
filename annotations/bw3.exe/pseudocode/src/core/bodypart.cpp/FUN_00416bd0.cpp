// Name: core_bodypart.cpp_FUN_00416bd0
// Address: 00416bd0
// Address Range: [[00416bd0, 00416c04]]
// Convention: unknown
// Signature: void core_bodypart_cpp_FUN_00416bd0(float *param_1,float *param_2)

#include "nocturne.h"

void core_bodypart_cpp_FUN_00416bd0(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *unaff_ESI;
  
  fVar1 = param_1[1];
  fVar2 = *param_2;
  fVar3 = param_1[2];
  fVar4 = *param_2;
  *unaff_ESI = *param_1 * *param_2;
  unaff_ESI[1] = fVar1 * fVar2;
  unaff_ESI[2] = fVar3 * fVar4;
  return;
}
