// Name: FUN_005b7940
// Address: 005b7940
// Address Range: [[005b7940, 005b7aed]]
// Convention: unknown
// Signature: float * FUN_005b7940(float *param_1,float *param_2,float param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_005b7940(float *param_1,float *param_2,float param_3)

{
  float fVar1;
  float *extraout_ECX;
  float *extraout_EDX;
  float *unaff_ESI;
  float *pfVar2;
  byte bVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float afStack_1838 [1532];
  float local_48;
  float local_44;
  float local_40;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float *pfVar3;
  
  bVar4 = 0;
  pfVar2 = param_1;
  if ((0.0 < param_3) && (pfVar2 = param_2, (int)param_3 < 0x3f800000)) {
    local_28 = *param_2;
    local_10 = param_2[1];
    local_24 = param_2[2];
    afStack_1838[0x5f6] =
         *param_1 * *param_2 +
         param_1[3] * param_2[3] + param_1[2] * param_2[2] + param_1[1] * param_2[1];
    local_14 = param_2[3];
    if (afStack_1838[0x5f6] < 0.0) {
      local_28 = -*param_2;
      local_10 = -param_2[1];
      local_14 = -param_2[3];
      local_24 = -param_2[2];
      afStack_1838[0x5f6] = -afStack_1838[0x5f6];
    }
    local_18 = 1.0 - param_3;
    if (afStack_1838[0x5f6] <= _DAT_005fa178) {
      fVar5 = (float10)afStack_1838[0x5f6];
      fVar6 = SQRT((float10)1 - fVar5 * fVar5);
      FUN_005c1d69();
      fVar7 = (float10)fsin((float10)local_18 * fVar6);
      fVar6 = (float10)fsin((float10)param_3 * fVar6);
      local_20 = (float)(fVar7 * ((float10)1 / fVar5));
      local_1c = (float)(fVar6 * ((float10)1 / fVar5));
      unaff_ESI = extraout_ECX;
      param_1 = extraout_EDX;
    }
    else {
      local_20 = 1.0 - param_3;
      local_1c = param_3;
    }
    local_44 = local_1c * local_24 + local_20 * param_1[2];
    local_40 = local_1c * local_14 + local_20 * param_1[3];
    afStack_1838[0x5fb] = local_1c * local_28 + local_20 * *param_1;
    local_48 = local_1c * local_10 + local_20 * param_1[1];
    pfVar2 = afStack_1838 + 0x5fb;
  }
  pfVar3 = pfVar2 + (uint)bVar4 * -2 + 1;
  fVar1 = *pfVar2;
  afStack_1838[(uint)bVar4 * -2 + 0x5f8] = *pfVar3;
  afStack_1838[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x5f9] = pfVar3[(uint)bVar4 * -2 + 1];
  (afStack_1838 + (uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x5f9)[(uint)bVar4 * -2 + 1] =
       (pfVar3 + (uint)bVar4 * -2 + 1)[(uint)bVar4 * -2 + 1];
  pfVar2 = unaff_ESI + (uint)bVar4 * -2 + 1;
  *unaff_ESI = fVar1;
  *pfVar2 = afStack_1838[(uint)bVar4 * -2 + 0x5f8];
  pfVar2[(uint)bVar4 * -2 + 1] = afStack_1838[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x5f9];
  (pfVar2 + (uint)bVar4 * -2 + 1)[(uint)bVar4 * -2 + 1] =
       (afStack_1838 + (uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x5f9)[(uint)bVar4 * -2 + 1];
  return unaff_ESI;
}
