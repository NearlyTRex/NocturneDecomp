// Name: core_xform.cpp_FUN_0055d520
// Address: 0055d520
// Address Range: [[0055d520, 0055d559]]
// Convention: unknown
// Signature: void core_xform_cpp_FUN_0055d520(float param_1)

#include "nocturne.h"

void core_xform_cpp_FUN_0055d520(float param_1)

{
  float *unaff_ESI;
  float10 fVar1;
  float10 fVar2;
  
  fVar1 = (float10)fcos((float10)param_1 * (float10)0.5);
  fVar2 = (float10)fsin((float10)param_1 * (float10)0.5);
  *unaff_ESI = (float)fVar1;
  unaff_ESI[1] = 0.0;
  unaff_ESI[2] = 0.0;
  unaff_ESI[3] = (float)fVar2;
  return;
}
