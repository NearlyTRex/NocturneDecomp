// Name: FUN_00449150
// Address: 00449150
// Address Range: [[00449150, 00449395]]
// Convention: unknown
// Signature: float FUN_00449150(undefined4 *param_1,float *param_2,float *param_3)

#include "nocturne.h"

float FUN_00449150(uint *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  float *pfVar6;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  fVar2 = (float)param_1[5] * param_3[2] +
          (float)param_1[3] * *param_3 + (float)param_1[4] * param_3[1];
  if (fVar2 <= 0.0) {
    return -1.0;
  }
  fVar4 = -((float)param_1[5] * param_2[2] +
           (float)param_1[4] * param_2[1] + (float)param_1[3] * *param_2 + (float)param_1[6]);
  if (fVar4 < 0.0) {
    return -1.0;
  }
  if (fVar2 < fVar4) {
    return -1.0;
  }
  fVar4 = fVar4 / fVar2;
  fVar2 = fVar4 * *param_3 + *param_2;
  fVar5 = fVar4 * param_3[1] + param_2[1];
  uVar3 = param_1[7];
  if (uVar3 == 0) {
    pfVar6 = (float *)*param_1;
    fVar1 = *(float *)(param_1[2] + 8);
    local_14 = fVar5 - pfVar6[1];
    fVar2 = pfVar6[2];
    local_1c = *(float *)(param_1[1] + 4) - pfVar6[1];
    local_28 = *(float *)(param_1[1] + 8) - pfVar6[2];
    local_18 = *(float *)(param_1[2] + 4) - pfVar6[1];
  }
  else {
    if (1 < uVar3) {
      if (uVar3 == 2) {
        pfVar6 = (float *)*param_1;
        local_14 = fVar2 - *pfVar6;
        local_20 = fVar5 - pfVar6[1];
        local_1c = *(float *)param_1[1] - *pfVar6;
        local_28 = ((float *)param_1[1])[1] - pfVar6[1];
        local_18 = *(float *)param_1[2] - *pfVar6;
        local_24 = ((float *)param_1[2])[1] - pfVar6[1];
      }
      goto LAB_0044925e;
    }
    pfVar6 = (float *)*param_1;
    fVar1 = ((float *)param_1[2])[2];
    local_14 = fVar2 - *pfVar6;
    fVar2 = pfVar6[2];
    local_1c = *(float *)param_1[1] - *pfVar6;
    local_28 = ((float *)param_1[1])[2] - pfVar6[2];
    local_18 = *(float *)param_1[2] - *pfVar6;
  }
  local_20 = (fVar4 * param_3[2] + param_2[2]) - fVar2;
  local_24 = fVar1 - pfVar6[2];
LAB_0044925e:
  fVar5 = 1.0 / (local_1c * local_24 - local_28 * local_18);
  fVar2 = (local_14 * local_24 - local_18 * local_20) * fVar5;
  if (((0.0 <= fVar2) && (fVar5 = (local_1c * local_20 - local_28 * local_14) * fVar5, 0.0 <= fVar5)
      ) && (fVar2 + fVar5 <= 1.0)) {
    return fVar4;
  }
  return -1.0;
}
