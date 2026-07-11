// Name: FUN_004e1bd0
// Address: 004e1bd0
// Address Range: [[004e1bd0, 004e1d7c]]
// Convention: unknown
// Signature: undefined4 FUN_004e1bd0(int *param_1,int param_2,float param_3,float *param_4,undefined4 *param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_004e1bd0(int *param_1,int param_2,float param_3,float *param_4,uint *param_5)

{
  int iVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  uint *puVar7;
  byte bVar8;
  float local_24;
  uint local_20;
  
  bVar8 = 0;
  iVar4 = param_2 * 0x54c + *param_1 + 0x968;
  iVar5 = 0;
  fVar2 = *param_4 * *(float *)(iVar4 + 0x20) + param_3;
  local_20 = 0;
  iVar3 = iVar4;
  local_24 = fVar2;
  if (0 < *(int *)(iVar4 + 0x4a4)) {
    do {
      iVar1 = *(int *)(iVar3 + 0x4a8);
      if ((param_3 <= (float)iVar1) && ((float)iVar1 <= local_24 + (float)_DAT_0058b3a5)) {
        local_20 = *(uint *)(iVar3 + 0x4ac);
        local_24 = (float)iVar1 + (float)_DAT_0058b3a5;
      }
      iVar5 = iVar5 + 1;
      iVar3 = iVar3 + 8;
    } while (iVar5 < *(int *)(iVar4 + 0x4a4));
  }
  if ((double)local_24 < (double)*(int *)(iVar4 + 0x28) + _DAT_0058b39d) {
    (**(code **)(param_1[0x14] + 8))
              (param_1,(float)*(int *)(iVar4 + 0x60) + param_3,
               (float)*(int *)(iVar4 + 0x60) + local_24,0x3f800000);
    param_5[1] = 1;
    param_5[5] = 0;
    param_5[2] = param_2;
    param_5[3] = local_24;
    if (fVar2 <= (float)param_5[3]) {
      return local_20;
    }
    fVar2 = (float)param_5[3];
  }
  else {
    (**(code **)(param_1[0x14] + 8))
              (param_1,(float)*(int *)(iVar4 + 0x60) + param_3,
               (float)(*(int *)(iVar4 + 0x60) + *(int *)(iVar4 + 0x28)),0x3f800000);
    puVar6 = (uint *)(iVar4 + 0x2c);
    puVar7 = param_5;
    for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + (uint)bVar8 * -2 + 1;
      puVar7 = puVar7 + (uint)bVar8 * -2 + 1;
    }
    iVar3 = param_1[0xb];
    if ((iVar3 != 0) && (*(int *)(iVar3 + 4) == 2)) {
      param_5[2] = *(uint *)(iVar3 + 8);
      param_5[3] = *(uint *)(param_1[0xb] + 0xc);
    }
    fVar2 = (float)*(int *)(iVar4 + 0x28);
  }
  *param_4 = (fVar2 - param_3) / *(float *)(iVar4 + 0x20);
  return local_20;
}
