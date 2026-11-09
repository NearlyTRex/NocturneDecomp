// Name: core_xform.cpp_quaternionFromAngleY_FUN_00593fe0
// Address: 00593fe0
// Address Range: [[00593fe0, 00594019]]
// Convention: unknown
// Signature: void core_xform_cpp_quaternionFromAngleY_FUN_00593fe0(float param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_xform_cpp_quaternionFromAngleY_FUN_00593fe0(float param_1)

{
  float *unaff_ESI;
  float10 fVar1;
  float10 fVar2;
  
  fVar1 = (float10)fcos((float10)param_1 * (float10)_DAT_005eedae);
  fVar2 = (float10)fsin((float10)param_1 * (float10)_DAT_005eedae);
  *unaff_ESI = (float)fVar1;
  unaff_ESI[1] = 0.0;
  unaff_ESI[2] = (float)fVar2;
  unaff_ESI[3] = 0.0;
  return;
}
