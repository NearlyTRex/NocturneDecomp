// Name: FUN_005020c0
// Address: 005020c0
// Address Range: [[005020c0, 005021f7]]
// Convention: unknown
// Signature: int FUN_005020c0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_005020c0(int param_1)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  uint auStack_34 [6];
  uint auStack_1c [6];
  
  bVar5 = 0;
  iVar1 = FUN_0046bc80(DAT_0060b280);
  if (iVar1 == 0) {
    *(uint *)(param_1 + 0x2828) = 0;
  }
  if (*(int *)(param_1 + 0x2568) == 0) {
    FUN_004089d0(param_1);
    (**(code **)(*(int *)(param_1 + 0x2b0) + 0x24))(param_1,0);
    puVar3 = auStack_34;
    puVar4 = auStack_1c;
    for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
      puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
    }
    iVar1 = FUN_0041a840(auStack_1c);
    if (iVar1 != 0) {
      *(uint *)(param_1 + 0x2828) = 1;
      if (*(int *)(param_1 + 0x278f8) == 0) {
        FUN_00424bd0(param_1);
      }
      else {
        iVar2 = param_1 + 0x279c8;
        FUN_005b7150(iVar2,0,param_1 + 0x2b4,0);
        FUN_005b7150(iVar2,1,param_1 + 0x25640,0);
        FUN_005b76a0(iVar2,*(float *)(param_1 + 0x278fc) / _DAT_005fa3d8);
      }
      if (_DAT_01d1cdc8 != 0) {
        iVar2 = FUN_0046b960(DAT_0060b280);
        if (iVar2 == 0) {
          FUN_005042e0(param_1 + 0x2b4,param_1);
          (**(code **)(*(int *)(param_1 + 0x2b0) + 0x60))(param_1);
        }
      }
    }
    FUN_00408a10(param_1);
    return iVar1;
  }
  return 0;
}
