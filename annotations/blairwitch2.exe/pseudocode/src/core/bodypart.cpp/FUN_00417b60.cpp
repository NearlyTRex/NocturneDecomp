// Name: core_bodypart.cpp_FUN_00417b60
// Address: 00417b60
// Address Range: [[00417b60, 00417b9e]]
// Convention: unknown
// Signature: void core_bodypart_cpp_FUN_00417b60(float *param_1,float *param_2)

#include "nocturne.h"

void core_bodypart_cpp_FUN_00417b60(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *unaff_ESI;
  
  fVar1 = param_1[1];
  fVar2 = param_1[2];
  fVar3 = param_2[1];
  fVar4 = param_2[2];
  *unaff_ESI = *param_1 - *param_2;
  unaff_ESI[1] = fVar1 - fVar3;
  unaff_ESI[2] = fVar2 - fVar4;
  return;
}
