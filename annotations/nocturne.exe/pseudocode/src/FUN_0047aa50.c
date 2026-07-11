// Name: FUN_0047aa50
// Address: 0047aa50
// Address Range: [[0047aa50, 0047ab64]]
// Convention: unknown
// Signature: void FUN_0047aa50(undefined4 *param_1)

#include "nocturne.h"

void FUN_0047aa50(uint *param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  float fVar6;
  uint *puVar7;
  int iVar8;
  uint *local_14;
  
  param_1[0x321] = *param_1;
  puVar5 = param_1 + 0x322;
  puVar4 = param_1;
  for (iVar3 = 800; puVar4 = puVar4 + 1, iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar4;
    puVar5 = puVar5 + 1;
  }
  for (iVar3 = 0; iVar8 = 0x01C775EC, iVar3 != 0; iVar3 = iVar3 + -1) {
    *(byte *)puVar5 = *(byte *)puVar4;
    puVar4 = (uint *)((int)puVar4 + 1);
    puVar5 = (uint *)((int)puVar5 + 1);
  }
  *param_1 = 0;
  fVar6 = *(float *)(iVar8 + 0x264);
  iVar3 = 0;
  if (0 < (int)param_1[0xc84]) {
    puVar5 = param_1 + 0xc85;
    puVar7 = param_1 + 0xcd5;
    local_14 = param_1 + 0xc8d;
    puVar4 = param_1;
    do {
      fVar1 = (float)puVar4[0xcd5];
      iVar8 = iVar3 * 4;
      puVar4[0xcd5] = fVar1 - fVar6;
      if (fVar1 - fVar6 <= 0.0) {
        iVar2 = param_1[0xc84];
        param_1[0xc84] = iVar2 + -1;
        FUN_00566170(puVar5,local_14,((iVar2 + -1) - iVar3) * 0x20,fVar6,puVar7,iVar8);
        FUN_00566170((int)puVar7 + iVar8,iVar8 + 4 + (int)puVar7,(param_1[0xc84] - iVar3) * 4);
      }
      else {
        puVar5 = puVar5 + 8;
        iVar3 = iVar3 + 1;
        local_14 = local_14 + 8;
        puVar4 = puVar4 + 1;
      }
    } while (iVar3 < (int)param_1[0xc84]);
  }
  return;
}
