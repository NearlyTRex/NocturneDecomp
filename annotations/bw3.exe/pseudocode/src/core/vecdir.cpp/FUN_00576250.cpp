// Name: core_vecdir.cpp_FUN_00576250
// Address: 00576250
// Address Range: [[00576250, 005762e2]]
// Convention: unknown
// Signature: float * core_vecdir_cpp_FUN_00576250(uint *param_1)

#include "nocturne.h"

float * core_vecdir_cpp_FUN_00576250(uint *param_1)

{
  float *extraout_ECX;
  float *extraout_EDX;
  float *unaff_ESI;
  byte bVar1;
  float10 fVar2;
  float10 fVar3;
  float afStack_1000 [1022];
  
  bVar1 = 0;
  afStack_1000[0x3fc] = 0.0;
  if (((*param_1 & 0x7fffffff) == 0) && ((param_1[2] & 0x7fffffff) == 0)) {
    if (0.0 < (float)param_1[1]) {
      afStack_1000[0x3fd] = -1.5707964;
    }
    else {
      afStack_1000[0x3fd] = 1.5707964;
    }
    *unaff_ESI = afStack_1000[0x3fd];
    unaff_ESI[1] = 0.0;
    unaff_ESI[2] = 0.0;
    return unaff_ESI;
  }
  atan2();
  fVar2 = SQRT((float10)*extraout_EDX * (float10)*extraout_EDX +
               (float10)extraout_EDX[2] * (float10)extraout_EDX[2]);
  fVar3 = (float10)extraout_EDX[1];
  atan2();
  afStack_1000[0x3fb] = (float)fVar2;
  *extraout_ECX = (float)-fVar3;
  extraout_ECX[(uint)bVar1 * -2 + 1] = afStack_1000[(uint)bVar1 * -2 + 0x3fb];
  (extraout_ECX + (uint)bVar1 * -2 + 1)[(uint)bVar1 * -2 + 1] =
       afStack_1000[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 0x3fc];
  return extraout_ECX;
}
