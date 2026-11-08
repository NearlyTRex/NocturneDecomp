// Name: FUN_005838f0
// Address: 005838f0
// Address Range: [[005838f0, 00583982]]
// Convention: unknown
// Signature: float * FUN_005838f0(uint *param_1)

#include "nocturne.h"

float * FUN_005838f0(uint *param_1)

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
  FUN_005b9989();
  fVar2 = SQRT((float10)*extraout_EDX * (float10)*extraout_EDX +
               (float10)extraout_EDX[2] * (float10)extraout_EDX[2]);
  fVar3 = (float10)extraout_EDX[1];
  FUN_005b9989();
  afStack_1000[0x3fb] = (float)fVar2;
  *extraout_ECX = (float)-fVar3;
  extraout_ECX[(uint)bVar1 * -2 + 1] = afStack_1000[(uint)bVar1 * -2 + 0x3fb];
  (extraout_ECX + (uint)bVar1 * -2 + 1)[(uint)bVar1 * -2 + 1] =
       afStack_1000[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 0x3fc];
  return extraout_ECX;
}
