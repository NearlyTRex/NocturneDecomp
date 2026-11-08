// Name: FUN_0054eef0
// Address: 0054eef0
// Address Range: [[0054eef0, 0054f058]]
// Convention: unknown
// Signature: void FUN_0054eef0(int param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_0054eef0(int param_1,uint param_2)

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
  if (*(int *)(0x01D2C900 + 0x1008) != 0) {
    param_2 = 0;
  }
  local_14 = 0;
  if (0 < *(int *)(param_1 + 0x15f6fc)) {
    local_18 = param_1;
    do {
      iVar1 = *(int *)(local_18 + 0x15f700);
      (**(code **)(*(int *)(iVar1 + 0x154) + 0x1c))(iVar1);
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
      FUN_00551c30(param_1,iVar1 + 0x20,iVar1 + 0x30,auStack_60,&uStack_54,iVar1 + 0x3c);
      FUN_00555770(param_1,*(uint *)(iVar1 + 0x108),*(uint *)(iVar1 + 0x10c),
                   *(uint *)(iVar1 + 0x110));
      FUN_00483de0(DAT_00612560,0xffff);
      (**(code **)(*(int *)(iVar1 + 0x154) + 0x18))(iVar1,param_2);
      FUN_00555770(param_1,0x10000,0x10000,0x10000);
      FUN_00483e20(DAT_00612560,1);
      local_18 = local_18 + 4;
      local_14 = local_14 + 1;
    } while (local_14 < *(int *)(param_1 + 0x15f6fc));
  }
  return;
}
