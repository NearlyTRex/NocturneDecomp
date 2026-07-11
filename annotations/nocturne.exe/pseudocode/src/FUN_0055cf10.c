// Name: FUN_0055cf10
// Address: 0055cf10
// Address Range: [[0055cf10, 0055d0c5]]
// Convention: unknown
// Signature: void FUN_0055cf10(float *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0055cf10(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float *unaff_ESI;
  float local_48;
  float local_44;
  
  fVar1 = *param_1 + param_1[5] + param_1[10];
  if (0.0 < fVar1) {
    local_48 = SQRT(fVar1 + 1.0);
    fVar1 = (float)_DAT_00598356 / local_48;
    local_48 = local_48 * (float)_DAT_00598356;
    local_44 = (param_1[9] - param_1[6]) * fVar1;
    fVar2 = (param_1[2] - param_1[8]) * fVar1;
    fVar1 = (param_1[4] - param_1[1]) * fVar1;
LAB_0055cf9e:
    *unaff_ESI = local_48;
    unaff_ESI[1] = local_44;
    unaff_ESI[2] = fVar2;
    unaff_ESI[3] = fVar1;
    return;
  }
  if (*param_1 <= param_1[5]) {
    if (param_1[10] < param_1[5]) {
      fVar5 = SQRT((param_1[5] - (param_1[10] + *param_1)) + 1.0);
      fVar7 = (float)_DAT_00598356;
      fVar6 = fVar7 / fVar5;
      fVar1 = param_1[1];
      fVar2 = param_1[9];
      fVar3 = param_1[6];
      fVar4 = param_1[4];
      *unaff_ESI = (param_1[2] - param_1[8]) * fVar6;
      unaff_ESI[1] = (fVar1 + fVar4) * fVar6;
      unaff_ESI[2] = fVar5 * fVar7;
      unaff_ESI[3] = (fVar2 + fVar3) * fVar6;
      return;
    }
  }
  else if (param_1[10] < *param_1) {
    local_44 = SQRT((*param_1 - (param_1[5] + param_1[10])) + 1.0);
    fVar1 = (float)_DAT_00598356 / local_44;
    local_44 = local_44 * (float)_DAT_00598356;
    local_48 = (param_1[9] - param_1[6]) * fVar1;
    fVar2 = (param_1[4] + param_1[1]) * fVar1;
    fVar1 = (param_1[8] + param_1[2]) * fVar1;
    goto LAB_0055cf9e;
  }
  fVar5 = SQRT((param_1[10] - (*param_1 + param_1[5])) + 1.0);
  fVar7 = (float)_DAT_00598356;
  fVar6 = fVar7 / fVar5;
  fVar1 = param_1[6];
  fVar2 = param_1[2];
  fVar3 = param_1[8];
  fVar4 = param_1[9];
  *unaff_ESI = (param_1[4] - param_1[1]) * fVar6;
  unaff_ESI[1] = (fVar2 + fVar3) * fVar6;
  unaff_ESI[2] = (fVar1 + fVar4) * fVar6;
  unaff_ESI[3] = fVar5 * fVar7;
  return;
}
