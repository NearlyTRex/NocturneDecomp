// Name: FUN_00524d70
// Address: 00524d70
// Address Range: [[00524d70, 00524f38]]
// Convention: unknown
// Signature: undefined4 FUN_00524d70(int *param_1,int param_2,float param_3,float *param_4,undefined4 *param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00524d70(int *param_1,int param_2,float param_3,float *param_4,uint *param_5)

{
  int iVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  uint *puVar8;
  byte bVar9;
  float local_24;
  uint local_1c;
  
  bVar9 = 0;
  iVar5 = *param_1 + 0x1c28 + param_2 * 0x120;
  local_1c = 0;
  fVar2 = *param_4 * *(float *)(iVar5 + 0x20) + param_3;
  iVar6 = 0;
  iVar4 = iVar5;
  local_24 = fVar2;
  if (0 < *(int *)(iVar5 + 0x78)) {
    do {
      iVar1 = *(int *)(iVar4 + 0x7c);
      if ((param_3 <= (float)iVar1) && ((float)iVar1 <= local_24 + (float)_DAT_005eaf7b)) {
        local_1c = *(uint *)(iVar4 + 0x80);
        local_24 = (float)iVar1 + (float)_DAT_005eaf7b;
      }
      iVar6 = iVar6 + 1;
      iVar4 = iVar4 + 8;
    } while (iVar6 < *(int *)(iVar5 + 0x78));
  }
  if ((double)local_24 < (double)*(int *)(iVar5 + 0x28) + _DAT_005eaf73) {
    fVar3 = 1.0 / (float)*(int *)(iVar5 + 0x68);
    (**(code **)(param_1[0x14] + 8))
              (param_1,(float)*(int *)(iVar5 + 0x60) + param_3 * fVar3,
               local_24 * fVar3 + (float)*(int *)(iVar5 + 0x60),0x3f800000);
    param_5[1] = 1;
    param_5[5] = 0;
    param_5[2] = param_2;
    param_5[3] = local_24;
    if (fVar2 <= (float)param_5[3]) {
      return local_1c;
    }
    fVar2 = (float)param_5[3];
  }
  else {
    fVar2 = 1.0 / (float)*(int *)(iVar5 + 0x68);
    (**(code **)(param_1[0x14] + 8))
              (param_1,(float)*(int *)(iVar5 + 0x60) + param_3 * fVar2,
               (float)*(int *)(iVar5 + 0x28) * fVar2 + (float)*(int *)(iVar5 + 0x60),0x3f800000);
    puVar7 = (uint *)(iVar5 + 0x2c);
    puVar8 = param_5;
    for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar8 = *puVar7;
      puVar7 = puVar7 + (uint)bVar9 * -2 + 1;
      puVar8 = puVar8 + (uint)bVar9 * -2 + 1;
    }
    iVar4 = param_1[0xb];
    if ((iVar4 != 0) && (*(int *)(iVar4 + 4) == 2)) {
      param_5[2] = *(uint *)(iVar4 + 8);
      param_5[3] = *(uint *)(param_1[0xb] + 0xc);
    }
    fVar2 = (float)*(int *)(iVar5 + 0x28);
  }
  *param_4 = (fVar2 - param_3) / *(float *)(iVar5 + 0x20);
  return local_1c;
}
