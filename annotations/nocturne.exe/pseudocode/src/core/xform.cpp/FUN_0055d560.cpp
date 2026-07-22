// Name: core_xform.cpp_FUN_0055d560
// Address: 0055d560
// Address Range: [[0055d560, 0055d5a9]]
// Convention: unknown
// Signature: void core_xform_cpp_FUN_0055d560(float param_1,float *param_2)

#include "nocturne.h"

void core_xform_cpp_FUN_0055d560(float param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *unaff_ESI;
  float10 fVar4;
  float10 fVar5;
  
  fVar4 = (float10)fsin((float10)param_1 * (float10)0.5);
  fVar5 = (float10)fcos((float10)param_1 * (float10)0.5);
  fVar1 = *param_2;
  fVar2 = param_2[1];
  fVar3 = param_2[2];
  *unaff_ESI = (float)fVar5;
  unaff_ESI[1] = (float)((float10)fVar1 * fVar4);
  unaff_ESI[2] = (float)((float10)fVar2 * fVar4);
  unaff_ESI[3] = (float)((float10)fVar3 * fVar4);
  return;
}
