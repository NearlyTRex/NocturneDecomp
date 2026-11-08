// Name: FUN_0056fe50
// Address: 0056fe50
// Address Range: [[0056fe50, 0056ffe6]]
// Convention: unknown
// Signature: int FUN_0056fe50(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0056fe50(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  byte bVar6;
  uint auStack_3c [6];
  uint auStack_24 [6];
  int iStack_c;
  
  bVar6 = 0;
  iStack_c = FUN_0046bc80(DAT_0060b280);
  if (iStack_c == 0) {
    *(uint *)(param_1 + 0x2828) = 0;
  }
  if (*(int *)(param_1 + 0x2568) == 0) {
    FUN_004089d0(param_1);
    (**(code **)(*(int *)(param_1 + 0x2b0) + 0x24))(param_1,0);
    puVar4 = auStack_3c;
    puVar5 = auStack_24;
    for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
      puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
    }
    iVar3 = FUN_0041a840(auStack_24);
    if (iVar3 != 0) {
      iVar2 = param_1 + 0x10af8;
      *(uint *)(param_1 + 0x2828) = 1;
      if (iStack_c == 0) {
        if (*(int *)(param_1 + 0x12f70) == 0) {
          FUN_00424bd0(param_1);
        }
        else {
          iVar1 = param_1 + 0x12f78;
          FUN_005b7150(iVar1,0,param_1 + 0x2b4,0);
          FUN_005b7150(iVar1,1,iVar2,0);
          FUN_005b7190(iVar1,1,*(uint *)(param_1 + 0x12f40),0,1);
          FUN_005b7190(iVar1,1,*(uint *)(param_1 + 0x12f40),0,2);
          FUN_005b76a0(iVar1,*(float *)(param_1 + 0x12f74) / _DAT_005fc3d8);
        }
      }
      else {
        FUN_00547170(iVar2,0xffffffff,0xffffffff,1,0);
        FUN_005b17d0(param_1 + 0x12dac,iVar2);
      }
      if ((_DAT_01d1cdc8 != 0) && (iVar2 = FUN_0046b960(DAT_0060b280), iVar2 == 0)) {
        FUN_005042e0(param_1 + 0x2b4,param_1);
        (**(code **)(*(int *)(param_1 + 0x2b0) + 0x60))(param_1);
      }
    }
    FUN_00408a10(param_1);
    return iVar3;
  }
  return 0;
}
