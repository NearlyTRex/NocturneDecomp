// Name: FUN_004b7150
// Address: 004b7150
// Address Range: [[004b7150, 004b7266]]
// Convention: unknown
// Signature: int FUN_004b7150(undefined4 param_1,float *param_2,float *param_3,float param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_004b7150(uint param_1,float *param_2,float *param_3,float param_4,uint param_5,uint param_6,uint param_7)

{
  int iVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  float10 fVar6;
  float afStackY_1024 [1011];
  float local_3c;
  float local_38 [4];
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  int local_14;
  
  bVar5 = 0;
  local_38[2] = *param_3 - *param_2;
  local_38[3] = param_3[1] - param_2[1];
  local_28 = param_3[2] - param_2[2];
  fVar6 = (float10)1 +
          (SQRT((float10)local_28 * (float10)local_28 +
                (float10)local_38[2] * (float10)local_38[2] +
                (float10)local_38[3] * (float10)local_38[3]) * (float10)_DAT_005df66c) /
          (float10)param_4;
  local_24 = local_38[2];
  local_20 = local_38[3];
  local_1c = local_28;
  FUN_005c03a0();
  iVar1 = (int)ROUND(fVar6);
  fVar2 = 1.0 / (float)iVar1;
  iVar4 = 0;
  local_3c = *param_2;
  local_14 = iVar1;
  *(float *)((int)local_38 + (uint)bVar5 * 0xfffffff8) = param_2[(uint)bVar5 * -2 + 1];
  local_38[(uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 1] =
       (param_2 + (uint)bVar5 * -2 + 1)[(uint)bVar5 * -2 + 1];
  iVar3 = iVar1;
  local_38[2] = local_38[2] * fVar2;
  local_38[3] = local_38[3] * fVar2;
  local_28 = local_28 * fVar2;
  if (0 < iVar1) {
    do {
      iVar3 = FUN_004b70f0(param_1,&local_3c,param_4,param_5,param_6,param_7);
      iVar4 = iVar4 + 1;
      local_3c = local_3c + local_38[2];
      local_38[0] = local_38[0] + local_38[3];
      local_38[1] = local_38[1] + local_28;
    } while (iVar4 < iVar1);
  }
  return iVar3;
}
