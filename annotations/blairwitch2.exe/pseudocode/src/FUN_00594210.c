// Name: FUN_00594210
// Address: 00594210
// Address Range: [[00594210, 00594370]]
// Convention: unknown
// Signature: float * FUN_00594210(float *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_00594210(float *param_1)

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
  fVar1 = (-*param_1 * param_1[1] - param_1[2] * param_1[3]) * _DAT_005eedd2;
  if (fVar1 < _DAT_005eedd6) {
    fVar3 = -(float10)param_1[1] * (float10)param_1[3] - (float10)*param_1 * (float10)param_1[2];
    FUN_005b9989();
    afStack_1004[0x3fb] = (float)fVar3;
    afStack_1004[0x3fc] = 0.0;
    *extraout_ECX_00 = -1.5707964;
    extraout_ECX_00[(uint)bVar2 * -2 + 1] = afStack_1004[(uint)bVar2 * -2 + 0x3fb];
    (extraout_ECX_00 + (uint)bVar2 * -2 + 1)[(uint)bVar2 * -2 + 1] =
         afStack_1004[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 0x3fc];
    return extraout_ECX_00;
  }
  if (fVar1 <= _DAT_005eedda) {
    fVar3 = (float10)fVar1;
    FUN_005b98f6();
    afStack_1004[0x3fa] = (float)fVar3;
    if (fVar3 < (float10)_DAT_005eedde) {
      afStack_1004[0x3fa] = afStack_1004[0x3fa] + _DAT_005eede2;
    }
    fVar3 = ((float10)_DAT_005eede6 -
            (float10)*(float *)(extraout_EDX + 4) * (float10)*(float *)(extraout_EDX + 4)) -
            (float10)*(float *)(extraout_EDX + 8) * (float10)*(float *)(extraout_EDX + 8);
    FUN_005b9989();
    fVar3 = fVar3 - (float10)extraout_EDX_00[3] * (float10)extraout_EDX_00[3];
    fVar4 = (float10)extraout_EDX_00[1] * (float10)extraout_EDX_00[2] -
            (float10)*extraout_EDX_00 * (float10)extraout_EDX_00[3];
    FUN_005b9989();
    afStack_1004[0x3fb] = (float)fVar3;
    afStack_1004[0x3fc] = (float)fVar4;
    *extraout_ECX = afStack_1004[0x3fa];
    extraout_ECX[(uint)bVar2 * -2 + 1] = afStack_1004[(uint)bVar2 * -2 + 0x3fb];
    (extraout_ECX + (uint)bVar2 * -2 + 1)[(uint)bVar2 * -2 + 1] =
         afStack_1004[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 0x3fc];
    return extraout_ECX;
  }
  fVar3 = -(float10)param_1[1] * (float10)param_1[3] - (float10)*param_1 * (float10)param_1[2];
  FUN_005b9989();
  afStack_1004[0x3fc] = 0.0;
  afStack_1004[0x3fb] = (float)fVar3;
  *extraout_ECX_01 = 1.5707964;
  extraout_ECX_01[(uint)bVar2 * -2 + 1] = afStack_1004[(uint)bVar2 * -2 + 0x3fb];
  (extraout_ECX_01 + (uint)bVar2 * -2 + 1)[(uint)bVar2 * -2 + 1] =
       afStack_1004[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 0x3fc];
  return extraout_ECX_01;
}
