// Name: FUN_005121a0
// Address: 005121a0
// Address Range: [[005121a0, 005122e8]]
// Convention: unknown
// Signature: void FUN_005121a0(float *param_1,float *param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005121a0(float *param_1,float *param_2,int param_3)

{
  uint uVar1;
  float fVar2;
  byte bVar3;
  float afStackY_1008 [1010];
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  
  bVar3 = 0;
  if (param_3 == 0) {
    fVar2 = (float)((int)param_1[0x4e36] - _DAT_01c2a370);
    param_1[0x4e36] = fVar2;
    if ((int)fVar2 < 0) {
      param_1[0x4e36] = (float)((int)fVar2 + 0x4000);
    }
    else {
      local_38 = *param_2 - param_1[0x4e30];
      local_34 = param_2[1] - param_1[0x4e31];
      local_30 = param_2[2] - param_1[0x4e32];
      local_2c = local_38;
      local_28 = local_34;
      local_24 = local_30;
      if (((ABS(local_38) < (float)_DAT_005e1799) && (ABS(local_34) < (float)_DAT_005e1799)) &&
         (ABS(local_30) < (float)_DAT_005e1799)) {
        return;
      }
    }
  }
  else {
    uVar1 = FUN_005b849c();
    param_1[0x4e36] = (float)(uVar1 & 0x3fff);
  }
  if (param_1 != param_2) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
  }
  FUN_00476a50(&DAT_01fc9c68,param_1);
  param_1[3] = local_20;
  param_1[(uint)bVar3 * -2 + 4] = *(float *)(&stack0xffffffe4 + (uint)bVar3 * -8);
  (param_1 + (uint)bVar3 * -2 + 4)[(uint)bVar3 * -2 + 1] =
       *(float *)(&stack0xffffffe8 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
  if (((param_1[3] == param_1[0x4e2c]) && (param_1[0x4e2d] == param_1[4])) &&
     (param_1[0x4e2e] == param_1[5])) {
    return;
  }
  param_1[0x4e2c] = param_1[3];
  param_1[(uint)bVar3 * -2 + 0x4e2d] = param_1[(uint)bVar3 * -2 + 4];
  (param_1 + (uint)bVar3 * -2 + 0x4e2d)[(uint)bVar3 * -2 + 1] =
       (param_1 + (uint)bVar3 * -2 + 4)[(uint)bVar3 * -2 + 1];
  param_1[9] = (float)((int)param_1[3] + -0x32);
  param_1[10] = param_1[4];
  param_1[0xb] = (float)((int)param_1[5] + -0x32);
  FUN_00513eb0(param_1);
  return;
}
