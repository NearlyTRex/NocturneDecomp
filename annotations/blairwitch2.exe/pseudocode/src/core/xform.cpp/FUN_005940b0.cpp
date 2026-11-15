// Name: core_xform.cpp_FUN_005940b0
// Address: 005940b0
// Address Range: [[005940b0, 0059420e]]
// Convention: unknown
// Signature: undefined4 * core_xform_cpp_FUN_005940b0(float *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * core_xform_cpp_FUN_005940b0(float *param_1)

{
  uint *extraout_ECX;
  uint *extraout_ECX_00;
  uint *extraout_ECX_01;
  float *extraout_EDX;
  byte bVar1;
  float10 fVar2;
  float10 fVar3;
  float afStack_1010 [1025];
  
  bVar1 = 0;
  afStack_1010[0x3fc] = (*param_1 * param_1[1] - param_1[2] * param_1[3]) * _DAT_005eedba;
  if (afStack_1010[0x3fc] < _DAT_005eedbe) {
    afStack_1010[0x3fb] = 8.196904e-39;
    fVar2 = atan2
                      ((float10)*param_1 * (float10)param_1[2] +
                       -(float10)param_1[1] * (float10)param_1[3],
                       ((float10)_DAT_005eedce - (float10)param_1[2] * (float10)param_1[2]) -
                       (float10)param_1[3] * (float10)param_1[3]);
    afStack_1010[0x3fc] = -1.5707964;
    afStack_1010[0x3fd] = (float)fVar2;
    afStack_1010[0x3fe] = 0.0;
    *extraout_ECX_00 = 0xbfc90fdb;
    extraout_ECX_00[(uint)bVar1 * -2 + 1] = afStack_1010[(uint)bVar1 * -2 + 0x3fd];
    (extraout_ECX_00 + (uint)bVar1 * -2 + 1)[(uint)bVar1 * -2 + 1] =
         afStack_1010[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 0x3fe];
    return extraout_ECX_00;
  }
  if (afStack_1010[0x3fc] <= _DAT_005eedc2) {
    afStack_1010[0x3fb] = 8.196675e-39;
    fVar2 = asin((float10)afStack_1010[0x3fc]);
    afStack_1010[0x3fc] = (float)fVar2;
    if (fVar2 < (float10)_DAT_005eedc6) {
      afStack_1010[0x3fc] = afStack_1010[0x3fc] + _DAT_005eedca;
    }
    fVar2 = ((float10)_DAT_005eedce - (float10)param_1[1] * (float10)param_1[1]) -
            (float10)param_1[2] * (float10)param_1[2];
    atan2
              ((float10)*param_1 * (float10)param_1[2] + (float10)param_1[1] * (float10)param_1[3],
               fVar2);
    fVar2 = fVar2 - (float10)extraout_EDX[3] * (float10)extraout_EDX[3];
    fVar3 = atan2
                      ((float10)*extraout_EDX * (float10)extraout_EDX[3] +
                       (float10)extraout_EDX[1] * (float10)extraout_EDX[2],fVar2);
    afStack_1010[0x3fb] = (float)fVar2;
    afStack_1010[0x3fc] = (float)fVar3;
    *extraout_ECX = 0x594144;
    extraout_ECX[(uint)bVar1 * -2 + 1] = afStack_1010[(uint)bVar1 * -2 + 0x3fb];
    (extraout_ECX + (uint)bVar1 * -2 + 1)[(uint)bVar1 * -2 + 1] =
         afStack_1010[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 0x3fc];
    return extraout_ECX;
  }
  afStack_1010[0x3fb] = 8.197006e-39;
  fVar2 = atan2
                    ((float10)*param_1 * (float10)param_1[2] +
                     -(float10)param_1[1] * (float10)param_1[3],
                     ((float10)_DAT_005eedce - (float10)param_1[2] * (float10)param_1[2]) -
                     (float10)param_1[3] * (float10)param_1[3]);
  afStack_1010[0x3fc] = 1.5707964;
  afStack_1010[0x3fe] = 0.0;
  afStack_1010[0x3fd] = (float)fVar2;
  *extraout_ECX_01 = 0x3fc90fdb;
  extraout_ECX_01[(uint)bVar1 * -2 + 1] = afStack_1010[(uint)bVar1 * -2 + 0x3fd];
  (extraout_ECX_01 + (uint)bVar1 * -2 + 1)[(uint)bVar1 * -2 + 1] =
       afStack_1010[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 0x3fe];
  return extraout_ECX_01;
}
