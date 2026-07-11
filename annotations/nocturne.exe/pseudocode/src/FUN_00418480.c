// Name: FUN_00418480
// Address: 00418480
// Address Range: [[00418480, 00418627]]
// Convention: unknown
// Signature: float * FUN_00418480(float *param_1,float *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_00418480(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  double dVar6;
  float fVar7;
  float fVar8;
  float10 fVar9;
  float local_1c;
  float local_18;
  float local_10;
  
  fVar1 = *param_2;
  fVar2 = param_2[2];
  fVar5 = fVar2;
  fVar7 = fVar2;
  fVar8 = fVar2;
  if (0.0 < param_2[1]) {
    fVar7 = param_2[1] * (float)_DAT_00579176;
    fVar5 = (float)_DAT_0057917e;
    dVar6 = (double)FUN_005648c0((double)(fVar1 * fVar5));
    fVar9 = (float10)dVar6;
    FUN_00563a30();
    fVar3 = (1.0 - fVar7) * fVar2;
    fVar5 = fVar1 * fVar5 - (float)(int)ROUND(fVar9);
    fVar1 = (1.0 - fVar7 * fVar5) * fVar2;
    fVar4 = (1.0 - (1.0 - fVar5) * fVar7) * fVar2;
    fVar5 = local_1c;
    fVar7 = local_18;
    fVar8 = local_10;
    switch(((int)ROUND(fVar9) + 600) % 6) {
    case 0:
      fVar5 = fVar3;
      fVar7 = fVar2;
      fVar8 = fVar4;
      break;
    case 1:
      fVar5 = fVar3;
      fVar7 = fVar1;
      fVar8 = fVar2;
      break;
    case 2:
      fVar5 = fVar4;
      fVar7 = fVar3;
      fVar8 = fVar2;
      break;
    case 3:
      fVar5 = fVar2;
      fVar7 = fVar3;
      fVar8 = fVar1;
      break;
    case 4:
      fVar5 = fVar2;
      fVar7 = fVar4;
      fVar8 = fVar3;
      break;
    case 5:
      fVar5 = fVar1;
      fVar7 = fVar2;
      fVar8 = fVar3;
    }
  }
  local_10 = fVar8;
  local_18 = fVar7;
  local_1c = fVar5;
  *param_1 = local_18;
  param_1[1] = local_10;
  param_1[2] = local_1c;
  return param_1;
}
