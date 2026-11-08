// Name: FUN_0054d880
// Address: 0054d880
// Address Range: [[0054d880, 0054d8e0]]
// Convention: unknown
// Signature: void FUN_0054d880(int param_1,undefined4 *param_2,undefined4 param_3)

#include "nocturne.h"

void FUN_0054d880(int param_1,uint *param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  byte bVar7;
  
  bVar7 = 0;
  iVar1 = FUN_0054eac0(param_1);
  iVar3 = 0;
  if (0 < *(int *)(iVar1 + 0x1de78)) {
    do {
      iVar2 = FUN_005481d0(iVar1,iVar3,param_3);
      if (-1 < iVar2) {
        puVar5 = (uint *)(param_1 + 0x6b4 + (uint)bVar7 * -8);
        puVar4 = param_2 + (uint)bVar7 * -2 + 1;
        *(uint *)(param_1 + 0x6b0) = *param_2;
        puVar6 = puVar5 + (uint)bVar7 * -2 + 1;
        *puVar5 = *puVar4;
        *puVar6 = puVar4[(uint)bVar7 * -2 + 1];
        puVar6[(uint)bVar7 * -2 + 1] = (puVar4 + (uint)bVar7 * -2 + 1)[(uint)bVar7 * -2 + 1];
      }
      iVar3 = iVar3 + 1;
      param_1 = param_1 + 0x10;
    } while (iVar3 < *(int *)(iVar1 + 0x1de78));
  }
  return;
}
