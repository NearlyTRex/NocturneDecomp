// Name: FUN_0050bcf0
// Address: 0050bcf0
// Address Range: [[0050bcf0, 0050be1e]]
// Convention: unknown
// Signature: void FUN_0050bcf0(int param_1,ushort *param_2,float *param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0050bcf0(int param_1,ushort *param_2,float *param_3)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int *piVar6;
  int *piVar7;
  
  piVar6 = (int *)((uint)param_2[1] * 0xc + param_1);
  piVar1 = (int *)((uint)*param_2 * 0xc + param_1);
  piVar7 = (int *)(param_1 + (uint)param_2[2] * 0xc);
  fVar2 = (float)(piVar6[1] - piVar1[1]) * (float)(piVar7[2] - piVar6[2]) -
          (float)(piVar7[1] - piVar6[1]) * (float)(piVar6[2] - piVar1[2]);
  fVar5 = (float)(*piVar7 - *piVar6) * (float)(piVar6[2] - piVar1[2]) -
          (float)(*piVar6 - *piVar1) * (float)(piVar7[2] - piVar6[2]);
  fVar4 = (float)(*piVar6 - *piVar1) * (float)(piVar7[1] - piVar6[1]) -
          (float)(*piVar7 - *piVar6) * (float)(piVar6[1] - piVar1[1]);
  fVar3 = (float)(_DAT_01c70710 - ((int)(fVar4 * fVar4 + fVar5 * fVar5 + fVar2 * fVar2) >> 1)) *
          (float)_DAT_00590642;
  *param_3 = fVar2 * fVar3;
  param_3[1] = fVar5 * fVar3;
  param_3[2] = fVar4 * fVar3;
  return;
}
