// Name: core_xform.cpp_FUN_0055d0d0
// Address: 0055d0d0
// Address Range: [[0055d0d0, 0055d104]]
// Convention: unknown
// Signature: void core_xform_cpp_FUN_0055d0d0(float *param_1)

#include "nocturne.h"

void core_xform_cpp_FUN_0055d0d0(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *unaff_ESI;
  
  fVar1 = param_1[1];
  fVar2 = param_1[2];
  fVar3 = param_1[3];
  *unaff_ESI = -*param_1;
  unaff_ESI[1] = fVar1;
  unaff_ESI[2] = fVar2;
  unaff_ESI[3] = fVar3;
  return;
}
