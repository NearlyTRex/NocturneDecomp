// Name: FUN_0055d2d0
// Address: 0055d2d0
// Address Range: [[0055d2d0, 0055d492]]
// Convention: unknown
// Signature: float * FUN_0055d2d0(float *param_1,float *param_2,float param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_0055d2d0(float *param_1,float *param_2,float param_3)

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
  float afStack_182c [1515];
  double local_80;
  double local_78;
  double local_70;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float afStack_4c [4];
  float local_3c;
  float local_38;
  float local_34;
  double local_18;
  float *pfVar3;
  
  bVar4 = 0;
  pfVar2 = param_1;
  if ((0.0 < param_3) && (pfVar2 = param_2, param_3 < 1.0)) {
    local_5c = *param_2;
    local_58 = param_2[1];
    local_60 = param_2[2];
    local_54 = param_2[3];
    local_80 = (double)(*param_1 * *param_2 +
                       param_1[3] * param_2[3] + param_1[2] * param_2[2] + param_1[1] * param_2[1]);
    if (local_80 < 0.0) {
      local_5c = -local_5c;
      local_58 = -local_58;
      local_54 = -local_54;
      local_60 = -local_60;
      local_80 = -local_80;
    }
    if (local_80 <= _DAT_0059836e) {
      fVar5 = (float10)local_80;
      fVar6 = SQRT((float10)1 - fVar5 * fVar5);
      FUN_00566c81();
      fVar7 = (float10)fsin(((float10)1 - (float10)param_3) * fVar6);
      fVar6 = (float10)fsin((float10)param_3 * fVar6);
      local_70 = (double)(fVar7 * ((float10)1 / fVar5));
      local_78 = (double)(fVar6 * ((float10)1 / fVar5));
      unaff_ESI = extraout_ECX;
      param_1 = extraout_EDX;
    }
    else {
      local_78 = (double)param_3;
      local_18 = local_78;
      local_70 = 1.0 - local_78;
    }
    fVar1 = (float)local_70;
    local_38 = local_60 * (float)local_78 + param_1[2] * fVar1;
    local_34 = local_54 * (float)local_78 + param_1[3] * fVar1;
    afStack_4c[3] = local_5c * (float)local_78 + *param_1 * fVar1;
    local_3c = local_58 * (float)local_78 + param_1[1] * fVar1;
    pfVar2 = afStack_4c + 3;
  }
  pfVar3 = pfVar2 + (uint)bVar4 * -2 + 1;
  fVar1 = *pfVar2;
  afStack_4c[(uint)bVar4 * -2] = *pfVar3;
  afStack_4c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] = pfVar3[(uint)bVar4 * -2 + 1];
  (afStack_4c + (uint)bVar4 * -2 + (uint)bVar4 * -2 + 1)[(uint)bVar4 * -2 + 1] =
       (pfVar3 + (uint)bVar4 * -2 + 1)[(uint)bVar4 * -2 + 1];
  pfVar2 = unaff_ESI + (uint)bVar4 * -2 + 1;
  *unaff_ESI = fVar1;
  *pfVar2 = afStack_4c[(uint)bVar4 * -2];
  pfVar2[(uint)bVar4 * -2 + 1] = afStack_4c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
  (pfVar2 + (uint)bVar4 * -2 + 1)[(uint)bVar4 * -2 + 1] =
       (afStack_4c + (uint)bVar4 * -2 + (uint)bVar4 * -2 + 1)[(uint)bVar4 * -2 + 1];
  return unaff_ESI;
}
