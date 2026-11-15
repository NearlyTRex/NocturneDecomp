// Name: core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_00576250
// Address: 00576250
// Address Range: [[00576250, 005762e2]]
// Convention: unknown
// Signature: float * core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_00576250(float *param_1)

#include "nocturne.h"

float * core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_00576250(float *param_1)

{
  float *extraout_ECX;
  float *extraout_EDX;
  float *unaff_ESI;
  byte bVar1;
  float10 x;
  float10 fVar2;
  float afStack_1008 [1022];
  uint local_10;
  float local_c;
  
  bVar1 = 0;
  local_10 = 0;
  if ((ABS(*param_1) == 0.0) && (ABS(param_1[2]) == 0.0)) {
    if (0.0 < param_1[1]) {
      local_c = -1.5707964;
    }
    else {
      local_c = 1.5707964;
    }
    *unaff_ESI = local_c;
    unaff_ESI[1] = 0.0;
    unaff_ESI[2] = 0.0;
    return unaff_ESI;
  }
  afStack_1008[0x3fb] = 8.025096e-39;
  atan2((float10)*param_1,(float10)param_1[2]);
  x = SQRT((float10)*extraout_EDX * (float10)*extraout_EDX +
           (float10)extraout_EDX[2] * (float10)extraout_EDX[2]);
  fVar2 = atan2((float10)extraout_EDX[1],x);
  afStack_1008[0x3fb] = (float)x;
  *extraout_ECX = (float)-fVar2;
  extraout_ECX[(uint)bVar1 * -2 + 1] = afStack_1008[(uint)bVar1 * -2 + 0x3fb];
  (extraout_ECX + (uint)bVar1 * -2 + 1)[(uint)bVar1 * -2 + 1] =
       afStack_1008[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 0x3fc];
  return extraout_ECX;
}
