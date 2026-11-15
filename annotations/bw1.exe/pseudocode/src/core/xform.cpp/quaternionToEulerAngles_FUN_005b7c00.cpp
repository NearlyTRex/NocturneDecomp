// Name: core_xform.cpp_quaternionToEulerAngles_FUN_005b7c00
// Address: 005b7c00
// Address Range: [[005b7c00, 005b7d5e]]
// Convention: unknown
// Signature: undefined4 * core_xform_cpp_quaternionToEulerAngles_FUN_005b7c00(float *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * core_xform_cpp_quaternionToEulerAngles_FUN_005b7c00(float *param_1)

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
  afStack_1010[0x3fc] = (*param_1 * param_1[1] - param_1[2] * param_1[3]) * _DAT_005fa18c;
  if (afStack_1010[0x3fc] < _DAT_005fa190) {
    afStack_1010[0x3fb] = 8.401852e-39;
    fVar2 = atan2
                      ((float10)*param_1 * (float10)param_1[2] +
                       -(float10)param_1[1] * (float10)param_1[3],
                       ((float10)_DAT_005fa1a0 - (float10)param_1[2] * (float10)param_1[2]) -
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
  if (afStack_1010[0x3fc] <= _DAT_005fa194) {
    afStack_1010[0x3fb] = 8.401624e-39;
    fVar2 = asin((float10)afStack_1010[0x3fc]);
    afStack_1010[0x3fc] = (float)fVar2;
    if (fVar2 < (float10)_DAT_005fa198) {
      afStack_1010[0x3fc] = afStack_1010[0x3fc] + _DAT_005fa19c;
    }
    fVar2 = ((float10)_DAT_005fa1a0 - (float10)param_1[1] * (float10)param_1[1]) -
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
    *extraout_ECX = 0x5b7c94;
    extraout_ECX[(uint)bVar1 * -2 + 1] = afStack_1010[(uint)bVar1 * -2 + 0x3fb];
    (extraout_ECX + (uint)bVar1 * -2 + 1)[(uint)bVar1 * -2 + 1] =
         afStack_1010[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 0x3fc];
    return extraout_ECX;
  }
  afStack_1010[0x3fb] = 8.401954e-39;
  fVar2 = atan2
                    ((float10)*param_1 * (float10)param_1[2] +
                     -(float10)param_1[1] * (float10)param_1[3],
                     ((float10)_DAT_005fa1a0 - (float10)param_1[2] * (float10)param_1[2]) -
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
