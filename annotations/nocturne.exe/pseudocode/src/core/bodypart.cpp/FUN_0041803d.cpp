// Name: core_bodypart.cpp_FUN_0041803d
// Address: 0041803d
// Address Range: [[0041803d, 00418095]]
// Convention: unknown
// Signature: float * core_bodypart_cpp_FUN_0041803d(float *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * core_bodypart_cpp_FUN_0041803d(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float *unaff_retaddr;
  
  fVar5 = _DAT_00578e76;
  fVar1 = unaff_retaddr[1];
  fVar2 = unaff_retaddr[4];
  fVar3 = unaff_retaddr[2];
  fVar4 = unaff_retaddr[5];
  *param_1 = (*unaff_retaddr + unaff_retaddr[3]) * _DAT_00578e76;
  param_1[1] = (fVar1 + fVar2) * fVar5;
  param_1[2] = fVar5 * (fVar3 + fVar4);
  return param_1;
}
