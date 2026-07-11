// Name: FUN_0051ed90
// Address: 0051ed90
// Address Range: [[0051ed90, 0051ee58]]
// Convention: unknown
// Signature: void FUN_0051ed90(int param_1,undefined4 *param_2)

#include "nocturne.h"

void FUN_0051ed90(int param_1,uint *param_2)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  byte bVar8;
  int local_14;
  int local_10;
  uint *local_c;
  
  bVar8 = 0;
  if (param_2 != (uint *)(param_1 + 0x6a4)) {
    *param_2 = *(uint *)(param_1 + 0x6a4);
    param_2[1] = *(uint *)(param_1 + 0x6a8);
    param_2[2] = *(uint *)(param_1 + 0x6ac);
  }
  iVar1 = FUN_0051e0a0(param_1);
  iVar1 = *(int *)(iVar1 + 0x28558);
  iVar4 = 0;
  if (0 < iVar1) {
    local_10 = param_1;
    local_c = param_2;
    local_14 = param_1;
    puVar2 = param_2;
    do {
      puVar6 = param_2 + (uint)bVar8 * -2 + 4;
      puVar5 = (uint *)(local_14 + 0x6b4 + (uint)bVar8 * -8);
      param_2[3] = *(uint *)(local_14 + 0x6b0);
      puVar7 = puVar5 + (uint)bVar8 * -2 + 1;
      *puVar6 = *puVar5;
      puVar6[(uint)bVar8 * -2 + 1] = *puVar7;
      (puVar6 + (uint)bVar8 * -2 + 1)[(uint)bVar8 * -2 + 1] = puVar7[(uint)bVar8 * -2 + 1];
      local_c[0x193] = *(uint *)(param_1 + 0xcf0);
      param_1 = param_1 + 4;
      param_2 = param_2 + 4;
      puVar5 = (uint *)(local_10 + 0xe80);
      puVar7 = puVar2 + 0x1f7;
      for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar7 = *puVar5;
        puVar5 = puVar5 + (uint)bVar8 * -2 + 1;
        puVar7 = puVar7 + (uint)bVar8 * -2 + 1;
      }
      iVar4 = iVar4 + 1;
      local_10 = local_10 + 0x30;
      local_c = local_c + 1;
      local_14 = local_14 + 0x10;
      puVar2 = puVar2 + 0xc;
    } while (iVar4 < iVar1);
  }
  return;
}
