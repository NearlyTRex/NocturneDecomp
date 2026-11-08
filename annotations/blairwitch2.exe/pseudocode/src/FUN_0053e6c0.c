// Name: FUN_0053e6c0
// Address: 0053e6c0
// Address Range: [[0053e6c0, 0053e85e]]
// Convention: unknown
// Signature: undefined4 FUN_0053e6c0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0053e6c0(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  byte bVar6;
  uint auStack_3c [6];
  uint auStack_24 [6];
  
  bVar6 = 0;
  iVar1 = FUN_005035c0(param_1 + 0x2b4);
  uVar3 = 0x01C38BC0;
  iVar1 = *(int *)(iVar1 + 0x24);
  *(uint *)(param_1 + 0x2828) = 0;
  iVar2 = FUN_0048e340(uVar3,"heroCanSee");
  uVar3 = 0;
  if (iVar2 != 0) {
    if (*(int *)(param_1 + 0x10a64) != 0) {
      return 0;
    }
    if ((((iVar1 != 0x14) && (iVar1 != 0xd)) && (iVar1 != 0xe)) &&
       ((iVar1 != 0xf && (iVar1 != 0x10)))) {
      FUN_004268b0(param_1);
      return *(uint *)(param_1 + 0x2828);
    }
    FUN_004089d0(param_1);
    (**(code **)(*(int *)(param_1 + 0x2b0) + 0x24))(param_1,0);
    puVar4 = auStack_24;
    puVar5 = auStack_3c;
    for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
      puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
    }
    iVar1 = FUN_0041a840(auStack_3c);
    uVar3 = DAT_0060b280;
    if (iVar1 != 0) {
      *(uint *)(param_1 + 0x2828) = 1;
      FUN_0046b8e0(uVar3,*(uint *)(param_1 + 0x10b78));
      FUN_0046b8d0(DAT_0060b280,0);
      FUN_0046c540(DAT_0060b280,1);
      FUN_00547170(param_1 + 0x2b4,0xffffffff,0x2e7,1,0);
      FUN_0046c900(DAT_0060b280);
      if (_DAT_01d1cdc8 != 0) {
        FUN_005042e0(param_1 + 0x2b4,param_1);
      }
    }
    FUN_00408a10(param_1);
    if (*(int *)(param_1 + 0x10b7c) != 0) {
      FUN_005306e0(0x01E661B8,0x20b1924);
    }
    FUN_0046b8e0(DAT_0060b280,65000);
    uVar3 = *(uint *)(param_1 + 0x2828);
  }
  return uVar3;
}
