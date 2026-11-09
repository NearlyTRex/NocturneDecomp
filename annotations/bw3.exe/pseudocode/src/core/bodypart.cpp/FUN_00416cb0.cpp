// Name: core_bodypart.cpp_FUN_00416cb0
// Address: 00416cb0
// Address Range: [[00416cb0, 00416ced]]
// Convention: unknown
// Signature: void core_bodypart_cpp_FUN_00416cb0(float *param_1)

#include "nocturne.h"

void core_bodypart_cpp_FUN_00416cb0(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *unaff_ESI;
  
  fVar1 = param_1[4];
  fVar2 = param_1[5];
  fVar3 = param_1[1];
  fVar4 = param_1[2];
  *unaff_ESI = param_1[3] - *param_1;
  unaff_ESI[1] = fVar1 - fVar3;
  unaff_ESI[2] = fVar2 - fVar4;
  return;
}
