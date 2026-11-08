// Name: FUN_0045fd10
// Address: 0045fd10
// Address Range: [[0045fd10, 0045fdeb]]
// Convention: unknown
// Signature: int FUN_0045fd10(int param_1)

#include "nocturne.h"

int FUN_0045fd10(int param_1)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  uint auStack_68 [6];
  uint auStack_50 [6];
  uint auStack_38 [6];
  uint auStack_20 [6];
  
  bVar5 = 0;
  if (2 < *(int *)(param_1 + 0xb24)) {
    return 0;
  }
  FUN_004089d0(param_1);
  (**(code **)(*(int *)(param_1 + 0x2b0) + 0x24))(param_1,0);
  puVar3 = auStack_20;
  puVar4 = auStack_50;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
    puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
  }
  iVar2 = FUN_0041a840(auStack_50);
  if (iVar2 != 0) {
    if (*(int *)(param_1 + 0xb30) != 0) {
      iVar1 = FUN_0046b960(DAT_0060b280);
      if (iVar1 != 0) {
        (**(code **)(*(int *)(param_1 + 0x2b0) + 0x24))(param_1);
        puVar3 = auStack_68;
        puVar4 = auStack_38;
        for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
          *puVar4 = *puVar3;
          puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
          puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
        }
        FUN_0041b700(auStack_38);
        goto LAB_0045fdb3;
      }
    }
    FUN_0044fcc0(param_1 + 0x2b4,0,0xffffffff);
    FUN_00408a10(param_1);
    return iVar2;
  }
LAB_0045fdb3:
  FUN_00408a10(param_1);
  return iVar2;
}
