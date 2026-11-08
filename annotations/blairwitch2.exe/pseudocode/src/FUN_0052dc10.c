// Name: FUN_0052dc10
// Address: 0052dc10
// Address Range: [[0052dc10, 0052dd78]]
// Convention: unknown
// Signature: void FUN_0052dc10(int param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_0052dc10(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  byte auStack_60 [12];
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  uint local_48 [6];
  uint local_30 [3];
  uint uStack_24;
  uint uStack_20;
  uint uStack_1c;
  int local_18;
  int local_14;
  
  bVar5 = 0;
  if (*(int *)(0x01D182F0 + 0x1008) != 0) {
    param_2 = 0;
  }
  local_14 = 0;
  if (0 < *(int *)(param_1 + 0x15f6f8)) {
    local_18 = param_1;
    do {
      iVar1 = *(int *)(local_18 + 0x15f6fc);
      (**(code **)(*(int *)(iVar1 + 0x2b0) + 0x24))(iVar1);
      puVar3 = local_48;
      puVar4 = local_30;
      for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
        puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
      }
      if (&uStack_54 != &uStack_24) {
        uStack_54 = uStack_24;
        uStack_50 = uStack_20;
        uStack_4c = uStack_1c;
      }
      FUN_00530980(param_1,iVar1 + 0x20,iVar1 + 0x30,auStack_60,&uStack_54,iVar1 + 0x3c);
      FUN_005344c0(param_1,*(uint *)(iVar1 + 0x108),*(uint *)(iVar1 + 0x10c),
                   *(uint *)(iVar1 + 0x110));
      FUN_0046b8e0(DAT_0060b280,0xffff);
      (**(code **)(*(int *)(iVar1 + 0x2b0) + 0x20))(iVar1,param_2);
      FUN_005344c0(param_1,0x10000,0x10000,0x10000);
      FUN_0046b920(DAT_0060b280,1);
      local_18 = local_18 + 4;
      local_14 = local_14 + 1;
    } while (local_14 < *(int *)(param_1 + 0x15f6f8));
  }
  return;
}
