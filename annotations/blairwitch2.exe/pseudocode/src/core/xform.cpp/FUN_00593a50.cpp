// Name: core_xform.cpp_FUN_00593a50
// Address: 00593a50
// Address Range: [[00593a50, 00593bf9]]
// Convention: unknown
// Signature: void core_xform_cpp_FUN_00593a50(float *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_xform_cpp_FUN_00593a50(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float *unaff_ESI;
  float local_30;
  float local_2c;
  
  fVar1 = *param_1 + param_1[5] + param_1[10];
  if (0.0 < fVar1) {
    local_30 = SQRT(fVar1 + 1.0);
    fVar1 = _DAT_005eed96 / local_30;
    local_30 = local_30 * _DAT_005eed96;
    local_2c = (param_1[9] - param_1[6]) * fVar1;
    fVar2 = (param_1[2] - param_1[8]) * fVar1;
    fVar1 = (param_1[4] - param_1[1]) * fVar1;
LAB_00593ada:
    *unaff_ESI = local_30;
    unaff_ESI[1] = local_2c;
    unaff_ESI[2] = fVar2;
    unaff_ESI[3] = fVar1;
    return;
  }
  if (*param_1 <= param_1[5]) {
    if (param_1[10] < param_1[5]) {
      fVar5 = SQRT((param_1[5] - (param_1[10] + *param_1)) + 1.0);
      fVar6 = _DAT_005eed96 / fVar5;
      fVar5 = fVar5 * _DAT_005eed96;
      fVar1 = param_1[1];
      fVar2 = param_1[9];
      fVar3 = param_1[6];
      fVar4 = param_1[4];
      *unaff_ESI = (param_1[2] - param_1[8]) * fVar6;
      unaff_ESI[1] = (fVar1 + fVar4) * fVar6;
      unaff_ESI[2] = fVar5;
      unaff_ESI[3] = (fVar2 + fVar3) * fVar6;
      return;
    }
  }
  else if (param_1[10] < *param_1) {
    local_2c = SQRT((*param_1 - (param_1[5] + param_1[10])) + 1.0);
    fVar1 = _DAT_005eed96 / local_2c;
    local_2c = local_2c * _DAT_005eed96;
    local_30 = (param_1[9] - param_1[6]) * fVar1;
    fVar2 = (param_1[4] + param_1[1]) * fVar1;
    fVar1 = (param_1[8] + param_1[2]) * fVar1;
    goto LAB_00593ada;
  }
  fVar5 = SQRT((param_1[10] - (*param_1 + param_1[5])) + 1.0);
  fVar6 = _DAT_005eed96 / fVar5;
  fVar5 = fVar5 * _DAT_005eed96;
  fVar1 = param_1[6];
  fVar2 = param_1[2];
  fVar3 = param_1[8];
  fVar4 = param_1[9];
  *unaff_ESI = (param_1[4] - param_1[1]) * fVar6;
  unaff_ESI[1] = (fVar2 + fVar3) * fVar6;
  unaff_ESI[2] = (fVar1 + fVar4) * fVar6;
  unaff_ESI[3] = fVar5;
  return;
}
