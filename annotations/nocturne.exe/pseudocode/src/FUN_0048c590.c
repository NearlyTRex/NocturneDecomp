// Name: FUN_0048c590
// Address: 0048c590
// Address Range: [[0048c590, 0048c6a6]]
// Convention: unknown
// Signature: int FUN_0048c590(undefined4 param_1,float *param_2,float *param_3,float param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0048c590(uint param_1,float *param_2,float *param_3,float param_4,uint param_5,uint param_6,uint param_7)

{
  int iVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  float10 fVar5;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  int local_18;
  
  local_28 = *param_3 - *param_2;
  local_24 = (float)((float10)param_3[1] - (float10)param_2[1]);
  local_20 = param_3[2] - param_2[2];
  local_34 = *param_2;
  local_30 = param_2[1];
  local_2c = param_2[2];
  fVar5 = (float10)1 +
          (SQRT((float10)local_20 * (float10)local_20 +
                (float10)local_28 * (float10)local_28 +
                ((float10)param_3[1] - (float10)param_2[1]) * (float10)local_24) *
          (float10)_DAT_00581524) / (float10)param_4;
  FUN_00563a30();
  iVar1 = (int)ROUND(fVar5);
  fVar2 = 1.0 / (float)iVar1;
  local_28 = local_28 * fVar2;
  local_24 = local_24 * fVar2;
  local_20 = local_20 * fVar2;
  iVar4 = 0;
  iVar3 = iVar1;
  local_18 = iVar1;
  if (0 < iVar1) {
    do {
      iVar3 = FUN_0048c530(param_1,&local_34,param_4,param_5,param_6,param_7);
      iVar4 = iVar4 + 1;
      local_34 = local_34 + local_28;
      local_30 = local_30 + local_24;
      local_2c = local_2c + local_20;
    } while (iVar4 < iVar1);
  }
  return iVar3;
}
