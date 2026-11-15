// Name: core_xform.cpp_slerpQuaternion_FUN_00585b20
// Address: 00585b20
// Address Range: [[00585b20, 00585ccd]]
// Convention: unknown
// Signature: float * core_xform_cpp_slerpQuaternion_FUN_00585b20(float *param_1,float *param_2,float param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * core_xform_cpp_slerpQuaternion_FUN_00585b20(float *param_1,float *param_2,float param_3)

{
  float *extraout_ECX;
  float *extraout_EDX;
  float *unaff_ESI;
  float *pfVar1;
  float *pfVar2;
  byte bVar4;
  float10 x;
  float10 fVar5;
  float10 fVar6;
  float afStack_183c [1532];
  float local_4c;
  float local_48;
  float local_44;
  float fStack_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float *pfVar3;
  
  bVar4 = 0;
  if (param_3 <= 0.0) {
    pfVar2 = afStack_183c + 0x5f8;
    param_2 = param_1;
  }
  else if ((int)param_3 < 0x3f800000) {
    local_28 = *param_2;
    local_10 = param_2[1];
    local_24 = param_2[2];
    afStack_183c[0x5f7] =
         *param_1 * *param_2 +
         param_1[3] * param_2[3] + param_1[2] * param_2[2] + param_1[1] * param_2[1];
    local_14 = param_2[3];
    if (afStack_183c[0x5f7] < 0.0) {
      local_28 = -*param_2;
      local_10 = -param_2[1];
      local_14 = -param_2[3];
      local_24 = -param_2[2];
      afStack_183c[0x5f7] = -afStack_183c[0x5f7];
    }
    local_18 = 1.0 - param_3;
    if (afStack_183c[0x5f7] <= _DAT_005d81a3) {
      x = (float10)afStack_183c[0x5f7];
      fVar5 = atan2(SQRT((float10)1 - x * x),x);
      fVar6 = (float10)fsin((float10)local_1c * fVar5);
      fVar5 = (float10)fsin((float10)param_3 * fVar5);
      local_24 = (float)(fVar6 * ((float10)1 / x));
      local_20 = (float)(fVar5 * ((float10)1 / x));
      unaff_ESI = extraout_ECX;
      param_1 = extraout_EDX;
    }
    else {
      local_20 = 1.0 - param_3;
      local_1c = param_3;
    }
    pfVar2 = afStack_183c + 0x5f7;
    param_2 = afStack_183c + 0x5fb;
    local_48 = local_20 * local_28 + local_24 * param_1[2];
    local_44 = local_20 * local_18 + local_24 * param_1[3];
    afStack_183c[0x5fb] = local_20 * fStack_2c + local_24 * *param_1;
    local_4c = local_20 * local_14 + local_24 * param_1[1];
  }
  else {
    pfVar2 = afStack_183c + 0x5f8;
  }
  pfVar3 = pfVar2 + (uint)bVar4 * -2 + 1;
  pfVar1 = param_2 + (uint)bVar4 * -2 + 1;
  *pfVar2 = *param_2;
  *pfVar3 = *pfVar1;
  pfVar3[(uint)bVar4 * -2 + 1] = pfVar1[(uint)bVar4 * -2 + 1];
  (pfVar3 + (uint)bVar4 * -2 + 1)[(uint)bVar4 * -2 + 1] =
       (pfVar1 + (uint)bVar4 * -2 + 1)[(uint)bVar4 * -2 + 1];
  pfVar2 = unaff_ESI + (uint)bVar4 * -2 + 1;
  *unaff_ESI = afStack_183c[0x5f7];
  *pfVar2 = afStack_183c[(uint)bVar4 * -2 + 0x5f8];
  pfVar2[(uint)bVar4 * -2 + 1] = afStack_183c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x5f9];
  (pfVar2 + (uint)bVar4 * -2 + 1)[(uint)bVar4 * -2 + 1] =
       (afStack_183c + (uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x5f9)[(uint)bVar4 * -2 + 1];
  return unaff_ESI;
}
