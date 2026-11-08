// Name: FUN_005b7c00
// Address: 005b7c00
// Address Range: [[005b7c00, 005b7d5e]]
// Convention: unknown
// Signature: float * FUN_005b7c00(float *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_005b7c00(float *param_1)

{
  float fVar1;
  float *extraout_ECX;
  float *extraout_ECX_00;
  float *extraout_ECX_01;
  int extraout_EDX;
  float *extraout_EDX_00;
  byte bVar2;
  float10 fVar3;
  float10 fVar4;
  float afStack_1004 [1022];
  
  bVar2 = 0;
  fVar1 = (*param_1 * param_1[1] - param_1[2] * param_1[3]) * _DAT_005fa18c;
  if (fVar1 < _DAT_005fa190) {
    fVar3 = (float10)*param_1 * (float10)param_1[2] + -(float10)param_1[1] * (float10)param_1[3];
    FUN_005c1d69();
    afStack_1004[0x3fb] = (float)fVar3;
    afStack_1004[0x3fc] = 0.0;
    *extraout_ECX_00 = -1.5707964;
    extraout_ECX_00[(uint)bVar2 * -2 + 1] = afStack_1004[(uint)bVar2 * -2 + 0x3fb];
    (extraout_ECX_00 + (uint)bVar2 * -2 + 1)[(uint)bVar2 * -2 + 1] =
         afStack_1004[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 0x3fc];
    return extraout_ECX_00;
  }
  if (fVar1 <= _DAT_005fa194) {
    fVar3 = (float10)fVar1;
    FUN_005c1cd6();
    afStack_1004[0x3fa] = (float)fVar3;
    if (fVar3 < (float10)_DAT_005fa198) {
      afStack_1004[0x3fa] = afStack_1004[0x3fa] + _DAT_005fa19c;
    }
    fVar3 = ((float10)_DAT_005fa1a0 -
            (float10)*(float *)(extraout_EDX + 4) * (float10)*(float *)(extraout_EDX + 4)) -
            (float10)*(float *)(extraout_EDX + 8) * (float10)*(float *)(extraout_EDX + 8);
    FUN_005c1d69();
    fVar3 = fVar3 - (float10)extraout_EDX_00[3] * (float10)extraout_EDX_00[3];
    fVar4 = (float10)*extraout_EDX_00 * (float10)extraout_EDX_00[3] +
            (float10)extraout_EDX_00[1] * (float10)extraout_EDX_00[2];
    FUN_005c1d69();
    afStack_1004[0x3fb] = (float)fVar3;
    afStack_1004[0x3fc] = (float)fVar4;
    *extraout_ECX = afStack_1004[0x3fa];
    extraout_ECX[(uint)bVar2 * -2 + 1] = afStack_1004[(uint)bVar2 * -2 + 0x3fb];
    (extraout_ECX + (uint)bVar2 * -2 + 1)[(uint)bVar2 * -2 + 1] =
         afStack_1004[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 0x3fc];
    return extraout_ECX;
  }
  fVar3 = (float10)*param_1 * (float10)param_1[2] + -(float10)param_1[1] * (float10)param_1[3];
  FUN_005c1d69();
  afStack_1004[0x3fc] = 0.0;
  afStack_1004[0x3fb] = (float)fVar3;
  *extraout_ECX_01 = 1.5707964;
  extraout_ECX_01[(uint)bVar2 * -2 + 1] = afStack_1004[(uint)bVar2 * -2 + 0x3fb];
  (extraout_ECX_01 + (uint)bVar2 * -2 + 1)[(uint)bVar2 * -2 + 1] =
       afStack_1004[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 0x3fc];
  return extraout_ECX_01;
}
