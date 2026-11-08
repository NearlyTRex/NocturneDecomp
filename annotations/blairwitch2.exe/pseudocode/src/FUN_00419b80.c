// Name: FUN_00419b80
// Address: 00419b80
// Address Range: [[00419b80, 00419c47]]
// Convention: unknown
// Signature: int FUN_00419b80(int param_1)

#include "nocturne.h"

int FUN_00419b80(int param_1)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  uint auStack_38 [6];
  uint auStack_20 [6];
  
  bVar5 = 0;
  if (*(int *)(param_1 + 0x2568) != 0) {
    return 0;
  }
  FUN_004089d0(param_1);
  (**(code **)(*(int *)(param_1 + 0x2b0) + 0x24))(param_1,0);
  puVar3 = auStack_20;
  puVar4 = auStack_38;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
    puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
  }
  iVar2 = FUN_0041a840(auStack_38);
  if (iVar2 != 0) {
    FUN_0046c540(DAT_0060b280,0);
    uVar1 = DAT_0060b280;
    *(uint *)(0x01E661B8 + 0x15ac98) = 1;
    FUN_0046b8e0(uVar1,0xffff);
    FUN_00424bd0(param_1);
    uVar1 = DAT_0060b280;
    *(uint *)(0x01E661B8 + 0x15ac98) = 0;
    FUN_0046c900(uVar1);
  }
  FUN_00408a10(param_1);
  return iVar2;
}
