// Name: FUN_00448fa6
// Address: 00448fa6
// Address Range: [[00448fa6, 00448faf]]
// Convention: unknown
// Signature: void FUN_00448fa6(undefined4 *param_1)

#include "nocturne.h"

void FUN_00448fa6(uint *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  float fVar12;
  float fVar13;
  float local_10;
  
  pfVar9 = (float *)param_1[1];
  pfVar10 = (float *)*param_1;
  fVar1 = *pfVar9;
  fVar2 = pfVar9[1];
  fVar3 = *pfVar10;
  fVar4 = pfVar10[1];
  pfVar11 = (float *)param_1[2];
  fVar5 = pfVar11[1];
  fVar6 = pfVar9[1];
  fVar7 = *pfVar11;
  fVar8 = *pfVar9;
  fVar12 = (fVar2 - fVar4) * (pfVar11[2] - pfVar9[2]) - (fVar5 - fVar6) * (pfVar9[2] - pfVar10[2]);
  fVar13 = (fVar7 - fVar8) * (pfVar9[2] - pfVar10[2]) - (fVar1 - fVar3) * (pfVar11[2] - pfVar9[2]);
  param_1[3] = fVar12;
  param_1[4] = fVar13;
  fVar1 = (fVar1 - fVar3) * (fVar5 - fVar6) - (fVar7 - fVar8) * (fVar2 - fVar4);
  param_1[5] = fVar1;
  local_10 = SQRT(fVar1 * (float)param_1[5] +
                  fVar13 * (float)param_1[4] + fVar12 * (float)param_1[3]);
  if (ABS(local_10) == 0.0) {
    local_10 = 1.0;
  }
  local_10 = 1.0 / local_10;
  pfVar9 = (float *)*param_1;
  param_1[3] = -(float)param_1[3] * local_10;
  param_1[4] = -(float)param_1[4] * local_10;
  param_1[5] = -(float)param_1[5] * local_10;
  param_1[6] = (-(*pfVar9 * (float)param_1[3]) - pfVar9[1] * (float)param_1[4]) -
               pfVar9[2] * (float)param_1[5];
  if ((ABS((float)param_1[4]) < ABS((float)param_1[3])) &&
     (ABS((float)param_1[5]) < ABS((float)param_1[3]))) {
    param_1[7] = 0;
    return;
  }
  if ((ABS((float)param_1[3]) < ABS((float)param_1[4])) &&
     (ABS((float)param_1[5]) < ABS((float)param_1[4]))) {
    param_1[7] = 1;
    return;
  }
  param_1[7] = 2;
  return;
}
