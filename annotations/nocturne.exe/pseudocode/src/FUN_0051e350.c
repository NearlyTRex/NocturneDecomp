// Name: FUN_0051e350
// Address: 0051e350
// Address Range: [[0051e350, 0051e50f]]
// Convention: unknown
// Signature: void FUN_0051e350(int param_1,undefined4 param_2,undefined4 param_3,float *param_4)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void FUN_0051e350(int param_1,uint param_2,uint param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  float *pfVar8;
  byte bVar9;
  float afStackY_1838 [1520];
  float local_60;
  float local_5c;
  float local_40 [6];
  int local_28;
  int local_24 [2];
  int local_1c;
  float *local_18;
  float *local_14;
  
  bVar9 = 0;
  iVar6 = FUN_0051e0a0(param_1);
  local_1c = iVar6;
  FUN_004e2070(param_1,param_2,param_3,&local_28,local_24,&stack0xffffffa0);
  iVar7 = 0;
  if (0 < *(int *)(iVar6 + 0x28558)) {
    local_14 = param_4;
    local_18 = param_4;
    do {
      FUN_00517a80(local_1c,iVar7,local_28,local_24[0],local_60);
      iVar7 = iVar7 + 1;
      pfVar8 = local_18 + (uint)bVar9 * -2 + 4;
      local_18[3] = local_5c;
      *pfVar8 = *(float *)((int)&stack0xffffffa8 + (uint)bVar9 * 0xfffffffe * 4);
      pfVar8[(uint)bVar9 * -2 + 1] = local_40[(uint)bVar9 * -2 + (uint)bVar9 * -2 + -5];
      (pfVar8 + (uint)bVar9 * -2 + 1)[(uint)bVar9 * -2 + 1] =
           (local_40 + (uint)bVar9 * -2 + (uint)bVar9 * -2 + -5)[(uint)bVar9 * -2 + 1];
      local_14[0x193] = 1.0;
      local_18 = local_18 + 4;
      local_14 = local_14 + 1;
    } while (iVar7 < *(int *)(local_1c + 0x28558));
  }
  iVar6 = *(int *)(local_1c + 0x29374);
  fVar1 = *(float *)(iVar6 + 4 + local_24[0] * 0xc);
  fVar2 = *(float *)(iVar6 + 8 + local_24[0] * 0xc);
  fVar5 = 1.0 - local_60;
  iVar7 = *(int *)(local_1c + 0x29374);
  fVar3 = *(float *)(iVar7 + 4 + local_28 * 0xc);
  fVar4 = *(float *)(iVar7 + 8 + local_28 * 0xc);
  if (local_40 != param_4) {
    *param_4 = *(float *)(iVar7 + local_28 * 0xc) * fVar5 +
               *(float *)(iVar6 + local_24[0] * 0xc) * local_60;
    param_4[1] = fVar3 * fVar5 + fVar1 * local_60;
    param_4[2] = fVar4 * fVar5 + fVar2 * local_60;
  }
  *param_4 = *(float *)(param_1 + 0x508) * *param_4;
  param_4[1] = *(float *)(param_1 + 0x50c) * param_4[1];
  param_4[2] = *(float *)(param_1 + 0x510) * param_4[2];
  return;
}
