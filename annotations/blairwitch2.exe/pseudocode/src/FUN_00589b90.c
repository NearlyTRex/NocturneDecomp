// Name: FUN_00589b90
// Address: 00589b90
// Address Range: [[00589b90, 00589c30]]
// Convention: unknown
// Signature: int FUN_00589b90(int param_1)

#include "nocturne.h"

int FUN_00589b90(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  byte bVar6;
  uint auStack_3c [6];
  uint auStack_24 [6];
  
  bVar6 = 0;
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
    FUN_0044fcc0(param_1 + 0x2b4,0,0xffffffff);
  }
  FUN_00408a10(param_1);
  uVar1 = DAT_0060b280;
  *(uint *)(param_1 + 0x6d0) = 0;
  iVar2 = FUN_0046b960(uVar1);
  if ((iVar2 == 0) && (iVar3 != 0)) {
    *(uint *)(param_1 + 0x6d0) = 1;
    return iVar3;
  }
  return iVar3;
}
