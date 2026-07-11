// Name: FUN_0051ee60
// Address: 0051ee60
// Address Range: [[0051ee60, 0051ef3c]]
// Convention: unknown
// Signature: void FUN_0051ee60(int param_1,undefined4 *param_2)

#include "nocturne.h"

void FUN_0051ee60(int param_1,uint *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  byte bVar9;
  uint *local_14;
  uint *local_10;
  int local_c;
  
  bVar9 = 0;
  if ((uint *)(param_1 + 0x6a4) != param_2) {
    *(uint *)(param_1 + 0x6a4) = *param_2;
    *(uint *)(param_1 + 0x6a8) = param_2[1];
    *(uint *)(param_1 + 0x6ac) = param_2[2];
  }
  iVar1 = FUN_0051e0a0(param_1);
  iVar1 = *(int *)(iVar1 + 0x28558);
  iVar4 = 0;
  if (0 < iVar1) {
    local_10 = param_2;
    local_14 = param_2;
    local_c = param_1;
    iVar2 = param_1;
    iVar5 = param_1;
    do {
      puVar7 = (uint *)(iVar5 + 0x6b4 + (uint)bVar9 * -8);
      puVar6 = local_14 + (uint)bVar9 * -2 + 4;
      *(uint *)(iVar5 + 0x6b0) = local_14[3];
      puVar8 = puVar7 + (uint)bVar9 * -2 + 1;
      *puVar7 = *puVar6;
      *puVar8 = puVar6[(uint)bVar9 * -2 + 1];
      puVar8[(uint)bVar9 * -2 + 1] = (puVar6 + (uint)bVar9 * -2 + 1)[(uint)bVar9 * -2 + 1];
      *(uint *)(local_c + 0xcf0) = param_2[0x193];
      param_2 = param_2 + 1;
      iVar5 = iVar5 + 0x10;
      puVar6 = local_10 + 0x1f7;
      puVar7 = (uint *)(iVar2 + 0xe80);
      for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar7 = *puVar6;
        puVar6 = puVar6 + (uint)bVar9 * -2 + 1;
        puVar7 = puVar7 + (uint)bVar9 * -2 + 1;
      }
      iVar4 = iVar4 + 1;
      local_10 = local_10 + 0xc;
      local_c = local_c + 4;
      local_14 = local_14 + 4;
      iVar2 = iVar2 + 0x30;
    } while (iVar4 < iVar1);
  }
  *(uint *)(param_1 + 0x2230) = 0xffffffff;
  return;
}
